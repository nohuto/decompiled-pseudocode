/*
 * XREFs of ?ParseAppUserModelId@@YAJPEBGPEAG_K12@Z @ 0x18008025C
 * Callers:
 *     ?ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z @ 0x18008018C (-ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z.c)
 *     ?LoadQuirksForApp@LegacyViewWrapper@@AEAAJXZ @ 0x1801E24EC (-LoadQuirksForApp@LegacyViewWrapper@@AEAAJXZ.c)
 *     ?GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z @ 0x1802FD8FC (-GetPackageFullNameFromAppId@CallerIdentity@@YAJPEBGPEAPEAG@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180080350 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 */

int __fastcall ParseAppUserModelId(
        const unsigned __int16 *a1,
        unsigned __int16 *a2,
        __int64 a3,
        unsigned __int16 *a4,
        unsigned __int64 a5)
{
  int v7; // ecx
  wchar_t *v8; // rax
  const unsigned __int16 *v9; // rsi
  int result; // eax
  wchar_t Str[136]; // [rsp+20h] [rbp-138h] BYREF

  if ( a2 )
    *a2 = 0;
  if ( a4 && a5 )
    *a4 = 0;
  v7 = StringCchCopyW(Str, 0x82uLL, a1);
  if ( v7 < 0 )
  {
    if ( v7 == -2147024774 )
      return -2147024809;
    return v7;
  }
  else
  {
    v8 = wcsrchr(Str, 0x21u);
    if ( Str[0] != 33 && v8 && (v9 = v8 + 1, v8[1]) )
    {
      *v8 = 0;
      result = 1;
      if ( !a2 || (result = StringCchCopyW(a2, 0x41uLL, Str), result >= 0) )
      {
        if ( a4 )
          return StringCchCopyW(a4, a5, v9);
      }
    }
    else
    {
      return -2147024809;
    }
  }
  return result;
}
