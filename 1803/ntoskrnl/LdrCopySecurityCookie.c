/*
 * XREFs of LdrCopySecurityCookie @ 0x14078B018
 * Callers:
 *     MiProcessLoadConfigForDriver @ 0x1405FA978 (MiProcessLoadConfigForDriver.c)
 * Callees:
 *     LdrpFetchAddressOfSecurityCookie @ 0x1405FAA90 (LdrpFetchAddressOfSecurityCookie.c)
 */

__int64 __fastcall LdrCopySecurityCookie(void *a1, unsigned int a2, __int64 a3, void *a4, unsigned int a5, _DWORD *a6)
{
  unsigned __int64 AddressOfSecurityCookie; // rax
  __int64 v8; // r8
  _QWORD *v9; // rbx
  _QWORD *v11; // rax
  int v12; // [rsp+50h] [rbp+18h] BYREF

  a6 = 0LL;
  AddressOfSecurityCookie = LdrpFetchAddressOfSecurityCookie(a1, a2, a3, &v12, (__int64 *)&a6);
  v9 = (_QWORD *)AddressOfSecurityCookie;
  if ( a6 && *a6 >= 0x94u && (a6[36] & 0x800) != 0 )
    return 1LL;
  if ( AddressOfSecurityCookie )
  {
    v11 = (_QWORD *)LdrpFetchAddressOfSecurityCookie(a4, a5, v8, 0LL, 0LL);
    if ( v11 )
    {
      *v9 = *v11;
      return 1LL;
    }
  }
  return 0LL;
}
