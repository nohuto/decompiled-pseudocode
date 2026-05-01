/*
 * XREFs of ?CreateCortanaAltTabProxyWindow@CortanaDesktopExperienceView@@AEAAXXZ @ 0x1800DA9DC
 * Callers:
 *     ?SetExplicitDimissEnabled@CortanaDesktopExperienceView@@AEAAXE@Z @ 0x1800DA958 (-SetExplicitDimissEnabled@CortanaDesktopExperienceView@@AEAAXE@Z.c)
 * Callees:
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180019098 (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIImmersiveMonitor@@@WRL@Microsoft@@@@YAPEAPEAXV-$ComPtrRef@V-$.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetHwnd@CortanaDesktopExperienceView@@AEAAPEAUHWND__@@XZ @ 0x1800DA848 (-GetHwnd@CortanaDesktopExperienceView@@AEAAPEAUHWND__@@XZ.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CortanaDesktopExperienceView::CreateCortanaAltTabProxyWindow(HWND *this)
{
  HWND Hwnd; // rsi
  __int64 *ppv; // rax
  HRESULT v4; // ebx
  __int64 v5; // rcx
  HWND Window; // rsi
  HWND v7; // rdi
  DWORD LastError; // ebx
  WNDCLASSEXW v9; // [rsp+78h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]
  LPVOID pv; // [rsp+F8h] [rbp+67h] BYREF
  __int64 v12; // [rsp+100h] [rbp+6Fh] BYREF

  Hwnd = CortanaDesktopExperienceView::GetHwnd((CortanaDesktopExperienceView *)this);
  v9.cbSize = 80;
  memset(&v9.style, 0, 0x4CuLL);
  v9.style = 512;
  v9.lpfnWndProc = (WNDPROC)CortanaDesktopExperienceView::s_CortanaAltTabProxyWndProc;
  v9.hInstance = &_ImageBase;
  v9.lpszClassName = L"Shell_CortanaProxy";
  v9.cbWndExtra = 8;
  RegisterClassExW(&v9);
  pv = 0LL;
  v12 = 0LL;
  ppv = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IImmersiveMonitor>>(&v12);
  v4 = SHCreateItemInKnownFolder(
         &FOLDERID_AppsFolder,
         0x4100u,
         L"Microsoft.Windows.Cortana_cw5n1h2txyewy!CortanaUI",
         &GUID_43826d1e_e718_42ee_bc55_a1e261c37bfe,
         (void **)ppv);
  if ( v4 >= 0 )
    v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, LPVOID *))(*(_QWORD *)v12 + 40LL))(v12, 0LL, &pv);
  v5 = v12;
  if ( v12 )
  {
    v12 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xAF9,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)v4);
  Window = CreateWindowExW(
             0x240000u,
             v9.lpszClassName,
             (LPCWSTR)pv,
             0x80000000,
             0x80000000,
             0x80000000,
             0x80000000,
             0x80000000,
             0LL,
             0LL,
             &_ImageBase,
             Hwnd);
  v7 = this[29];
  if ( v7 )
  {
    LastError = GetLastError();
    DestroyWindow(v7);
    SetLastError(LastError);
  }
  this[29] = Window;
  if ( pv )
    CoTaskMemFree(pv);
}
