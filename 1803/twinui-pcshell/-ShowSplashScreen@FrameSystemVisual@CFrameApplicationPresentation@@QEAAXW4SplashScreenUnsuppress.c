/*
 * XREFs of ?ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppressionReason@2@@Z @ 0x1800F9780
 * Callers:
 *     ?_SuppressSplashScreenIfAppropriate@CFrameApplicationPresentation@@AEAAXXZ @ 0x1800130C4 (-_SuppressSplashScreenIfAppropriate@CFrameApplicationPresentation@@AEAAXXZ.c)
 *     ?SetChromeOptions@CFrameApplicationPresentation@@UEAAJUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@Z @ 0x180013EA0 (-SetChromeOptions@CFrameApplicationPresentation@@UEAAJUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@Z.c)
 *     ?SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z @ 0x180014950 (-SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z.c)
 * Callees:
 *     ?Stop@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAXK@Z @ 0x18000DE54 (-Stop@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAXK@Z.c)
 *     ?TransferToCurrentThread@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAA?AV12@XZ @ 0x18000DF88 (-TransferToCurrentThread@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAA-AV12@XZ.c)
 *     ??1SplashScreenSuppressed@CFramePresentationTelemetry@@QEAA@XZ @ 0x18000DFBC (--1SplashScreenSuppressed@CFramePresentationTelemetry@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 */

void __fastcall CFrameApplicationPresentation::FrameSystemVisual::ShowSplashScreen(__int64 a1, int a2, __int64 a3)
{
  CFramePresentationTelemetry::SplashScreenSuppressed *v5; // rax
  _QWORD v6[40]; // [rsp+20h] [rbp-158h] BYREF

  if ( *(_DWORD *)(a1 + 4) == 1 )
  {
    v5 = (CFramePresentationTelemetry::SplashScreenSuppressed *)CFramePresentationTelemetry::SplashScreenSuppressed::TransferToCurrentThread(
                                                                  a1 + 8,
                                                                  v6,
                                                                  a3);
    CFramePresentationTelemetry::SplashScreenSuppressed::Stop(v5, a2);
    CFramePresentationTelemetry::SplashScreenSuppressed::~SplashScreenSuppressed((CFramePresentationTelemetry::SplashScreenSuppressed *)v6);
  }
  *(_DWORD *)(a1 + 4) = 2;
}
