/*
 * XREFs of PsReferenceEffectiveToken @ 0x14050B1D0
 * Callers:
 *     SeLogAccessFailure @ 0x14001BD60 (SeLogAccessFailure.c)
 *     SepReferenceTokenUsingPseudoHandle @ 0x140026074 (SepReferenceTokenUsingPseudoHandle.c)
 *     RtlpAllowsLowBoxAccess @ 0x1400364A0 (RtlpAllowsLowBoxAccess.c)
 *     RtlpQueryLowBoxId @ 0x14008B7C4 (RtlpQueryLowBoxId.c)
 *     SepReferenceTokenByHandle @ 0x1400911E0 (SepReferenceTokenByHandle.c)
 *     SeCaptureAtomTableCallout @ 0x140115D14 (SeCaptureAtomTableCallout.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x140246E14 (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     CmpGetVirtualizationID @ 0x140452200 (CmpGetVirtualizationID.c)
 *     SeSubProcessToken @ 0x1404A138C (SeSubProcessToken.c)
 *     CmpIsVirtEnabled @ 0x1404D430C (CmpIsVirtEnabled.c)
 *     ExpWnfQueryCurrentUserSID @ 0x1404F08B4 (ExpWnfQueryCurrentUserSID.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x1404F18B0 (EtwpGetSidExtendedHeaderItem.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x140560A90 (PspAllocateAndQueryNotificationChannel.c)
 * Callees:
 *     ObFastReferenceObjectLocked @ 0x1400445AC (ObFastReferenceObjectLocked.c)
 *     ObFastReferenceObject @ 0x1400EE6B0 (ObFastReferenceObject.c)
 *     ObfReferenceObject @ 0x1400EEA40 (ObfReferenceObject.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EFC10 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockSharedEx @ 0x1400F0920 (ExAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1401125E0 (ExfReleasePushLockShared.c)
 */

void *__fastcall PsReferenceEffectiveToken(__int64 a1, _DWORD *a2, bool *a3, int *a4, _BYTE *a5)
{
  struct _KTHREAD *CurrentThread; // rbx
  _KPROCESS *Process; // rbp
  void *v11; // r13
  unsigned __int64 v12; // rdi
  signed __int64 *BugCheckParameter2; // [rsp+20h] [rbp-38h]
  struct _KTHREAD *v15; // [rsp+28h] [rbp-30h]
  __int64 v16; // [rsp+60h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  if ( (struct _KTHREAD *)a1 == CurrentThread )
    Process = CurrentThread->ApcState.Process;
  else
    Process = *(_KPROCESS **)(a1 + 544);
  v11 = 0LL;
  if ( (*(_DWORD *)(a1 + 1736) & 8) == 0 )
    goto LABEL_4;
  v16 = *(_QWORD *)(a1 + 544);
  v15 = KeGetCurrentThread();
  --v15->KernelApcDisable;
  BugCheckParameter2 = (signed __int64 *)(a1 + 1720);
  ExAcquirePushLockSharedEx(a1 + 1720, 0LL);
  if ( (*(_DWORD *)(a1 + 1736) & 8) != 0 )
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
