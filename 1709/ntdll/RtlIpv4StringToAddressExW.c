/*
 * XREFs of RtlIpv4StringToAddressExW @ 0x18004EB00
 * Callers:
 *     RtlCanonicalizeDomainName @ 0x18004DF70 (RtlCanonicalizeDomainName.c)
 * Callees:
 *     RtlIpv4StringToAddressW @ 0x18004EC40 (RtlIpv4StringToAddressW.c)
 *     iswctype @ 0x180094520 (iswctype.c)
 */

LONG __stdcall RtlIpv4StringToAddressExW(PCWSTR AddressString, BOOLEAN Strict, struct in_addr *Address, PUSHORT Port)
{
  unsigned __int16 v6; // di
  LPCWSTR v7; // rbx
  unsigned __int16 v8; // bp
  WCHAR v9; // r15
  wint_t v10; // si
  __int16 v11; // di
  bool v12; // zf
  __int16 v13; // ax
  LPCWSTR v14; // [rsp+50h] [rbp+8h] BYREF

  if ( !AddressString || !Address || !Port || RtlIpv4StringToAddressW(AddressString, Strict, &v14, Address) < 0 )
    return -1073741811;
  if ( *v14 == 58 )
  {
    v6 = 0;
    v7 = v14 + 1;
    v8 = 10;
    if ( v14[1] == 48 )
    {
      v7 = v14 + 2;
      v8 = 8;
      if ( ((v14[2] - 88) & 0xFFDF) == 0 )
      {
        v8 = 16;
        v7 = v14 + 3;
      }
    }
    v9 = *v7;
    v10 = *v7;
    if ( !*v7 )
      return -1073741811;
    do
    {
      ++v7;
      if ( v10 < 0x80u && iswctype(v10, 4u) && (unsigned __int16)(v10 - 48) < v8 )
      {
        if ( v10 + v6 * (unsigned int)v8 - 48 > 0xFFFF )
          return -1073741811;
        v11 = v6 * v8 - 48;
      }
      else
      {
        if ( v8 != 16
          || v10 >= 0x80u
          || !iswctype(v10, 0x80u)
          || v10 + 16 * v6 - (iswctype(v10, 2u) != 0 ? 97 : 65) + 10 > 0xFFFFu )
        {
          return -1073741811;
        }
        v11 = 16 * v6;
        v12 = iswctype(v10, 2u) == 0;
        v13 = 97;
        if ( v12 )
          v13 = 65;
        v10 = v10 - v13 + 10;
      }
      v6 = v10 + v11;
      v10 = *v7;
    }
    while ( *v7 );
    if ( !v9 )
      return -1073741811;
  }
  else
  {
    if ( *v14 )
      return -1073741811;
    v6 = 0;
  }
  *Port = __ROR2__(v6, 8);
  return 0;
}
