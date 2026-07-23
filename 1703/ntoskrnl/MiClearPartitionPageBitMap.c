/*
 * XREFs of MiClearPartitionPageBitMap @ 0x14021D530
 * Callers:
 *     MiInsertPartitionPages @ 0x14021E090 (MiInsertPartitionPages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 *     memset @ 0x140192D80 (memset.c)
 *     MiActOnPartitionNodePages @ 0x14021CCD8 (MiActOnPartitionNodePages.c)
 *     MiFreePartitionTree @ 0x14021DF3C (MiFreePartitionTree.c)
 */

__int64 __fastcall MiClearPartitionPageBitMap(__int64 a1, _QWORD **a2)
{
  struct _KTHREAD *CurrentThread; // r12
  ULONG_PTR v5; // rbp
  KIRQL v6; // al
  _QWORD *v7; // rcx
  KIRQL v8; // r15
  _QWORD *v9; // rdi
  _QWORD *v10; // rax
  __int64 v11; // r9
  _QWORD *v12; // rcx
  struct _KTHREAD *v13; // rbx
  __int64 SessionId; // rdx
  unsigned __int8 v15; // r14
  unsigned int v16; // r8d
  int v17; // eax
  __int64 v18; // rcx
  _KLOCK_ENTRY *v19; // rdi
  bool v20; // zf
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int16 v24; // ax
  __int16 *v26[15]; // [rsp+30h] [rbp-78h] BYREF
  int v27; // [rsp+B0h] [rbp+8h] BYREF
  int v28; // [rsp+B8h] [rbp+10h]

  memset(&v26[1], 0, 0x30uLL);
  CurrentThread = KeGetCurrentThread();
  v26[0] = (__int16 *)a1;
  v26[3] = 0LL;
  --CurrentThread->SpecialApcDisable;
  v5 = a1 + 224;
  ExAcquirePushLockExclusiveEx(a1 + 224, 0LL);
  v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 232));
  v7 = *a2;
  v8 = v6;
  v9 = 0LL;
  while ( v7 )
  {
    v9 = v7;
    v7 = (_QWORD *)*v7;
  }
  while ( v9 )
  {
    v10 = (_QWORD *)v9[1];
    v11 = (__int64)v9;
    v12 = v9;
    if ( v10 )
    {
      do
      {
        v9 = v10;
        v10 = (_QWORD *)*v10;
      }
      while ( v10 );
    }
    else
    {
      while ( 1 )
      {
        v9 = (_QWORD *)(v9[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v9 || (_QWORD *)*v9 == v12 )
          break;
        v12 = v9;
      }
    }
    MiActOnPartitionNodePages(v11, 6, v26);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 232));
  __writecr8(v8);
  MiFreePartitionTree(a1, &v26[3], 0LL);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 224));
  v27 = 0;
  v13 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(a1 + 224) == 1 )
    SessionId = (unsigned int)MmGetSessionIdEx(v13->ApcState.Process);
  else
    SessionId = 0xFFFFFFFFLL;
  --v13->SpecialApcDisable;
  v15 = ++v13->AbAllocationRegionCount;
  v16 = ((char)v13->AbEntrySummary | (char)v13->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v20 = !_BitScanReverse((unsigned int *)&v21, v16);
    v28 = v21;
    if ( v20 )
      goto LABEL_25;
    v17 = 1 << v21;
    v18 = v21;
    v19 = &v13->LockEntries[v18];
    v16 &= ~v17;
    if ( (v19->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v19->LockState.0 & 1) == 0
      && (*(_QWORD *)&v19->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v5 & 0x7FFFFFFFFFFFFFFCLL)
      && v19->LockState.SessionId == (_DWORD)SessionId )
    {
      v19->AcquiredByte &= ~1u;
      if ( v19->LockState.0 )
        break;
    }
  }
  if ( !v19 )
  {
LABEL_25:
    if ( (*((_DWORD *)&v13->0 + 1) & 0x8000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v13, v5, (unsigned int)SessionId, 0LL);
    goto LABEL_32;
  }
  v19->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v19->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v13->LockEntries[v18].TreeNode, SessionId);
  v27 = 0;
  v27 = v19->BoostBitmap.AllFields & 0x1FFFF;
  v19->BoostBitmap.AllFields &= 0xFFFE0000;
  v19->ThreadLocalFlags &= ~1u;
  v19->LockState.0 = 0LL;
  v22 = ((char *)v19 - (char *)v13 - 800) / 96;
  if ( v15 == 1 )
    v13->AbEntrySummary |= 1 << v22;
  else
    _InterlockedOr8((volatile signed __int8 *)&v13->AbOrphanedEntrySummary, 1 << v22);
LABEL_32:
  --v13->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(&v13->Header.Lock, v5, (unsigned int *)&v27);
  v24 = v13->SpecialApcDisable + 1;
  v13->SpecialApcDisable = v24;
  if ( !v24 && ($69CD3F157F9F39B6F7113F2231989901 *)v13->ApcState.ApcListHead[0].Flink != &v13->152 )
    KiCheckForKernelApcDelivery(v23);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
