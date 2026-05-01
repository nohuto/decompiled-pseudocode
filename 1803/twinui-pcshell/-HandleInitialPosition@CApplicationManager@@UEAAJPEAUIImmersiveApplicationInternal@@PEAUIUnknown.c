/*
 * XREFs of ?HandleInitialPosition@CApplicationManager@@UEAAJPEAUIImmersiveApplicationInternal@@PEAUIUnknown@@@Z @ 0x180044210
 * Callers:
 *     ?_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@@Z @ 0x18003FB80 (-_HandleViewCreation@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 * Callees:
 *     ?UpdateSizeConstraints@CFrameApplicationPresentation@@UEAAJXZ @ 0x180013BD0 (-UpdateSizeConstraints@CFrameApplicationPresentation@@UEAAJXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationPresentationLayer@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800166C0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationPres.c)
 *     ?InitializePosition@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x180024480 (-InitializePosition@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B490 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCApp_ea_18002B490.c)
 *     ?GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180030CE0 (-GetSite@CWRLObjectWithGITSite@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_HandleViewCreation_SynchronizeInitialPosition@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@@Z @ 0x18003F370 (-_HandleViewCreation_SynchronizeInitialPosition@CApplicationManager@@AEAAJPEAUIImmersiveApplicat.c)
 *     ?_HandleViewCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAPEAUIApplicationView@@@Z @ 0x18003F97C (-_HandleViewCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationIn.c)
 *     ?GetPresentationLayer@CImmersiveApp@@UEAAJPEAPEAUIApplicationPresentationLayer@@@Z @ 0x18004C2F0 (-GetPresentationLayer@CImmersiveApp@@UEAAJPEAPEAUIApplicationPresentationLayer@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CApplicationManager::HandleInitialPosition(
        CApplicationManager *this,
        struct IImmersiveApplicationInternal *a2,
        struct IUnknown *a3)
{
  int v6; // edi
  struct IApplicationView *v7; // rbx
  __int64 (__fastcall *v8)(CImmersiveApp *__hidden, struct IApplicationPresentationLayer **); // rax
  int PresentationLayer; // eax
  __int64 (__fastcall *v10)(CFrameApplicationPresentation *); // rax
  int v11; // eax
  RTL_SRWLOCK *v12; // rcx
  __int64 (__fastcall *v13)(RTL_SRWLOCK *, struct _GUID *, void **); // rax
  IUnknown *v14; // rcx
  __int64 (__fastcall *v15)(ShellPositionerManager *, struct IApplicationView *, struct IUnknown *); // rax
  int v16; // eax
  void *v17; // rcx
  struct IApplicationPresentationLayer *v18; // rcx
  void (*v19)(void); // rax
  __int64 (__fastcall *v20)(CWinRTApplicationView *); // rax
  void *ppvOut; // [rsp+20h] [rbp-30h] BYREF
  IUnknown *punk; // [rsp+28h] [rbp-28h] BYREF
  struct IApplicationPresentationLayer *v24; // [rsp+30h] [rbp-20h] BYREF
  CWinRTApplicationView *v25[3]; // [rsp+38h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]

  v25[1] = (CWinRTApplicationView *)-2LL;
  v25[0] = 0LL;
  v6 = CApplicationManager::_HandleViewCreation_EnsureApplicationView(this, a2, v25);
  v7 = v25[0];
  if ( v6 >= 0 )
  {
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    v24 = 0LL;
    v8 = *(__int64 (__fastcall **)(CImmersiveApp *__hidden, struct IApplicationPresentationLayer **))(*(_QWORD *)a2 + 504LL);
    if ( v8 == CImmersiveApp::GetPresentationLayer )
      PresentationLayer = CImmersiveApp::GetPresentationLayer(a2, &v24);
    else
      PresentationLayer = v8(a2, &v24);
    if ( PresentationLayer >= 0 )
    {
      v10 = *(__int64 (__fastcall **)(CFrameApplicationPresentation *))(*(_QWORD *)v24 + 192LL);
      v11 = v10 == CFrameApplicationPresentation::UpdateSizeConstraints
          ? CFrameApplicationPresentation::UpdateSizeConstraints(v24)
          : ((__int64 (*)(void))v10)();
      if ( v11 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xCB4,
          (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
          (const char *)(unsigned int)v11,
          (int)ppvOut);
    }
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    ppvOut = 0LL;
    v12 = (RTL_SRWLOCK *)((char *)this - 192);
    punk = 0LL;
    v13 = *(__int64 (__fastcall **)(RTL_SRWLOCK *, struct _GUID *, void **))(*((_QWORD *)this - 24) + 32LL);
    if ( v13 == CWRLObjectWithGITSite::GetSite )
      CWRLObjectWithGITSite::GetSite(v12, &GUID_00000000_0000_0000_c000_000000000046, (void **)&punk);
    else
      v13(v12, &GUID_00000000_0000_0000_c000_000000000046, (void **)&punk);
    v6 = IUnknown_QueryService(
           punk,
           &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
           &GUID_ff964f56_8baf_4947_9c46_f227ec68ff34,
           &ppvOut);
    v14 = punk;
    if ( punk )
    {
      punk = 0LL;
      ((void (__fastcall *)(IUnknown *))v14->lpVtbl->Release)(v14);
    }
    if ( v6 >= 0 )
    {
      v15 = *(__int64 (__fastcall **)(ShellPositionerManager *, struct IApplicationView *, struct IUnknown *))(*(_QWORD *)ppvOut + 24LL);
      v16 = v15 == ShellPositionerManager::InitializePosition
          ? ShellPositionerManager::InitializePosition((ShellPositionerManager *)ppvOut, v7, a3)
          : v15((ShellPositionerManager *)ppvOut, v7, a3);
      v6 = v16;
      if ( v16 >= 0 )
        v6 = CApplicationManager::_HandleViewCreation_SynchronizeInitialPosition(
               (CApplicationManager *)((char *)this - 240),
               a2);
    }
    v17 = ppvOut;
    if ( ppvOut )
    {
      ppvOut = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v17 + 16LL))(v17);
    }
    v18 = v24;
    if ( v24 )
    {
      v24 = 0LL;
      v19 = *(void (**)(void))(*(_QWORD *)v18 + 16LL);
      if ( (char *)v19 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationPresentationLayer,Microsoft::WRL::FtmBase>::Release )
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationPresentationLayer,Microsoft::WRL::FtmBase>::Release(
          (__int64)v18,
          (volatile int *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationPresentationLayer,Microsoft::WRL::FtmBase>::Release);
      else
        v19();
    }
  }
  if ( v7 )
  {
    v20 = *(__int64 (__fastcall **)(CWinRTApplicationView *))(*(_QWORD *)v7 + 16LL);
    if ( v20 == Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::Release )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::Release(v7);
    else
      v20(v7);
  }
  return (unsigned int)v6;
}
