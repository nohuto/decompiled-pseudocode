/*
 * XREFs of PdcCancelWatchdogAroundClientCall @ 0x18002BC90
 * Callers:
 *     Pdcv2ActivationClientActivate @ 0x18002B784 (Pdcv2ActivationClientActivate.c)
 *     Pdcv2ActivationClientDeactivate @ 0x18002BB08 (Pdcv2ActivationClientDeactivate.c)
 *     Pdcv2ActivationClientRegister @ 0x1800DE140 (Pdcv2ActivationClientRegister.c)
 *     Pdcv2ActivationClientRenewActivation @ 0x1800DE320 (Pdcv2ActivationClientRenewActivation.c)
 *     Pdcv2ActivationClientUnregister @ 0x1800DE4F4 (Pdcv2ActivationClientUnregister.c)
 *     Pdcv2pActivationClientCallback @ 0x1800DE670 (Pdcv2pActivationClientCallback.c)
 * Callees:
 *     <none>
 */

void __fastcall PdcCancelWatchdogAroundClientCall(PTP_TIMER *a1)
{
  if ( ClientCallWatchdogEnabled )
  {
    SetThreadpoolTimer(*a1, 0LL, 0, 0);
    WaitForThreadpoolTimerCallbacks(*a1, 0);
    CloseThreadpoolTimer(*a1);
  }
}
