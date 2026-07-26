/*
 * XREFs of ?ndisIfSetFilterIfInfoInRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@U_GUID@@@Z @ 0x1C00D0564
 * Callers:
 *     ndisIfCreateFilterInterface @ 0x1C001C71C (ndisIfCreateFilterInterface.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     NdisCloseConfiguration @ 0x1C00ADB10 (NdisCloseConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C00AF420 (NdisOpenConfigurationEx.c)
 *     NdisWriteConfiguration @ 0x1C00D9970 (NdisWriteConfiguration.c)
 */

__int64 __fastcall ndisIfSetFilterIfInfoInRegistry(struct _NDIS_FILTER_BLOCK *a1, wchar_t *a2)
{
  _NDIS_FILTER_DRIVER_BLOCK *FilterDriver; // rax
  unsigned int v5; // ebx
  int Status; // [rsp+20h] [rbp-50h] BYREF
  PVOID ConfigurationHandle; // [rsp+28h] [rbp-48h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+30h] [rbp-40h] BYREF
  UNICODE_STRING Keyword; // [rsp+48h] [rbp-28h] BYREF
  struct _NDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+58h] [rbp-18h] BYREF

  ConfigurationHandle = 0LL;
  Keyword.Buffer = L"InterfaceGuid";
  *(_DWORD *)&Keyword.Length = 1835034;
  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_q(0xCDu, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, (__int64)a1);
  ConfigObject.Flags = 0;
  FilterDriver = a1->FilterDriver;
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
  ConfigObject.NdisHandle = a1;
  ConfigObject.Flags = (FilterDriver->Bind._p->_t.FilterBindFlags & 2) != 0;
  Status = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  v5 = Status;
  if ( !Status )
  {
    ParameterValue.ParameterData.StringData.Length = 16;
    ParameterValue.ParameterType = NdisParameterBinary;
    ParameterValue.ParameterData.StringData.Buffer = a2;
    NdisWriteConfiguration(&Status, ConfigurationHandle, &Keyword, &ParameterValue);
    v5 = Status;
  }
  if ( ConfigurationHandle )
    NdisCloseConfiguration(ConfigurationHandle);
  if ( (unsigned __int8)byte_1C009261D >= 4u )
    WPP_SF_qD(0xCEu, &WPP_af1106a9a46b3e0e2b308003762cd579_Traceguids, (__int64)a1, v5);
  return v5;
}
