/*
 * XREFs of LdrpGetRcConfig @ 0x14013DB50
 * Callers:
 *     LdrIsResItemExist @ 0x14013D8D8 (LdrIsResItemExist.c)
 *     LdrpVerifyAlternateResourceModuleEx @ 0x14016DF18 (LdrpVerifyAlternateResourceModuleEx.c)
 * Callees:
 *     LdrpGetFromMUIMemCache @ 0x14013DE98 (LdrpGetFromMUIMemCache.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14016B088 (LdrpSetAlternateResourceModuleHandle.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x1405BB8F0 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpSearchResourceSection_U @ 0x1405BBB44 (LdrpSearchResourceSection_U.c)
 */

__int64 __fastcall LdrpGetRcConfig(PVOID BaseOfImage, __int64 a2, char a3, char a4)
{
  int v4; // esi
  __int64 result; // rax
  int v8; // eax
  _DWORD *v9; // rbx
  _DWORD *v10; // [rsp+40h] [rbp-58h]
  __int64 v11; // [rsp+50h] [rbp-48h] BYREF
  _QWORD v12[3]; // [rsp+58h] [rbp-40h] BYREF

  v4 = -1;
  v10 = 0LL;
  if ( a4 )
  {
    result = LdrpGetFromMUIMemCache(BaseOfImage);
    v10 = (_DWORD *)result;
    if ( result == -1 )
      return 0LL;
    if ( result )
      return result;
  }
  v12[1] = 1LL;
  v12[2] = 0LL;
  v12[0] = L"MUI";
  v8 = LdrpSearchResourceSection_U((_DWORD)BaseOfImage, (unsigned int)v12, 3, 48, (__int64)&v11);
  if ( v8 < 0 )
    goto LABEL_12;
  v8 = LdrpAccessResourceDataNoMultipleLanguage(BaseOfImage);
  if ( v8 < 0 )
    goto LABEL_12;
  v9 = v10;
  if ( *v10 != -20054323 )
  {
    v8 = -1073741701;
LABEL_12:
    v9 = 0LL;
  }
  if ( a3 )
  {
    if ( v9 )
      v4 = (int)v9;
    LdrpSetAlternateResourceModuleHandle((_DWORD)BaseOfImage, 0, 0, v4, 0, 2, v8, 0LL);
  }
  return (__int64)v9;
}
