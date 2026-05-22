/*
 * XREFs of ?RegisterSpatialEventHandlers@MPCSpatialGestureRecognizerHandler@@AEAAXXZ @ 0x18005B040
 * Callers:
 *     ??0MPCSpatialGestureRecognizerHandler@@QEAA@KPEAVManipulationInjector@@@Z @ 0x18005ACA4 (--0MPCSpatialGestureRecognizerHandler@@QEAA@KPEAVManipulationInjector@@@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800E210C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall MPCSpatialGestureRecognizerHandler::RegisterSpatialEventHandlers(
        MPCSpatialGestureRecognizerHandler *this)
{
  __int64 v2; // r14
  _DWORD *v3; // rbx
  _DWORD *v4; // rax
  _DWORD *v5; // rdi
  int v6; // eax
  __int64 v7; // r14
  _DWORD *v8; // rbx
  _DWORD *v9; // rax
  _DWORD *v10; // rdi
  int v11; // eax
  wil::details::in1diag3 *v12; // rcx
  __int64 v13; // r14
  _DWORD *v14; // rbx
  _DWORD *v15; // rax
  _DWORD *v16; // rdi
  int v17; // eax
  wil::details::in1diag3 *v18; // rcx
  __int64 v19; // r14
  _DWORD *v20; // rbx
  _DWORD *v21; // rax
  _DWORD *v22; // rdi
  int v23; // eax
  wil::details::in1diag3 *v24; // rcx
  __int64 v25; // r14
  _DWORD *v26; // rbx
  _DWORD *v27; // rax
  _DWORD *v28; // rdi
  int v29; // eax
  wil::details::in1diag3 *v30; // rcx
  __int64 v31; // r14
  _DWORD *v32; // rbx
  _DWORD *v33; // rax
  _DWORD *v34; // rdi
  int v35; // eax
  wil::details::in1diag3 *v36; // rcx
  __int64 v37; // r14
  _DWORD *v38; // rbx
  _DWORD *v39; // rax
  _DWORD *v40; // rdi
  int v41; // eax
  wil::details::in1diag3 *v42; // rcx
  __int64 v43; // r14
  _DWORD *v44; // rdi
  _DWORD *v45; // rax
  _DWORD *v46; // rbx
  int v47; // eax
  wil::details::in1diag3 *v48; // rcx
  __int128 v49; // [rsp+20h] [rbp-59h]
  __int128 v50; // [rsp+20h] [rbp-59h]
  __int128 v51; // [rsp+20h] [rbp-59h]
  __int128 v52; // [rsp+20h] [rbp-59h]
  __int128 v53; // [rsp+20h] [rbp-59h]
  __int128 v54; // [rsp+20h] [rbp-59h]
  __int128 v55; // [rsp+20h] [rbp-59h]
  __int128 v56; // [rsp+20h] [rbp-59h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v2 = *((_QWORD *)this + 2);
  *(_QWORD *)&v49 = this;
  *((_QWORD *)&v49 + 1) = MPCSpatialGestureRecognizerHandler::OnSpatialManipulationStarted;
  v3 = 0LL;
  v4 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    *(_QWORD *)v4 = &Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *>::`vftable';
    v4[3] = 1;
    *(_QWORD *)v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationStartedEventArgs *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)v5 + 1) = v49;
    *(_QWORD *)v5 = off_1800EEE78;
    v3 = v5;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v2 + 144LL))(v2, v3, (char *)this + 40);
  if ( v6 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x45,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v6);
LABEL_59:
    wil::details::in1diag3::FailFast_Hr(
      v12,
      (void *)0x46,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v11);
LABEL_60:
    wil::details::in1diag3::FailFast_Hr(
      v18,
      (void *)0x47,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v17);
LABEL_61:
    wil::details::in1diag3::FailFast_Hr(
      v24,
      (void *)0x48,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v23);
LABEL_62:
    wil::details::in1diag3::FailFast_Hr(
      v30,
      (void *)0x4A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v29);
LABEL_63:
    wil::details::in1diag3::FailFast_Hr(
      v36,
      (void *)0x4B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v35);
LABEL_64:
    wil::details::in1diag3::FailFast_Hr(
      v42,
      (void *)0x4C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v41);
    goto LABEL_65;
  }
  if ( v3 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v3 + 16LL))(v3);
  v7 = *((_QWORD *)this + 2);
  *(_QWORD *)&v50 = this;
  *((_QWORD *)&v50 + 1) = MPCSpatialGestureRecognizerHandler::OnSpatialManipulationUpdated;
  v8 = 0LL;
  v9 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v10 = v9;
  if ( v9 )
  {
    *(_QWORD *)v9 = &Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *>::`vftable';
    v9[3] = 1;
    *(_QWORD *)v9 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationUpdatedEventArgs *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)v10 + 1) = v50;
    *(_QWORD *)v10 = off_1800EEE50;
    v8 = v10;
  }
  v11 = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v7 + 160LL))(v7, v8, (char *)this + 48);
  v12 = retaddr;
  if ( v11 < 0 )
    goto LABEL_59;
  if ( v8 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 16LL))(v8);
  v13 = *((_QWORD *)this + 2);
  *(_QWORD *)&v51 = this;
  *((_QWORD *)&v51 + 1) = MPCSpatialGestureRecognizerHandler::OnSpatialManipulationCompleted;
  v14 = 0LL;
  v15 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v16 = v15;
  if ( v15 )
  {
    *(_QWORD *)v15 = &Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *>::`vftable';
    v15[3] = 1;
    *(_QWORD *)v15 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)v16 + 1) = v51;
    *(_QWORD *)v16 = off_1800EEEC8;
    v14 = v16;
  }
  v17 = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v13 + 176LL))(v13, v14, (char *)this + 56);
  v18 = retaddr;
  if ( v17 < 0 )
    goto LABEL_60;
  if ( v14 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v14 + 16LL))(v14);
  v19 = *((_QWORD *)this + 2);
  *(_QWORD *)&v52 = this;
  *((_QWORD *)&v52 + 1) = MPCSpatialGestureRecognizerHandler::OnSpatialManipulationCanceled;
  v20 = 0LL;
  v21 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v22 = v21;
  if ( v21 )
  {
    *(_QWORD *)v21 = &Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *>::`vftable';
    v21[3] = 1;
    *(_QWORD *)v21 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCanceledEventArgs *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)v22 + 1) = v52;
    *(_QWORD *)v22 = off_1800EEEA0;
    v20 = v22;
  }
  v23 = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v19 + 192LL))(v19, v20, (char *)this + 64);
  v24 = retaddr;
  if ( v23 < 0 )
    goto LABEL_61;
  if ( v20 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v20 + 16LL))(v20);
  v25 = *((_QWORD *)this + 2);
  *(_QWORD *)&v53 = this;
  *((_QWORD *)&v53 + 1) = MPCSpatialGestureRecognizerHandler::OnSpatialNavigationStarted;
  v26 = 0LL;
  v27 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v28 = v27;
  if ( v27 )
  {
    *(_QWORD *)v27 = &Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *>::`vftable';
    v27[3] = 1;
    *(_QWORD *)v27 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationStartedEventArgs *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)v28 + 1) = v53;
    *(_QWORD *)v28 = off_1800EEDD8;
    v26 = v28;
  }
  v29 = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v25 + 208LL))(v25, v26, (char *)this + 72);
  v30 = retaddr;
  if ( v29 < 0 )
    goto LABEL_62;
  if ( v26 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v26 + 16LL))(v26);
  v31 = *((_QWORD *)this + 2);
  *(_QWORD *)&v54 = this;
  *((_QWORD *)&v54 + 1) = MPCSpatialGestureRecognizerHandler::OnSpatialNavigationUpdated;
  v32 = 0LL;
  v33 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v34 = v33;
  if ( v33 )
  {
    *(_QWORD *)v33 = &Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *>::`vftable';
    v33[3] = 1;
    *(_QWORD *)v33 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)v34 + 1) = v54;
    *(_QWORD *)v34 = off_1800EEDB0;
    v32 = v34;
  }
  v35 = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v31 + 224LL))(v31, v32, (char *)this + 80);
  v36 = retaddr;
  if ( v35 < 0 )
    goto LABEL_63;
  if ( v32 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v32 + 16LL))(v32);
  v37 = *((_QWORD *)this + 2);
  *(_QWORD *)&v55 = this;
  *((_QWORD *)&v55 + 1) = MPCSpatialGestureRecognizerHandler::OnSpatialNavigationCompleted;
  v38 = 0LL;
  v39 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v40 = v39;
  if ( v39 )
  {
    *(_QWORD *)v39 = &Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *>::`vftable';
    v39[3] = 1;
    *(_QWORD *)v39 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationCompletedEventArgs *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)v40 + 1) = v55;
    *(_QWORD *)v40 = off_1800EEE28;
    v38 = v40;
  }
  v41 = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v37 + 240LL))(v37, v38, (char *)this + 88);
  v42 = retaddr;
  if ( v41 < 0 )
    goto LABEL_64;
  if ( v38 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v38 + 16LL))(v38);
  v43 = *((_QWORD *)this + 2);
  *(_QWORD *)&v56 = this;
  *((_QWORD *)&v56 + 1) = MPCSpatialGestureRecognizerHandler::OnSpatialNavigationCanceled;
  v44 = 0LL;
  v45 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v46 = v45;
  if ( v45 )
  {
    *(_QWORD *)v45 = &Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *>::`vftable';
    v45[3] = 1;
    *(_QWORD *)v45 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationCanceledEventArgs *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)v46 + 1) = v56;
    *(_QWORD *)v46 = off_1800EEE00;
    v44 = v46;
  }
  v47 = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v43 + 256LL))(v43, v44, (char *)this + 96);
  v48 = retaddr;
  if ( v47 < 0 )
  {
LABEL_65:
    wil::details::in1diag3::FailFast_Hr(
      v48,
      (void *)0x4D,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v47);
    JUMPOUT(0x18005B6F5LL);
  }
  if ( v44 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v44 + 16LL))(v44);
}
