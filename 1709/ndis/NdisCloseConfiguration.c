/*
 * XREFs of NdisCloseConfiguration @ 0x1C00B0D80
 * Callers:
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C0003C48 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisCheckIfTypeMismatch @ 0x1C005ED8C (ndisCheckIfTypeMismatch.c)
 *     ndisOidPostIovNicSwitchParameters @ 0x1C006CCF0 (ndisOidPostIovNicSwitchParameters.c)
 *     ndisIovCreateDefaultNicSwitch @ 0x1C00AD4D8 (ndisIovCreateDefaultNicSwitch.c)
 *     ndisReadMiniportDefaultPortAuthStates @ 0x1C00AF1A4 (ndisReadMiniportDefaultPortAuthStates.c)
 *     ndisReadMiniportMediaSpecificPortAuthStates @ 0x1C00AF298 (ndisReadMiniportMediaSpecificPortAuthStates.c)
 *     ndisMFindNumaNode @ 0x1C00AF754 (ndisMFindNumaNode.c)
 *     ?ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00AF7F8 (-ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfSetFilterIfInfoInRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@U_GUID@@@Z @ 0x1C00B0BA8 (-ndisIfSetFilterIfInfoInRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@U_GUID@@@Z.c)
 *     ?ndisIfGetFilterIfInfoFromRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_GUID@@@Z @ 0x1C00B0C98 (-ndisIfGetFilterIfInfoFromRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_GUID@@@Z.c)
 *     ndisReadRssKeywords @ 0x1C00B2810 (ndisReadRssKeywords.c)
 *     ndisReadOffloadRegistry @ 0x1C00B2C3C (ndisReadOffloadRegistry.c)
 *     ndisUpdateHDSplitKeyword @ 0x1C00DE0A8 (ndisUpdateHDSplitKeyword.c)
 *     ndisUpdateOffloadKeywords @ 0x1C00DE1F0 (ndisUpdateOffloadKeywords.c)
 *     DisableMagicPacketKeyword @ 0x1C00DEE70 (DisableMagicPacketKeyword.c)
 *     ndisWmiSetPMAdminConfig @ 0x1C00E207C (ndisWmiSetPMAdminConfig.c)
 *     ndisGetMiniportInfo @ 0x1C00E7CCC (ndisGetMiniportInfo.c)
 *     ndisReadModernStandyWoLMagicPacketKeywords @ 0x1C00E8A0C (ndisReadModernStandyWoLMagicPacketKeywords.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00EC100 (ndisWmiChangeSingleInstance.c)
 *     ndisNDKHandleWmiChangeRequest @ 0x1C00EDF60 (ndisNDKHandleWmiChangeRequest.c)
 *     ndisReadNicAutoPowerSaverTimeoutKeywords @ 0x1C00F2988 (ndisReadNicAutoPowerSaverTimeoutKeywords.c)
 *     ndisReadSSTimeoutKeywords @ 0x1C00F2A5C (ndisReadSSTimeoutKeywords.c)
 *     ndisMInitializeAdapter @ 0x1C00FF8D8 (ndisMInitializeAdapter.c)
 *     ndisIfInitialize @ 0x1C011BF80 (ndisIfInitialize.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 */

void __stdcall NdisCloseConfiguration(NDIS_HANDLE ConfigurationHandle)
{
  void *v2; // rcx
  _QWORD *v3; // rcx

  if ( (unsigned __int8)byte_1C009874F >= 4u )
    WPP_SF_q(0x17u, &WPP_fb5e2801bcb8364427405c45392b258b_Traceguids, (__int64)ConfigurationHandle);
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
  if ( (unsigned __int8)byte_1C009874F >= 4u )
    WPP_SF_q(0x18u, &WPP_fb5e2801bcb8364427405c45392b258b_Traceguids, 0LL);
}
