/*
 * XREFs of ndisSetupLwfMiniportHandlers @ 0x1C001A544
 * Callers:
 *     ndisSetupNdis6OpenHandlers @ 0x1C001A4D4 (ndisSetupNdis6OpenHandlers.c)
 *     ndisHandleFilterHandlersChange @ 0x1C001C624 (ndisHandleFilterHandlersChange.c)
 *     NdisFSetAttributes @ 0x1C001C830 (NdisFSetAttributes.c)
 *     ndisFilterAttachCleanUp @ 0x1C002513C (ndisFilterAttachCleanUp.c)
 *     ndisSetMiniportHandlers @ 0x1C00F6108 (ndisSetMiniportHandlers.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C00F6D74 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ndisSetupUpwardHandlers @ 0x1C001A59C (ndisSetupUpwardHandlers.c)
 *     ndisSetupDownwardHandlers @ 0x1C001A8B8 (ndisSetupDownwardHandlers.c)
 *     ndisSetupNoFilterHandlers @ 0x1C0021F60 (ndisSetupNoFilterHandlers.c)
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 */

__int64 __fastcall ndisSetupLwfMiniportHandlers(__int64 a1)
{
  __int64 result; // rax

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(71LL, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, a1);
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
    return WPP_SF_q(72LL, &WPP_12c6ddfa26473c7e20361ffad7c5cbde_Traceguids, a1);
  return result;
}
