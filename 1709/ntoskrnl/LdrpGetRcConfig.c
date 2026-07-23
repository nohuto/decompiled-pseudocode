/*
 * XREFs of LdrpGetRcConfig @ 0x1400DD0A8
 * Callers:
 *     LdrIsResItemExist @ 0x1400DD1E0 (LdrIsResItemExist.c)
 *     LdrpVerifyAlternateResourceModule @ 0x140132090 (LdrpVerifyAlternateResourceModule.c)
 * Callees:
 *     LdrpGetFromMUIMemCache @ 0x1400DBFB0 (LdrpGetFromMUIMemCache.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14012F768 (LdrpSetAlternateResourceModuleHandle.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     LdrpSearchResourceSection_U @ 0x1404D9C34 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x1404DA728 (LdrpAccessResourceDataNoMultipleLanguage.c)
 */

_DWORD *__fastcall LdrpGetRcConfig(PVOID BaseOfImage, __int64 a2, char a3, char a4)
{
  int v4; // esi
  _DWORD *result; // rax
  int v8; // eax
  _DWORD *v9; // rbx
  int v10; // [rsp+20h] [rbp-88h]
  _DWORD *v11; // [rsp+50h] [rbp-58h]
  __int64 v12; // [rsp+60h] [rbp-48h] BYREF
  _QWORD v13[3]; // [rsp+68h] [rbp-40h] BYREF

  v4 = -1;
  v11 = 0LL;
  if ( a4 )
  {
    result = LdrpGetFromMUIMemCache((unsigned __int64)BaseOfImage, 0, 0LL, 8);
    v11 = result;
    if ( result == (_DWORD *)-1LL )
      return 0LL;
    if ( result )
      return result;
  }
  v13[1] = 1LL;
  v13[2] = 0LL;
  v13[0] = L"MUI";
  v8 = LdrpSearchResourceSection_U((_DWORD)BaseOfImage, (unsigned int)v13, 3, 48, (__int64)&v12);
  if ( v8 < 0 )
    goto LABEL_12;
  v8 = LdrpAccessResourceDataNoMultipleLanguage(BaseOfImage);
  if ( v8 < 0 )
    goto LABEL_12;
  v9 = v11;
  if ( *v11 != -20054323 )
  {
    v8 = -1073741701;
LABEL_12:
    v9 = 0LL;
  }
  if ( a3 )
  {
    if ( v9 )
      v4 = (int)v9;
    LdrpSetAlternateResourceModuleHandle((_DWORD)BaseOfImage, 0, 0, v4, v10, 0, 2, v8, 0LL);
  }
  return v9;
}
