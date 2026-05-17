/*
 * XREFs of ResCOpenRegistryKey @ 0x18001A938
 * Callers:
 *     ResCKeInitRuntimeViewEx @ 0x18001AEC4 (ResCKeInitRuntimeViewEx.c)
 *     ResCGetRegistryLatestIndex @ 0x18010EC60 (ResCGetRegistryLatestIndex.c)
 * Callees:
 *     ?StringCchCatW@@YAJPEAG_KPEBG@Z @ 0x18001B2C0 (-StringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     RtlInitUnicodeStringEx @ 0x180035290 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 *     NtOpenKey @ 0x1800A0300 (NtOpenKey.c)
 *     memset @ 0x1800A6C80 (memset.c)
 */

__int64 __fastcall ResCOpenRegistryKey(_QWORD *a1, _DWORD *a2, const unsigned __int16 *a3)
{
  unsigned int v6; // ebx
  int v7; // eax
  _BYTE v9[16]; // [rsp+20h] [rbp-E0h] BYREF
  int v10; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v11; // [rsp+38h] [rbp-C8h]
  _BYTE *v12; // [rsp+40h] [rbp-C0h]
  int v13; // [rsp+48h] [rbp-B8h]
  __int128 v14; // [rsp+50h] [rbp-B0h]
  unsigned __int16 v15[8]; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v16; // [rsp+70h] [rbp-90h]
  int v17; // [rsp+80h] [rbp-80h]
  wchar_t v18; // [rsp+84h] [rbp-7Ch]
  _BYTE v19[484]; // [rsp+86h] [rbp-7Ah] BYREF

  v17 = *(_DWORD *)L"e\\";
  *(_OWORD *)v15 = *(_OWORD *)L"\\Registry\\Machine\\";
  v16 = *(_OWORD *)L"y\\Machine\\";
  v18 = aRegistryMachin_12[18];
  v6 = 0;
  memset(v19, 0, sizeof(v19));
  if ( a1 && a2 && a3 && StringCchCatW(v15, 0x105uLL, a3) >= 0 && (int)RtlInitUnicodeStringEx(v9, v15) >= 0 )
  {
    v10 = 48;
    v12 = v9;
    v11 = 0LL;
    v13 = 64;
    *a1 = 0LL;
    v14 = 0LL;
    v7 = NtOpenKey(a1, 131097LL, &v10);
    *a2 = 2;
    return v7 >= 0;
  }
  return v6;
}
