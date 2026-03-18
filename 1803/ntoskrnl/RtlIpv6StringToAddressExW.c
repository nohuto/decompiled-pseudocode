/*
 * XREFs of RtlIpv6StringToAddressExW @ 0x1400C72B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlIpv6StringToAddressW @ 0x1400C7340 (RtlIpv6StringToAddressW.c)
 *     iswctype @ 0x14018B2C0 (iswctype.c)
 */

NTSTATUS __stdcall RtlIpv6StringToAddressExW(
        PCWSTR AddressString,
        struct in6_addr *Address,
        PULONG ScopeId,
        PUSHORT Port)
{
  WCHAR v7; // bp
  const WCHAR *v8; // rcx
  unsigned __int16 v9; // si
  ULONG v10; // r14d
  bool v11; // r13
  NTSTATUS result; // eax
  PCWSTR v13; // rbx
  wint_t v14; // di
  unsigned __int16 v15; // bp
  PCWSTR v16; // rcx
  __int16 v17; // ax
  wint_t i; // di
  __int16 v19; // si
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
    v14 = v22[1];
    if ( v14 >= 0x80u || !iswctype(v14, 4u) )
      return -1073741811;
    while ( v14 && v14 != 93 )
    {
      if ( v14 >= 0x80u || !iswctype(v14, 4u) || v14 + 2 * (5 * (unsigned __int64)v10 - 24) > 0xFFFFFFFF )
        return -1073741811;
      ++v13;
      v10 = v14 + 2 * (5 * v10 - 24);
      v14 = *v13;
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
      v15 = 10;
      if ( *v13 == 48 )
      {
        v16 = v13 + 1;
        v15 = 8;
        v17 = v13[1] - 88;
        ++v13;
        if ( (v17 & 0xFFDF) == 0 )
        {
          v15 = 16;
          v13 = v16 + 1;
        }
      }
      for ( i = *v13; *v13; i = *v13 )
      {
        if ( i < 0x80u && iswctype(i, 4u) && i - 48 < v15 )
        {
          if ( i + v15 * (unsigned int)v9 - 48 > 0xFFFF )
            return -1073741811;
          v19 = v9 * v15 - 48;
        }
        else
        {
          if ( v15 != 16
            || i >= 0x80u
            || !iswctype(i, 0x80u)
            || i + 16 * v9 - (iswctype(i, 2u) != 0 ? 97 : 65) + 10 > 0xFFFFu )
          {
            return -1073741811;
          }
          v19 = 16 * v9;
          v20 = iswctype(i, 2u) == 0;
          v21 = 97;
          if ( v20 )
            v21 = 65;
          i = i - v21 + 10;
        }
        ++v13;
        v9 = i + v19;
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
