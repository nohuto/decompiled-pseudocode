/*
 * XREFs of HUBMUX_ReleaseInterruptReference @ 0x1C000DBB4
 * Callers:
 *     HUBPSM30_CancellingResetOnSurpriseRemove @ 0x1C000E760 (HUBPSM30_CancellingResetOnSurpriseRemove.c)
 *     HUBPSM20_DetachingDeviceFromPortOnDisconnectWithTimer @ 0x1C000E880 (HUBPSM20_DetachingDeviceFromPortOnDisconnectWithTimer.c)
 *     HUBPSM20_DetachingDeviceFromPortOnOverCurrentClearWithTimer @ 0x1C000E8B0 (HUBPSM20_DetachingDeviceFromPortOnOverCurrentClearWithTimer.c)
 *     HUBPSM20_IssuingResumedToDeviceSM @ 0x1C000ECF0 (HUBPSM20_IssuingResumedToDeviceSM.c)
 *     HUBPSM20_QueueingPortResumeTimedOut @ 0x1C000EE30 (HUBPSM20_QueueingPortResumeTimedOut.c)
 *     HUBPSM20_ReleasingInterruptReferenceAndIssuingPortResetTimedOutToDSM @ 0x1C000EF30 (HUBPSM20_ReleasingInterruptReferenceAndIssuingPortResetTimedOutToDSM.c)
 *     HUBPSM20_ReleasingInterruptReferenceAndStoppingTimer @ 0x1C000EF70 (HUBPSM20_ReleasingInterruptReferenceAndStoppingTimer.c)
 *     HUBPSM20_ReleasingInterruptReferenceOnResetTransferFailure @ 0x1C000EFC0 (HUBPSM20_ReleasingInterruptReferenceOnResetTransferFailure.c)
 *     HUBPSM20_ReleasingInterruptReferenceOnSuccessfulReset @ 0x1C000F000 (HUBPSM20_ReleasingInterruptReferenceOnSuccessfulReset.c)
 *     HUBPSM30_IssuingHubResetOnTimedOut @ 0x1C000FB90 (HUBPSM30_IssuingHubResetOnTimedOut.c)
 *     HUBPSM30_QueueingPortResumeTimedOut @ 0x1C000FD60 (HUBPSM30_QueueingPortResumeTimedOut.c)
 *     HUBPSM30_ReleasingInterruptReferenceOnTransferFailureInResuming @ 0x1C000FDE0 (HUBPSM30_ReleasingInterruptReferenceOnTransferFailureInResuming.c)
 *     HUBPSM30_ReleasingInterruptReferenceOnResetTransferFailure @ 0x1C000FE00 (HUBPSM30_ReleasingInterruptReferenceOnResetTransferFailure.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001DC8 (WPP_RECORDER_SF_.c)
 *     HUBSM_AddEvent @ 0x1C0009C18 (HUBSM_AddEvent.c)
 *     HUBMISC_DbgBreak @ 0x1C002B588 (HUBMISC_DbgBreak.c)
 */

void __fastcall HUBMUX_ReleaseInterruptReference(volatile signed __int32 *a1)
{
  __int64 v1; // rbp
  char v3; // si
  __int64 v4; // rbx
  KIRQL v5; // r14
  int v6; // eax
  int v7; // eax

  v1 = *(_QWORD *)a1;
  v3 = 0;
  v4 = *(_QWORD *)a1 + 2312LL;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v4);
  if ( (a1[66] & 2) == 0 )
  {
    WPP_RECORDER_SF_(*((_QWORD *)a1 + 179), 2u, 4u, 0x10u, (__int64)&WPP_aa68175a840236fea7f899cd40e44069_Traceguids);
    HUBMISC_DbgBreak("Port is releasing interrupt reference when it is not holding it");
  }
  _InterlockedAnd(a1 + 66, 0xFFFFFFFD);
  v6 = *(_DWORD *)(v4 + 20);
  if ( v6 )
  {
    v7 = v6 - 1;
    *(_DWORD *)(v4 + 20) = v7;
  }
  else
  {
    WPP_RECORDER_SF_(*((_QWORD *)a1 + 179), 2u, 4u, 0x11u, (__int64)&WPP_aa68175a840236fea7f899cd40e44069_Traceguids);
    HUBMISC_DbgBreak("Hub interrupt reference is being released too many times");
    v7 = *(_DWORD *)(v4 + 20);
  }
  if ( !v7 && (*(_DWORD *)(v4 + 32) & 1) != 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(v4 + 32), 0xFFFFFFFE);
    v3 = 1;
  }
  KeReleaseSpinLock((PKSPIN_LOCK)v4, v5);
  if ( v3 )
    HUBSM_AddEvent(v1 + 1256, 2050);
}
