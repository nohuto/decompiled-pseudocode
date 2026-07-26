/*
 * XREFs of NdisOpenConfigurationEx @ 0x1C00B3720
 * Callers:
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C0003C48 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisCheckIfTypeMismatch @ 0x1C005ED8C (ndisCheckIfTypeMismatch.c)
 *     ndisOidPostIovNicSwitchParameters @ 0x1C006CCF0 (ndisOidPostIovNicSwitchParameters.c)
 *     ndisIovCreateDefaultNicSwitch @ 0x1C00AD4D8 (ndisIovCreateDefaultNicSwitch.c)
 *     ndisReadMiniportDefaultPortAuthStates @ 0x1C00AF1A4 (ndisReadMiniportDefaultPortAuthStates.c)
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
 *     ndisReadNicAutoPowerSaverTimeoutKeywords @ 0x1C00F2988 (ndisReadNicAutoPowerSaverTimeoutKeywords.c)
 *     ndisReadSSTimeoutKeywords @ 0x1C00F2A5C (ndisReadSSTimeoutKeywords.c)
 *     ndisMInitializeAdapter @ 0x1C00FF8D8 (ndisMInitializeAdapter.c)
 * Callees:
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     WPP_SF_qqq @ 0x1C00395C4 (WPP_SF_qqq.c)
 *     NdisOpenProtocolConfiguration @ 0x1C00B3A10 (NdisOpenProtocolConfiguration.c)
 *     NdisOpenConfiguration @ 0x1C00B3CD0 (NdisOpenConfiguration.c)
 *     ndisAllocateConfigurationString @ 0x1C00E3B00 (ndisAllocateConfigurationString.c)
 *     ndisGetOrCreateFilterInstanceKey @ 0x1C00E5234 (ndisGetOrCreateFilterInstanceKey.c)
 */

NDIS_STATUS __stdcall NdisOpenConfigurationEx(
        PNDIS_CONFIGURATION_OBJECT ConfigObject,
        PNDIS_HANDLE ConfigurationHandle)
{
  unsigned __int8 *NdisHandle; // rdi
  char v3; // r12
  const UNICODE_STRING *v6; // r14
  unsigned __int16 Length; // dx
  unsigned __int16 v8; // cx
  unsigned int v9; // edx
  unsigned __int16 v10; // r8
  __int16 v11; // ax
  unsigned int v12; // ecx
  unsigned __int16 v13; // ax
  PVOID PoolWithTag; // rax
  int v15; // ebx
  bool v16; // zf
  _UNICODE_STRING *p_DestinationString; // r8
  void *v19; // r8
  const UNICODE_STRING *v20; // r8
  const UNICODE_STRING *v21; // rdx
  const UNICODE_STRING *v22; // rcx
  __int64 v23; // rdx
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
  if ( (unsigned __int8)byte_1C009874F >= 4u )
    WPP_SF_q(0x1Bu, &WPP_fb5e2801bcb8364427405c45392b258b_Traceguids, (__int64)ConfigObject);
  if ( ConfigObject->Header.Type != 0xA9 || ConfigObject->Header.Size < 0x14u || !ConfigObject->Header.Revision )
    return -1073741811;
  switch ( *NdisHandle )
  {
    case 2u:
      if ( NdisHandle[24] < 6u )
      {
        v15 = -1073741637;
        goto LABEL_31;
      }
      p_DestinationString = (_UNICODE_STRING *)(NdisHandle + 488);
      goto LABEL_29;
    case 3u:
      v22 = (const UNICODE_STRING *)(NdisHandle + 72);
      goto LABEL_51;
    case 4u:
      v22 = (const UNICODE_STRING *)(NdisHandle + 144);
LABEL_51:
      v20 = 0LL;
      v21 = 0LL;
      goto LABEL_52;
    case 5u:
      if ( (ConfigObject->Flags & 1) != 0 )
      {
        v23 = *((_QWORD *)NdisHandle + 2);
        if ( (*(_DWORD *)(*(_QWORD *)(v23 + 480) + 40LL) & 2) != 0 )
        {
          v15 = ndisGetOrCreateFilterInstanceKey(
                  (int)v23 + 144,
                  (int)NdisHandle,
                  *((_QWORD *)NdisHandle + 4),
                  0,
                  (__int64)&Status,
                  &DestinationString);
          Status = v15;
LABEL_26:
          v16 = v15 == 0;
          goto LABEL_27;
        }
      }
      else if ( !RtlStringFromGUID(
                   (const GUID *const)(*(_QWORD *)(*((_QWORD *)NdisHandle + 4) + 16LL) + 4032LL),
                   &GuidString) )
      {
        v3 = 1;
        v6 = (const UNICODE_STRING *)(*((_QWORD *)NdisHandle + 2) + 144LL);
        if ( (unsigned __int8)byte_1C009874F >= 4u )
          WPP_SF_qqq(0x1Du, &WPP_fb5e2801bcb8364427405c45392b258b_Traceguids, v6, &GuidString, &ndisFilterAdapterStr);
        Length = v6->Length;
        if ( (unsigned __int16)(Length + ndisParameterStr.Length) < Length )
          v8 = -1;
        else
          v8 = v6->Length + ndisParameterStr.Length;
        v9 = (unsigned __int16)(v6->Length + ndisParameterStr.Length) < Length ? 0xC0000095 : 0;
        if ( (unsigned __int16)(v8 + ndisFilterAdapterStr.Length) < v8 )
          v10 = -1;
        else
          v10 = v8 + ndisFilterAdapterStr.Length;
        v11 = v10 + GuidString.Length;
        v12 = (unsigned __int16)(v8 + ndisFilterAdapterStr.Length) < v8 ? 0xC0000095 : 0;
        if ( (unsigned __int16)(v10 + GuidString.Length) < v10 )
        {
          v11 = -1;
          v12 = -1073741675;
        }
        v13 = v11 + 2;
        DestinationString.Buffer = 0LL;
        DestinationString.MaximumLength = v13;
        DestinationString.Length = 0;
        if ( v12 | v9
          || (PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v13, 0x2020444Eu),
              (DestinationString.Buffer = (wchar_t *)PoolWithTag) == 0LL) )
        {
          v15 = -1073741670;
        }
        else
        {
          memset(PoolWithTag, 0, DestinationString.MaximumLength);
          RtlCopyUnicodeString(&DestinationString, v6);
          RtlAppendUnicodeStringToString(&DestinationString, &ndisParameterStr);
          RtlAppendUnicodeStringToString(&DestinationString, &ndisFilterAdapterStr);
          RtlAppendUnicodeStringToString(&DestinationString, &GuidString);
          v15 = 0;
        }
        if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
          WPP_SF_qqq(0x1Eu, &WPP_fb5e2801bcb8364427405c45392b258b_Traceguids, v6, &GuidString, &ndisFilterAdapterStr);
        Status = v15;
        goto LABEL_26;
      }
LABEL_55:
      v15 = -1073741823;
      goto LABEL_31;
    case 0xAu:
      v19 = NdisHandle;
      goto LABEL_44;
    case 0x11u:
      v19 = (void *)*((_QWORD *)NdisHandle + 503);
LABEL_44:
      NdisOpenConfiguration(&Status, ConfigurationHandle, v19);
      goto LABEL_30;
  }
  if ( *NdisHandle != 18 )
  {
    if ( *NdisHandle == 134 )
    {
      p_DestinationString = (_UNICODE_STRING *)*((_QWORD *)NdisHandle + 1);
      goto LABEL_29;
    }
    goto LABEL_55;
  }
  v20 = (const UNICODE_STRING *)&ndisAdapterStr;
  v21 = (const UNICODE_STRING *)(*((_QWORD *)NdisHandle + 2) + 3816LL);
  v22 = (const UNICODE_STRING *)(*((_QWORD *)NdisHandle + 3) + 72LL);
LABEL_52:
  v15 = ndisAllocateConfigurationString(v22, v21, v20, &DestinationString);
  Status = v15;
  v16 = v15 == 0;
LABEL_27:
  if ( v16 )
  {
    p_DestinationString = &DestinationString;
LABEL_29:
    NdisOpenProtocolConfiguration(&Status, ConfigurationHandle, p_DestinationString);
LABEL_30:
    v15 = Status;
  }
LABEL_31:
  if ( DestinationString.Buffer )
    ExFreePoolWithTag(DestinationString.Buffer, 0);
  if ( !v15 && *ConfigurationHandle )
    *((_QWORD *)*ConfigurationHandle + 1) = NdisHandle;
  if ( v3 )
    RtlFreeUnicodeString(&GuidString);
  if ( (unsigned __int8)byte_1C009874F >= 4u )
    WPP_SF_qD(0x1Cu, &WPP_fb5e2801bcb8364427405c45392b258b_Traceguids, (__int64)ConfigObject, v15);
  return v15;
}
