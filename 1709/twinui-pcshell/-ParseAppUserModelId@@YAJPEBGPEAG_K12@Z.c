/*
 * XREFs of ?ParseAppUserModelId@@YAJPEBGPEAG_K12@Z @ 0x1801C0C08
 * Callers:
 *     ?LoadQuirksForApp@LegacyViewWrapper@@AEAAJXZ @ 0x18013ABF4 (-LoadQuirksForApp@LegacyViewWrapper@@AEAAJXZ.c)
 *     ?GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z @ 0x1801C1FB0 (-GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z.c)
 *     ?ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z @ 0x1801E12A4 (-ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180002A20 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

__int64 __fastcall ParseAppUserModelId(char *a1, char *a2, __int64 a3, char *a4, unsigned __int64 a5)
{
  int v7; // ecx
  wchar_t *v8; // rax
  char *v9; // rsi
  __int64 result; // rax
  wchar_t Str[136]; // [rsp+20h] [rbp-138h] BYREF

  if ( a2 )
    *(_WORD *)a2 = 0;
  if ( a4 && a5 )
    *(_WORD *)a4 = 0;
  v7 = StringCchCopyW((char *)Str, 130LL, a1);
  if ( v7 < 0 )
  {
    if ( v7 == -2147024774 )
      return (unsigned int)-2147024809;
    return (unsigned int)v7;
  }
  else
  {
    v8 = wcsrchr(Str, 0x21u);
    if ( Str[0] != 33 && v8 && (v9 = (char *)(v8 + 1), v8[1]) )
    {
      *v8 = 0;
      result = 1LL;
      if ( !a2 || (result = StringCchCopyW(a2, 65LL, (char *)Str), (int)result >= 0) )
      {
        if ( a4 )
          return StringCchCopyW(a4, a5, v9);
      }
    }
    else
    {
      return 2147942487LL;
    }
  }
  return result;
}
