/*
 * XREFs of ndisOidPostIovNicSwitchParameters @ 0x1C006D560
 * Callers:
 *     <none>
 * Callees:
 *     ndisIovFindSwitchBySwitchId @ 0x1C00126D8 (ndisIovFindSwitchBySwitchId.c)
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     NdisCloseConfiguration @ 0x1C00B7A60 (NdisCloseConfiguration.c)
 *     NdisWriteConfiguration @ 0x1C00B7AD0 (NdisWriteConfiguration.c)
 *     NdisOpenConfigurationKeyByName @ 0x1C00B8220 (NdisOpenConfigurationKeyByName.c)
 *     NdisOpenConfigurationEx @ 0x1C00B9EE0 (NdisOpenConfigurationEx.c)
 */

void __fastcall ndisOidPostIovNicSwitchParameters(__int64 a1)
{
  __int64 v1; // rsi
  void *v3; // rdi
  __int64 v4; // rax
  int v5; // eax
  __int64 v6; // rbx
  __int64 *SwitchBySwitchId; // r13
  __int64 v8; // r8
  unsigned __int16 *v9; // rdx
  _OWORD *v10; // rcx
  _OWORD *v11; // rax
  __int128 v12; // xmm1
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+20h] [rbp-30h] BYREF
  struct _NDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+38h] [rbp-18h] BYREF
  int Status; // [rsp+80h] [rbp+30h] BYREF
  PVOID SubKeyHandle; // [rsp+88h] [rbp+38h] BYREF
  PVOID ConfigurationHandle; // [rsp+90h] [rbp+40h] BYREF

  v1 = *(_QWORD *)(a1 + 32);
  ConfigurationHandle = 0LL;
  SubKeyHandle = 0LL;
  v3 = *(void **)a1;
  memset(&ConfigObject, 0, sizeof(ConfigObject));
  v4 = v1;
  if ( (unsigned __int8)byte_1C0099621 >= 4u )
  {
    WPP_SF_qq(
      0x1Bu,
      &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids,
      v3,
      v1,
      *(_QWORD *)&ConfigObject.Header.Type,
      ConfigObject.NdisHandle,
      *(_QWORD *)&ConfigObject.Flags);
    v4 = *(_QWORD *)(a1 + 32);
  }
  if ( *(_DWORD *)(v4 + 4) == 1 )
  {
    if ( v3 )
    {
      v5 = *(_DWORD *)(a1 + 40);
      if ( !v5 || v5 == -1071448016 )
      {
        v6 = *(_QWORD *)(v1 + 40);
        SwitchBySwitchId = ndisIovFindSwitchBySwitchId((__int64)v3, *(_DWORD *)(v6 + 12));
        if ( SwitchBySwitchId )
        {
          ConfigObject.Flags = 0;
          ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
          ConfigObject.NdisHandle = v3;
          Status = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
          if ( !Status )
          {
            NdisOpenConfigurationKeyByName(&Status, ConfigurationHandle, &NicSwitchDefaultSwitchStr, &SubKeyHandle);
            if ( !Status && (*(_DWORD *)(v6 + 4) & 0x10000) != 0 )
            {
              v8 = 4LL;
              v9 = (unsigned __int16 *)(v6 + 16);
              v10 = (_OWORD *)((char *)SwitchBySwitchId + 116);
              v11 = (_OWORD *)(v6 + 16);
              do
              {
                *v10 = *v11;
                v10[1] = v11[1];
                v10[2] = v11[2];
                v10[3] = v11[3];
                v10[4] = v11[4];
                v10[5] = v11[5];
                v10[6] = v11[6];
                v10 += 8;
                v12 = v11[7];
                v11 += 8;
                *(v10 - 1) = v12;
                --v8;
              }
              while ( v8 );
              *(_DWORD *)v10 = *(_DWORD *)v11;
              ParameterValue.ParameterType = NdisParameterString;
              ParameterValue.ParameterData.StringData.Buffer = (wchar_t *)(v6 + 18);
              ParameterValue.ParameterData.StringData.Length = *v9;
              ParameterValue.ParameterData.StringData.MaximumLength = *v9 + 2;
              NdisWriteConfiguration(&Status, SubKeyHandle, &NicSwitchNameStr, &ParameterValue);
            }
            if ( SubKeyHandle )
              NdisCloseConfiguration(SubKeyHandle);
          }
          if ( ConfigurationHandle )
            NdisCloseConfiguration(ConfigurationHandle);
        }
      }
    }
  }
  if ( (unsigned __int8)byte_1C0099621 >= 4u )
    WPP_SF_qq(0x1Cu, &WPP_63e421b5d75535977b2a1141380f2a99_Traceguids, v3, v1);
}
