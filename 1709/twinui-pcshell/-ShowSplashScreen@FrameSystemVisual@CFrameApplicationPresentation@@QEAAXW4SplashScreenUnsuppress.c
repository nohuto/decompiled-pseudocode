/*
 * XREFs of ?ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppressionReason@2@@Z @ 0x180067A08
 * Callers:
 *     ?SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z @ 0x180068E30 (-SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z.c)
 *     ?SetChromeOptions@CFrameApplicationPresentation@@UEAAJUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@Z @ 0x180069F70 (-SetChromeOptions@CFrameApplicationPresentation@@UEAAJUAPPLICATION_FRAME_CHROME_CHANGE_DATA@@@Z.c)
 *     ?_SuppressSplashScreenIfAppropriate@CFrameApplicationPresentation@@AEAAXXZ @ 0x18006B324 (-_SuppressSplashScreenIfAppropriate@CFrameApplicationPresentation@@AEAAXXZ.c)
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d2fa7908b891c12cbb1669318d2d4613__&___ptr64_::Run @ 0x18006E0D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d2fa7908b891c12cbb1669318d2d4613__-___ptr64.c)
 * Callees:
 *     ??1?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180020D0C (--1-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180020F30 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProv.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x180071340 (--0-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Stop@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAXK@Z @ 0x1800718BC (-Stop@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAXK@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 */

void __fastcall CFrameApplicationPresentation::FrameSystemVisual::ShowSplashScreen(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  _QWORD v5[40]; // [rsp+20h] [rbp-158h] BYREF

  if ( *(_DWORD *)(a1 + 4) == 1 )
  {
    LOBYTE(a3) = **(_DWORD **)(a1 + 56) == 1;
    wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
      v5,
      a1 + 8,
      a3);
    v5[0] = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
    CFramePresentationTelemetry::SplashScreenSuppressed::Stop(
      (CFramePresentationTelemetry::SplashScreenSuppressed *)v5,
      a2);
    v5[0] = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
    wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v5);
    wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v5);
  }
  *(_DWORD *)(a1 + 4) = 2;
}
