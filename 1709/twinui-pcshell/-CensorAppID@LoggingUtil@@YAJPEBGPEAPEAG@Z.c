/*
 * XREFs of ?CensorAppID@LoggingUtil@@YAJPEBGPEAPEAG@Z @ 0x1801CA1F8
 * Callers:
 *     ?StartActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@QEAAXPEBG@Z @ 0x1801CA8A4 (-StartActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@QEAAXPEBG@Z.c)
 * Callees:
 *     ??1?$unique_ptr@EU?$function_deleter@P6AXPEAX@Z$1?CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ @ 0x180079D78 (--1-$unique_ptr@EU-$function_deleter@P6AXPEAX@Z$1-CoTaskMemFree@@YAX0@Z@wil@@@wistd@@QEAA@XZ.c)
 *     ?make_cotaskmem_string_nothrow@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@1@PEBG_K@Z @ 0x180081B3C (-make_cotaskmem_string_nothrow@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEA.c)
 *     ?CensorWebAppId@AppIdCensorUtility@LoggingUtil@@CAXPEBG0PEAPEAG@Z @ 0x1801CA010 (-CensorWebAppId@AppIdCensorUtility@LoggingUtil@@CAXPEBG0PEAPEAG@Z.c)
 */

__int64 __fastcall LoggingUtil::CensorAppID(const WCHAR *this, unsigned __int16 **a2, unsigned __int16 **a3)
{
  unsigned int v3; // ebx
  const unsigned __int16 *v6; // rcx
  LPWSTR FileNameW; // rax
  unsigned __int16 **cotaskmem_string_nothrow; // rax
  unsigned __int16 *v9; // rcx
  void *v11; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  *a2 = 0LL;
  if ( this )
  {
    if ( FindStringOrdinal(0x100000u, this, -1, L"Microsoft.Edge.", 15, 0) < 0 )
    {
      if ( PathMatchSpecW(this, L"*.exe") )
        FileNameW = PathFindFileNameW(this);
      else
        FileNameW = (LPWSTR)this;
      cotaskmem_string_nothrow = (unsigned __int16 **)wil::make_cotaskmem_string_nothrow(&v11, FileNameW, -1LL);
      v9 = *cotaskmem_string_nothrow;
      *cotaskmem_string_nothrow = 0LL;
      *a2 = v9;
      wistd::unique_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>::~unique_ptr<unsigned char,wil::function_deleter<void (*)(void *),&void CoTaskMemFree(void *)>>(&v11);
    }
    else
    {
      LoggingUtil::AppIdCensorUtility::CensorWebAppId(v6, this, a2);
    }
  }
  if ( !*a2 && this )
    return (unsigned int)-2147467259;
  return v3;
}
