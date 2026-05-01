/*
 * XREFs of ?CensorAppIdBuffer@AppIdCensorUtility@LoggingUtil@@SAJPEBGPEAPEAG@Z @ 0x18011E3CC
 * Callers:
 *     ?GetAppNameFromView@AppViewManagerTabTelemetry@@CA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x180120448 (-GetAppNameFromView@AppViewManagerTabTelemetry@@CA-AV-$unique_any_t@V-$unique_storage@U-$resourc.c)
 *     ?StartActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@QEAAXPEBG@Z @ 0x1803047E8 (-StartActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@QEAAXPEBG@Z.c)
 * Callees:
 *     ?CensorAppID@SQM@@YAPEBGPEBG@Z @ 0x18009D860 (-CensorAppID@SQM@@YAPEBGPEBG@Z.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x18011D054 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?CensorWebAppId@AppIdCensorUtility@LoggingUtil@@CAXPEBG0PEAPEAG@Z @ 0x18011E464 (-CensorWebAppId@AppIdCensorUtility@LoggingUtil@@CAXPEBG0PEAPEAG@Z.c)
 */

__int64 __fastcall LoggingUtil::AppIdCensorUtility::CensorAppIdBuffer(
        const unsigned __int16 *a1,
        unsigned __int16 **a2)
{
  unsigned int v2; // ebx
  const unsigned __int16 *v5; // rdx
  const unsigned __int16 *v6; // rcx
  char *v7; // rax
  unsigned __int16 *v9; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  *a2 = 0LL;
  if ( a1 )
  {
    if ( FindStringOrdinal(0x100000u, a1, -1, L"Microsoft.Edge.", 15, 0) < 0 )
    {
      v7 = (char *)SQM::CensorAppID(a1, v5);
      wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>>(
        &v9,
        v7,
        0xFFFFFFFFFFFFFFFFuLL);
      *a2 = v9;
    }
    else
    {
      LoggingUtil::AppIdCensorUtility::CensorWebAppId(v6, a1, a2);
    }
  }
  if ( !*a2 && a1 )
    return (unsigned int)-2147467259;
  return v2;
}
