/*
 * XREFs of ?_ProcessNewView@CImmersiveApp@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@_NW4WindowAdditionReason@@PEAUITaskWindow@@PEA_N@Z @ 0x180058C50
 * Callers:
 *     ?HandleInitialViewCreation@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x180056DF0 (-HandleInitialViewCreation@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Interna.c)
 *     ?HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x180056E60 (-HandleViewAddition@CImmersiveApp@@UEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windo.c)
 * Callees:
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180026020 (-Stop@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wi.c)
 *     ??1?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800268D0 (--1-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@.c)
 *     ?Destroy@?$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800271B8 (-Destroy@-$ActivityBase@VCAppManagerLogging@@$0A@$0A@$04U_TlgReflectorTag_Param0IsProviderType@@.c)
 *     ?_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLayer@@@Z @ 0x1800526FC (-_PersistFlagsToPresentationLayer@CloakType@CImmersiveApp@@AEAAXPEAUIApplicationPresentationLaye.c)
 *     ?_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ @ 0x1800593AC (-_UpdateWindowTitleAndButtons@CImmersiveApp@@AEAAXXZ.c)
 *     ?_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ @ 0x18005953C (-_UpdateAppStateAndSendNotifications@CImmersiveApp@@AEAAXXZ.c)
 *     ?AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUITaskWindow@@@Z @ 0x18005A208 (-AddFirstView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop.c)
 *     ?AddConsecutiveView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@W4WindowAdditionReason@@PEAUITaskWindow@@@Z @ 0x18005A410 (-AddConsecutiveView@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIViewWrapper@ViewManagerI.c)
 *     ?StartActivity@ProcessNewWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z @ 0x18005F804 (-StartActivity@ProcessNewWindow@CImmersiveAppTelemetry@@QEAAXPEBG@Z.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
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
  _QWORD v18[4]; // [rsp+30h] [rbp-D0h] BYREF
  int v19; // [rsp+50h] [rbp-B0h]
  int *v20; // [rsp+58h] [rbp-A8h]
  int *v21; // [rsp+60h] [rbp-A0h]
  int v22; // [rsp+68h] [rbp-98h] BYREF
  char v23; // [rsp+6Ch] [rbp-94h]
  int v24; // [rsp+90h] [rbp-70h] BYREF
  const char *v25; // [rsp+98h] [rbp-68h]
  __int64 v26; // [rsp+A0h] [rbp-60h]
  char v27; // [rsp+A8h] [rbp-58h]
  __int64 v28; // [rsp+B0h] [rbp-50h]
  _BYTE v29[144]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v30; // [rsp+148h] [rbp+48h]
  __int64 v31; // [rsp+150h] [rbp+50h]
  __int64 v32; // [rsp+158h] [rbp+58h]
  __int64 v33; // [rsp+160h] [rbp+60h]

  v17[1] = -2LL;
  *a6 = *(_QWORD *)(a1 + 424) == 0LL;
  v18[1] = 0LL;
  v18[2] = v18;
  v18[3] = 0LL;
  v19 = 0;
  v20 = &v24;
  v21 = &v22;
  v22 = 0;
  v23 = 0;
  v27 = 0;
  v24 = 0;
  v25 = "ProcessNewWindow";
  v26 = 0LL;
  v28 = 1LL;
  v30 = 0LL;
  v31 = 0LL;
  memset(v29, 0, sizeof(v29));
  v32 = 0LL;
  v33 = 0LL;
  v18[0] = &CImmersiveAppTelemetry::ProcessNewWindow::`vftable';
  CImmersiveAppTelemetry::ProcessNewWindow::StartActivity(
    (CImmersiveAppTelemetry::ProcessNewWindow *)v18,
    *(const unsigned __int16 **)(a1 + 544));
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
    *(unsigned int *)(a1 + 552));
  v10 = (CImmersiveApp::CImmersiveWindowCollection *)(a1 + 264);
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
    GetSystemTimeAsFileTime((LPFILETIME)(a1 + 628));
    v13 = *(_QWORD *)(a1 + 628);
    *(_QWORD *)(a1 + 652) = v13;
    if ( *(_BYTE *)(a1 + 448) && !*(_BYTE *)(a1 + 449) )
    {
      *(_QWORD *)(a1 + 660) = v13;
      v14 = *(struct IApplicationPresentationLayer **)(a1 + 400);
      *(_DWORD *)(a1 + 584) &= ~1u;
      CImmersiveApp::CloakType::_PersistFlagsToPresentationLayer((LPCWSTR *)(a1 + 584), v14);
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
