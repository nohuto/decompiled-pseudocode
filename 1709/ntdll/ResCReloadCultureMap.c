/*
 * XREFs of ResCReloadCultureMap @ 0x180111780
 * Callers:
 *     ResCRuntimeGetCultureID @ 0x18010C014 (ResCRuntimeGetCultureID.c)
 *     ResCRuntimeViewLoadCultureMap @ 0x18010C144 (ResCRuntimeViewLoadCultureMap.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18001ACF0 (RtlSetLastWin32Error.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     _ResGetFileAttributesEx @ 0x1801101AC (_ResGetFileAttributesEx.c)
 *     ResCFreeCultureMap @ 0x180111554 (ResCFreeCultureMap.c)
 *     ResCLoadCultureMap @ 0x1801116E4 (ResCLoadCultureMap.c)
 */

unsigned __int64 __fastcall ResCReloadCultureMap(unsigned __int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rdi
  _BYTE v6[20]; // [rsp+28h] [rbp-40h] BYREF
  __int64 v7; // [rsp+3Ch] [rbp-2Ch]
  int v8; // [rsp+48h] [rbp-20h]

  if ( !a1 )
  {
    RtlSetLastWin32Error(0x57u);
    return a1;
  }
  v4 = *(_QWORD *)(a1 + 40);
  if ( !v4
    || !(unsigned int)ResGetFileAttributesEx(v4, a2, (__int64)v6)
    || *(_DWORD *)(a1 + 48) == v8 && *(_QWORD *)(a1 + 56) == v7 )
  {
    return a1;
  }
  v5 = ResCLoadCultureMap(*(_WORD **)(a1 + 40));
  if ( !v5 )
    return a1;
  ResCFreeCultureMap(a1);
  return v5;
}
