/*
 * XREFs of ?ndisShouldEngageNicAutoPowerSaver@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006E958
 * Callers:
 *     ndisSubmitIdleRequest @ 0x1C0071820 (ndisSubmitIdleRequest.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qll @ 0x1C006FC24 (WPP_SF_qll.c)
 *     ?ndisAoAcIsControlPathAoAcNicReferencePresent@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00723FC (-ndisAoAcIsControlPathAoAcNicReferencePresent@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

char __fastcall ndisShouldEngageNicAutoPowerSaver(struct _NDIS_MINIPORT_BLOCK *a1)
{
  char v1; // bl
  __int64 v3; // rdx
  __int64 v4; // rcx

  v1 = 0;
  if ( a1->AoAc
    && (a1->PnPFlags & 0x60) == 0x60
    && (unsigned int)(a1->DeviceCaps.DeviceWake - 2) <= 2
    && (a1->PMHardwareCapabilities.Flags & 4) != 0
    && !ndisAoAcIsControlPathAoAcNicReferencePresent(a1) )
  {
    if ( ndisIsScreenOnNapsEnabled == 1 )
    {
      if ( (unsigned __int8)byte_1C0098756 >= 4u )
        WPP_SF_q(0x28u, &WPP_72bd2a87b7f83093ce8d5792cc2b4ff7_Traceguids, (__int64)a1);
      return 1;
    }
    LOBYTE(v4) = ndisLowPowerEpoch;
    if ( ndisLowPowerEpoch || ndisConnectedStandby )
    {
      if ( (unsigned __int8)byte_1C0098756 >= 4u )
        WPP_SF_qll(v4, v3, a1, ndisLowPowerEpoch, ndisConnectedStandby);
      return 1;
    }
  }
  return v1;
}
