/*
 * XREFs of ?CensorWebAppId@AppIdCensorUtility@LoggingUtil@@CAXPEBG0PEAPEAG@Z @ 0x1801CA010
 * Callers:
 *     ?CensorAppID@LoggingUtil@@YAJPEBGPEAPEAG@Z @ 0x1801CA1F8 (-CensorAppID@LoggingUtil@@YAJPEBGPEAPEAG@Z.c)
 * Callees:
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800398C4 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?_Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x180116724 (-_Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

void __fastcall LoggingUtil::AppIdCensorUtility::CensorWebAppId(
        const unsigned __int16 *a1,
        const unsigned __int16 *a2,
        unsigned __int16 **a3)
{
  unsigned __int64 v5; // r14
  bool v6; // di
  wchar_t *v7; // rax
  WCHAR *v8; // rsi
  __int64 v9; // rbx
  signed int v10; // edi
  signed int LastError; // eax
  __int64 v12[3]; // [rsp+20h] [rbp-E0h] BYREF
  PWSTR pszUrl; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v14; // [rsp+40h] [rbp-C0h]
  __int64 v15; // [rsp+48h] [rbp-B8h]
  $2B4FDC4BF487E67F052937EE78FAE255 UrlComponents; // [rsp+50h] [rbp-B0h] BYREF
  _WORD v17[264]; // [rsp+C0h] [rbp-40h] BYREF

  memset(v12, 0, sizeof(v12));
  v5 = -1LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
    (__int64)v12,
    (__int64)L"Microsoft.Edge.",
    0xFFFFFFFFFFFFFFFFuLL);
  v6 = 0;
  v7 = wcsstr(a2, L"http");
  if ( !v7 )
  {
LABEL_25:
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
      v12,
      (__int64)L"FailedToParseWebDomain",
      0x16uLL);
    goto LABEL_26;
  }
  pszUrl = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
    (__int64)&pszUrl,
    (__int64)v7,
    0xFFFFFFFFFFFFFFFFuLL);
  v8 = pszUrl;
  if ( pszUrl && *pszUrl )
  {
    if ( UrlUnescapeW(pszUrl, 0LL, 0LL, 0x100000u) < 0 )
      goto LABEL_22;
    v9 = -1LL;
  }
  else
  {
    v9 = v14;
  }
  memset(&UrlComponents, 0, sizeof(UrlComponents));
  UrlComponents.dwStructSize = 104;
  memset(v17, 0, 0x202uLL);
  UrlComponents.dwHostNameLength = 257;
  UrlComponents.lpszHostName = v17;
  if ( v9 == -1 )
  {
    if ( v8 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( v8[v9] );
    }
    else
    {
      LODWORD(v9) = 0;
    }
  }
  if ( InternetCrackUrlW(v8, v9, 0, &UrlComponents) )
  {
    v10 = 0;
  }
  else
  {
    LastError = GetLastError();
    v10 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v10 = LastError;
    if ( v10 >= 0 )
      v10 = -2147467259;
  }
  v6 = v10 >= 0;
  if ( v6 )
  {
    do
      ++v5;
    while ( v17[v5] );
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(v12, (__int64)v17, v5);
  }
LABEL_22:
  if ( v8 )
    CoTaskMemFree(v8);
  if ( !v6 )
    goto LABEL_25;
LABEL_26:
  *a3 = (unsigned __int16 *)v12[0];
}
