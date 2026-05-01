/*
 * XREFs of ?SetDefaultIconForProxyWindowThumbnail@CortanaDesktopExperienceView@@CAJPEAUHWND__@@@Z @ 0x1800C87C0
 * Callers:
 *     ?s_CortanaAltTabProxyWndProc@CortanaDesktopExperienceView@@CA_JPEAUHWND__@@I_K_J@Z @ 0x1800C86F0 (-s_CortanaAltTabProxyWndProc@CortanaDesktopExperienceView@@CA_JPEAUHWND__@@I_K_J@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003FE0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00I_NPEBGPEAPEAUHBITMAP__@@@Z @ 0x18017EA78 (-LoadImmersiveIcon@ImmersiveIcons@@YAJUtagSIZE@@00I_NPEBGPEAPEAUHBITMAP__@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CortanaDesktopExperienceView::SetDefaultIconForProxyWindowThumbnail(HWND hWnd)
{
  HMONITOR v2; // rax
  unsigned int v3; // ebx
  int DpiForMonitor; // eax
  int ImmersiveIcon; // eax
  unsigned int v7; // edi
  HBITMAP v8; // rbx
  int SystemMetrics; // esi
  int v10; // edi
  HDC DC; // rax
  HBITMAP CompatibleBitmap; // rdi
  HICON v13; // rsi
  unsigned int v14; // [rsp+20h] [rbp-50h]
  bool v15; // [rsp+28h] [rbp-48h]
  HBITMAP *v16; // [rsp+38h] [rbp-38h]
  HGDIOBJ ho[2]; // [rsp+40h] [rbp-30h] BYREF
  ICONINFO piconinfo; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  POINT pt; // [rsp+A8h] [rbp+38h] BYREF
  char v21; // [rsp+B0h] [rbp+40h] BYREF
  struct tagSIZE v22; // [rsp+B8h] [rbp+48h]

  ho[1] = (HGDIOBJ)-2LL;
  pt = 0LL;
  v2 = MonitorFromPoint(0LL, 1u);
  if ( !v2 )
  {
    v3 = -2147418113;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAB6,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)0x8000FFFFLL);
    return v3;
  }
  DpiForMonitor = GetDpiForMonitor(v2, 0LL, &pt, &v21);
  v3 = DpiForMonitor;
  if ( DpiForMonitor < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xAB9,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)DpiForMonitor);
    return v3;
  }
  v22.cx = GetSystemMetrics(11);
  v22.cy = GetSystemMetrics(12);
  ho[0] = 0LL;
  ImmersiveIcon = ImmersiveIcons::LoadImmersiveIcon(
                    *(ImmersiveIcons **)&v22,
                    v22,
                    v22,
                    (struct tagSIZE)(unsigned int)pt.x,
                    v14,
                    v15,
                    (const unsigned __int16 *)ho,
                    v16);
  v7 = ImmersiveIcon;
  v8 = (HBITMAP)ho[0];
  if ( ImmersiveIcon >= 0 )
  {
    SystemMetrics = GetSystemMetrics(12);
    v10 = GetSystemMetrics(11);
    DC = GetDC(0LL);
    CompatibleBitmap = CreateCompatibleBitmap(DC, v10, SystemMetrics);
    if ( CompatibleBitmap )
    {
      *(_QWORD *)&piconinfo.xHotspot = 0LL;
      *(&piconinfo.yHotspot + 1) = 0;
      piconinfo.fIcon = 1;
      piconinfo.hbmColor = v8;
      piconinfo.hbmMask = CompatibleBitmap;
      v13 = CreateIconIndirect(&piconinfo);
      DeleteObject(CompatibleBitmap);
    }
    else
    {
      v13 = 0LL;
    }
    if ( v13 )
      SendMessageW(hWnd, 0x80u, 0LL, (LPARAM)v13);
    v7 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xABD,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)ImmersiveIcon);
  }
  if ( v8 )
    DeleteObject(v8);
  return v7;
}
