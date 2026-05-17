/*
 * XREFs of RtlIpv6StringToAddressExW @ 0x180068730
 * Callers:
 *     RtlCanonicalizeDomainName @ 0x180067E20 (RtlCanonicalizeDomainName.c)
 * Callees:
 *     RtlIpv6StringToAddressW @ 0x180068940 (RtlIpv6StringToAddressW.c)
 *     iswctype @ 0x18008EA80 (iswctype.c)
 */

LONG __stdcall RtlIpv6StringToAddressExW(PCWSTR AddressString, struct in6_addr *Address, PULONG ScopeId, PUSHORT Port)
{
  WCHAR v7; // bp
  const WCHAR *v8; // rcx
  unsigned __int16 v9; // si
  ULONG v10; // r14d
  bool v11; // r13
  LONG result; // eax
  PCWSTR v13; // rbx
  unsigned __int16 v14; // bp
  wint_t i; // di
  __int16 v16; // si
  wint_t v17; // di
  PCWSTR v18; // rcx
  __int16 v19; // ax
  bool v20; // zf
  __int16 v21; // ax
  PCWSTR v22; // [rsp+50h] [rbp+8h] BYREF

  if ( !AddressString || !Address || !ScopeId || !Port )
    return -1073741811;
  v7 = *AddressString;
  v8 = AddressString + 1;
  v9 = 0;
  if ( v7 != 91 )
    v8 = AddressString;
  v10 = 0;
  v11 = v7 == 91;
  if ( RtlIpv6StringToAddressW(v8, &v22, Address) < 0 )
    return -1073741811;
  v13 = v22;
  if ( *v22 == 37 )
  {
    v13 = v22 + 1;
    v17 = v22[1];
    if ( v17 >= 0x80u || !iswctype(v17, 4u) )
      return -1073741811;
    while ( v17 && v17 != 93 )
    {
      if ( v17 >= 0x80u || !iswctype(v17, 4u) || v17 + 2 * (5 * (unsigned __int64)v10 - 24) > 0xFFFFFFFF )
        return -1073741811;
      ++v13;
      v10 = v17 + 2 * (5 * v10 - 24);
      v17 = *v13;
    }
  }
  if ( *v13 == 93 )
  {
    if ( v7 != 91 )
      return -1073741811;
    ++v13;
    v11 = 0;
    if ( *v13 == 58 )
    {
      ++v13;
      v14 = 10;
      if ( *v13 == 48 )
      {
        v18 = v13 + 1;
        v14 = 8;
        v19 = v13[1] - 88;
        ++v13;
        if ( (v19 & 0xFFDF) == 0 )
        {
          v14 = 16;
          v13 = v18 + 1;
        }
      }
      for ( i = *v13; *v13; i = *v13 )
      {
        if ( i < 0x80u && iswctype(i, 4u) && i - 48 < v14 )
        {
          if ( i + v14 * (unsigned int)v9 - 48 > 0xFFFF )
            return -1073741811;
          v16 = v9 * v14 - 48;
        }
        else
        {
          if ( v14 != 16
            || i >= 0x80u
            || !iswctype(i, 0x80u)
            || i + 16 * v9 - (iswctype(i, 2u) != 0 ? 97 : 65) + 10 > 0xFFFFu )
          {
            return -1073741811;
          }
          v16 = 16 * v9;
          v20 = iswctype(i, 2u) == 0;
          v21 = 97;
          if ( v20 )
            v21 = 65;
          i = i - v21 + 10;
        }
        ++v13;
        v9 = i + v16;
      }
    }
  }
  if ( *v13 || v11 )
    return -1073741811;
  *Port = __ROR2__(v9, 8);
  result = 0;
  *ScopeId = v10;
  return result;
}
