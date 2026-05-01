/*
 * XREFs of ?_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@_NW4WindowAdditionReason@@PEAUITaskWindow@@PEA_N@Z @ 0x18005664C
 * Callers:
 *     ?HandleInitialViewCreation@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x1800549A0 (-HandleInitialViewCreation@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x180054A10 (-HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windo.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800258B8 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180026168 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180026A48 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLayer@@@Z @ 0x180050450 (-_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLaye.c)
 *     ?_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ @ 0x180056D58 (-_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ.c)
 *     ?_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ @ 0x180056F30 (-_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ.c)
 *     ?AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x180057BCC (-AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 *     ?AddConsecutiveView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x180057DD4 (-AddConsecutiveView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerI.c)
 *     ??$Start@AEAPEAG@ProcessNewWindow@CImmersiveAppTelemetry@@SA?AV01@AEAPEAG@Z @ 0x18005B908 (--$Start@AEAPEAG@ProcessNewWindow@CImmersiveAppTelemetry@@SA-AV01@AEAPEAG@Z.c)
 *     __security_check_cookie @ 0x180193E40 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CImmersiveApp::_ProcessNewView(
        __int64 a1,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        char a3,
        unsigned int a4,
        struct ITaskWindow *a5,
        bool *a6)
{
  CImmersiveApp::CImmersiveWindowCollection *v10; // rcx
  int View; // eax
  unsigned int v12; // r14d
  __int64 v13; // rax
  struct IApplicationPresentationLayer *v14; // rdx
  __int64 v15; // rcx
  _QWORD v17[2]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v18[40]; // [rsp+30h] [rbp-D0h] BYREF

  v17[1] = -2LL;
  *a6 = *(_QWORD *)(a1 + 384) == 0LL;
  CImmersiveAppTelemetry::ProcessNewWindow::Start<unsigned short * &>((CImmersiveAppTelemetry::ProcessNewWindow *)v18);
  v17[0] = 0LL;
  if ( a2 )
    (**(void (__fastcall ***)(struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *, GUID *, _QWORD *))a2)(
      a2,
      &GUID_e67b82e2_7249_4743_98e4_2ac1c012e15f,
      v17);
  else
    (*(void (__fastcall **)(struct ITaskWindow *, GUID *, _QWORD *))(*(_QWORD *)a5 + 40LL))(
      a5,
      &GUID_e67b82e2_7249_4743_98e4_2ac1c012e15f,
      v17);
  (*(void (__fastcall **)(_QWORD, const WCHAR *, _QWORD))(*(_QWORD *)v17[0] + 88LL))(
    v17[0],
    L"LastSetGlomIdForReconstitution",
    *(unsigned int *)(a1 + 512));
  v10 = (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 224);
  if ( a3 )
    View = CImmersiveApp::CImmersiveWindowCollection::AddFirstView(v10, a2, a5);
  else
    View = CImmersiveApp::CImmersiveWindowCollection::AddConsecutiveView(v10, a2, a4, a5);
  v12 = View;
  if ( View < 0 )
  {
    if ( *a6 )
      *a6 = 0;
  }
  else if ( a3 )
  {
    CImmersiveApp::_UpdateAppStateAndSendNotifications((CImmersiveApp *)a1);
    GetSystemTimeAsFileTime((LPFILETIME)(a1 + 588));
    v13 = *(_QWORD *)(a1 + 588);
    *(_QWORD *)(a1 + 612) = v13;
    if ( *(_BYTE *)(a1 + 408) && !*(_BYTE *)(a1 + 409) )
    {
      *(_QWORD *)(a1 + 620) = v13;
      v14 = *(struct IApplicationPresentationLayer **)(a1 + 360);
      *(_DWORD *)(a1 + 544) &= ~1u;
      CImmersiveApp::CloakType::_PersistFlagsToPresentationLayer((LPCWSTR *)(a1 + 544), v14);
    }
    CImmersiveApp::_UpdateWindowTitleAndButtons((CImmersiveApp *)a1);
  }
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v18, v12);
  v15 = v17[0];
  if ( v17[0] )
  {
    v17[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v18[0] = &CImmersiveAppTelemetry::ProcessNewWindow::`vftable';
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v18);
  wil::ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<CAppManagerLogging,0,0,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v18);
  return v12;
}
