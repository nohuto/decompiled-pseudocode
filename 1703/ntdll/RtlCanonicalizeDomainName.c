/*
 * XREFs of RtlCanonicalizeDomainName @ 0x180069AC0
 * Callers:
 *     RtlEqualDomainName @ 0x180069A40 (RtlEqualDomainName.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x180044A30 (RtlCopyUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x180046500 (RtlCreateUnicodeString.c)
 *     RtlIpv6AddressToStringExW @ 0x1800603E0 (RtlIpv6AddressToStringExW.c)
 *     sub_180069CA0 @ 0x180069CA0 (sub_180069CA0.c)
 *     RtlIpv4StringToAddressExW @ 0x18006A050 (RtlIpv4StringToAddressExW.c)
 *     RtlIpv6StringToAddressExW @ 0x18006A3B0 (RtlIpv6StringToAddressExW.c)
 *     RtlIdnToUnicode @ 0x18006A930 (RtlIdnToUnicode.c)
 *     RtlIpv4AddressToStringExW @ 0x180082C20 (RtlIpv4AddressToStringExW.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     __report_rangecheckfailure @ 0x180096038 (__report_rangecheckfailure.c)
 *     towlower @ 0x18009B8C0 (towlower.c)
 */

NTSTATUS __fastcall RtlCanonicalizeDomainName(PUNICODE_STRING DestinationString, const UNICODE_STRING *a2, BOOLEAN a3)
{
  NTSTATUS result; // eax
  LONG v7; // edi
  WCHAR *v8; // rbx
  __int64 v9; // rsi
  USHORT Port[2]; // [rsp+30h] [rbp-D0h] BYREF
  LONG DestinationStringLength; // [rsp+34h] [rbp-CCh] BYREF
  ULONG ScopeId; // [rsp+38h] [rbp-C8h] BYREF
  LONG SourceStringLength; // [rsp+3Ch] [rbp-C4h] BYREF
  _UNICODE_STRING DestinationStringa; // [rsp+40h] [rbp-C0h] BYREF
  _WORD v15[6]; // [rsp+50h] [rbp-B0h] BYREF
  ULONG v16; // [rsp+5Ch] [rbp-A4h]
  WCHAR AddressString[256]; // [rsp+60h] [rbp-A0h] BYREF
  WCHAR SourceString[256]; // [rsp+260h] [rbp+160h] BYREF
  char v19; // [rsp+460h] [rbp+360h] BYREF

  DestinationStringLength = 256;
  *(_QWORD *)&DestinationStringa.MaximumLength = 0LL;
  SourceStringLength = 256;
  DestinationStringa.Buffer = (PWCH)&v19;
  *(_DWORD *)&DestinationStringa.Length = 33554942;
  RtlCopyUnicodeString(&DestinationStringa, a2);
  if ( DestinationStringa.Length == DestinationStringa.MaximumLength )
    return -1073740010;
  if ( RtlIpv6StringToAddressExW(DestinationStringa.Buffer, (struct in6_addr *)v15, &ScopeId, Port) < 0 || Port[0] )
  {
    if ( RtlIpv4StringToAddressExW(DestinationStringa.Buffer, a3, (struct in_addr *)&ScopeId, Port) >= 0 && !Port[0] )
      goto LABEL_25;
    result = sub_180069CA0(0LL, a2->Buffer, a2->Length >> 1, SourceString, &SourceStringLength, 1);
    if ( result < 0 )
      return result;
    v7 = SourceStringLength;
    if ( SourceStringLength )
    {
      v8 = SourceString;
      v9 = (unsigned int)SourceStringLength;
      do
      {
        *v8 = towlower(*v8);
        ++v8;
        --v9;
      }
      while ( v9 );
    }
    result = RtlIdnToUnicode(0, SourceString, v7, AddressString, &DestinationStringLength);
    if ( result < 0 )
      return result;
    if ( DestinationStringLength != 256 )
    {
      if ( 2 * (unsigned __int64)(unsigned int)DestinationStringLength >= 0x200 )
        _report_rangecheckfailure();
      AddressString[DestinationStringLength] = 0;
      return RtlCreateUnicodeString(DestinationString, AddressString) == 0 ? 0xC0000017 : 0;
    }
    return -1073740010;
  }
  if ( !v15[0] && !v15[1] && !v15[2] && !v15[3] && !v15[4] && v15[5] == 0xFFFF && !ScopeId )
  {
    ScopeId = v16;
LABEL_25:
    result = RtlIpv4AddressToStringExW(
               (const struct in_addr *)&ScopeId,
               0,
               AddressString,
               (PULONG)&DestinationStringLength);
    goto LABEL_26;
  }
  result = RtlIpv6AddressToStringExW(
             (const struct in6_addr *)v15,
             ScopeId,
             0,
             AddressString,
             (PULONG)&DestinationStringLength);
LABEL_26:
  if ( result >= 0 )
    return RtlCreateUnicodeString(DestinationString, AddressString) == 0 ? 0xC0000017 : 0;
  return result;
}
