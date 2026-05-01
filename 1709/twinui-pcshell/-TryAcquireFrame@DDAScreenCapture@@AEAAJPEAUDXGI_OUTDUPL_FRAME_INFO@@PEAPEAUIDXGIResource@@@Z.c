/*
 * XREFs of ?TryAcquireFrame@DDAScreenCapture@@AEAAJPEAUDXGI_OUTDUPL_FRAME_INFO@@PEAPEAUIDXGIResource@@@Z @ 0x1800ED93C
 * Callers:
 *     ?GetScreenCaptureAsWicBitmapSource@DDAScreenCapture@@QEAAJPEAUIWICImagingFactory@@PEAPEAUIWICBitmapSource@@@Z @ 0x1800ED368 (-GetScreenCaptureAsWicBitmapSource@DDAScreenCapture@@QEAAJPEAUIWICImagingFactory@@PEAPEAUIWICBit.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?IsDesktopVisibleOnMonitor@DDAScreenCapture@@AEAAJPEA_N@Z @ 0x1800EDA70 (-IsDesktopVisibleOnMonitor@DDAScreenCapture@@AEAAJPEA_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DDAScreenCapture::TryAcquireFrame(
        DDAScreenCapture *this,
        struct DXGI_OUTDUPL_FRAME_INFO *a2,
        struct IDXGIResource **a3)
{
  bool v6; // di
  HWND DesktopWindow; // rax
  HRESULT v8; // eax
  int v9; // ebx
  int IsDesktopVisibleOnMonitor; // eax
  int v12; // eax
  unsigned int v13; // ebx
  BOOL pfProtected; // [rsp+30h] [rbp-28h] BYREF
  _DWORD pvParam[9]; // [rsp+34h] [rbp-24h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  bool v17; // [rsp+78h] [rbp+20h] BYREF

  v6 = 0;
  SystemParametersInfoW(0xAAu, 0, pvParam, 0);
  if ( !pvParam[0] )
  {
    DesktopWindow = GetDesktopWindow();
    pfProtected = 0;
    v8 = DRMIsWindowProtected(DesktopWindow, &pfProtected);
    v9 = v8;
    if ( v8 >= 0 )
    {
      v6 = pfProtected;
      if ( pfProtected )
      {
        v17 = 0;
        IsDesktopVisibleOnMonitor = DDAScreenCapture::IsDesktopVisibleOnMonitor(this, &v17);
        if ( IsDesktopVisibleOnMonitor < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0xFB,
            (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
            (const char *)(unsigned int)IsDesktopVisibleOnMonitor);
        v6 = v17;
      }
      v9 = 0;
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0xF4,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
        (const char *)(unsigned int)v8);
    }
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD8,
        (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
        (const char *)(unsigned int)v9);
    if ( v6 )
      return 2147942405LL;
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, struct DXGI_OUTDUPL_FRAME_INFO *, struct IDXGIResource **))(**(_QWORD **)this + 64LL))(
          *(_QWORD *)this,
          500LL,
          a2,
          a3);
  v13 = v12;
  if ( v12 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xDD,
      (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\ddascreencapture.cpp",
      (const char *)(unsigned int)v12);
  return v13;
}
