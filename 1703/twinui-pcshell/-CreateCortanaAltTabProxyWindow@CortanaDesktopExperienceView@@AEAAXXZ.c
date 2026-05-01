/*
 * XREFs of ?CreateCortanaAltTabProxyWindow@CortanaDesktopExperienceView@@AEAAXXZ @ 0x1800C85A4
 * Callers:
 *     ?SetExplicitDimissEnabled@CortanaDesktopExperienceView@@AEAAXE@Z @ 0x1800C8520 (-SetExplicitDimissEnabled@CortanaDesktopExperienceView@@AEAAXE@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetHwnd@CortanaDesktopExperienceView@@AEAAPEAUHWND__@@XZ @ 0x1800C8410 (-GetHwnd@CortanaDesktopExperienceView@@AEAAPEAUHWND__@@XZ.c)
 *     ?GetNormalDisplayNameFromAppId@@YAJPEBGPEAPEAG@Z @ 0x18017CA08 (-GetNormalDisplayNameFromAppId@@YAJPEBGPEAPEAG@Z.c)
 *     memset @ 0x180194E50 (memset.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CortanaDesktopExperienceView::CreateCortanaAltTabProxyWindow(HWND *this)
{
  HWND lpParam; // rbx
  const unsigned __int16 *v3; // rcx
  int NormalDisplayNameFromAppId; // eax
  HWND Window; // r14
  HWND v6; // rsi
  DWORD LastError; // ebx
  WNDCLASSEXW v8; // [rsp+78h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]
  LPCWSTR lpWindowName; // [rsp+E8h] [rbp+67h] BYREF

  lpParam = CortanaDesktopExperienceView::GetHwnd((CortanaDesktopExperienceView *)this);
  v8.cbSize = 80;
  memset(&v8.style, 0, 0x4CuLL);
  v8.style = 512;
  v8.lpfnWndProc = (WNDPROC)CortanaDesktopExperienceView::s_CortanaAltTabProxyWndProc;
  v8.hInstance = &_ImageBase;
  v8.lpszClassName = L"Shell_CortanaProxy";
  v8.cbWndExtra = 8;
  RegisterClassExW(&v8);
  lpWindowName = 0LL;
  NormalDisplayNameFromAppId = GetNormalDisplayNameFromAppId(v3, (unsigned __int16 **)&lpWindowName);
  if ( NormalDisplayNameFromAppId < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xA7F,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)NormalDisplayNameFromAppId);
  Window = CreateWindowExW(
             0x240000u,
             v8.lpszClassName,
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
  v6 = this[29];
  if ( v6 )
  {
    LastError = GetLastError();
    DestroyWindow(v6);
    SetLastError(LastError);
  }
  this[29] = Window;
  if ( lpWindowName )
    CoTaskMemFree((LPVOID)lpWindowName);
}
