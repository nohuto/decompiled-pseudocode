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
  __int128 v14; // [rsp+40h] [rbp-C0h] BYREF
  in6_addr Address; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR v16[256]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v17[512]; // [rsp+260h] [rbp+160h] BYREF
  char v18; // [rsp+460h] [rbp+360h] BYREF

  AddressStringLength = 256;
  *(_QWORD *)((char *)&v14 + 2) = 0LL;
  v13 = 256;
  *((_QWORD *)&v14 + 1) = &v18;
  LODWORD(v14) = 33554942;
  RtlCopyUnicodeString((unsigned __int16 *)&v14, a2);
  if ( (_WORD)v14 == WORD1(v14) )
    return -1073740010;
  if ( RtlIpv6StringToAddressExW(*((PCWSTR *)&v14 + 1), &Address, &ScopeId, Port) < 0 || Port[0] )
  {
    if ( RtlIpv4StringToAddressExW(*((PCWSTR *)&v14 + 1), a3, (struct in_addr *)&ScopeId, Port) >= 0 && !Port[0] )
      goto LABEL_23;
    result = sub_180069CA0(0LL, *((_QWORD *)a2 + 1), *a2 >> 1, v17, &v13, 1);
    if ( result < 0 )
      return result;
    v7 = v13;
    if ( v13 )
    {
      v8 = (wint_t *)v17;
      v9 = v13;
      do
      {
        *v8 = towlower(*v8);
        ++v8;
        --v9;
      }
      while ( v9 );
    }
    result = RtlIdnToUnicode(0LL, v17, v7, v16, &AddressStringLength);
    if ( result < 0 )
      return result;
    if ( AddressStringLength != 256 )
    {
      if ( 2 * (unsigned __int64)AddressStringLength >= 0x200 )
        _report_rangecheckfailure();
      v16[AddressStringLength] = 0;
      return RtlCreateUnicodeString(a1, v16) == 0 ? 0xC0000017 : 0;
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
    result = RtlIpv4AddressToStringExW((const struct in_addr *)&ScopeId, 0, v16, &AddressStringLength);
    goto LABEL_24;
  }
  result = RtlIpv6AddressToStringExW(&Address, ScopeId, 0, v16, &AddressStringLength);
LABEL_24:
  if ( result >= 0 )
    return RtlCreateUnicodeString(a1, v16) == 0 ? 0xC0000017 : 0;
  return result;
}
