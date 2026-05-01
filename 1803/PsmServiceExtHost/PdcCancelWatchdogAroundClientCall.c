/*
 * XREFs of PdcCancelWatchdogAroundClientCall @ 0x180035CCC
 * Callers:
 *     Pdcv2ActivationClientActivate @ 0x1800357F8 (Pdcv2ActivationClientActivate.c)
 *     Pdcv2ActivationClientDeactivate @ 0x180035B44 (Pdcv2ActivationClientDeactivate.c)
 *     Pdcv2ActivationClientRegister @ 0x180038768 (Pdcv2ActivationClientRegister.c)
 *     Pdcv2ActivationClientRenewActivation @ 0x18006B1C0 (Pdcv2ActivationClientRenewActivation.c)
 *     Pdcv2ActivationClientUnregister @ 0x18006B394 (Pdcv2ActivationClientUnregister.c)
 *     Pdcv2pActivationClientCallback @ 0x18006B4F0 (Pdcv2pActivationClientCallback.c)
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
