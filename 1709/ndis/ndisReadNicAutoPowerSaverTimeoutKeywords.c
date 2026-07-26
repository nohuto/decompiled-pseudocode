/*
 * XREFs of ndisReadNicAutoPowerSaverTimeoutKeywords @ 0x1C00F2988
 * Callers:
 *     ndisSelectiveSuspendInitialize @ 0x1C00F2CD0 (ndisSelectiveSuspendInitialize.c)
 * Callees:
 *     WPP_SF_dq @ 0x1C004B014 (WPP_SF_dq.c)
 *     NdisCloseConfiguration @ 0x1C00B0D80 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C00B30F0 (NdisReadConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C00B3720 (NdisOpenConfigurationEx.c)
 */

__int64 __fastcall ndisReadNicAutoPowerSaverTimeoutKeywords(_QWORD *a1)
{
  NDIS_STATUS v2; // eax
  __int64 result; // rax
  unsigned int IntegerData; // edi
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+30h] [rbp-20h] BYREF
  int Status; // [rsp+70h] [rbp+20h] BYREF
  PVOID ConfigurationHandle; // [rsp+78h] [rbp+28h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+80h] [rbp+30h] BYREF

  *(_QWORD *)&ConfigObject.Header.Revision = 0LL;
  ConfigObject.NdisHandle = a1;
  *((_BYTE *)&ConfigObject.Flags + 4) = 0;
  ConfigObject.Flags = 0;
  *(_WORD *)((char *)&ConfigObject.Flags + 5) = 0;
  *((_BYTE *)&ConfigObject.Flags + 7) = 0;
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1311145;
  v2 = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  Status = v2;
  if ( v2 )
  {
    if ( (unsigned __int8)byte_1C0098756 >= 2u )
      WPP_SF_dq(0x27u, &WPP_72bd2a87b7f83093ce8d5792cc2b4ff7_Traceguids, v2, a1);
    result = a1[560];
    *(_DWORD *)(result + 8) = 3000;
  }
  else
  {
    IntegerData = 3;
    NdisReadConfiguration(
      &Status,
      &ParameterValue,
      ConfigurationHandle,
      &NicAutoPowerSaverTimeoutStr,
      NdisParameterInteger);
    if ( !Status && ParameterValue->ParameterData.IntegerData - 1 <= 0x3B )
      IntegerData = ParameterValue->ParameterData.IntegerData;
    NdisCloseConfiguration(ConfigurationHandle);
    result = a1[560];
    *(_DWORD *)(result + 8) = 1000 * IntegerData;
  }
  return result;
}
