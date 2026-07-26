/*
 * XREFs of NdisOpenConfigurationEx @ 0x1C00AF420
 * Callers:
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C001D500 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisCheckIfTypeMismatch @ 0x1C005EFE0 (ndisCheckIfTypeMismatch.c)
 *     ndisOidPostIovNicSwitchParameters @ 0x1C006B790 (ndisOidPostIovNicSwitchParameters.c)
 *     ndisReadMiniportDefaultPortAuthStates @ 0x1C00AB870 (ndisReadMiniportDefaultPortAuthStates.c)
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
 *     ndisReadNicAutoPowerSaverTimeoutKeywords @ 0x1C00E941C (ndisReadNicAutoPowerSaverTimeoutKeywords.c)
 *     ndisReadSSTimeoutKeywords @ 0x1C00E94F0 (ndisReadSSTimeoutKeywords.c)
 *     ndisMInitializeAdapter @ 0x1C00F904C (ndisMInitializeAdapter.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     ndisAllocateConfigurationString @ 0x1C00AF2CC (ndisAllocateConfigurationString.c)
 *     NdisOpenConfiguration @ 0x1C00AF5C0 (NdisOpenConfiguration.c)
 *     NdisOpenProtocolConfiguration @ 0x1C00B06E0 (NdisOpenProtocolConfiguration.c)
 *     ndisGetOrCreateFilterInstanceKey @ 0x1C00DB224 (ndisGetOrCreateFilterInstanceKey.c)
 */

NDIS_STATUS __stdcall NdisOpenConfigurationEx(
        PNDIS_CONFIGURATION_OBJECT ConfigObject,
        PNDIS_HANDLE ConfigurationHandle)
{
  unsigned __int8 *NdisHandle; // rdi
  char v3; // r15
  void *v6; // r8
  int v7; // ebx
  int v9; // eax
  bool v10; // zf
  _UNICODE_STRING *p_Destination; // r8
  const UNICODE_STRING *v12; // r8
  const UNICODE_STRING *v13; // rdx
  const UNICODE_STRING *v14; // rcx
  __int64 v15; // rdx
  _UNICODE_STRING Destination; // [rsp+30h] [rbp-20h] BYREF
  _UNICODE_STRING GuidString; // [rsp+40h] [rbp-10h] BYREF
  int Status; // [rsp+80h] [rbp+30h] BYREF

  NdisHandle = (unsigned __int8 *)ConfigObject->NdisHandle;
  *(_DWORD *)&Destination.Length = 0;
  v3 = 0;
  Destination.Buffer = 0LL;
  *(_DWORD *)&GuidString.Length = 0;
  GuidString.Buffer = 0LL;
  LOBYTE(Status) = 0;
  if ( (unsigned __int8)byte_1C009260F >= 4u )
    WPP_SF_q(0x1Bu, &WPP_99a60aa0491337cae2647d317c30bcf5_Traceguids, (__int64)ConfigObject);
  if ( ConfigObject->Header.Type != 0xA9 || ConfigObject->Header.Size < 0x14u || !ConfigObject->Header.Revision )
    return -1073741811;
  switch ( *NdisHandle )
  {
    case 2u:
      if ( NdisHandle[24] < 6u )
      {
        v7 = -1073741637;
        goto LABEL_15;
      }
      p_Destination = (_UNICODE_STRING *)(NdisHandle + 488);
      goto LABEL_31;
    case 3u:
      v14 = (const UNICODE_STRING *)(NdisHandle + 72);
      goto LABEL_37;
    case 4u:
      v14 = (const UNICODE_STRING *)(NdisHandle + 144);
LABEL_37:
      v12 = 0LL;
      v13 = 0LL;
LABEL_38:
      v9 = ndisAllocateConfigurationString(v14, v13, v12, &Destination);
      v7 = v9;
      v10 = v9 == 0;
      goto LABEL_29;
    case 5u:
      if ( (ConfigObject->Flags & 1) != 0 )
      {
        v15 = *((_QWORD *)NdisHandle + 2);
        if ( (*(_DWORD *)(*(_QWORD *)(v15 + 464) + 48LL) & 2) == 0 )
          goto LABEL_42;
        v9 = ndisGetOrCreateFilterInstanceKey(
               (int)v15 + 144,
               (int)NdisHandle,
               *((_QWORD *)NdisHandle + 4),
               0,
               (__int64)&Status,
               &Destination);
      }
      else
      {
        if ( RtlStringFromGUID(
               (const GUID *const)(*(_QWORD *)(*((_QWORD *)NdisHandle + 4) + 16LL) + 4032LL),
               &GuidString) )
        {
          goto LABEL_42;
        }
        v3 = 1;
        v9 = ndisAllocateConfigurationString(
               (PCUNICODE_STRING)(*((_QWORD *)NdisHandle + 2) + 144LL),
               &GuidString,
               &ndisFilterAdapterStr,
               &Destination);
      }
      v7 = v9;
      v10 = v9 == 0;
LABEL_29:
      Status = v9;
      if ( !v10 )
        goto LABEL_15;
      p_Destination = &Destination;
      goto LABEL_31;
    case 0xAu:
      v6 = NdisHandle;
      goto LABEL_13;
  }
  if ( *NdisHandle != 17 )
  {
    if ( *NdisHandle != 18 )
    {
      if ( *NdisHandle == 134 )
      {
        p_Destination = (_UNICODE_STRING *)*((_QWORD *)NdisHandle + 1);
LABEL_31:
        NdisOpenProtocolConfiguration(&Status, ConfigurationHandle, p_Destination);
        goto LABEL_14;
      }
LABEL_42:
      v7 = -1073741823;
      goto LABEL_15;
    }
    v12 = (const UNICODE_STRING *)&ndisAdapterStr;
    v13 = (const UNICODE_STRING *)(*((_QWORD *)NdisHandle + 2) + 3816LL);
    v14 = (const UNICODE_STRING *)(*((_QWORD *)NdisHandle + 3) + 72LL);
    goto LABEL_38;
  }
  v6 = (void *)*((_QWORD *)NdisHandle + 503);
LABEL_13:
  NdisOpenConfiguration(&Status, ConfigurationHandle, v6);
LABEL_14:
  v7 = Status;
LABEL_15:
  if ( Destination.Buffer )
    ExFreePoolWithTag(Destination.Buffer, 0);
  if ( !v7 && *ConfigurationHandle )
    *((_QWORD *)*ConfigurationHandle + 1) = NdisHandle;
  if ( v3 )
    RtlFreeUnicodeString(&GuidString);
  if ( (unsigned __int8)byte_1C009260F >= 4u )
    WPP_SF_qD(0x1Cu, &WPP_99a60aa0491337cae2647d317c30bcf5_Traceguids, (__int64)ConfigObject, v7);
  return v7;
}
