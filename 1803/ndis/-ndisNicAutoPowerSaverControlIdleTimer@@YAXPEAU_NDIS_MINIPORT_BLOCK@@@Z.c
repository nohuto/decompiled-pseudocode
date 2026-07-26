/*
 * XREFs of ?ndisNicAutoPowerSaverControlIdleTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006EB3C
 * Callers:
 *     ndisWnfPdcCallback @ 0x1C0050860 (ndisWnfPdcCallback.c)
 *     ndisSubmitIdleRequest @ 0x1C0072098 (ndisSubmitIdleRequest.c)
 * Callees:
 *     ndisClearIdleTimer @ 0x1C0070898 (ndisClearIdleTimer.c)
 *     ndisSetIdleTimer @ 0x1C0071C24 (ndisSetIdleTimer.c)
 */

void __fastcall ndisNicAutoPowerSaverControlIdleTimer(struct _NDIS_MINIPORT_BLOCK *a1)
{
  if ( a1->AoAc
    && (a1->PnPFlags & 0x60) == 0x60
    && (unsigned int)(a1->DeviceCaps.DeviceWake - 2) <= 2
    && (a1->PMHardwareCapabilities.Flags & 4) != 0
    && a1->SelectiveSuspend )
  {
    if ( ndisConnectedStandby )
      ndisSetIdleTimer();
    else
      ndisClearIdleTimer();
  }
}
