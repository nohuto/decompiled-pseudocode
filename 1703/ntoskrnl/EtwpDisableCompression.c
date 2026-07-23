/*
 * XREFs of EtwpDisableCompression @ 0x140257B90
 * Callers:
 *     EtwpDequeueFreeBuffer @ 0x140087AC0 (EtwpDequeueFreeBuffer.c)
 *     EtwpDequeueBufferPendingCompression @ 0x140257A30 (EtwpDequeueBufferPendingCompression.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     KeGetEffectiveIrql @ 0x1400E2B60 (KeGetEffectiveIrql.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     EtwpRelinquishCompressionTarget @ 0x1402581A4 (EtwpRelinquishCompressionTarget.c)
 */

void __fastcall EtwpDisableCompression(__int64 a1)
{
  ULONG_PTR v2; // rbp
  unsigned __int64 v3; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v6; // r14
  unsigned int v7; // r8d
  int v8; // eax
  __int64 v9; // rcx
  _KLOCK_ENTRY *v10; // rdi
  bool v11; // zf
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int16 v15; // ax
  int v16; // [rsp+60h] [rbp+8h] BYREF
  int v17; // [rsp+68h] [rbp+10h]

  if ( *(_DWORD *)(a1 + 1028) != 1
    && _InterlockedExchange((volatile __int32 *)(a1 + 1016), 0)
    && !*(_DWORD *)(a1 + 984)
    && KeGetEffectiveIrql() < 2u )
  {
    v2 = a1 + 992;
    ExAcquirePushLockExclusiveEx(a1 + 992, 0LL);
    EtwpRelinquishCompressionTarget(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 992), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 992));
    v16 = 0;
    v3 = a1 + 992;
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v3) == 1 )
      SessionId = (unsigned int)MmGetSessionIdEx(CurrentThread->ApcState.Process);
    else
      SessionId = 0xFFFFFFFFLL;
    --CurrentThread->SpecialApcDisable;
    v6 = ++CurrentThread->AbAllocationRegionCount;
    v7 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v11 = !_BitScanReverse((unsigned int *)&v12, v7);
      v17 = v12;
      if ( v11 )
        goto LABEL_17;
      v8 = 1 << v12;
      v9 = v12;
      v10 = &CurrentThread->LockEntries[v9];
      v7 &= ~v8;
      if ( (v10->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v10->LockState.0 & 1) == 0
        && (*(_QWORD *)&v10->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v2 & 0x7FFFFFFFFFFFFFFCLL)
        && v10->LockState.SessionId == (_DWORD)SessionId )
      {
        v10->AcquiredByte &= ~1u;
        if ( v10->LockState.0 )
          break;
      }
    }
    if ( !v10 )
    {
LABEL_17:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x8000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v2, (unsigned int)SessionId, 0LL);
      goto LABEL_24;
    }
    v10->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v10->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v9].TreeNode, SessionId);
    v16 = 0;
    v16 = v10->BoostBitmap.AllFields & 0x1FFFF;
    v10->BoostBitmap.AllFields &= 0xFFFE0000;
    v10->ThreadLocalFlags &= ~1u;
    v10->LockState.0 = 0LL;
    v13 = ((char *)v10 - (char *)CurrentThread - 800) / 96;
    if ( v6 == 1 )
      CurrentThread->AbEntrySummary |= 1 << v13;
    else
      _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v13);
LABEL_24:
    --CurrentThread->AbAllocationRegionCount;
    KiAbThreadRemoveBoosts(&CurrentThread->Header.Lock, v2, (unsigned int *)&v16);
    v15 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v15;
    if ( !v15
      && ($69CD3F157F9F39B6F7113F2231989901 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery(v14);
    }
  }
}
