/*
 * XREFs of HUBMUX_ReleaseInterruptReference @ 0x1C000DC20
 * Callers:
 *     HUBPSM30_CancellingResetOnSurpriseRemove @ 0x1C000E7D0 (HUBPSM30_CancellingResetOnSurpriseRemove.c)
 *     HUBPSM20_DetachingDeviceFromPortOnDisconnectWithTimer @ 0x1C000E8F0 (HUBPSM20_DetachingDeviceFromPortOnDisconnectWithTimer.c)
 *     HUBPSM20_DetachingDeviceFromPortOnOverCurrentClearWithTimer @ 0x1C000E920 (HUBPSM20_DetachingDeviceFromPortOnOverCurrentClearWithTimer.c)
 *     HUBPSM20_IssuingResumedToDeviceSM @ 0x1C000ED60 (HUBPSM20_IssuingResumedToDeviceSM.c)
 *     HUBPSM20_QueueingPortResumeTimedOut @ 0x1C000EEA0 (HUBPSM20_QueueingPortResumeTimedOut.c)
 *     HUBPSM20_ReleasingInterruptReferenceAndIssuingPortResetTimedOutToDSM @ 0x1C000EFA0 (HUBPSM20_ReleasingInterruptReferenceAndIssuingPortResetTimedOutToDSM.c)
 *     HUBPSM20_ReleasingInterruptReferenceAndStoppingTimer @ 0x1C000EFE0 (HUBPSM20_ReleasingInterruptReferenceAndStoppingTimer.c)
 *     HUBPSM20_ReleasingInterruptReferenceOnResetTransferFailure @ 0x1C000F030 (HUBPSM20_ReleasingInterruptReferenceOnResetTransferFailure.c)
 *     HUBPSM20_ReleasingInterruptReferenceOnSuccessfulReset @ 0x1C000F070 (HUBPSM20_ReleasingInterruptReferenceOnSuccessfulReset.c)
 *     HUBPSM30_IssuingHubResetOnTimedOut @ 0x1C000FC00 (HUBPSM30_IssuingHubResetOnTimedOut.c)
 *     HUBPSM30_QueueingPortResumeTimedOut @ 0x1C000FDD0 (HUBPSM30_QueueingPortResumeTimedOut.c)
 *     HUBPSM30_ReleasingInterruptReferenceOnTransferFailureInResuming @ 0x1C000FE50 (HUBPSM30_ReleasingInterruptReferenceOnTransferFailureInResuming.c)
 *     HUBPSM30_ReleasingInterruptReferenceOnResetTransferFailure @ 0x1C000FE70 (HUBPSM30_ReleasingInterruptReferenceOnResetTransferFailure.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001DD8 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C0009C48 (HUBSM_AddEvent.c)
 *     HUBMISC_DbgBreak @ 0x1C002A7B0 (HUBMISC_DbgBreak.c)
 */

void __fastcall HUBMUX_ReleaseInterruptReference(volatile signed __int32 *a1)
{
  __int64 v1; // rbp
  char v3; // si
  __int64 v4; // rbx
  KIRQL v5; // r14
  int v6; // eax

  v1 = *(_QWORD *)a1;
  v3 = 0;
  v4 = *(_QWORD *)a1 + 2312LL;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v4);
  if ( (a1[66] & 2) == 0 )
  {
    WPP_RECORDER_SF_(*((_QWORD *)a1 + 179), 2u, 4u, 0x10u, (__int64)&WPP_f0db35a95a303371e417888cb1aa9d67_Traceguids);
    HUBMISC_DbgBreak("Port is releasing interrupt reference when it is not holding it");
  }
  _InterlockedAnd(a1 + 66, 0xFFFFFFFD);
  v6 = *(_DWORD *)(v4 + 20);
  if ( v6 )
  {
    *(_DWORD *)(v4 + 20) = v6 - 1;
  }
  else
  {
    WPP_RECORDER_SF_(*((_QWORD *)a1 + 179), 2u, 4u, 0x11u, (__int64)&WPP_f0db35a95a303371e417888cb1aa9d67_Traceguids);
    HUBMISC_DbgBreak("Hub interrupt reference is being released too many times");
  }
  if ( !*(_DWORD *)(v4 + 20) && (*(_DWORD *)(v4 + 32) & 1) != 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(v4 + 32), 0xFFFFFFFE);
    v3 = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v4, v5);
  if ( v3 )
    HUBSM_AddEvent(v1 + 1256, 2050);
}
