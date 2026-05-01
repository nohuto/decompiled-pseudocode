/*
 * XREFs of ?OnViewCreated@CQuickConnectExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x1800C5420
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004194 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z @ 0x180048310 (-Marshal@CMarshaledInterface@@QEAAJAEBU_GUID@@PEAUIUnknown@@W4MARSHAL_KIND@@@Z.c)
 *     ?StartActivity@ExperienceManager_OnViewCreated@QuickConnectTelemetry@@QEAAXXZ @ 0x1800C1D84 (-StartActivity@ExperienceManager_OnViewCreated@QuickConnectTelemetry@@QEAAXXZ.c)
 *     ?ExperienceManager_OnViewCreated_RegisteredClientWindowReadyForPresentation@ExperienceManager_OnViewCreated@QuickConnectTelemetry@@QEAAXXZ @ 0x1800C1EB0 (-ExperienceManager_OnViewCreated_RegisteredClientWindowReadyForPresentation@ExperienceManager_On.c)
 *     ??1?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800C4204 (--1-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?Destroy@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x1800C7694 (-Destroy@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Par.c)
 *     ?Stop@?$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800C7DB8 (-Stop@-$ActivityBase@VQuickConnectLoggingProvider@@$00$0CAAAAAAAAAAA@$04U_TlgReflectorTag_Param0.c)
 *     ??$ExperienceManager_OnViewCreated_Params@AEAU_GUID@@@ExperienceManager_OnViewCreated@QuickConnectTelemetry@@QEAAXAEAU_GUID@@@Z @ 0x1800C882C (--$ExperienceManager_OnViewCreated_Params@AEAU_GUID@@@ExperienceManager_OnViewCreated@QuickConne.c)
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64___lambda_91340e788704f1afab709d2d81130ce3___ @ 0x1800C88E0 (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Internal-_ea_1800C88E0.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x1801DB6E4 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     __security_check_cookie @ 0x1801E1EA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset @ 0x1801E2E6A (memset.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CQuickConnectExperienceManager::OnViewCreated(
        ExperienceManagerUtils **this,
        struct CSingleViewShellExperience *a2)
{
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v4; // rdx
  HWND v5; // rax
  unsigned int v6; // esi
  int v7; // eax
  struct IUnknown *v8; // rdi
  _DWORD *v9; // rax
  _DWORD *v10; // rbx
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rcx
  int v16[2]; // [rsp+28h] [rbp-E0h] BYREF
  __int64 v17; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v18; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C8h] BYREF
  __int128 v20; // [rsp+48h] [rbp-C0h]
  _BYTE v21[24]; // [rsp+58h] [rbp-B0h]
  __int64 v22; // [rsp+70h] [rbp-98h]
  __int64 v23; // [rsp+78h] [rbp-90h]
  _QWORD v24[4]; // [rsp+88h] [rbp-80h] BYREF
  int v25; // [rsp+A8h] [rbp-60h]
  int *v26; // [rsp+B0h] [rbp-58h]
  int *v27; // [rsp+B8h] [rbp-50h]
  int v28; // [rsp+C0h] [rbp-48h] BYREF
  char v29; // [rsp+C4h] [rbp-44h]
  int v30; // [rsp+E8h] [rbp-20h] BYREF
  const char *v31; // [rsp+F0h] [rbp-18h]
  __int64 v32; // [rsp+F8h] [rbp-10h]
  char v33; // [rsp+100h] [rbp-8h]
  __int64 v34; // [rsp+108h] [rbp+0h]
  _BYTE v35[144]; // [rsp+110h] [rbp+8h] BYREF
  __int64 v36; // [rsp+1A0h] [rbp+98h]
  __int64 v37; // [rsp+1A8h] [rbp+A0h]
  __int64 v38; // [rsp+1B0h] [rbp+A8h]
  __int64 v39; // [rsp+1B8h] [rbp+B0h]
  wil::details::in1diag3 *retaddr; // [rsp+200h] [rbp+F8h]

  v22 = -2LL;
  v24[1] = 0LL;
  v24[2] = v24;
  v24[3] = 0LL;
  v25 = 0;
  v26 = &v30;
  v27 = &v28;
  v28 = 0;
  v29 = 0;
  v33 = 0;
  v30 = 0;
  v31 = "ExperienceManager_OnViewCreated";
  v32 = 0LL;
  v34 = 1LL;
  v36 = 0LL;
  v37 = 0LL;
  memset(v35, 0, sizeof(v35));
  v38 = 0LL;
  v39 = 0LL;
  v24[0] = &QuickConnectTelemetry::ExperienceManager_OnViewCreated::`vftable';
  QuickConnectTelemetry::ExperienceManager_OnViewCreated::StartActivity((QuickConnectTelemetry::ExperienceManager_OnViewCreated *)v24);
  QuickConnectTelemetry::ExperienceManager_OnViewCreated::ExperienceManager_OnViewCreated_Params<_GUID &>(
    v24,
    this + 31);
  v5 = ExperienceManagerUtils::WindowFromViewWrapper(this[6], v4);
  if ( !v5 || SetPropW(v5, L"UIA_WindowPatternEnabled", HANDLE_FLAG_INHERIT) )
  {
    v17 = 0LL;
    v7 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))a2 + 3))(
           *((_QWORD *)a2 + 3),
           &GUID_7357c375_0d63_4d6c_a22a_d2d4fc1c012e,
           &v17);
    v6 = v7;
    if ( v7 >= 0 )
    {
      *(_QWORD *)&v20 = CQuickConnectExperienceManager::OnClientWindowReadyForPresentationChanged;
      DWORD2(v20) = 0;
      *(_QWORD *)v21 = this - 6;
      *(_OWORD *)&v21[8] = v20;
      v8 = 0LL;
      v23 = 0LL;
      v9 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
      v10 = v9;
      if ( v9 )
      {
        *(_QWORD *)v9 = &IAppViewDataSourceAdapter::`vftable';
        v9[3] = 1;
        *(_QWORD *)v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>::`vftable';
        if ( Microsoft::WRL::Details::ModuleBase::module_ )
          (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                               + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
        *((_OWORD *)v10 + 1) = *(_OWORD *)v21;
        *((_QWORD *)v10 + 4) = *(_QWORD *)&v21[16];
        *(_QWORD *)v10 = off_180201DF0;
        v8 = (struct IUnknown *)v10;
      }
      *(_QWORD *)&v20 = v8;
      *(_QWORD *)v16 = 0LL;
      CMarshaledInterface::Marshal((__int64 *)v16, &GUID_8cecdf70_ced8_5bc7_84a7_d80615fedcdd, v8, 2);
      v18 = *(_QWORD *)v16;
      if ( *(_QWORD *)v16 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v16 + 8LL))(*(_QWORD *)v16);
      Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState_____ptr64_Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____ptr64___lambda_91340e788704f1afab709d2d81130ce3___(
        &v19,
        &v18);
      if ( v18 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      v11 = v19;
      v12 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v17 + 80LL))(v17, v19, (char *)this + 16);
      v6 = v12;
      if ( v12 >= 0 )
      {
        QuickConnectTelemetry::ExperienceManager_OnViewCreated::ExperienceManager_OnViewCreated_RegisteredClientWindowReadyForPresentation((QuickConnectTelemetry::ExperienceManager_OnViewCreated *)v24);
        wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v24);
        v6 = 0;
      }
      else
      {
        wil::details::in1diag3::Return_Hr_NoOriginate(
          retaddr,
          (void *)0x277,
          (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
          (const char *)(unsigned int)v12);
      }
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      v13 = *(_QWORD *)v16;
      if ( *(_QWORD *)v16 )
      {
        *(_QWORD *)v16 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
      }
      if ( v8 )
        ((void (__fastcall *)(struct IUnknown *))v8->lpVtbl->Release)(v8);
    }
    else
    {
      wil::details::in1diag3::Return_Hr_NoOriginate(
        retaddr,
        (void *)0x25C,
        (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
        (const char *)(unsigned int)v7);
    }
    v14 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    }
  }
  else
  {
    v6 = -2147467259;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x258,
      (__int64)"pcshell\\twinui\\experiencemanagers\\lib\\quickconnectexperiencemanager.cpp",
      (const char *)0x80004005LL);
  }
  v24[0] = &QuickConnectTelemetry::ExperienceManager_OnViewCreated::`vftable';
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v24);
  wil::ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<QuickConnectLoggingProvider,1,35184372088832,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v24);
  return v6;
}
