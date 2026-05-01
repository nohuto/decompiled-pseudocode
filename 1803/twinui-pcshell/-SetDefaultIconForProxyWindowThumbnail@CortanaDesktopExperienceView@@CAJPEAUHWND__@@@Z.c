/*
 * XREFs of ?SetDefaultIconForProxyWindowThumbnail@CortanaDesktopExperienceView@@CAJPEAUHWND__@@@Z @ 0x1801872AC
 * Callers:
 *     ?s_CortanaAltTabProxyWndProc@CortanaDesktopExperienceView@@CA_JPEAUHWND__@@I_K_J@Z @ 0x180188280 (-s_CortanaAltTabProxyWndProc@CortanaDesktopExperienceView@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?HICONFromBitmap@CortanaDesktopExperienceView@@CAPEAUHICON__@@PEAUHBITMAP__@@@Z @ 0x180185D20 (-HICONFromBitmap@CortanaDesktopExperienceView@@CAPEAUHICON__@@PEAUHBITMAP__@@@Z.c)
 *     ?LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00I_NPEBGPEAPEAUHBITMAP__@@@Z @ 0x180303EB4 (-LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00I_NPEBGPEAPEAUHBITMAP__@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaDesktopExperienceView::SetDefaultIconForProxyWindowThumbnail(HWND hWnd)
{
  HMONITOR v2; // rax
  int DpiForMonitor; // ebx
  __int64 v4; // rdx
  int ImmersiveIcon; // eax
  unsigned int v7; // edi
  HGDIOBJ v8; // rbx
  HICON v9; // rax
  struct tagSIZE v10; // [rsp+20h] [rbp-30h]
  HBITMAP *v11; // [rsp+38h] [rbp-18h]
  HGDIOBJ ho[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  POINT pt; // [rsp+78h] [rbp+28h] BYREF
  char v15; // [rsp+80h] [rbp+30h] BYREF
  struct tagSIZE v16; // [rsp+88h] [rbp+38h]

  ho[1] = (HGDIOBJ)-2LL;
  pt = 0LL;
  v2 = MonitorFromPoint(0LL, 1u);
  if ( !v2 )
  {
    DpiForMonitor = -2147418113;
    v4 = 2989LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)DpiForMonitor);
    return (unsigned int)DpiForMonitor;
  }
  DpiForMonitor = GetDpiForMonitor(v2, 0LL, &pt, &v15);
  if ( DpiForMonitor < 0 )
  {
    v4 = 2992LL;
    goto LABEL_3;
  }
  v16.cx = GetSystemMetrics(11);
  v16.cy = GetSystemMetrics(12);
  ho[0] = 0LL;
  LOBYTE(v10.cx) = 0;
  ImmersiveIcon = ImmersiveIcons::LoadImmersiveIcon(
                    *(ImmersiveIcons **)&v16,
                    v16,
                    v16,
                    (struct tagSIZE)(unsigned int)pt.x,
                    v10,
                    L"Microsoft.Windows.Cortana_cw5n1h2txyewy!CortanaUI",
                    (const unsigned __int16 *)ho,
                    v11);
  v7 = ImmersiveIcon;
  v8 = ho[0];
  if ( ImmersiveIcon >= 0 )
  {
    v9 = CortanaDesktopExperienceView::HICONFromBitmap((HBITMAP)ho[0]);
    if ( v9 )
      SendMessageW(hWnd, 0x80u, 0LL, (LPARAM)v9);
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBB4,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)ImmersiveIcon);
  }
  if ( v8 )
    DeleteObject(v8);
  return v7;
}
