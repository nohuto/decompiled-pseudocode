/*
 * XREFs of ?ndisIfGetFilterIfInfoFromRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@PEAU_GUID@@@Z @ 0x1C00B7890
 * Callers:
 *     ndisIfCreateFilterInterface @ 0x1C001CE90 (ndisIfCreateFilterInterface.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C003A8B8 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C0043E2C (WPP_SF_qqd.c)
 *     NdisCloseConfiguration @ 0x1C00B7A60 (NdisCloseConfiguration.c)
 *     NdisReadConfiguration @ 0x1C00B9A70 (NdisReadConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C00B9EE0 (NdisOpenConfigurationEx.c)
 */

__int64 __fastcall ndisIfGetFilterIfInfoFromRegistry(struct _NDIS_FILTER_BLOCK *a1, struct _GUID *a2)
{
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rax
  unsigned int v5; // ebx
  __int64 ParameterType; // [rsp+20h] [rbp-40h]
  UNICODE_STRING Keyword; // [rsp+30h] [rbp-30h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+40h] [rbp-20h] BYREF
  int Status; // [rsp+80h] [rbp+20h] BYREF
  PVOID ConfigurationHandle; // [rsp+90h] [rbp+30h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+98h] [rbp+38h] BYREF

  ConfigurationHandle = 0LL;
  Keyword.Buffer = L"InterfaceGuid";
  *(_DWORD *)&Keyword.Length = 1835034;
  if ( (unsigned __int8)byte_1C009961D >= 4u )
    WPP_SF_qq(0xCBu, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, a1, a2);
  ConfigObject.Flags = 0;
  FilterDriver = a1->FilterDriver;
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
  ConfigObject.NdisHandle = a1;
  ConfigObject.Flags = (FilterDriver->Bind._p->_t.FilterBindFlags & 2) != 0;
  Status = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  v5 = Status;
  if ( !Status )
  {
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &Keyword, NdisParameterBinary);
    v5 = Status;
    if ( !Status )
      *a2 = *(struct _GUID *)ParameterValue->ParameterData.StringData.Buffer;
  }
  if ( ConfigurationHandle )
    NdisCloseConfiguration(ConfigurationHandle);
  if ( (unsigned __int8)byte_1C009961D >= 4u )
  {
    LODWORD(ParameterType) = v5;
    WPP_SF_qqd(0xCCu, &WPP_9c0a9a3d131c324463ce0f9e1e19d9c6_Traceguids, a1, a2, ParameterType);
  }
  return v5;
}
