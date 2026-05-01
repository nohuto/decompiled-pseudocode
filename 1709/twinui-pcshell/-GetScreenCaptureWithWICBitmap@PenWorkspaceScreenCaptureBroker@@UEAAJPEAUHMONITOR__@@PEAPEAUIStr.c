/*
 * XREFs of ?GetScreenCaptureWithWICBitmap@PenWorkspaceScreenCaptureBroker@@UEAAJPEAUHMONITOR__@@PEAPEAUIStream@@PEAPEAUIWICBitmapSource@@@Z @ 0x1800E7060
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetScreenCaptureInternal@PenWorkspaceScreenCaptureBroker@@AEAAJPEAUHMONITOR__@@PEAPEAUIStream@@PEAPEAUIWICBitmapSource@@@Z @ 0x1800E709C (-GetScreenCaptureInternal@PenWorkspaceScreenCaptureBroker@@AEAAJPEAUHMONITOR__@@PEAPEAUIStream@@.c)
 */

__int64 __fastcall PenWorkspaceScreenCaptureBroker::GetScreenCaptureWithWICBitmap(
        PenWorkspaceScreenCaptureBroker *this,
        HMONITOR a2,
        struct IStream **a3,
        struct IWICBitmapSource **a4)
{
  int ScreenCaptureInternal; // eax
  unsigned int v5; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  ScreenCaptureInternal = PenWorkspaceScreenCaptureBroker::GetScreenCaptureInternal(
                            (PenWorkspaceScreenCaptureBroker *)((char *)this - 40),
                            a2,
                            a3,
                            a4);
  v5 = ScreenCaptureInternal;
  if ( ScreenCaptureInternal >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x3F,
    (__int64)"pcshell\\twinui\\penworkspace\\broker\\lib\\screenshotbroker.cpp",
    (const char *)(unsigned int)ScreenCaptureInternal);
  return v5;
}
