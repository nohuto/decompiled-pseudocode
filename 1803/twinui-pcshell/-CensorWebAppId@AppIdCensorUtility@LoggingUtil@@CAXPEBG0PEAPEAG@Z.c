/*
 * XREFs of ?CensorWebAppId@AppIdCensorUtility@LoggingUtil@@CAXPEBG0PEAPEAG@Z @ 0x18011E464
 * Callers:
 *     ?CensorAppIdBuffer@AppIdCensorUtility@LoggingUtil@@SAJPEBGPEAPEAG@Z @ 0x18011E3CC (-CensorAppIdBuffer@AppIdCensorUtility@LoggingUtil@@SAJPEBGPEAPEAG@Z.c)
 *     ?GetAppNameFromView@AppViewManagerTabTelemetry@@CA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x180120448 (-GetAppNameFromView@AppViewManagerTabTelemetry@@CA-AV-$unique_any_t@V-$unique_storage@U-$resourc.c)
 * Callees:
 *     ?_Initialize@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x18001CF60 (-_Initialize@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_.c)
 *     ?_EnsureCount@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001D094 (-_EnsureCount@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18001D300 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     ?_Concat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z @ 0x1800F7C9C (-_Concat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAJPEBG_K@Z.c)
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18010A800 (-ResultFromKnownLastError@@YAJXZ.c)
 */

void __fastcall LoggingUtil::AppIdCensorUtility::CensorWebAppId(
        const unsigned __int16 *a1,
        const unsigned __int16 *a2,
        unsigned __int16 **a3)
{
  unsigned __int64 v5; // rsi
  bool v6; // di
  wchar_t *v7; // rax
  signed int Error; // edi
  unsigned __int16 *v9; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v10; // [rsp+28h] [rbp-D8h]
  __int64 v11; // [rsp+30h] [rbp-D0h]
  PWSTR pszUrl; // [rsp+38h] [rbp-C8h] BYREF
  DWORD dwUrlLength[2]; // [rsp+40h] [rbp-C0h]
  __int64 v14; // [rsp+48h] [rbp-B8h]
  $2B4FDC4BF487E67F052937EE78FAE255 UrlComponents; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v16[264]; // [rsp+C0h] [rbp-40h] BYREF

  v9 = 0LL;
  v10 = 0LL;
  v5 = -1LL;
  v11 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
    (__int64)&v9,
    (__int64)L"Microsoft.Edge.",
    0xFFFFFFFFFFFFFFFFuLL);
  v6 = 0;
  v7 = wcsstr(a2, L"http");
  if ( !v7 )
    goto LABEL_13;
  pszUrl = 0LL;
  *(_QWORD *)dwUrlLength = 0LL;
  v14 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Initialize(
    (__int64)&pszUrl,
    (__int64)v7,
    0xFFFFFFFFFFFFFFFFuLL);
  if ( pszUrl && *pszUrl )
  {
    if ( UrlUnescapeW(pszUrl, 0LL, 0LL, 0x100000u) < 0 )
      goto LABEL_12;
    *(_QWORD *)dwUrlLength = -1LL;
  }
  memset_0(&UrlComponents, 0, sizeof(UrlComponents));
  UrlComponents.dwStructSize = 104;
  memset_0(v16, 0, 0x202uLL);
  UrlComponents.dwHostNameLength = 257;
  UrlComponents.lpszHostName = v16;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_EnsureCount(&pszUrl);
  if ( InternetCrackUrlW(pszUrl, dwUrlLength[0], 0, &UrlComponents) )
    Error = 0;
  else
    Error = ResultFromKnownLastError();
  v6 = Error >= 0;
  if ( v6 )
  {
    do
      ++v5;
    while ( v16[v5] );
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(&v9, v16, v5);
  }
LABEL_12:
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&pszUrl);
  if ( !v6 )
LABEL_13:
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Concat(
      &v9,
      L"FailedToParseWebDomain",
      0x16uLL);
  *a3 = v9;
  v9 = 0LL;
  v11 = 0LL;
  v10 = 0LL;
  Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)&v9);
}
