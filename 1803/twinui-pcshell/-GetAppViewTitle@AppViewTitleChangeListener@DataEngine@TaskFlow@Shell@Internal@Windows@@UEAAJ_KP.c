/*
 * XREFs of ?GetAppViewTitle@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJ_KPEAPEAUHSTRING__@@@Z @ 0x18001A030
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAppViewTitle@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@MEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@_K@Z @ 0x180019990 (-GetAppViewTitle@AppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@MEAA-AV-.c)
 *     ??$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z @ 0x18001A210 (--$Set@PEBG@HString@Wrappers@WRL@Microsoft@@QEAAJAEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18008C878 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::GetAppViewTitle(
        Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener *this,
        HWND a2,
        HSTRING *a3)
{
  char *v4; // rcx
  char *(__fastcall *v5)(__int64, char *, HWND); // rax
  char *AppViewTitle; // rax
  HSTRING v7; // rax
  const char *v8; // r9
  __int64 result; // rax
  HSTRING string[3]; // [rsp+20h] [rbp-48h] BYREF
  char v11[32]; // [rsp+38h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  string[2] = (HSTRING)-2LL;
  try
  {
    *a3 = 0LL;
    string[0] = 0LL;
    v4 = (char *)this - 24;
    v5 = *(char *(__fastcall **)(__int64, char *, HWND))(*(_QWORD *)v4 + 72LL);
    if ( v5 == Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::GetAppViewTitle )
      AppViewTitle = Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener::GetAppViewTitle(
                       (__int64)v4,
                       v11,
                       a2);
    else
      AppViewTitle = v5((__int64)v4, v11, a2);
    if ( *((_QWORD *)AppViewTitle + 3) >= 8uLL )
      AppViewTitle = *(char **)AppViewTitle;
    string[1] = (HSTRING)AppViewTitle;
    Microsoft::WRL::Wrappers::HString::Set<unsigned short const *>(string);
    std::wstring::_Tidy_deallocate(v11);
    v7 = string[0];
    string[0] = 0LL;
    *a3 = v7;
    WindowsDeleteString(0LL);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x57,
                           (unsigned int)"pcshell\\twinui\\taskflowbroker\\lib\\appviewtitlechangelistener.cpp",
                           v8);
  }
  return result;
}
