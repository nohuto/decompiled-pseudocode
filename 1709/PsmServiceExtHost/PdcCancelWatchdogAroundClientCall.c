/*
 * XREFs of PdcCancelWatchdogAroundClientCall @ 0x180024A38
 * Callers:
 *     Pdcv2ActivationClientRegister @ 0x18002488C (Pdcv2ActivationClientRegister.c)
 *     Pdcv2ActivationClientActivate @ 0x180049ECC (Pdcv2ActivationClientActivate.c)
 *     Pdcv2ActivationClientDeactivate @ 0x18004A1DC (Pdcv2ActivationClientDeactivate.c)
 *     Pdcv2ActivationClientRenewActivation @ 0x18004A38C (Pdcv2ActivationClientRenewActivation.c)
 *     Pdcv2ActivationClientUnregister @ 0x18004A560 (Pdcv2ActivationClientUnregister.c)
 *     Pdcv2pActivationClientCallback @ 0x18004A6D0 (Pdcv2pActivationClientCallback.c)
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
