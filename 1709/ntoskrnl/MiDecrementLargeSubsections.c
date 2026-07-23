/*
 * XREFs of MiDecrementLargeSubsections @ 0x140222780
 * Callers:
 *     MiDeleteVad @ 0x1400579B0 (MiDeleteVad.c)
 *     MiIncrementLargeSubsections @ 0x140223008 (MiIncrementLargeSubsections.c)
 *     MiMapViewOfDataSection @ 0x1404CEDF0 (MiMapViewOfDataSection.c)
 *     MiCloneLargeFileOnlyVad @ 0x1406E3EE8 (MiCloneLargeFileOnlyVad.c)
 *     MiDeletePartialCloneVads @ 0x1406EC69C (MiDeletePartialCloneVads.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     MiLockLeafPage @ 0x14002F4D4 (MiLockLeafPage.c)
 *     KiAbEntryRemoveFromTree @ 0x14005EA50 (KiAbEntryRemoveFromTree.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     MmGetSessionIdEx @ 0x140084190 (MmGetSessionIdEx.c)
 *     MiGetSystemRegionType @ 0x1400849C0 (MiGetSystemRegionType.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     KiAbThreadRemoveBoosts @ 0x140084D60 (KiAbThreadRemoveBoosts.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     MiReturnResidentAvailable @ 0x1400BFE10 (MiReturnResidentAvailable.c)
 *     MiDecrementShareCount @ 0x1400EB4C0 (MiDecrementShareCount.c)
 *     KiCheckForKernelApcDelivery @ 0x140101370 (KiCheckForKernelApcDelivery.c)
 *     KeShouldYieldProcessor @ 0x1401091E0 (KeShouldYieldProcessor.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDecrementLargeSubsections(volatile LONG **a1, volatile LONG **a2)
{
  volatile LONG *v2; // rbx
  volatile LONG **v3; // rdi
  volatile LONG **v4; // r12
  __int64 v5; // rsi
  volatile LONG *v6; // r14
  KIRQL v7; // si
  unsigned int SessionId; // r13d
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rbp
  __int64 *v12; // r15
  __int64 v13; // r12
  __int64 v14; // rbx
  ULONG_PTR v15; // rsi
  struct _KTHREAD *v16; // rbx
  unsigned __int8 v17; // bp
  unsigned int v18; // edx
  int v19; // eax
  __int64 v20; // rcx
  _KLOCK_ENTRY *v21; // rdi
  bool v22; // zf
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-58h]
  int v28; // [rsp+90h] [rbp+8h] BYREF
  volatile LONG **v29; // [rsp+98h] [rbp+10h]
  int v30; // [rsp+A0h] [rbp+18h]
  ULONG_PTR BugCheckParameter2; // [rsp+A8h] [rbp+20h]

  v29 = a2;
  v2 = *a1;
  v3 = a1;
  v4 = a2;
  CurrentThread = KeGetCurrentThread();
  v5 = *(_QWORD *)*a1;
  --CurrentThread->SpecialApcDisable;
  BugCheckParameter2 = v5 + 40;
  ExAcquirePushLockExclusiveEx(v5 + 40, 0LL);
  v6 = v2 + 18;
  v7 = ExAcquireSpinLockExclusive(v2 + 18);
  SessionId = -1;
  while ( 1 )
  {
    if ( *((_DWORD *)v3 + 27) == 1 )
    {
      ExReleaseSpinLockExclusiveFromDpcLevel(v6);
      __writecr8(2uLL);
      v11 = *((unsigned int *)v3 + 11);
      v12 = (__int64 *)v3[1];
      if ( (_DWORD)v11 )
      {
        v13 = (unsigned int)v11;
        do
        {
          v14 = MiLockLeafPage(v12, 0LL, v9, v10);
          MiDecrementShareCount(v14);
          _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( KeShouldYieldProcessor() )
          {
            __writecr8(v7);
            KeGetCurrentIrql();
            __writecr8(2uLL);
          }
          ++v12;
          --v13;
        }
        while ( v13 );
        v4 = v29;
        SessionId = -1;
      }
      MiReturnResidentAvailable(v11 >> 9);
      ExAcquireSpinLockExclusive(v6);
    }
    --*((_DWORD *)v3 + 27);
    if ( v3 == v4 )
      break;
    v3 = (volatile LONG **)v3[2];
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v6);
  __writecr8(v7);
  v15 = BugCheckParameter2;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v15);
  v28 = 0;
  v16 = KeGetCurrentThread();
  if ( (unsigned int)MiGetSystemRegionType(v15) == 1 )
    SessionId = MmGetSessionIdEx((__int64)v16->ApcState.Process);
  --v16->SpecialApcDisable;
  v17 = ++v16->AbAllocationRegionCount;
  v18 = ((char)v16->AbEntrySummary | (char)v16->AbOrphanedEntrySummary) ^ 0x3F;
  while ( 1 )
  {
    v22 = !_BitScanReverse((unsigned int *)&v23, v18);
    v30 = v23;
    if ( v22 )
      goto LABEL_23;
    v19 = 1 << v23;
    v20 = v23;
    v21 = &v16->LockEntries[v20];
    v18 &= ~v19;
    if ( (v21->AcquiredByte & 1) != 0
      && (*(_DWORD *)&v21->LockState.0 & 1) == 0
      && (*(_QWORD *)&v21->LockState.0 & 0x7FFFFFFFFFFFFFFCLL) == (v15 & 0x7FFFFFFFFFFFFFFCLL)
      && v21->LockState.SessionId == SessionId )
    {
      v21->AcquiredByte &= ~1u;
      if ( v21->LockState.0 )
        break;
    }
  }
  if ( !v21 )
  {
LABEL_23:
    if ( (*((_DWORD *)&v16->0 + 1) & 0x10000) == 0 )
      KeBugCheckEx(0x162u, (ULONG_PTR)v16, v15, SessionId, 0LL);
    goto LABEL_30;
  }
  v21->CrossThreadReleasableAndBusyByte |= 2u;
  if ( (__int64)v21->LockState.LockState < 0 )
    KiAbEntryRemoveFromTree(&v16->LockEntries[v20].TreeNode);
  v28 = 0;
  v28 = v21->BoostBitmap.AllFields & 0x1FFFF;
  v21->BoostBitmap.AllFields &= 0xFFFE0000;
  v21->ThreadLocalFlags &= ~1u;
  v21->LockState.0 = 0LL;
  v24 = ((char *)v21 - (char *)v16 - 800) / 96;
  if ( v17 == 1 )
    v16->AbEntrySummary |= 1 << v24;
  else
    _InterlockedOr8((volatile signed __int8 *)&v16->AbOrphanedEntrySummary, 1 << v24);
LABEL_30:
  --v16->AbAllocationRegionCount;
  KiAbThreadRemoveBoosts((ULONG_PTR)v16, v15, (unsigned int *)&v28);
  v22 = v16->SpecialApcDisable++ == -1;
  if ( v22 && ($B476B70DB57F76B110DA5B9238C3E934 *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
    KiCheckForKernelApcDelivery(v25);
  return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
}
