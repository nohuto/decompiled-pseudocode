/*
 * XREFs of ndisSetupLwfMiniportHandlers @ 0x1C000F7EC
 * Callers:
 *     ndisFilterAttachCleanUp @ 0x1C0001114 (ndisFilterAttachCleanUp.c)
 *     ndisSetupNdis6OpenHandlers @ 0x1C000F77C (ndisSetupNdis6OpenHandlers.c)
 *     ndisHandleFilterHandlersChange @ 0x1C0010BC0 (ndisHandleFilterHandlersChange.c)
 *     NdisFSetAttributes @ 0x1C0010CA0 (NdisFSetAttributes.c)
 *     ndisSetMiniportHandlers @ 0x1C010390C (ndisSetMiniportHandlers.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C0103E1C (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ndisSetupUpwardHandlers @ 0x1C000F844 (ndisSetupUpwardHandlers.c)
 *     ndisSetupDownwardHandlers @ 0x1C000FB58 (ndisSetupDownwardHandlers.c)
 *     ndisSetupNoFilterHandlers @ 0x1C0010F38 (ndisSetupNoFilterHandlers.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 */

__int64 __fastcall ndisSetupLwfMiniportHandlers(__int64 a1)
{
  __int64 result; // rax

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(69LL, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, a1);
  if ( *(_QWORD *)(a1 + 2048) )
  {
    ndisSetupDownwardHandlers(a1);
    result = ndisSetupUpwardHandlers(a1);
  }
  else
  {
    *(_BYTE *)(a1 + 1999) = 0;
    result = ndisSetupNoFilterHandlers(a1);
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    return WPP_SF_q(70LL, &WPP_adcd8872ba6737e2e82ea4a41ce92341_Traceguids, a1);
  return result;
}
