/*
 * XREFs of PdcCancelWatchdogAroundClientCall @ 0x18005AC74
 * Callers:
 *     Pdcv2ActivationClientRegister @ 0x18005AC90 (Pdcv2ActivationClientRegister.c)
 *     Pdcv2ActivationClientRenewActivation @ 0x18010BC88 (Pdcv2ActivationClientRenewActivation.c)
 *     Pdcv2ActivationClientUnregister @ 0x18010BE5C (Pdcv2ActivationClientUnregister.c)
 *     Pdcv2pActivationClientCallback @ 0x18010BFC0 (Pdcv2pActivationClientCallback.c)
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
