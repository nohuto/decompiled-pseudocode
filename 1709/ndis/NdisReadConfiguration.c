/*
 * XREFs of NdisReadConfiguration @ 0x1C00B30F0
 * Callers:
 *     ndisIfUpdateInterfaceOnInitialize @ 0x1C0003C48 (ndisIfUpdateInterfaceOnInitialize.c)
 *     ndisCheckIfTypeMismatch @ 0x1C005ED8C (ndisCheckIfTypeMismatch.c)
 *     ndisReadMiniportSpecificPortAuthStates @ 0x1C00AF0D8 (ndisReadMiniportSpecificPortAuthStates.c)
 *     ndisMFindNumaNode @ 0x1C00AF754 (ndisMFindNumaNode.c)
 *     ?ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00AF7F8 (-ndisPDReadKeywords@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisIfGetFilterIfInfoFromRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_GUID@@@Z @ 0x1C00B0C98 (-ndisIfGetFilterIfInfoFromRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_GUID@@@Z.c)
 *     ndisInitializeConfiguration @ 0x1C00B2388 (ndisInitializeConfiguration.c)
 *     ndisReadRssKeywords @ 0x1C00B2810 (ndisReadRssKeywords.c)
 *     ndisReadPMAdminConfigState @ 0x1C00B2BF4 (ndisReadPMAdminConfigState.c)
 *     ndisReadOffloadRegistry @ 0x1C00B2C3C (ndisReadOffloadRegistry.c)
 *     NdisReadNetworkAddress @ 0x1C00C5FE0 (NdisReadNetworkAddress.c)
 *     ndisUpdateOffloadKeywords @ 0x1C00DE1F0 (ndisUpdateOffloadKeywords.c)
 *     NdisWdfReadConfiguration @ 0x1C00E3A50 (NdisWdfReadConfiguration.c)
 *     ndisGetMiniportInfo @ 0x1C00E7CCC (ndisGetMiniportInfo.c)
 *     ndisReadModernStandyWoLMagicPacketKeywords @ 0x1C00E8A0C (ndisReadModernStandyWoLMagicPacketKeywords.c)
 *     ndisIovReadSwitchConfiguration @ 0x1C00EFA0C (ndisIovReadSwitchConfiguration.c)
 *     ndisReadNicAutoPowerSaverTimeoutKeywords @ 0x1C00F2988 (ndisReadNicAutoPowerSaverTimeoutKeywords.c)
 *     ndisReadSSTimeoutKeywords @ 0x1C00F2A5C (ndisReadSSTimeoutKeywords.c)
 *     ndisIfInitialize @ 0x1C011BF80 (ndisIfInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C0024644 (WPP_SF_.c)
 *     memmove @ 0x1C0024F40 (memmove.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_Z @ 0x1C0040B38 (WPP_SF_Z.c)
 *     ndisReadUpperBindings @ 0x1C0050238 (ndisReadUpperBindings.c)
 *     ndisOpenProtocolSubkey @ 0x1C00B3BC4 (ndisOpenProtocolSubkey.c)
 *     ndisSaveParameters @ 0x1C00C2DC0 (ndisSaveParameters.c)
 *     ndisNDKGlobalDisabled @ 0x1C00EDECC (ndisNDKGlobalDisabled.c)
 *     ndisReadNDKGlobalFlags @ 0x1C00EE5A8 (ndisReadNDKGlobalFlags.c)
 */

void __stdcall NdisReadConfiguration(
        PNDIS_STATUS Status,
        PNDIS_CONFIGURATION_PARAMETER *ParameterValue,
        NDIS_HANDLE ConfigurationHandle,
        PNDIS_STRING Keyword,
        NDIS_PARAMETER_TYPE ParameterType)
{
  PNDIS_STATUS v7; // r12
  unsigned int v9; // edi
  unsigned int v10; // r15d
  NDIS_PARAMETER_TYPE v11; // r12d
  __int64 v12; // rdi
  NTSTATUS RegistryValues; // ebx
  char *PoolWithTag; // rax
  char *v15; // rbx
  PNDIS_CONFIGURATION_PARAMETER v16; // rcx
  __int64 Length; // r9
  const wchar_t *v18; // rcx
  wchar_t *Buffer; // r8
  __int64 v20; // rdx
  __int64 v21; // rdi
  unsigned int v22; // ecx
  unsigned int v23; // r12d
  unsigned __int8 v24; // r8
  int v25; // ecx
  bool v26; // cf
  struct _NDIS_CONFIGURATION_PARAMETER *v27; // rax
  _NDIS_M_DRIVER_BLOCK *v28; // rcx
  PVOID v29; // rdi
  int v31; // [rsp+38h] [rbp-59h] BYREF
  NTSTATUS v32; // [rsp+3Ch] [rbp-55h] BYREF
  PVOID v33; // [rsp+40h] [rbp-51h] BYREF
  PVOID P; // [rsp+48h] [rbp-49h]
  _UNICODE_STRING String; // [rsp+50h] [rbp-41h] BYREF
  _DWORD v36[2]; // [rsp+60h] [rbp-31h]
  char v37; // [rsp+68h] [rbp-29h]
  _BYTE v38[40]; // [rsp+70h] [rbp-21h] BYREF

  v7 = Status;
  memset(v38, 0, sizeof(v38));
  v9 = 0;
  v36[0] = 67305985;
  v33 = 0LL;
  v36[1] = 33620481;
  v37 = 3;
  if ( (unsigned __int8)byte_1C009874F >= 4u )
    WPP_SF_Z(0x12u, &WPP_fb5e2801bcb8364427405c45392b258b_Traceguids, &Keyword->Length);
  P = Keyword->Buffer;
  v32 = -1073741823;
  do
  {
    if ( RtlEqualUnicodeString(Keyword, (PCUNICODE_STRING)&unk_1C007E090 + v9, 1u) )
    {
      RegistryValues = 0;
      *ParameterValue = (PNDIS_CONFIGURATION_PARAMETER)((char *)&unk_1C00869C0 + 24 * v9);
      goto LABEL_25;
    }
    ++v9;
  }
  while ( v9 < 3 );
  v10 = 0;
  v11 = ParameterType;
  v12 = *(_QWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 8LL);
  if ( !v12 )
    goto LABEL_16;
  if ( RtlEqualUnicodeString(Keyword, &String2, 1u) )
  {
    Length = *(unsigned __int16 *)(v12 + 3832);
    v18 = L"MiniportName";
    Buffer = *(wchar_t **)(v12 + 3840);
    v20 = 1LL;
LABEL_45:
    RegistryValues = ndisSaveParameters(v18, v20, Buffer, Length, ConfigurationHandle, ParameterValue);
    goto LABEL_24;
  }
  if ( !RtlEqualUnicodeString(Keyword, &stru_1C007E0F0, 1u)
    || (*(_DWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 16LL) & 1) != 0 )
  {
    do
    {
LABEL_9:
      if ( RtlEqualUnicodeString(Keyword, (PCUNICODE_STRING)&unk_1C007E000 + v10, 1u) )
        break;
      ++v10;
    }
    while ( v10 < 9 );
    RegistryValues = v32;
    v11 = ParameterType;
    if ( v10 >= 9 )
    {
      if ( RtlEqualUnicodeString(Keyword, &stru_1C007E0E0, 1u) )
      {
        if ( ParameterType )
          goto LABEL_24;
        if ( (unsigned __int8)ndisNDKGlobalDisabled() )
          goto LABEL_70;
      }
      if ( RtlEqualUnicodeString(Keyword, &stru_1C007E0D0, 1u) )
      {
        if ( ParameterType )
          goto LABEL_24;
        dword_1C009A0C8 = ndisReadNDKGlobalFlags();
        v27 = (struct _NDIS_CONFIGURATION_PARAMETER *)&unk_1C009A0C0;
LABEL_71:
        RegistryValues = 0;
        *ParameterValue = v27;
        goto LABEL_24;
      }
      if ( RtlEqualUnicodeString(Keyword, &::Keyword, 1u) )
      {
        *(_DWORD *)(v12 + 568) |= 0x80u;
        *(_DWORD *)(v12 + 1872) |= 0x10000u;
      }
LABEL_16:
      if ( !LODWORD(WPP_MAIN_CB.Queue.Wcb.DeviceRoutine) && RtlEqualUnicodeString(Keyword, &FlowControlStr, 1u) )
      {
        if ( (unsigned __int8)byte_1C009874F >= 3u )
          WPP_SF_(0x13u, &WPP_fb5e2801bcb8364427405c45392b258b_Traceguids);
LABEL_70:
        v27 = (struct _NDIS_CONFIGURATION_PARAMETER *)&unk_1C00869A8;
        goto LABEL_71;
      }
      if ( (*(_DWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 16LL) & 2) == 0 || *((_QWORD *)ConfigurationHandle + 4) )
        RegistryValues = 0;
      else
        RegistryValues = ndisOpenProtocolSubkey(ConfigurationHandle);
      if ( RegistryValues >= 0 )
      {
        PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, Keyword->Length + 2LL, 0x2020444Eu);
        P = PoolWithTag;
        v15 = PoolWithTag;
        if ( !PoolWithTag )
        {
LABEL_29:
          *Status = -1073741823;
          goto LABEL_30;
        }
        memmove(PoolWithTag, Keyword->Buffer, Keyword->Length);
        *(_WORD *)&v15[Keyword->Length] = 0;
        *(_QWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 40LL) = v15;
        *(_QWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 48LL) = ParameterValue;
        RegistryValues = RtlQueryRegistryValuesEx(
                           0x40000000u,
                           *((PCWSTR *)ConfigurationHandle + 4),
                           (PRTL_QUERY_REGISTRY_TABLE)(*((_QWORD *)ConfigurationHandle + 2) + 24LL),
                           ConfigurationHandle,
                           0LL);
      }
      if ( !v12 )
      {
        if ( RegistryValues >= 0 )
        {
LABEL_33:
          v16 = *ParameterValue;
          if ( (*ParameterValue)->ParameterType == NdisParameterString )
          {
            if ( v11 )
            {
              if ( v11 == NdisParameterHexInteger )
              {
                RtlUnicodeStringToInteger((PCUNICODE_STRING)&v16->ParameterData, 0x10u, &v16->ParameterData.IntegerData);
                (*ParameterValue)->ParameterType = NdisParameterHexInteger;
              }
            }
            else
            {
              RtlUnicodeStringToInteger((PCUNICODE_STRING)&v16->ParameterData, 0xAu, &v16->ParameterData.IntegerData);
              (*ParameterValue)->ParameterType = NdisParameterInteger;
            }
          }
          goto LABEL_24;
        }
        if ( RtlEqualUnicodeString(Keyword, &stru_1C007E110, 1u) )
        {
          v28 = (_NDIS_M_DRIVER_BLOCK *)*((_QWORD *)ConfigurationHandle + 1);
          if ( v28 )
          {
            if ( v28->Header.Type == 2
              && v28->MajorNdisVersion >= 6u
              && !(unsigned int)ndisReadUpperBindings(v28, &v33, (unsigned int *)&v32) )
            {
              v29 = v33;
              RegistryValues = ndisSaveParameters(
                                 L"UpperBindings",
                                 7LL,
                                 v33,
                                 (unsigned int)v32,
                                 ConfigurationHandle,
                                 ParameterValue);
              if ( v29 )
                ExFreePoolWithTag(v29, 0);
            }
          }
        }
      }
      if ( RegistryValues < 0 )
        goto LABEL_24;
      goto LABEL_33;
    }
    v21 = *(_QWORD *)(v12 + 944);
    if ( !v21 )
      goto LABEL_24;
    v22 = *(_DWORD *)(v21 + 16);
    v23 = 0;
    if ( !v22 )
    {
LABEL_66:
      v26 = v23 < *(_DWORD *)(v21 + 16);
      v7 = Status;
      if ( !v26 )
        RegistryValues = -1073741823;
      goto LABEL_25;
    }
    v24 = *((_BYTE *)v36 + v10);
    while ( *(_BYTE *)(v21 + 20LL * v23 + 20) != v24 )
    {
      if ( ++v23 >= v22 )
        goto LABEL_66;
    }
    if ( v24 == 1 )
    {
      v31 = *(_DWORD *)(v21 + 20LL * v23 + 24);
      goto LABEL_65;
    }
    if ( v24 == 2 )
    {
      v25 = *(unsigned __int16 *)(v21 + 20LL * v23 + 24);
    }
    else
    {
      if ( (unsigned int)v24 - 3 > 1 )
      {
LABEL_65:
        RegistryValues = ndisSaveParameters(
                           *((_QWORD *)&unk_1C007E000 + 2 * v10 + 1),
                           4LL,
                           &v31,
                           4LL,
                           ConfigurationHandle,
                           ParameterValue);
        goto LABEL_66;
      }
      v25 = *(_DWORD *)(v21 + 20LL * v23 + 24);
    }
    v31 = v25;
    goto LABEL_65;
  }
  if ( (unsigned int)ParameterType <= NdisParameterHexInteger )
  {
    v20 = 4LL;
    Buffer = (wchar_t *)(v12 + 3736);
    Length = 4LL;
LABEL_44:
    v18 = L"BusType";
    goto LABEL_45;
  }
  if ( ParameterType != NdisParameterString )
    goto LABEL_9;
  *(_DWORD *)&String.Length = 2621440;
  String.Buffer = (wchar_t *)v38;
  RegistryValues = RtlIntegerToUnicodeString(*(_DWORD *)(v12 + 3736), 0xAu, &String);
  if ( !RegistryValues )
  {
    Length = String.Length;
    v20 = 1LL;
    Buffer = String.Buffer;
    goto LABEL_44;
  }
LABEL_24:
  v7 = Status;
LABEL_25:
  if ( P && P != Keyword->Buffer )
    ExFreePoolWithTag(P, 0);
  if ( RegistryValues < 0 )
    goto LABEL_29;
  *v7 = 0;
LABEL_30:
  if ( (unsigned __int8)byte_1C009874F >= 4u )
    WPP_SF_(0x14u, &WPP_fb5e2801bcb8364427405c45392b258b_Traceguids);
}
