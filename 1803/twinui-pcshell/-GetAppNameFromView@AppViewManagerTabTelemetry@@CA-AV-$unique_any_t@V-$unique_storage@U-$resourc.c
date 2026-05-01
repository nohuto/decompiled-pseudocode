/*
 * XREFs of ?GetAppNameFromView@AppViewManagerTabTelemetry@@CA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x180120448
 * Callers:
 *     ?DragEnterForTabAppId@DragEnterForTab@AppViewManagerTabTelemetry@@QEAAXPEAUIApplicationView@@AEBU_GUID@@1I@Z @ 0x18011FA50 (-DragEnterForTabAppId@DragEnterForTab@AppViewManagerTabTelemetry@@QEAAXPEAUIApplicationView@@AEB.c)
 *     ?DragTabComplete@DragComplete@AppViewManagerTabTelemetry@@QEAAXPEAUIApplicationView@@AEBU_GUID@@@Z @ 0x1801201E8 (-DragTabComplete@DragComplete@AppViewManagerTabTelemetry@@QEAAXPEAUIApplicationView@@AEBU_GUID@@.c)
 *     ?DragViewComplete@DragComplete@AppViewManagerTabTelemetry@@QEAAXPEAUIApplicationView@@@Z @ 0x1801202C8 (-DragViewComplete@DragComplete@AppViewManagerTabTelemetry@@QEAAXPEAUIApplicationView@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     ?CensorAppID@SQM@@YAPEBGPEBG@Z @ 0x18009D860 (-CensorAppID@SQM@@YAPEBGPEBG@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x1800F61B8 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ??$make_unique_string_nothrow@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x18011D054 (--$make_unique_string_nothrow@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@.c)
 *     ?CensorAppIdBuffer@AppIdCensorUtility@LoggingUtil@@SAJPEBGPEAPEAG@Z @ 0x18011E3CC (-CensorAppIdBuffer@AppIdCensorUtility@LoggingUtil@@SAJPEBGPEAPEAG@Z.c)
 *     ?CensorWebAppId@AppIdCensorUtility@LoggingUtil@@CAXPEBG0PEAPEAG@Z @ 0x18011E464 (-CensorWebAppId@AppIdCensorUtility@LoggingUtil@@CAXPEBG0PEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=3
unsigned __int16 **__fastcall AppViewManagerTabTelemetry::GetAppNameFromView(unsigned __int16 **a1, __int64 a2)
{
  char *v4; // rbx
  const unsigned __int16 *v5; // rdx
  const unsigned __int16 *v6; // rcx
  char *v7; // rax
  unsigned __int16 *v9; // [rsp+38h] [rbp-D0h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v11; // [rsp+48h] [rbp-C0h] BYREF
  DWORD dwProcessId[2]; // [rsp+50h] [rbp-B8h] BYREF
  HWND hWnd[2]; // [rsp+58h] [rbp-B0h] BYREF
  WCHAR ExeName[264]; // [rsp+68h] [rbp-A0h] BYREF

  hWnd[1] = (HWND)-2LL;
  if ( !a2 )
  {
LABEL_17:
    *a1 = 0LL;
    return a1;
  }
  pv = 0LL;
  v9 = 0LL;
  v11 = 0LL;
  if ( (**(int (__fastcall ***)(__int64, GUID *, __int64 *))a2)(a2, &GUID_f3527610_c76d_4316_ac8e_28651acf3df3, &v11) >= 0 )
  {
    if ( (*(int (__fastcall **)(__int64, HWND *))(*(_QWORD *)v11 + 24LL))(v11, hWnd) >= 0
      && GetWindowThreadProcessId(hWnd[0], dwProcessId) )
    {
      v4 = (char *)OpenProcess(0x1000u, 0, dwProcessId[0]);
      if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      {
        dwProcessId[1] = 260;
        if ( QueryFullProcessImageNameW(v4, 0, ExeName, &dwProcessId[1]) )
        {
          wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
            (void **)&v9,
            0LL);
          v9 = 0LL;
          if ( FindStringOrdinal(0x100000u, ExeName, -1, L"Microsoft.Edge.", 15, 0) < 0 )
          {
            v7 = (char *)SQM::CensorAppID(ExeName, v5);
            wil::make_unique_string_nothrow<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>>>(
              &v9,
              v7,
              0xFFFFFFFFFFFFFFFFuLL);
          }
          else
          {
            LoggingUtil::AppIdCensorUtility::CensorWebAppId(v6, ExeName, &v9);
          }
          *a1 = v9;
          CloseHandle(v4);
          goto LABEL_11;
        }
      }
      if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v4);
    }
    goto LABEL_15;
  }
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
    &pv,
    0LL);
  if ( (*(int (__fastcall **)(__int64, LPVOID *))(*(_QWORD *)a2 + 136LL))(a2, &pv) < 0 )
  {
LABEL_15:
    wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v11);
    if ( pv )
      CoTaskMemFree(pv);
    goto LABEL_17;
  }
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&v9,
    0LL);
  LoggingUtil::AppIdCensorUtility::CensorAppIdBuffer((const unsigned __int16 *)pv, &v9);
  *a1 = v9;
LABEL_11:
  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v11);
  if ( pv )
    CoTaskMemFree(pv);
  return a1;
}
