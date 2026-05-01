/*
 * XREFs of ?AddEventHandlersFromCoreKeyboardManager@TabTipAdapter@KeyboardHosting@@AEAAJXZ @ 0x1801A23B0
 * Callers:
 *     ?RuntimeClassInitialize@TabTipAdapter@KeyboardHosting@@QEAAJPEAVTouchKeyboardExperienceManager@@@Z @ 0x1801A1B48 (-RuntimeClassInitialize@TabTipAdapter@KeyboardHosting@@QEAAJPEAVTouchKeyboardExperienceManager@@.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Callback@U?$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAVCoreKeyboardManagerInputAppRequestedResizeEventArgs@23456@@Foundation@Windows@@VTabTipAdapter@KeyboardHosting@@PEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerInputAppRequestedResizeEventArgs@789UI@3@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAVCoreKeyboardManagerInputAppRequestedResizeEventArgs@23456@@Foundation@Windows@@@01@PEAVTabTipAdapter@KeyboardHosting@@P834@EAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerInputAppRequestedResizeEventArgs@6789Windows@@@Z@Z @ 0x1801A6134 (--$Callback@U-$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAVCor.c)
 *     ??$Callback@U?$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAVCoreKeyboardManagerCoreKeyboardClientRegisteredEventArgs@23456@@Foundation@Windows@@VTabTipAdapter@KeyboardHosting@@PEAUICoreKeyboardManager@Core@Text@Internal@UI@3@PEAUICoreKeyboardManagerCoreKeyboardClientRegisteredEventArgs@789UI@3@@WRL@Microsoft@@YA?AV?$ComPtr@U?$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAVCoreKeyboardManagerCoreKeyboardClientRegisteredEventArgs@23456@@Foundation@Windows@@@01@PEAVTabTipAdapter@KeyboardHosting@@P834@EAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerCoreKeyboardClientRegisteredEventArgs@6789Windows@@@Z@Z @ 0x1801A61DC (--$Callback@U-$ITypedEventHandler@PEAVCoreKeyboardManager@Core@Text@Internal@UI@Win_ea_1801A61DC.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801E2388 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall KeyboardHosting::TabTipAdapter::AddEventHandlersFromCoreKeyboardManager(
        KeyboardHosting::TabTipAdapter *this)
{
  __int64 v2; // r14
  _DWORD *v3; // rdi
  _DWORD *v4; // rax
  _DWORD *v5; // rbx
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v9; // r14
  _DWORD *v10; // rdi
  _DWORD *v11; // rax
  _DWORD *v12; // rbx
  __int64 v13; // r14
  _DWORD *v14; // rdi
  _DWORD *v15; // rax
  _DWORD *v16; // rbx
  __int64 v17; // r14
  _DWORD *v18; // rdi
  _DWORD *v19; // rax
  _DWORD *v20; // rbx
  __int64 v21; // r14
  _DWORD *v22; // rdi
  _DWORD *v23; // rax
  _DWORD *v24; // rbx
  __int64 v25; // r14
  _DWORD *v26; // rdi
  _DWORD *v27; // rax
  _DWORD *v28; // rbx
  __int64 v29; // r14
  _DWORD *v30; // rdi
  _DWORD *v31; // rax
  _DWORD *v32; // rbx
  __int64 v33; // r14
  _DWORD *v34; // rdi
  _DWORD *v35; // rax
  _DWORD *v36; // rbx
  __int64 v37; // r14
  _DWORD *v38; // rdi
  _DWORD *v39; // rax
  _DWORD *v40; // rbx
  __int64 v41; // r14
  _DWORD *v42; // rdi
  _DWORD *v43; // rax
  _DWORD *v44; // rbx
  __int64 v45; // rbx
  _QWORD *v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rbx
  _QWORD *v49; // rax
  __int64 v50; // rcx
  int v51[4]; // [rsp+20h] [rbp-E0h]
  int v52[4]; // [rsp+20h] [rbp-E0h]
  int v53[4]; // [rsp+20h] [rbp-E0h]
  int v54[4]; // [rsp+20h] [rbp-E0h]
  int v55[4]; // [rsp+20h] [rbp-E0h]
  int v56[4]; // [rsp+20h] [rbp-E0h]
  int v57[4]; // [rsp+20h] [rbp-E0h]
  int v58[4]; // [rsp+20h] [rbp-E0h]
  int v59[4]; // [rsp+20h] [rbp-E0h]
  int v60[4]; // [rsp+20h] [rbp-E0h]
  __int128 v61; // [rsp+40h] [rbp-C0h]
  __int64 v62; // [rsp+58h] [rbp-A8h]
  __int64 v63; // [rsp+68h] [rbp-98h]
  __int64 v64; // [rsp+78h] [rbp-88h]
  __int64 v65; // [rsp+88h] [rbp-78h]
  __int64 v66; // [rsp+98h] [rbp-68h]
  __int64 v67; // [rsp+A8h] [rbp-58h]
  __int64 v68; // [rsp+B8h] [rbp-48h]
  __int64 v69; // [rsp+C8h] [rbp-38h]
  __int64 v70; // [rsp+118h] [rbp+18h]
  __int128 v71; // [rsp+130h] [rbp+30h] BYREF
  __int128 v72[5]; // [rsp+140h] [rbp+40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+198h] [rbp+98h]
  __int64 v74; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v75; // [rsp+1A8h] [rbp+A8h] BYREF
  __int64 v76; // [rsp+1B0h] [rbp+B0h]
  _DWORD *v77; // [rsp+1B8h] [rbp+B8h]

  DWORD2(v61) = 0;
  v2 = *((_QWORD *)this + 3);
  *(_QWORD *)v51 = this;
  *(_QWORD *)&v51[2] = KeyboardHosting::TabTipAdapter::OnEditControlFocusChanged;
  v3 = 0LL;
  v76 = 0LL;
  v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    *(_QWORD *)v4 = &IAppViewDataSourceAdapter::`vftable';
    v4[3] = 1;
    *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerEditControlFocusChangedEventArgs *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)v5 + 1) = *(_OWORD *)v51;
    *((_QWORD *)v5 + 4) = *((_QWORD *)&v61 + 1);
    *(_QWORD *)v5 = off_180210478;
    v3 = v5;
  }
  v77 = v3;
  v76 = 0LL;
  v6 = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v2 + 96LL))(v2, v3, (char *)this + 112);
  if ( v3 )
  {
    v77 = 0LL;
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  if ( v6 < 0 )
  {
    v7 = 159LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v7,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\tabtipadapter.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  LODWORD(v62) = 0;
  v9 = *((_QWORD *)this + 3);
  *(_QWORD *)v52 = this;
  *(_QWORD *)&v52[2] = KeyboardHosting::TabTipAdapter::OnEditControlInputScopeChanged;
  v10 = 0LL;
  v11 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v12 = v11;
  if ( v11 )
  {
    *(_QWORD *)v11 = &IAppViewDataSourceAdapter::`vftable';
    v11[3] = 1;
    *(_QWORD *)v11 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerEditControlInputScopeChangedEventArgs *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)v12 + 1) = *(_OWORD *)v52;
    *((_QWORD *)v12 + 4) = v62;
    *(_QWORD *)v12 = off_1802104A0;
    v10 = v12;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v9 + 112LL))(v9, v10, (char *)this + 120);
  if ( v10 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v6 < 0 )
  {
    v7 = 163LL;
    goto LABEL_9;
  }
  LODWORD(v63) = 0;
  v13 = *((_QWORD *)this + 3);
  *(_QWORD *)v53 = this;
  *(_QWORD *)&v53[2] = KeyboardHosting::TabTipAdapter::OnEditControlManualInputPaneSettingChanged;
  v14 = 0LL;
  v15 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v15;
  if ( v15 )
  {
    *(_QWORD *)v15 = &IAppViewDataSourceAdapter::`vftable';
    v15[3] = 1;
    *(_QWORD *)v15 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerEditControlManualInputPaneSettingChangedEventArgs *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)v16 + 1) = *(_OWORD *)v53;
    *((_QWORD *)v16 + 4) = v63;
    *(_QWORD *)v16 = off_1802104C8;
    v14 = v16;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v13 + 128LL))(v13, v14, (char *)this + 128);
  if ( v14 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v6 < 0 )
  {
    v7 = 167LL;
    goto LABEL_9;
  }
  LODWORD(v64) = 0;
  v17 = *((_QWORD *)this + 3);
  *(_QWORD *)v54 = this;
  *(_QWORD *)&v54[2] = KeyboardHosting::TabTipAdapter::OnEditControlPositionChanged;
  v18 = 0LL;
  v19 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v20 = v19;
  if ( v19 )
  {
    *(_QWORD *)v19 = &IAppViewDataSourceAdapter::`vftable';
    v19[3] = 1;
    *(_QWORD *)v19 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerEditControlPositionChangedEventArgs *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)v20 + 1) = *(_OWORD *)v54;
    *((_QWORD *)v20 + 4) = v64;
    *(_QWORD *)v20 = off_1802103A0;
    v18 = v20;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v17 + 144LL))(v17, v18, (char *)this + 136);
  if ( v18 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v6 < 0 )
  {
    v7 = 171LL;
    goto LABEL_9;
  }
  LODWORD(v65) = 0;
  v21 = *((_QWORD *)this + 3);
  *(_QWORD *)v55 = this;
  *(_QWORD *)&v55[2] = KeyboardHosting::TabTipAdapter::OnEditControlReadOnlySettingChanged;
  v22 = 0LL;
  v23 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v24 = v23;
  if ( v23 )
  {
    *(_QWORD *)v23 = &IAppViewDataSourceAdapter::`vftable';
    v23[3] = 1;
    *(_QWORD *)v23 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerEditControlReadOnlySettingChangedEventArgs *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)v24 + 1) = *(_OWORD *)v55;
    *((_QWORD *)v24 + 4) = v65;
    *(_QWORD *)v24 = off_1802103C8;
    v22 = v24;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v21 + 160LL))(v21, v22, (char *)this + 144);
  if ( v22 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v6 < 0 )
  {
    v7 = 175LL;
    goto LABEL_9;
  }
  LODWORD(v66) = 0;
  v25 = *((_QWORD *)this + 3);
  *(_QWORD *)v56 = this;
  *(_QWORD *)&v56[2] = KeyboardHosting::TabTipAdapter::OnEditControlSelectionChanged;
  v26 = 0LL;
  v27 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v28 = v27;
  if ( v27 )
  {
    *(_QWORD *)v27 = &IAppViewDataSourceAdapter::`vftable';
    v27[3] = 1;
    *(_QWORD *)v27 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerEditControlSelectionChangedEventArgs *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)v28 + 1) = *(_OWORD *)v56;
    *((_QWORD *)v28 + 4) = v66;
    *(_QWORD *)v28 = off_1802103F0;
    v26 = v28;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v25 + 176LL))(v25, v26, (char *)this + 152);
  if ( v26 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v26 + 16LL))(v26);
  if ( v6 < 0 )
  {
    v7 = 179LL;
    goto LABEL_9;
  }
  LODWORD(v67) = 0;
  v29 = *((_QWORD *)this + 3);
  *(_QWORD *)v57 = this;
  *(_QWORD *)&v57[2] = KeyboardHosting::TabTipAdapter::OnEditControlLineTypeChanged;
  v30 = 0LL;
  v31 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v32 = v31;
  if ( v31 )
  {
    *(_QWORD *)v31 = &IAppViewDataSourceAdapter::`vftable';
    v31[3] = 1;
    *(_QWORD *)v31 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerEditControlLineTypeChangedEventArgs *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)v32 + 1) = *(_OWORD *)v57;
    *((_QWORD *)v32 + 4) = v67;
    *(_QWORD *)v32 = off_180210418;
    v30 = v32;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v29 + 192LL))(v29, v30, (char *)this + 160);
  if ( v30 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v30 + 16LL))(v30);
  if ( v6 < 0 )
  {
    v7 = 183LL;
    goto LABEL_9;
  }
  LODWORD(v68) = 0;
  v33 = *((_QWORD *)this + 3);
  *(_QWORD *)v58 = this;
  *(_QWORD *)&v58[2] = KeyboardHosting::TabTipAdapter::OnInputAppChanged;
  v34 = 0LL;
  v35 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v36 = v35;
  if ( v35 )
  {
    *(_QWORD *)v35 = &IAppViewDataSourceAdapter::`vftable';
    v35[3] = 1;
    *(_QWORD *)v35 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerInputAppChangedEventArgs *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)v36 + 1) = *(_OWORD *)v58;
    *((_QWORD *)v36 + 4) = v68;
    *(_QWORD *)v36 = off_180210300;
    v34 = v36;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v33 + 224LL))(v33, v34, (char *)this + 168);
  if ( v34 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v34 + 16LL))(v34);
  if ( v6 < 0 )
  {
    v7 = 187LL;
    goto LABEL_9;
  }
  LODWORD(v69) = 0;
  v37 = *((_QWORD *)this + 3);
  *(_QWORD *)v59 = this;
  *(_QWORD *)&v59[2] = KeyboardHosting::TabTipAdapter::OnInputAppRequestedShow;
  v38 = 0LL;
  v39 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v40 = v39;
  if ( v39 )
  {
    *(_QWORD *)v39 = &IAppViewDataSourceAdapter::`vftable';
    v39[3] = 1;
    *(_QWORD *)v39 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerInputAppRequestedShowEventArgs *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)v40 + 1) = *(_OWORD *)v59;
    *((_QWORD *)v40 + 4) = v69;
    *(_QWORD *)v40 = off_180210328;
    v38 = v40;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v37 + 240LL))(v37, v38, (char *)this + 176);
  if ( v38 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v38 + 16LL))(v38);
  if ( v6 < 0 )
  {
    v7 = 191LL;
    goto LABEL_9;
  }
  LODWORD(v70) = 0;
  v41 = *((_QWORD *)this + 3);
  *(_QWORD *)v60 = this;
  *(_QWORD *)&v60[2] = KeyboardHosting::TabTipAdapter::OnInputAppRequestedHide;
  v42 = 0LL;
  v43 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v44 = v43;
  if ( v43 )
  {
    *(_QWORD *)v43 = &IAppViewDataSourceAdapter::`vftable';
    v43[3] = 1;
    *(_QWORD *)v43 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerInputAppRequestedHideEventArgs *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)v44 + 1) = *(_OWORD *)v60;
    *((_QWORD *)v44 + 4) = v70;
    *(_QWORD *)v44 = off_180210350;
    v42 = v44;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v41 + 256LL))(v41, v42, (char *)this + 184);
  if ( v42 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v42 + 16LL))(v42);
  if ( v6 < 0 )
  {
    v7 = 195LL;
    goto LABEL_9;
  }
  *(_QWORD *)&v61 = KeyboardHosting::TabTipAdapter::OnInputAppRequestedResize;
  DWORD2(v61) = 0;
  v71 = v61;
  v45 = *((_QWORD *)this + 3);
  v46 = (_QWORD *)Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerInputAppRequestedResizeEventArgs *>,KeyboardHosting::TabTipAdapter,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerInputAppRequestedResizeEventArgs *>(
                    &v74,
                    this,
                    &v71);
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v45 + 272LL))(v45, *v46, (char *)this + 192);
  v47 = v74;
  if ( v74 )
  {
    v74 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v47 + 16LL))(v47);
  }
  if ( v6 < 0 )
  {
    v7 = 199LL;
    goto LABEL_9;
  }
  *(_QWORD *)&v61 = KeyboardHosting::TabTipAdapter::OnCoreKeyboardClientRegistered;
  DWORD2(v61) = 0;
  v72[0] = v61;
  v48 = *((_QWORD *)this + 3);
  v49 = (_QWORD *)Microsoft::WRL::Callback<Windows::Foundation::ITypedEventHandler<Windows::UI::Internal::Text::Core::CoreKeyboardManager *,Windows::UI::Internal::Text::Core::CoreKeyboardManagerCoreKeyboardClientRegisteredEventArgs *>,KeyboardHosting::TabTipAdapter,Windows::UI::Internal::Text::Core::ICoreKeyboardManager *,Windows::UI::Internal::Text::Core::ICoreKeyboardManagerCoreKeyboardClientRegisteredEventArgs *>(
                    &v75,
                    this,
                    v72);
  v6 = (*(__int64 (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v48 + 64LL))(v48, *v49, (char *)this + 200);
  v50 = v75;
  if ( v75 )
  {
    v75 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v50 + 16LL))(v50);
  }
  if ( v6 < 0 )
  {
    v7 = 203LL;
    goto LABEL_9;
  }
  return 0LL;
}
