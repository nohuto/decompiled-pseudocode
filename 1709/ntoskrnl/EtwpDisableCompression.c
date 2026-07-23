/*
 * XREFs of EtwpDisableCompression @ 0x1402815F4
 * Callers:
 *     EtwpDequeueFreeBuffer @ 0x1400E0608 (EtwpDequeueFreeBuffer.c)
 *     EtwpDequeueBufferPendingCompression @ 0x140281494 (EtwpDequeueBufferPendingCompression.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     KeGetEffectiveIrql @ 0x140088FA0 (KeGetEffectiveIrql.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     EtwpRelinquishCompressionTarget @ 0x140281C04 (EtwpRelinquishCompressionTarget.c)
 */

void __fastcall EtwpDisableCompression(__int64 a1)
{
  ULONG_PTR v2; // rsi
  unsigned __int64 v3; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int SessionId; // edx
  unsigned __int8 v6; // bp
  unsigned int v7; // r8d
  int v8; // eax
  __int64 v9; // rcx
  _KLOCK_ENTRY *v10; // rdi
  bool v11; // zf
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // [rsp+50h] [rbp+8h] BYREF
  int v16; // [rsp+58h] [rbp+10h]

  if ( *(_DWORD *)(a1 + 2340) != 1
    && _InterlockedExchange((volatile __int32 *)(a1 + 2328), 0)
    && !*(_DWORD *)(a1 + 2296)
    && KeGetEffectiveIrql() < 2u )
  {
    v2 = a1 + 2304;
    ExAcquirePushLockExclusiveEx(a1 + 2304, 0LL);
    EtwpRelinquishCompressionTarget(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 2304), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 2304));
    v15 = 0;
    v3 = a1 + 2304;
    CurrentThread = KeGetCurrentThread();
    if ( (unsigned int)MiGetSystemRegionType(v3) == 1 )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    --CurrentThread->SpecialApcDisable;
    v6 = ++CurrentThread->AbAllocationRegionCount;
    v7 = ((char)CurrentThread->AbEntrySummary | (char)CurrentThread->AbOrphanedEntrySummary) ^ 0x3F;
    while ( 1 )
    {
      v11 = !_BitScanReverse((unsigned int *)&v12, v7);
      v16 = v12;
      if ( v11 )
        goto LABEL_17;
      v8 = 1 << v12;
      v9 = v12;
      v10 = &CurrentThread->LockEntries[v9];
      v7 &= ~v8;
      if ( (v10->AcquiredByte & 1) != 0
        && (*(_DWORD *)&v10->LockState.0 & 1) == 0
        && (*(_QWORD *)&v10->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v2 & 0x7FFFFFFFFFFFFFFCLL)
        && v10->LockState.SessionId == SessionId )
      {
        v10->AcquiredByte &= ~1u;
        if ( v10->LockState.0 )
          break;
      }
    }
    if ( !v10 )
    {
LABEL_17:
      if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x10000) == 0 )
        KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, v2, SessionId, 0LL);
      goto LABEL_24;
    }
    v10->CrossThreadReleasableAndBusyByte |= 2u;
    if ( (__int64)v10->LockState.LockState < 0 )
      KiAbEntryRemoveFromTree(&CurrentThread->LockEntries[v9].TreeNode);
    v15 = 0;
    v15 = v10->BoostBitmap.AllFields & 0x1FFFF;
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
    KiAbThreadRemoveBoosts((ULONG_PTR)CurrentThread, v2, (unsigned int *)&v15);
    v11 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v11 && ($B476B70DB57F76B110DA5B9238C3E934 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery(v14);
  }
}
