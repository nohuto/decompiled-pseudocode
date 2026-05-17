/*
 * XREFs of RtlCanonicalizeDomainName @ 0x180067E20
 * Callers:
 *     RtlEqualDomainName @ 0x180067DA0 (RtlEqualDomainName.c)
 * Callees:
 *     RtlIpv6AddressToStringExW @ 0x180006BC0 (RtlIpv6AddressToStringExW.c)
 *     RtlCopyUnicodeString @ 0x18001F9C0 (RtlCopyUnicodeString.c)
 *     RtlCreateUnicodeString @ 0x180038060 (RtlCreateUnicodeString.c)
 *     sub_180068000 @ 0x180068000 (sub_180068000.c)
 *     RtlIpv4StringToAddressExW @ 0x1800683C0 (RtlIpv4StringToAddressExW.c)
 *     RtlIpv6StringToAddressExW @ 0x180068730 (RtlIpv6StringToAddressExW.c)
 *     RtlIdnToUnicode @ 0x180068D10 (RtlIdnToUnicode.c)
 *     RtlIpv4AddressToStringExW @ 0x180079FD0 (RtlIpv4AddressToStringExW.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 *     __report_rangecheckfailure @ 0x18008B278 (__report_rangecheckfailure.c)
 *     towlower @ 0x180090BA0 (towlower.c)
 */

LONG __fastcall RtlCanonicalizeDomainName(__int64 a1, unsigned __int16 *a2, BOOLEAN a3)
{
  LONG result; // eax
  unsigned int v7; // edi
  wint_t *v8; // rbx
  __int64 v9; // rsi
  USHORT Port[2]; // [rsp+30h] [rbp-D0h] BYREF
  ULONG AddressStringLength; // [rsp+34h] [rbp-CCh] BYREF
  ULONG ScopeId; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v13; // [rsp+3Ch] [rbp-C4h] BYREF
  __int64 v14; // [rsp+40h] [rbp-C0h] BYREF
  PCWSTR AddressString; // [rsp+48h] [rbp-B8h]
  in6_addr Address; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR v17[256]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v18[512]; // [rsp+260h] [rbp+160h] BYREF
  char v19; // [rsp+460h] [rbp+360h] BYREF

  AddressStringLength = 256;
  v13 = 256;
  AddressString = (PCWSTR)&v19;
  v14 = 33554942LL;
  RtlCopyUnicodeString((unsigned __int16 *)&v14, a2);
  if ( (_WORD)v14 == WORD1(v14) )
    return -1073740010;
  if ( RtlIpv6StringToAddressExW(AddressString, &Address, &ScopeId, Port) < 0 || Port[0] )
  {
    if ( RtlIpv4StringToAddressExW(AddressString, a3, (struct in_addr *)&ScopeId, Port) >= 0 && !Port[0] )
      goto LABEL_23;
    result = sub_180068000(0LL, *((_QWORD *)a2 + 1), *a2 >> 1, v18, &v13, 1);
    if ( result < 0 )
      return result;
    v7 = v13;
    if ( v13 )
    {
      v8 = (wint_t *)v18;
      v9 = v13;
      do
      {
        *v8 = towlower(*v8);
        ++v8;
        --v9;
      }
      while ( v9 );
    }
    result = RtlIdnToUnicode(0LL, v18, v7, v17, &AddressStringLength);
    if ( result < 0 )
      return result;
    if ( AddressStringLength != 256 )
    {
      if ( 2 * (unsigned __int64)AddressStringLength >= 0x200 )
        _report_rangecheckfailure();
      v17[AddressStringLength] = 0;
      return RtlCreateUnicodeString(a1, v17) == 0 ? 0xC0000017 : 0;
    }
    return -1073740010;
  }
  if ( !Address.u.Word[0]
    && __PAIR32__(Address.u.Word[1], 0) == Address.u.Word[2]
    && __PAIR32__(Address.u.Word[3], 0) == Address.u.Word[4]
    && Address.u.Word[5] == 0xFFFF
    && !ScopeId )
  {
    ScopeId = *(_DWORD *)&Address.u.Word[6];
LABEL_23:
    result = RtlIpv4AddressToStringExW((const struct in_addr *)&ScopeId, 0, v17, &AddressStringLength);
    goto LABEL_24;
  }
  result = RtlIpv6AddressToStringExW(&Address, ScopeId, 0, v17, &AddressStringLength);
LABEL_24:
  if ( result >= 0 )
    return RtlCreateUnicodeString(a1, v17) == 0 ? 0xC0000017 : 0;
  return result;
}
