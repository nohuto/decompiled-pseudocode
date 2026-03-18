/*
 * XREFs of HUBFDO_AcquireWdfPowerReference @ 0x1C000B554
 * Callers:
 *     HUBHSM_AcquiringWdfPowerReferenceOnInterrupt @ 0x1C0007240 (HUBHSM_AcquiringWdfPowerReferenceOnInterrupt.c)
 *     HUBHSM_AcquiringWdfPowerReferenceOnInterruptFailureAndCheckingIfRootHub @ 0x1C0007260 (HUBHSM_AcquiringWdfPowerReferenceOnInterruptFailureAndCheckingIfRootHub.c)
 *     HUBHSM_SuspendedWithPendingReset @ 0x1C0008050 (HUBHSM_SuspendedWithPendingReset.c)
 *     HUBHSM_UnblockResumeWaitingForStop @ 0x1C0008070 (HUBHSM_UnblockResumeWaitingForStop.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0038E70 (_guard_dispatch_icall_nop.c)
 */

void __fastcall HUBFDO_AcquireWdfPowerReference(__int64 a1)
{
  KIRQL v2; // di
  int v3; // ebx

  v2 = KfRaiseIrql(2u);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD, _QWORD, int, const char *))(WdfFunctions_01015
                                                                                                 + 3504))(
         WdfDriverGlobals,
         *(_QWORD *)(a1 + 16),
         0LL,
         0LL,
         1907,
         "onecore\\drivers\\wdm\\usb\\usb3\\hub\\src\\hubfdo.c");
  KeLowerIrql(v2);
  if ( v3 >= 0 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x4000u);
}
