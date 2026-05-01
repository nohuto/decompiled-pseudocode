/*
 * XREFs of ?SetSystemVisual@CFrameApplicationPresentation@@UEAAJW4FRAME_SYSTEM_VISUAL@@@Z @ 0x180068E30
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180020D0C (--1-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180020F30 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProv.c)
 *     WPP_SF_Ld @ 0x18003A7BC (WPP_SF_Ld.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180049860 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProv.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180049A78 (--1-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ??0PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@PEAV1@@Z @ 0x18006779C (--0PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@PEAV1@@Z.c)
 *     ??1PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@XZ @ 0x180067824 (--1PresentedWindowChangeHandler@CFrameApplicationPresentation@@QEAA@XZ.c)
 *     ?ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppressionReason@2@@Z @ 0x180067A08 (-ShowSplashScreen@FrameSystemVisual@CFrameApplicationPresentation@@QEAAXW4SplashScreenUnsuppress.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_8ef6d4805f8528fcb28166bccfad057a___ @ 0x18006CDC0 (Windows--Internal--ComTaskPool--QueueTask__lambda_8ef6d4805f8528fcb28166bccfad057a___.c)
 *     ?StartActivity@SetSystemVisual@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@W4FRAME_SYSTEM_VISUAL@@@Z @ 0x18006F494 (-StartActivity@SetSystemVisual@CFramePresentationTelemetry@@QEAAXIPEAUHWND__@@W4FRAME_SYSTEM_VIS.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@AEBV01@@Z @ 0x180070064 (--0-$ActivityBase@VCAppManagerLogging@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param_ea_180070064.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@$$QEAV01@_N@Z @ 0x180071340 (--0-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderTy.c)
 *     ?Stop@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAXK@Z @ 0x1800718BC (-Stop@SplashScreenSuppressed@CFramePresentationTelemetry@@QEAAXK@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CFrameApplicationPresentation::SetSystemVisual(__int64 a1, unsigned int a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  bool v6; // r14
  char v7; // r15
  __int64 v8; // r8
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ebx
  __int64 v13; // rdx
  _QWORD v15[3]; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v16[4]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v17; // [rsp+78h] [rbp-90h]
  int *v18; // [rsp+80h] [rbp-88h]
  int *v19; // [rsp+88h] [rbp-80h]
  int v20; // [rsp+90h] [rbp-78h] BYREF
  char v21; // [rsp+94h] [rbp-74h]
  int v22; // [rsp+B8h] [rbp-50h] BYREF
  const char *v23; // [rsp+C0h] [rbp-48h]
  __int64 v24; // [rsp+C8h] [rbp-40h]
  char v25; // [rsp+D0h] [rbp-38h]
  __int64 v26; // [rsp+D8h] [rbp-30h]
  _BYTE v27[144]; // [rsp+E0h] [rbp-28h] BYREF
  __int64 v28; // [rsp+170h] [rbp+68h]
  __int64 v29; // [rsp+178h] [rbp+70h]
  __int64 v30; // [rsp+180h] [rbp+78h]
  __int64 v31; // [rsp+188h] [rbp+80h]
  void **v32; // [rsp+198h] [rbp+90h] BYREF
  __int64 v33; // [rsp+1A0h] [rbp+98h]
  _QWORD v34[40]; // [rsp+1A8h] [rbp+A0h] BYREF
  _QWORD v35[2]; // [rsp+2E8h] [rbp+1E0h] BYREF
  int v36; // [rsp+2F8h] [rbp+1F0h]
  __int16 v37; // [rsp+2FCh] [rbp+1F4h]
  __int64 v38; // [rsp+300h] [rbp+1F8h]
  _QWORD v39[40]; // [rsp+308h] [rbp+200h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+490h] [rbp+388h]

  v15[2] = -2LL;
  if ( (*((_BYTE *)WPP_GLOBAL_Control + 28) & 1) != 0 && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    WPP_SF_Ld(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0xFu,
      &WPP_7785cad5b4a736930de9968ca66fe3e3_Traceguids,
      a2,
      *(_DWORD *)(a1 + 56));
  v4 = *(_QWORD **)(a1 + 120);
  v16[1] = 0LL;
  v16[2] = v16;
  v16[3] = 0LL;
  LODWORD(v17) = 0;
  v18 = &v22;
  v19 = &v20;
  v20 = 0;
  v21 = 0;
  v25 = 0;
  v22 = 0;
  v23 = "SetSystemVisual";
  v24 = 0LL;
  v26 = 1LL;
  v28 = 0LL;
  v29 = 0LL;
  memset(v27, 0, sizeof(v27));
  v30 = 0LL;
  v31 = 0LL;
  v16[0] = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
  CFramePresentationTelemetry::SetSystemVisual::StartActivity(v16, *(unsigned int *)(a1 + 56), *v4, a2);
  v5 = **(_QWORD **)(a1 + 112);
  if ( v5 )
    (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v5 + 208LL))(v5, *(_QWORD *)(a1 + 136), 3LL);
  if ( *(_DWORD *)(a1 + 220) != 1 || a2 == 1 )
  {
    v6 = 0;
  }
  else
  {
    v6 = *(_BYTE *)(a1 + 60) != 0;
    if ( *(_DWORD *)(a1 + 544) == 1 )
    {
      v7 = 1;
      goto LABEL_12;
    }
  }
  v7 = 0;
LABEL_12:
  CFrameApplicationPresentation::PresentedWindowChangeHandler::PresentedWindowChangeHandler(
    (CFrameApplicationPresentation::PresentedWindowChangeHandler *)v15,
    (struct CFrameApplicationPresentation *)a1);
  if ( a2 != *(_DWORD *)(a1 + 216) )
  {
    *(_BYTE *)(a1 + 536) = 0;
    if ( *(_DWORD *)(a1 + 220) == 1 )
    {
      LOBYTE(v8) = **(_DWORD **)(a1 + 272) == 1;
      wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(
        &v32,
        a1 + 224,
        v8);
      v32 = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
      CFramePresentationTelemetry::SplashScreenSuppressed::Stop(
        (CFramePresentationTelemetry::SplashScreenSuppressed *)&v32,
        1u);
      v32 = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
      wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(&v32);
      wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)&v32);
    }
    *(_DWORD *)(a1 + 220) = 0;
  }
  *(_DWORD *)(a1 + 216) = a2;
  CFrameApplicationPresentation::PresentedWindowChangeHandler::~PresentedWindowChangeHandler((CFrameApplicationPresentation::PresentedWindowChangeHandler *)v15);
  if ( *(_BYTE *)(a1 + 60) && a2 == 1 && *(_DWORD *)(a1 + 220) != 1 )
    CFrameApplicationPresentation::FrameSystemVisual::ShowSplashScreen(a1 + 216, 0, v9);
  LODWORD(v32) = a2;
  BYTE4(v32) = v6;
  BYTE5(v32) = v7;
  v33 = a1;
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
    v34,
    v16);
  v34[0] = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
  if ( *(_DWORD *)(a1 + 64) == 2 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6BB,
      (__int64)"pcshell\\twinui\\appmanager\\lib\\frameapppresentation.cpp",
      (const char *)0x8007139FLL);
  }
  else
  {
    v15[0] = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    v35[0] = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    v35[1] = a1;
    v36 = (int)v32;
    v37 = WORD2(v32);
    v38 = v33;
    wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>(
      v39,
      v34);
    v39[0] = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
    v12 = Windows::Internal::ComTaskPool::QueueTask__lambda_8ef6d4805f8528fcb28166bccfad057a___(
            v11,
            v10,
            *(unsigned int *)(a1 + 56),
            v35);
    v39[0] = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
    wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v39);
    wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v39);
    v13 = v35[0];
    if ( v35[0] )
    {
      v35[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    }
    if ( v12 >= 0 )
      ++*(_DWORD *)(a1 + 212);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  }
  v34[0] = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v34);
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v34);
  v16[0] = &CFramePresentationTelemetry::SetSystemVisual::`vftable';
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v16);
  wil::ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v16);
  return 0LL;
}
