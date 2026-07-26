/*
 * XREFs of NdisCloseConfiguration @ 0x1C00B7A60
 * Callers:
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C001D6D8 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisCheckIfTypeMismatch @ 0x1C005F854 (ndisCheckIfTypeMismatch.c)
 *     ndisOidPostIovNicSwitchParameters @ 0x1C006D560 (ndisOidPostIovNicSwitchParameters.c)
 *     ndisReadMiniportDefaultPortAuthStates @ 0x1C00B4FD0 (ndisReadMiniportDefaultPortAuthStates.c)
 *     ndisReadMiniportMediaSpecificPortAuthStates @ 0x1C00B50C4 (ndisReadMiniportMediaSpecificPortAuthStates.c)
 *     ndisIovCreateDefaultNicSwitch @ 0x1C00B6CD8 (ndisIovCreateDefaultNicSwitch.c)
 *     ?ndisIfGetFilterIfInfoFromRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_GUID@@@Z @ 0x1C00B7890 (-ndisIfGetFilterIfInfoFromRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_GUID@@@Z.c)
 *     ?ndisIfSetFilterIfInfoInRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@U_GUID@@@Z @ 0x1C00B796C (-ndisIfSetFilterIfInfoInRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@U_GUID@@@Z.c)
 *     ndisReadRssKeywords @ 0x1C00B9168 (ndisReadRssKeywords.c)
 *     ndisReadOffloadRegistry @ 0x1C00B9598 (ndisReadOffloadRegistry.c)
 *     ndisMFindNumaNode @ 0x1C00C7778 (ndisMFindNumaNode.c)
 *     ?ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00CA2BC (-ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisUpdateHDSplitKeyword @ 0x1C00DFE10 (ndisUpdateHDSplitKeyword.c)
 *     ndisUpdateOffloadKeywords @ 0x1C00DFF58 (ndisUpdateOffloadKeywords.c)
 *     DisableMagicPacketKeyword @ 0x1C00E0AB4 (DisableMagicPacketKeyword.c)
 *     ndisWmiSetPMAdminConfig @ 0x1C00E373C (ndisWmiSetPMAdminConfig.c)
 *     ndisGetMiniportInfo @ 0x1C00E970C (ndisGetMiniportInfo.c)
 *     ndisReadModernStandyWoLMagicPacketKeywords @ 0x1C00EA554 (ndisReadModernStandyWoLMagicPacketKeywords.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00EEE20 (ndisWmiChangeSingleInstance.c)
 *     ndisNDKHandleWmiChangeRequest @ 0x1C00F0BFC (ndisNDKHandleWmiChangeRequest.c)
 *     ndisReadNicAutoPowerSaverTimeoutKeywords @ 0x1C00F54D8 (ndisReadNicAutoPowerSaverTimeoutKeywords.c)
 *     ndisReadSSTimeoutKeywords @ 0x1C00F55AC (ndisReadSSTimeoutKeywords.c)
 *     ndisMInitializeAdapter @ 0x1C0105A70 (ndisMInitializeAdapter.c)
 *     ndisIfInitialize @ 0x1C011CAC0 (ndisIfInitialize.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 */

void __stdcall NdisCloseConfiguration(NDIS_HANDLE ConfigurationHandle)
{
  void *v2; // rcx
  _QWORD *v3; // rcx

  if ( (unsigned __int8)byte_1C009960F >= 4u )
    WPP_SF_q(0x17u, &WPP_7638764ccf46397224acdca5d7787036_Traceguids, (__int64)ConfigurationHandle);
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
  if ( (unsigned __int8)byte_1C009960F >= 4u )
    WPP_SF_q(0x18u, &WPP_7638764ccf46397224acdca5d7787036_Traceguids, 0LL);
}
