/*
 * XREFs of ndisReadModernStandyWoLMagicPacketKeywords @ 0x1C00E8A0C
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00FF8D8 (ndisMInitializeAdapter.c)
 * Callees:
 *     NdisCloseConfiguration @ 0x1C00B0D80 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C00B30F0 (NdisReadConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C00B3720 (NdisOpenConfigurationEx.c)
 */

void __fastcall ndisReadModernStandyWoLMagicPacketKeywords(_DWORD *a1)
{
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+30h] [rbp-20h] BYREF
  int Status; // [rsp+60h] [rbp+10h] BYREF
  PVOID ConfigurationHandle; // [rsp+68h] [rbp+18h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+70h] [rbp+20h] BYREF

  ConfigObject.Flags = 0;
  ConfigObject.NdisHandle = a1;
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1311145;
  Status = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  if ( !Status )
  {
    NdisReadConfiguration(
      &Status,
      &ParameterValue,
      ConfigurationHandle,
      &ModernStandbyWoLMagicPacketStr,
      NdisParameterInteger);
    if ( !Status )
      a1[1435] = ParameterValue->ParameterData.IntegerData;
    NdisCloseConfiguration(ConfigurationHandle);
  }
}
