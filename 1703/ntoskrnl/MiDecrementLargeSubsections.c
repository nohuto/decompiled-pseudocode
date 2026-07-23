/*
 * XREFs of MiDecrementLargeSubsections @ 0x1402184D4
 * Callers:
 *     MiDeleteVad @ 0x1400D94D0 (MiDeleteVad.c)
 *     MiIncrementLargeSubsections @ 0x140218D2C (MiIncrementLargeSubsections.c)
 *     MiAllocateChildVads @ 0x14041E31C (MiAllocateChildVads.c)
 *     MiMapViewOfDataSection @ 0x140512AC0 (MiMapViewOfDataSection.c)
 *     MiDeletePartialCloneVad @ 0x1406BF360 (MiDeletePartialCloneVad.c)
 * Callees:
 *     KeShouldYieldProcessor @ 0x14000D660 (KeShouldYieldProcessor.c)
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     KiAbEntryRemoveFromTree @ 0x140048030 (KiAbEntryRemoveFromTree.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 *     MiGetSystemRegionType @ 0x1400F0720 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x1400F0AE0 (KiAbThreadRemoveBoosts.c)
 *     MmGetSessionIdEx @ 0x1400F0C40 (MmGetSessionIdEx.c)
 *     MiLockLeafPage @ 0x140104100 (MiLockLeafPage.c)
 *     MiDecrementShareCount @ 0x1401055F0 (MiDecrementShareCount.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KiCheckForKernelApcDelivery @ 0x14011C790 (KiCheckForKernelApcDelivery.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDecrementLargeSubsections(volatile LONG **a1, volatile LONG **a2)
{
  volatile LONG *v2; // rbx
  volatile LONG **v3; // rdi
  __int64 v4; // rbp
  volatile LONG *v5; // r15
  KIRQL v6; // bp
  volatile LONG **v7; // rax
  unsigned int SessionId; // r13d
  unsigned __int64 v9; // r14
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 v12; // rbx
  struct _KTHREAD *v13; // rbx
  unsigned __int8 v14; // r14
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rcx
  _KLOCK_ENTRY *v18; // rdi
  bool v19; // zf
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int16 v23; // ax
  ULONG_PTR BugCheckParameter2; // [rsp+30h] [rbp-58h]
  struct _KTHREAD *CurrentThread; // [rsp+38h] [rbp-50h]
  int v27; // [rsp+90h] [rbp+8h] BYREF
  volatile LONG **v28; // [rsp+98h] [rbp+10h]
  int v29; // [rsp+A0h] [rbp+18h]
  volatile LONG *v30; // [rsp+A8h] [rbp+20h]

  v28 = a2;
  v2 = *a1;
  v3 = a1;
  CurrentThread = KeGetCurrentThread();
  v4 = *(_QWORD *)*a1;
  --CurrentThread->SpecialApcDisable;
  BugCheckParameter2 = v4 + 40;
  ExAcquirePushLockExclusiveEx(v4 + 40, 0LL);
  v5 = v2 + 18;
  v30 = v2 + 18;
  v6 = ExAcquireSpinLockExclusive(v2 + 18);
  v7 = v28;
  SessionId = -1;
  while ( 1 )
  {
    if ( *((_DWORD *)v3 + 27) == 1 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v5);
      __writecr8(2uLL);
      v9 = *((unsigned int *)v3 + 11);
      v10 = (__int64)v3[1];
      if ( (_DWORD)v9 )
      {
        v11 = (unsigned int)v9;
        do
        {
          v12 = MiLockLeafPage(v10, 0);
          MiDecrementShareCount(v12);
          _InterlockedAnd64((volatile signed __int64 *)(v12 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KeShouldYieldProcessor() )
          {
            __writecr8(v6);
            KeGetCurrentIrql();
            __writecr8(2uLL);
          }
          v10 += 8LL;
          --v11;
        }
        while ( v11 );
        v5 = v30;
        SessionId = -1;
      }
      MiReturnResidentAvailable(v9);
      ExAcquireSpinLockExclusive(v5);
      v7 = v28;
    }
    --*((_DWORD *)v3 + 27);
    if ( v3 == v7 )
      break;
    v3 = (volatile LONG **)v3[2];
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v5);
  __writecr8(v6);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
  v27 = 0;
  v13 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(BugCheckParameter2) == 1 )
    SessionId = MmGetSessionIdEx(v13->ApcState.Process);
  --v13->SpecialApcDisable;
  v14 = ++v13->AbAllocationRegionCount;
  LODWORD(v15) = ((char)v13->AbEntrySummary | (char)v13->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v19 = !_BitScanReverse((unsigned int *)&v20, v15);
    v29 = v20;
    if ( v19 )
      goto LABEL_23;
    v16 = 1 << v20;
    v17 = v20;
    v18 = &v13->LockEntries[v17];
    v15 = ~v16 & (unsigned int)v15;
    if ( (v18->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v18->LockState.0 & 1) == 0
      && (*(_QWORD *)&v18->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL)
      && v18->LockState.SessionId == SessionId )
    {
      v18->AcquiredByte &= ~1u;
      if ( v18->LockState.0 )
        break;
    }
  }
  if ( !v18 )
  {
LABEL_23:
    if ( (*((_DWORD *)&v13->0 + 1) & 0x8000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v13, BugCheckParameter2, SessionId, 0LL);
    goto LABEL_30;
  }
  v18->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v18->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v13->LockEntries[v17].TreeNode, v15);
  v27 = 0;
  v27 = v18->BoostBitmap.AllFields & 0x1FFFF;
  v18->BoostBitmap.AllFields &= 0xFFFE0000;
  v18->ThreadLocalFlags &= ~1u;
  v18->LockState.0 = 0LL;
  v21 = ((char *)v18 - (char *)v13 - 800) / 96;
  if ( v14 == 1 )
    v13->AbEntrySummary |= 1 << v21;
  else
    _InterlockedOr8((volatile signed __int8 *)&v13->AbOrphanedEntrySummary, 1 << v21);
LABEL_30:
  --v13->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts(&v13->Header.Lock, BugCheckParameter2, (unsigned int *)&v27);
  v23 = v13->SpecialApcDisable + 1;
  v13->SpecialApcDisable = v23;
  if ( !v23 && ($69CD3F157F9F39B6F7113F2231989901 *)v13->ApcState.ApcListHead[0].Flink != &v13->152 )
    KiCheckForKernelApcDelivery(v22);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
