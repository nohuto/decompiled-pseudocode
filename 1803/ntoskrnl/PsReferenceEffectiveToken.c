/*
 * XREFs of PsReferenceEffectiveToken @ 0x1404D42B0
 * Callers:
 *     RtlpQueryLowBoxId @ 0x140061174 (RtlpQueryLowBoxId.c)
 *     SeCaptureAtomTableCallout @ 0x14006CCC8 (SeCaptureAtomTableCallout.c)
 *     RtlpAllowsLowBoxAccess @ 0x1400A14E0 (RtlpAllowsLowBoxAccess.c)
 *     SeLogAccessFailure @ 0x1400B1D20 (SeLogAccessFailure.c)
 *     SepReferenceTokenUsingPseudoHandle @ 0x1400EF560 (SepReferenceTokenUsingPseudoHandle.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x14029FFE0 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x1404D4070 (EtwpGetSidExtendedHeaderItem.c)
 *     SeCreateClientSecurity @ 0x1404D41D0 (SeCreateClientSecurity.c)
 *     SeSubProcessToken @ 0x1404F0580 (SeSubProcessToken.c)
 *     ExpWnfQueryCurrentUserSID @ 0x1404F7234 (ExpWnfQueryCurrentUserSID.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1405349D0 (PspAllocateAndQueryNotificationChannel.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1400639E0 (ExfReleasePushLockShared.c)
 *     ObFastReferenceObjectLocked @ 0x1400EB804 (ObFastReferenceObjectLocked.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x1401038E0 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140104200 (ExAcquirePushLockSharedEx.c)
 *     ObFastReferenceObject @ 0x1401051D0 (ObFastReferenceObject.c)
 */

void *__fastcall PsReferenceEffectiveToken(__int64 a1, _DWORD *a2, bool *a3, int *a4, _BYTE *a5)
{
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // rbp
  void *v11; // r13
  ULONG_PTR v12; // rdi
  signed __int64 *BugCheckParameter2; // [rsp+20h] [rbp-38h]
  struct _KTHREAD *v15; // [rsp+28h] [rbp-30h]
  __int64 v16; // [rsp+60h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  if ( (struct _KTHREAD *)a1 == CurrentThread )
    Process = CurrentThread->ApcState.Process;
  else
    Process = *(_KPROCESS **)(a1 + 544);
  v11 = 0LL;
  if ( (*(_DWORD *)(a1 + 1744) & 8) == 0 )
    goto LABEL_4;
  v16 = *(_QWORD *)(a1 + 544);
  v15 = KeGetCurrentThread();
  --v15->KernelApcDisable;
  BugCheckParameter2 = (signed __int64 *)(a1 + 1728);
  ExAcquirePushLockSharedEx(a1 + 1728, 0LL);
  if ( (*(_DWORD *)(a1 + 1744) & 8) != 0 )
  {
    v11 = (void *)(*(_QWORD *)(a1 + 1640) & 0xFFFFFFFFFFFFFFF8uLL);
    ObfReferenceObject(v11);
    *a4 = *(_DWORD *)(a1 + 1640) & 3;
    *a3 = (*(_BYTE *)(a1 + 1640) & 4) != 0;
    if ( a5 )
      *a5 = *(_BYTE *)(v16 + 1738);
  }
  if ( _InterlockedCompareExchange64(BugCheckParameter2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(BugCheckParameter2);
  KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
  KeLeaveCriticalRegionThread((__int64)v15);
  if ( v11 )
  {
    *a2 = 2;
    return v11;
  }
  else
  {
LABEL_4:
    v12 = ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
    if ( !v12 )
    {
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockSharedEx((ULONG_PTR)&Process[1], 0LL);
      v12 = ObFastReferenceObjectLocked(&Process[1].Affinity.Bitmap[5]);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)&Process[1].Header.Lock, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)&Process[1].Header.Lock);
      KeAbPostRelease((ULONG_PTR)&Process[1]);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
    *a2 = 1;
    *a3 = 0;
    if ( a5 )
      *a5 = BYTE2(Process[2].ActiveProcessors.Bitmap[0]);
    return (void *)v12;
  }
}
