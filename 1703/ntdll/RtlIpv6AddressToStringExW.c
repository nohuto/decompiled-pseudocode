/*
 * XREFs of RtlIpv6AddressToStringExW @ 0x1800603E0
 * Callers:
 *     RtlCanonicalizeDomainName @ 0x180069AC0 (RtlCanonicalizeDomainName.c)
 * Callees:
 *     RtlIpv6AddressToStringW @ 0x180060530 (RtlIpv6AddressToStringW.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 *     swprintf_s @ 0x1800A1530 (swprintf_s.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 */

LONG __stdcall RtlIpv6AddressToStringExW(
        const struct in6_addr *Address,
        ULONG ScopeId,
        USHORT Port,
        PWSTR AddressString,
        PULONG AddressStringLength)
{
  WCHAR *v9; // rdx
  wchar_t *v10; // rax
  wchar_t *v11; // rbx
  ULONG v12; // ebx
  bool v13; // cf
  wchar_t S[65]; // [rsp+20h] [rbp-D8h] BYREF
  _BYTE v16[14]; // [rsp+A2h] [rbp-56h] BYREF

  if ( !Address || !AddressStringLength || !AddressString && *AddressStringLength )
    return -1073741811;
  v9 = S;
  if ( Port )
    v9 = &S[swprintf_s(S, 0x41uLL, L"[")];
  v10 = RtlIpv6AddressToStringW(Address, v9);
  v11 = v10;
  if ( ScopeId )
    v11 = &v10[swprintf_s(v10, (v16 - (_BYTE *)v10) >> 1, L"%%%u", ScopeId)];
  if ( Port )
    v11 += swprintf_s(v11, (v16 - (_BYTE *)v11) >> 1, L"]:%u", (unsigned __int16)__ROR2__(Port, 8));
  v12 = v11 - S + 1;
  v13 = *AddressStringLength < v12;
  *AddressStringLength = v12;
  if ( v13 )
    return -1073741811;
  memmove(AddressString, S, 2LL * v12);
  return 0;
}
