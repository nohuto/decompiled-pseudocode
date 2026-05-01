/*
 * XREFs of ?CreateDesktopWallpaperHWND@DesktopWallpaperHelpers@@SAJAEBUCRect@Geometry@@PEAPEAUHWND__@@@Z @ 0x1801C31E4
 * Callers:
 *     ?SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z @ 0x1800B8A6C (-SetBackgroundImage@CStartExperienceManager@@AEAAJPEAX@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180004240 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800061E4 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800DDBC0 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

__int64 __fastcall DesktopWallpaperHelpers::CreateDesktopWallpaperHWND(const struct Geometry::CRect *a1, HWND *a2)
{
  signed int LastError; // eax
  unsigned int v5; // ebx
  HWND Window; // rax
  signed int v8; // eax
  const char *v9; // r9
  unsigned int v10; // eax
  int v11; // [rsp+60h] [rbp-39h] BYREF
  int *v12; // [rsp+68h] [rbp-31h]
  int v13; // [rsp+70h] [rbp-29h]
  WNDCLASSEXW v14; // [rsp+80h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]
  int v16; // [rsp+108h] [rbp+6Fh] BYREF
  HWND hWnd; // [rsp+110h] [rbp+77h]

  *a2 = 0LL;
  memset(&v14, 0, sizeof(v14));
  v14.lpfnWndProc = DefWindowProcW;
  v14.cbSize = 80;
  v14.hInstance = &_ImageBase;
  v14.style = 0x4000;
  v14.hCursor = 0LL;
  v14.hbrBackground = 0LL;
  v14.lpszClassName = L"DesktopWallpaperManager";
  if ( !RegisterClassExW(&v14) )
  {
    LastError = GetLastError();
    v5 = (unsigned __int16)LastError | 0x80070000;
    if ( LastError <= 0 )
      v5 = LastError;
    if ( (v5 & 0x80000000) == 0 )
      v5 = -2147467259;
    if ( v5 != -2147023486 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1D,
        (__int64)"onecoreuap\\shell\\lib\\desktopwallpaperhelpers\\desktopwallpaperhelpers.cpp",
        (const char *)v5);
      return v5;
    }
    if ( FindWindowW(L"DesktopWallpaperManager", 0LL) )
    {
      v10 = wil::verify_hresult<long>(0x8000FFFF);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x28,
        (__int64)"onecoreuap\\shell\\lib\\desktopwallpaperhelpers\\desktopwallpaperhelpers.cpp",
        (const char *)v10);
      JUMPOUT(0x1801C340DLL);
    }
  }
  Window = CreateWindowExW(
             0x280080u,
             L"DesktopWallpaperManager",
             0LL,
             0x80880000,
             *(_DWORD *)a1,
             *((_DWORD *)a1 + 1),
             *((_DWORD *)a1 + 2) - *(_DWORD *)a1,
             *((_DWORD *)a1 + 3) - *((_DWORD *)a1 + 1),
             0LL,
             0LL,
             &_ImageBase,
             0LL);
  hWnd = Window;
  if ( !Window )
  {
    v8 = GetLastError();
    v5 = (unsigned __int16)v8 | 0x80070000;
    if ( v8 <= 0 )
      v5 = v8;
    if ( (v5 & 0x80000000) == 0 )
      v5 = -2147467259;
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x33,
      (__int64)"onecoreuap\\shell\\lib\\desktopwallpaperhelpers\\desktopwallpaperhelpers.cpp",
      (const char *)v5);
    return v5;
  }
  v16 = 1;
  v12 = &v16;
  v11 = 17;
  v13 = 4;
  if ( !(unsigned int)SetWindowCompositionAttribute(Window, &v11) )
  {
    v5 = wil::details::in1diag3::Return_GetLastError(
           retaddr,
           (void *)0x3E,
           (__int64)"onecoreuap\\shell\\lib\\desktopwallpaperhelpers\\desktopwallpaperhelpers.cpp",
           v9);
    DestroyWindow(hWnd);
    return v5;
  }
  ShowWindow(hWnd, 4);
  *a2 = hWnd;
  return 0LL;
}
