/*
 * XREFs of NdisOpenConfigurationEx @ 0x1C00B9EE0
 * Callers:
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C001D6D8 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisCheckIfTypeMismatch @ 0x1C005F854 (ndisCheckIfTypeMismatch.c)
 *     ndisOidPostIovNicSwitchParameters @ 0x1C006D560 (ndisOidPostIovNicSwitchParameters.c)
 *     ndisReadMiniportDefaultPortAuthStates @ 0x1C00B4FD0 (ndisReadMiniportDefaultPortAuthStates.c)
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
 *     ndisReadNicAutoPowerSaverTimeoutKeywords @ 0x1C00F54D8 (ndisReadNicAutoPowerSaverTimeoutKeywords.c)
 *     ndisReadSSTimeoutKeywords @ 0x1C00F55AC (ndisReadSSTimeoutKeywords.c)
 *     ndisMInitializeAdapter @ 0x1C0105A70 (ndisMInitializeAdapter.c)
 * Callees:
 *     memset @ 0x1C0026180 (memset.c)
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 *     WPP_SF_qqq @ 0x1C003A95C (WPP_SF_qqq.c)
 *     NdisOpenConfiguration @ 0x1C00B9D80 (NdisOpenConfiguration.c)
 *     NdisOpenProtocolConfiguration @ 0x1C00BA6E0 (NdisOpenProtocolConfiguration.c)
 *     ndisAllocateConfigurationString @ 0x1C00E5260 (ndisAllocateConfigurationString.c)
 *     ndisGetOrCreateFilterInstanceKey @ 0x1C00E6A84 (ndisGetOrCreateFilterInstanceKey.c)
 */

NDIS_STATUS __stdcall NdisOpenConfigurationEx(
        PNDIS_CONFIGURATION_OBJECT ConfigObject,
        PNDIS_HANDLE ConfigurationHandle)
{
  unsigned __int8 *NdisHandle; // rdi
  char v3; // r12
  const UNICODE_STRING *v6; // r14
  unsigned __int16 Length; // dx
  __int16 v8; // cx
  unsigned __int16 v9; // ax
  unsigned __int16 v10; // r8
  unsigned __int16 v11; // r9
  unsigned __int16 v12; // cx
  PVOID PoolWithTag; // rax
  int v14; // ebx
  bool v15; // zf
  _UNICODE_STRING *p_DestinationString; // r8
  void *v18; // r8
  const UNICODE_STRING *v19; // r8
  const UNICODE_STRING *v20; // rdx
  const UNICODE_STRING *v21; // rcx
  __int64 v22; // rdx
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-20h] BYREF
  _UNICODE_STRING GuidString; // [rsp+40h] [rbp-10h] BYREF
  int Status; // [rsp+80h] [rbp+30h] BYREF

  NdisHandle = (unsigned __int8 *)ConfigObject->NdisHandle;
  *(_DWORD *)&DestinationString.Length = 0;
  v3 = 0;
  DestinationString.Buffer = 0LL;
  *(_DWORD *)&GuidString.Length = 0;
  GuidString.Buffer = 0LL;
  LOBYTE(Status) = 0;
  if ( (unsigned __int8)byte_1C009960F >= 4u )
    WPP_SF_q(0x1Bu, &WPP_7638764ccf46397224acdca5d7787036_Traceguids, (__int64)ConfigObject);
  if ( ConfigObject->Header.Type != 0xA9 || ConfigObject->Header.Size < 0x14u || !ConfigObject->Header.Revision )
    return -1073741811;
  switch ( *NdisHandle )
  {
    case 2u:
      if ( NdisHandle[24] < 6u )
      {
        v14 = -1073741637;
        goto LABEL_30;
      }
      p_DestinationString = (_UNICODE_STRING *)(NdisHandle + 488);
      goto LABEL_28;
    case 3u:
      v21 = (const UNICODE_STRING *)(NdisHandle + 72);
      goto LABEL_50;
    case 4u:
      v21 = (const UNICODE_STRING *)(NdisHandle + 144);
LABEL_50:
      v19 = 0LL;
      v20 = 0LL;
      goto LABEL_51;
    case 5u:
      if ( (ConfigObject->Flags & 1) != 0 )
      {
        v22 = *((_QWORD *)NdisHandle + 2);
        if ( (*(_DWORD *)(*(_QWORD *)(v22 + 480) + 40LL) & 2) != 0 )
        {
          v14 = ndisGetOrCreateFilterInstanceKey(
                  (int)v22 + 144,
                  (int)NdisHandle,
                  *((_QWORD *)NdisHandle + 4),
                  0,
                  (__int64)&Status,
                  &DestinationString);
LABEL_25:
          Status = v14;
          v15 = v14 == 0;
          goto LABEL_26;
        }
      }
      else if ( !RtlStringFromGUID(
                   (const GUID *const)(*(_QWORD *)(*((_QWORD *)NdisHandle + 4) + 16LL) + 4032LL),
                   &GuidString) )
      {
        v3 = 1;
        v6 = (const UNICODE_STRING *)(*((_QWORD *)NdisHandle + 2) + 144LL);
        if ( (unsigned __int8)byte_1C009960F >= 4u )
          WPP_SF_qqq(0x1Du, &WPP_7638764ccf46397224acdca5d7787036_Traceguids, v6, &GuidString, &ndisFilterAdapterStr);
        Length = v6->Length;
        v8 = -1;
        if ( (unsigned __int16)(Length + ndisParameterStr.Length) < Length )
          v10 = -1;
        else
          v10 = v6->Length + ndisParameterStr.Length;
        v9 = v6->Length + ndisParameterStr.Length;
        if ( (unsigned __int16)(ndisFilterAdapterStr.Length + v10) < v10 )
          v11 = -1;
        else
          v11 = ndisFilterAdapterStr.Length + v10;
        if ( (unsigned __int16)(GuidString.Length + v11) >= v11 )
          v8 = GuidString.Length + v11;
        DestinationString.Buffer = 0LL;
        v12 = v8 + 2;
        DestinationString.Length = 0;
        DestinationString.MaximumLength = v12;
        if ( ((unsigned __int16)(GuidString.Length + v11) < v11 ? 0xC0000095 : 0) | ((unsigned __int16)(ndisFilterAdapterStr.Length + v10) < v10
                                                                                   ? 0xC0000095
                                                                                   : 0) | (v9 < Length ? 0xC0000095 : 0)
          || (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v12, 0x2020444Eu),
              (DestinationString.Buffer = (wchar_t *)PoolWithTag) == 0LL) )
        {
          v14 = -1073741670;
        }
        else
        {
          memset(PoolWithTag, 0, DestinationString.MaximumLength);
          RtlCopyUnicodeString(&DestinationString, v6);
          RtlAppendUnicodeStringToString(&DestinationString, &ndisParameterStr);
          RtlAppendUnicodeStringToString(&DestinationString, &ndisFilterAdapterStr);
          RtlAppendUnicodeStringToString(&DestinationString, &GuidString);
          v14 = 0;
        }
        if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
          WPP_SF_qqq(0x1Eu, &WPP_7638764ccf46397224acdca5d7787036_Traceguids, v6, &GuidString, &ndisFilterAdapterStr);
        goto LABEL_25;
      }
LABEL_54:
      v14 = -1073741823;
      goto LABEL_30;
    case 0xAu:
      v18 = NdisHandle;
      goto LABEL_43;
    case 0x11u:
      v18 = (void *)*((_QWORD *)NdisHandle + 503);
LABEL_43:
      NdisOpenConfiguration(&Status, ConfigurationHandle, v18);
      goto LABEL_29;
  }
  if ( *NdisHandle != 18 )
  {
    if ( *NdisHandle == 134 )
    {
      p_DestinationString = (_UNICODE_STRING *)*((_QWORD *)NdisHandle + 1);
      goto LABEL_28;
    }
    goto LABEL_54;
  }
  v19 = (const UNICODE_STRING *)&ndisAdapterStr;
  v20 = (const UNICODE_STRING *)(*((_QWORD *)NdisHandle + 2) + 3816LL);
  v21 = (const UNICODE_STRING *)(*((_QWORD *)NdisHandle + 3) + 72LL);
LABEL_51:
  v14 = ndisAllocateConfigurationString(v21, v20, v19, &DestinationString);
  Status = v14;
  v15 = v14 == 0;
LABEL_26:
  if ( v15 )
  {
    p_DestinationString = &DestinationString;
LABEL_28:
    NdisOpenProtocolConfiguration(&Status, ConfigurationHandle, p_DestinationString);
LABEL_29:
    v14 = Status;
  }
LABEL_30:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( !v14 && *ConfigurationHandle )
    *((_QWORD *)*ConfigurationHandle + 1) = NdisHandle;
  if ( v3 )
    RtlFreeUnicodeString(&GuidString);
  if ( (unsigned __int8)byte_1C009960F >= 4u )
    WPP_SF_qD(0x1Cu, &WPP_7638764ccf46397224acdca5d7787036_Traceguids, (__int64)ConfigObject, v14);
  return v14;
}
