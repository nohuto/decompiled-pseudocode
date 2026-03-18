/*
 * XREFs of PsReferenceEffectiveToken @ 0x14049D4B0
 * Callers:
 *     SepReferenceTokenUsingPseudoHandle @ 0x14006A3A0 (SepReferenceTokenUsingPseudoHandle.c)
 *     RtlpQueryLowBoxId @ 0x1400A63EC (RtlpQueryLowBoxId.c)
 *     SeCaptureAtomTableCallout @ 0x1400BB8D4 (SeCaptureAtomTableCallout.c)
 *     SeLogAccessFailure @ 0x140113BC0 (SeLogAccessFailure.c)
 *     RtlpAllowsLowBoxAccess @ 0x14012B1B8 (RtlpAllowsLowBoxAccess.c)
 *     SepVerifyDesktopAppPolicyOverrideCaller @ 0x14025E54C (SepVerifyDesktopAppPolicyOverrideCaller.c)
 *     SeSubProcessToken @ 0x14048CA94 (SeSubProcessToken.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x14049CA10 (EtwpGetSidExtendedHeaderItem.c)
 *     ExpWnfQueryCurrentUserSID @ 0x1405033D4 (ExpWnfQueryCurrentUserSID.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14050E064 (PspAllocateAndQueryNotificationChannel.c)
 *     CmpIsVirtEnabled @ 0x140569DE8 (CmpIsVirtEnabled.c)
 *     CmpGetVirtualizationID @ 0x1406921DC (CmpGetVirtualizationID.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     ObFastReferenceObject @ 0x140081EF0 (ObFastReferenceObject.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ObfReferenceObject @ 0x140084290 (ObfReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x140084BB0 (ExAcquirePushLockSharedEx.c)
 *     ObFastReferenceObjectLocked @ 0x14008AA44 (ObFastReferenceObjectLocked.c)
 *     ExfReleasePushLockShared @ 0x1400A7E00 (ExfReleasePushLockShared.c)
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
