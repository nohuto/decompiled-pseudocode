/*
 * XREFs of ?SuppressSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXPEBGPEAUHWND__@@W4SplashScreenSuppressionReason@2@K@Z @ 0x1800678B8
 * Callers:
 *     ?_SuppressSplashScreenIfAppropriate@CFrameApplicationPresentation@@AEAAXXZ @ 0x18006B324 (-_SuppressSplashScreenIfAppropriate@CFrameApplicationPresentation@@AEAAXXZ.c)
 * Callees:
 *     ??1?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180020D0C (--1-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180020F30 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProv.c)
 *     ?StartActivity@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAXPEBGPEAUHWND__@@KK@Z @ 0x18006F980 (-StartActivity@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAXPEBGPEAUHWND__@@KK@Z.c)
 *     ??4SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAAEAV01@$$QEAV01@@Z @ 0x180071128 (--4SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x180071340 (--0-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 */

void __fastcall CFrameApplicationPresentation::FrameSystemVisual::SuppressSplashScreen(
        __int64 a1,
        const unsigned __int16 *a2,
        HWND a3,
        unsigned int a4)
{
  char v4; // bl
  _QWORD v9[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v10; // [rsp+50h] [rbp-B0h]
  int *v11; // [rsp+58h] [rbp-A8h]
  int *v12; // [rsp+60h] [rbp-A0h]
  int v13; // [rsp+68h] [rbp-98h] BYREF
  char v14; // [rsp+6Ch] [rbp-94h]
  int v15; // [rsp+90h] [rbp-70h] BYREF
  const char *v16; // [rsp+98h] [rbp-68h]
  __int64 v17; // [rsp+A0h] [rbp-60h]
  char v18; // [rsp+A8h] [rbp-58h]
  __int64 v19; // [rsp+B0h] [rbp-50h]
  _BYTE v20[144]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v21; // [rsp+148h] [rbp+48h]
  __int64 v22; // [rsp+150h] [rbp+50h]
  __int64 v23; // [rsp+158h] [rbp+58h]
  __int64 v24; // [rsp+160h] [rbp+60h]
  _QWORD v25[40]; // [rsp+170h] [rbp+70h] BYREF

  v4 = dword_1802B8F94[0];
  v9[2] = v9;
  v9[1] = 0LL;
  v9[3] = 0LL;
  v19 = 1LL;
  v11 = &v15;
  *(_DWORD *)(a1 + 4) = 1;
  v12 = &v13;
  v10 = 0;
  v16 = "SplashScreenSuppressed";
  v13 = 0;
  v14 = 0;
  v18 = 0;
  v15 = 0;
  v17 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  memset(v20, 0, sizeof(v20));
  v23 = 0LL;
  v24 = 0LL;
  v9[0] = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
  CFramePresentationTelemetry::SplashScreenSuppressed::StartActivity(
    (CFramePresentationTelemetry::SplashScreenSuppressed *)v9,
    a2,
    a3,
    a4,
    v4);
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
    v25,
    v9,
    0LL);
  v25[0] = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
  CFramePresentationTelemetry::SplashScreenSuppressed::operator=(a1 + 8, v25);
  v25[0] = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v25);
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v25);
  v9[0] = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v9);
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v9);
}
