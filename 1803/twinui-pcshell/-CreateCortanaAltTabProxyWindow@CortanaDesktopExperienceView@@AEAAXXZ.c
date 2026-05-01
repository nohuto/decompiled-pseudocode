/*
 * XREFs of ?CreateCortanaAltTabProxyWindow@CortanaDesktopExperienceView@@AEAAXXZ @ 0x1801855C4
 * Callers:
 *     ?SetExplicitDimissEnabled@CortanaDesktopExperienceView@@AEAAXE@Z @ 0x1800F2CE0 (-SetExplicitDimissEnabled@CortanaDesktopExperienceView@@AEAAXE@Z.c)
 * Callees:
 *     ?GetHwnd@CortanaDesktopExperienceView@@AEAAPEAUHWND__@@XZ @ 0x180061B24 (-GetHwnd@CortanaDesktopExperienceView@@AEAAPEAUHWND__@@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAUHWND__@@@Z @ 0x1800960F8 (-reset@-$unique_storage@U-$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1-DestroyWindow@@YAH0@ZU-$in.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAG$0A@$$T@details@wil@@@details@wil@@QEAAXPEAG@Z @ 0x1800F61B8 (-reset@-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTaskMemFree@@YAX0@ZU-$integral_con.c)
 *     ?GetNormalDisplayNameFromAppId@@YAJPEBGPEAPEAG@Z @ 0x180302394 (-GetNormalDisplayNameFromAppId@@YAJPEBGPEAPEAG@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CortanaDesktopExperienceView::CreateCortanaAltTabProxyWindow(HWND *this)
{
  HWND lpParam; // rdi
  const unsigned __int16 *v3; // rcx
  int NormalDisplayNameFromAppId; // eax
  HWND Window; // rax
  WNDCLASSEXW v6; // [rsp+78h] [rbp+7h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]
  LPCWSTR lpWindowName; // [rsp+D8h] [rbp+67h] BYREF

  lpParam = CortanaDesktopExperienceView::GetHwnd((CortanaDesktopExperienceView *)this);
  v6.cbSize = 80;
  memset_0(&v6.style, 0, 0x4CuLL);
  v6.style = 512;
  v6.lpfnWndProc = (WNDPROC)CortanaDesktopExperienceView::s_CortanaAltTabProxyWndProc;
  v6.hInstance = &_ImageBase;
  v6.lpszClassName = L"Shell_CortanaProxy";
  v6.cbWndExtra = 8;
  RegisterClassExW(&v6);
  lpWindowName = 0LL;
  wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,0,std::nullptr_t>>::reset(
    (void **)&lpWindowName,
    0LL);
  NormalDisplayNameFromAppId = GetNormalDisplayNameFromAppId(v3, (unsigned __int16 **)&lpWindowName);
  if ( NormalDisplayNameFromAppId < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      2934LL,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)NormalDisplayNameFromAppId);
  Window = CreateWindowExW(
             0x240000u,
             v6.lpszClassName,
             lpWindowName,
             0x80000000,
             0x80000000,
             0x80000000,
             0x80000000,
             0x80000000,
             0LL,
             0LL,
             &_ImageBase,
             lpParam);
  wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,0,std::nullptr_t>>::reset(
    this + 29,
    Window);
  if ( lpWindowName )
    CoTaskMemFree((LPVOID)lpWindowName);
}
