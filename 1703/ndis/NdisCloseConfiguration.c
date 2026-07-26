/*
 * XREFs of NdisCloseConfiguration @ 0x1C00ADB10
 * Callers:
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C001D500 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisCheckIfTypeMismatch @ 0x1C005EFE0 (ndisCheckIfTypeMismatch.c)
 *     ndisOidPostIovNicSwitchParameters @ 0x1C006B790 (ndisOidPostIovNicSwitchParameters.c)
 *     ndisReadMiniportDefaultPortAuthStates @ 0x1C00AB870 (ndisReadMiniportDefaultPortAuthStates.c)
 *     ndisReadMiniportMediaSpecificPortAuthStates @ 0x1C00AB964 (ndisReadMiniportMediaSpecificPortAuthStates.c)
 *     ndisMFindNumaNode @ 0x1C00AC1D8 (ndisMFindNumaNode.c)
 *     ?ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00AC27C (-ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfGetFilterIfInfoFromRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_GUID@@@Z @ 0x1C00ADA24 (-ndisIfGetFilterIfInfoFromRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_GUID@@@Z.c)
 *     ndisReadRssKeywords @ 0x1C00ADFC8 (ndisReadRssKeywords.c)
 *     ndisReadOffloadRegistry @ 0x1C00AE3F8 (ndisReadOffloadRegistry.c)
 *     ndisIovCreateDefaultNicSwitch @ 0x1C00BCD98 (ndisIovCreateDefaultNicSwitch.c)
 *     ?ndisIfSetFilterIfInfoInRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@U_GUID@@@Z @ 0x1C00D0564 (-ndisIfSetFilterIfInfoInRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@U_GUID@@@Z.c)
 *     ndisUpdateHDSplitKeyword @ 0x1C00D38B8 (ndisUpdateHDSplitKeyword.c)
 *     ndisUpdateOffloadKeywords @ 0x1C00D3A00 (ndisUpdateOffloadKeywords.c)
 *     DisableMagicPacketKeyword @ 0x1C00D4680 (DisableMagicPacketKeyword.c)
 *     ndisWmiSetPMAdminConfig @ 0x1C00D7CD0 (ndisWmiSetPMAdminConfig.c)
 *     ndisGetMiniportInfo @ 0x1C00DDD7C (ndisGetMiniportInfo.c)
 *     ndisReadModernStandyWoLMagicPacketKeywords @ 0x1C00DEA74 (ndisReadModernStandyWoLMagicPacketKeywords.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00E2244 (ndisWmiChangeSingleInstance.c)
 *     ndisNDKHandleWmiChangeRequest @ 0x1C00E3F44 (ndisNDKHandleWmiChangeRequest.c)
 *     ndisReadNicAutoPowerSaverTimeoutKeywords @ 0x1C00E941C (ndisReadNicAutoPowerSaverTimeoutKeywords.c)
 *     ndisReadSSTimeoutKeywords @ 0x1C00E94F0 (ndisReadSSTimeoutKeywords.c)
 *     ndisMInitializeAdapter @ 0x1C00F904C (ndisMInitializeAdapter.c)
 *     ndisIfInitialize @ 0x1C011412C (ndisIfInitialize.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 */

void __stdcall NdisCloseConfiguration(NDIS_HANDLE ConfigurationHandle)
{
  void *v2; // rcx
  _QWORD *v3; // rcx

  if ( (unsigned __int8)byte_1C009260F >= 4u )
    WPP_SF_q(0x17u, &WPP_99a60aa0491337cae2647d317c30bcf5_Traceguids, (__int64)ConfigurationHandle);
  v2 = (void *)*((_QWORD *)ConfigurationHandle + 4);
  if ( v2 )
    ZwClose(v2);
  while ( 1 )
  {
    v3 = (_QWORD *)*((_QWORD *)ConfigurationHandle + 3);
    if ( !v3 )
      break;
    *((_QWORD *)ConfigurationHandle + 3) = *v3;
    ExFreePoolWithTag(v3, 0);
  }
  ExFreePoolWithTag(ConfigurationHandle, 0);
  if ( (unsigned __int8)byte_1C009260F >= 4u )
    WPP_SF_q(0x18u, &WPP_99a60aa0491337cae2647d317c30bcf5_Traceguids, 0LL);
}
