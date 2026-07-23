/*
 * XREFs of LdrInitSecurityCookie @ 0x180022E04
 * Callers:
 *     LdrpProcessMappedModule @ 0x180022BE8 (LdrpProcessMappedModule.c)
 *     InitSecurityCookie @ 0x1800D2800 (InitSecurityCookie.c)
 *     AvrfMiniLoadDll @ 0x1800DB92C (AvrfMiniLoadDll.c)
 * Callees:
 *     LdrpGenSecurityCookie @ 0x180021D2C (LdrpGenSecurityCookie.c)
 *     LdrpFetchAddressOfSecurityCookie @ 0x180022F34 (LdrpFetchAddressOfSecurityCookie.c)
 *     ZwProtectVirtualMemory @ 0x1800A0AC0 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall LdrInitSecurityCookie(int a1, __int64 a2, unsigned __int64 *a3, unsigned __int64 a4, _QWORD *a5)
{
  _DWORD *v5; // rax
  unsigned __int64 *AddressOfSecurityCookie; // rbx
  int v8; // esi
  unsigned __int64 v9; // rdi
  int v11; // [rsp+30h] [rbp-20h]
  __int64 v12; // [rsp+38h] [rbp-18h] BYREF
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-10h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-8h] BYREF
  ULONG NewProtect; // [rsp+80h] [rbp+30h] BYREF

  v5 = 0LL;
  v12 = 0LL;
  AddressOfSecurityCookie = a3;
  if ( a3 )
  {
    v8 = 1;
  }
  else
  {
    v8 = v11;
    AddressOfSecurityCookie = (unsigned __int64 *)LdrpFetchAddressOfSecurityCookie(a1, (__int64)&v12);
    v5 = (_DWORD *)v12;
  }
  if ( a5 )
    *a5 = v5;
  if ( v5 && *v5 >= 0x94u && (v5[36] & 0x800) != 0 )
    return 1LL;
  if ( AddressOfSecurityCookie && *AddressOfSecurityCookie == 0x2B992DDFA232LL )
  {
    v9 = (HIDWORD(a4) ^ ((unsigned __int64)(unsigned int)a4 << 16) ^ LdrpGenSecurityCookie((__int64)AddressOfSecurityCookie)) & 0xFFFFFFFFFFFFLL;
    if ( !v9 || v9 == *AddressOfSecurityCookie )
      v9 = 0x2B992DDFA233LL;
    if ( !v8 )
    {
      *AddressOfSecurityCookie = v9;
      return 1LL;
    }
    BaseAddress = AddressOfSecurityCookie;
    RegionSize = 8LL;
    if ( ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 4u, &NewProtect) >= 0 )
    {
      *AddressOfSecurityCookie = v9;
      ZwProtectVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, NewProtect, &NewProtect);
      return 1LL;
    }
  }
  return 0LL;
}
