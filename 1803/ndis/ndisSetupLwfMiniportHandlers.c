/*
 * XREFs of ndisSetupLwfMiniportHandlers @ 0x1C001B040
 * Callers:
 *     ndisFilterAttachCleanUp @ 0x1C0011CBC (ndisFilterAttachCleanUp.c)
 *     ndisSetupNdis6OpenHandlers @ 0x1C001AFD0 (ndisSetupNdis6OpenHandlers.c)
 *     ndisHandleFilterHandlersChange @ 0x1C001CE10 (ndisHandleFilterHandlersChange.c)
 *     NdisFSetAttributes @ 0x1C001CFD0 (NdisFSetAttributes.c)
 *     ?ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z @ 0x1C01033D4 (-ndisMRestartMiniportInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_RESTART_ATTRIBUTES@@@Z.c)
 *     ndisSetMiniportHandlers @ 0x1C0104E18 (ndisSetMiniportHandlers.c)
 * Callees:
 *     ndisSetupUpwardHandlers @ 0x1C001B098 (ndisSetupUpwardHandlers.c)
 *     ndisSetupDownwardHandlers @ 0x1C001B39C (ndisSetupDownwardHandlers.c)
 *     ndisSetupNoFilterHandlers @ 0x1C001D134 (ndisSetupNoFilterHandlers.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

__int64 __fastcall ndisSetupLwfMiniportHandlers(__int64 a1)
{
  __int64 result; // rax

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(69LL, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, a1);
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
    return WPP_SF_q(70LL, &WPP_8c31e01722df3e37d3ae4568239e1c5f_Traceguids, a1);
  return result;
}
