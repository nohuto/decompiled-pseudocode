/*
 * XREFs of ndisUpdateHDSplitKeyword @ 0x1C00DE0A8
 * Callers:
 *     ndisOidPreSetHDSplitParameters @ 0x1C00DCD20 (ndisOidPreSetHDSplitParameters.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00245E0 (__security_check_cookie.c)
 *     memset @ 0x1C0025280 (memset.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 *     WPP_SF_qdD @ 0x1C00394CC (WPP_SF_qdD.c)
 *     NdisWriteConfiguration @ 0x1C00B0A40 (NdisWriteConfiguration.c)
 *     NdisCloseConfiguration @ 0x1C00B0D80 (NdisCloseConfiguration.c)
 *     NdisOpenConfigurationEx @ 0x1C00B3720 (NdisOpenConfigurationEx.c)
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
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qD(0x101u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, (__int64)a1, a2);
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
  if ( (unsigned __int8)byte_1C0098752 >= 4u )
    WPP_SF_qdD(0x102u, &WPP_ee6c48cc598f38db05b3783de794da88_Traceguids, (__int64)a1, a2, v4);
  return v4;
}
