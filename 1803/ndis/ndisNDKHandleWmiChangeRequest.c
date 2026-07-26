/*
 * XREFs of ndisNDKHandleWmiChangeRequest @ 0x1C00F0BFC
 * Callers:
 *     ndisWmiChangeSingleInstance @ 0x1C00EEE20 (ndisWmiChangeSingleInstance.c)
 * Callees:
 *     ndisQuerySetMiniport @ 0x1C000AE40 (ndisQuerySetMiniport.c)
 *     __security_check_cookie @ 0x1C0025590 (__security_check_cookie.c)
 *     memset @ 0x1C0026180 (memset.c)
 *     NdisCloseConfiguration @ 0x1C00B7A60 (NdisCloseConfiguration.c)
 *     NdisWriteConfiguration @ 0x1C00B7AD0 (NdisWriteConfiguration.c)
 *     NdisOpenConfiguration @ 0x1C00B9D80 (NdisOpenConfiguration.c)
 */

__int64 __fastcall ndisNDKHandleWmiChangeRequest(_QWORD *a1, char a2)
{
  void *v2; // r8
  unsigned int SetMiniport; // eax
  bool v6; // zf
  const WCHAR *v7; // rdx
  unsigned int v8; // ecx
  char v10; // [rsp+30h] [rbp-D0h] BYREF
  int Status; // [rsp+38h] [rbp-C8h] BYREF
  PVOID ConfigurationHandle; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING Keyword; // [rsp+48h] [rbp-B8h] BYREF
  struct _NDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v15[248]; // [rsp+70h] [rbp-90h] BYREF

  v2 = (void *)a1[503];
  v10 = a2;
  Keyword.Buffer = L"*NetworkDirect";
  *(_DWORD *)&Keyword.Length = 1966108;
  NdisOpenConfiguration(&Status, &ConfigurationHandle, v2);
  SetMiniport = Status;
  v6 = Status == 0;
  if ( Status >= 0 )
  {
    ParameterValue.ParameterType = NdisParameterString;
    v7 = (const WCHAR *)L"1";
    if ( !a2 )
      v7 = L"0";
    RtlInitUnicodeString((PUNICODE_STRING)&ParameterValue.ParameterData, v7);
    NdisWriteConfiguration(&Status, ConfigurationHandle, &Keyword, &ParameterValue);
    NdisCloseConfiguration(ConfigurationHandle);
    SetMiniport = Status;
    v6 = Status == 0;
    if ( Status >= 0 )
    {
      memset(v15, 0, sizeof(v15));
      *(_DWORD *)&v15[88] |= 8u;
      *(_DWORD *)&v15[8] = 0;
      *(_QWORD *)&v15[104] = &ndisIntReqWmi;
      *(_DWORD *)&v15[4] = 1;
      *(_DWORD *)&v15[48] = 1;
      *(_QWORD *)&v15[40] = &v10;
      *(_DWORD *)v15 = 15466902;
      *(_DWORD *)&v15[32] = -66846207;
      SetMiniport = ndisQuerySetMiniport(a1, 0LL, (struct _NDIS_OID_REQUEST *)v15, 0LL, 0LL);
      v6 = SetMiniport == 0;
    }
  }
  if ( v6 )
    return SetMiniport;
  if ( SetMiniport == 259 )
    return SetMiniport;
  if ( SetMiniport == -2147483643 )
    return SetMiniport;
  v8 = -1073741823;
  switch ( SetMiniport )
  {
    case 0xC0000001:
    case 0xC000009A:
    case 0xC00000BB:
      return SetMiniport;
    case 0xC0010016:
      return (unsigned int)-1073741789;
    case 0xC0010014:
      return (unsigned int)-1073741306;
    case 0xC0010015:
      return (unsigned int)-1073741811;
  }
  return v8;
}
