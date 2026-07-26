/*
 * XREFs of ndisUpdateHDSplitKeyword @ 0x1C00D38B8
 * Callers:
 *     ndisOidPreSetHDSplitParameters @ 0x1C00D2500 (ndisOidPreSetHDSplitParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0028150 (__security_check_cookie.c)
 *     memset @ 0x1C0028B80 (memset.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 *     WPP_SF_qdD @ 0x1C0045B1C (WPP_SF_qdD.c)
 *     NdisCloseConfiguration @ 0x1C00ADB10 (NdisCloseConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C00AF420 (NdisOpenConfigurationEx.c)
 *     NdisWriteConfiguration @ 0x1C00D9970 (NdisWriteConfiguration.c)
 */

__int64 __fastcall ndisUpdateHDSplitKeyword(void *a1, ULONG a2)
{
  unsigned int v4; // ebx
  int Status; // [rsp+30h] [rbp-49h] BYREF
  PVOID ConfigurationHandle; // [rsp+38h] [rbp-41h] BYREF
  _UNICODE_STRING String; // [rsp+40h] [rbp-39h] BYREF
  struct _NDIS_CONFIGURATION_OBJECT ConfigObject; // [rsp+50h] [rbp-29h] BYREF
  struct _NDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+68h] [rbp-11h] BYREF
  _BYTE v11[40]; // [rsp+80h] [rbp+7h] BYREF

  ConfigurationHandle = 0LL;
  *(_DWORD *)&String.Length = 0;
  String.Buffer = 0LL;
  memset(v11, 0, sizeof(v11));
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qD(0xEFu, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, (__int64)a1, a2);
  ConfigObject.Header = (_NDIS_OBJECT_HEADER)1573289;
  ConfigObject.NdisHandle = a1;
  ConfigObject.Flags = 0;
  Status = NdisOpenConfigurationEx(&ConfigObject, &ConfigurationHandle);
  v4 = Status;
  if ( !Status )
  {
    String.MaximumLength = 40;
    String.Buffer = (wchar_t *)v11;
    if ( RtlIntegerToUnicodeString(a2, 0xAu, &String) )
    {
      v4 = -1073741823;
    }
    else
    {
      ParameterValue.ParameterType = NdisParameterString;
      ParameterValue.ParameterData.StringData = String;
      NdisWriteConfiguration(&Status, ConfigurationHandle, &HDSplitStr, &ParameterValue);
      v4 = Status;
    }
  }
  if ( ConfigurationHandle )
    NdisCloseConfiguration(ConfigurationHandle);
  if ( (unsigned __int8)byte_1C0092612 >= 4u )
    WPP_SF_qdD(0xF0u, &WPP_9ab300306c87378029e09c5cce5d7151_Traceguids, (__int64)a1, a2, v4);
  return v4;
}
