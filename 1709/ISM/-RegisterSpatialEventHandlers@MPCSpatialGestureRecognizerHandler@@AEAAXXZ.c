/*
 * XREFs of ?RegisterSpatialEventHandlers@MPCSpatialGestureRecognizerHandler@@AEAAXXZ @ 0x180063D64
 * Callers:
 *     ??0MPCSpatialGestureRecognizerHandler@@QEAA@K@Z @ 0x1800639D4 (--0MPCSpatialGestureRecognizerHandler@@QEAA@K@Z.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CB534 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
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
  __int64 v12; // r14
  _DWORD *v13; // rbx
  _DWORD *v14; // rax
  _DWORD *v15; // rdi
  int v16; // eax
  __int64 v17; // r14
  _DWORD *v18; // rbx
  _DWORD *v19; // rax
  _DWORD *v20; // rdi
  int v21; // eax
  __int64 v22; // r14
  _DWORD *v23; // rbx
  _DWORD *v24; // rax
  _DWORD *v25; // rdi
  int v26; // eax
  __int64 v27; // r14
  _DWORD *v28; // rbx
  _DWORD *v29; // rax
  _DWORD *v30; // rdi
  int v31; // eax
  __int64 v32; // r14
  _DWORD *v33; // rbx
  _DWORD *v34; // rax
  _DWORD *v35; // rdi
  int v36; // eax
  __int64 v37; // r14
  _DWORD *v38; // rdi
  _DWORD *v39; // rax
  _DWORD *v40; // rbx
  int v41; // eax
  __int128 v42; // [rsp+20h] [rbp-59h]
  __int128 v43; // [rsp+20h] [rbp-59h]
  __int128 v44; // [rsp+20h] [rbp-59h]
  __int128 v45; // [rsp+20h] [rbp-59h]
  __int128 v46; // [rsp+20h] [rbp-59h]
  __int128 v47; // [rsp+20h] [rbp-59h]
  __int128 v48; // [rsp+20h] [rbp-59h]
  __int128 v49; // [rsp+20h] [rbp-59h]
  wil::details::in1diag3 *retaddr; // [rsp+D8h] [rbp+5Fh]

  v2 = *((_QWORD *)this + 2);
  *(_QWORD *)&v42 = this;
  *((_QWORD *)&v42 + 1) = MPCSpatialGestureRecognizerHandler::OnSpatialManipulationStarted;
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
    *((_OWORD *)v5 + 1) = v42;
    *(_QWORD *)v5 = off_1800D6870;
    v3 = v5;
  }
  v6 = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v2 + 144LL))(v2, v3, (char *)this + 40);
  if ( v6 < 0 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x43,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v6);
  if ( v3 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v3 + 16LL))(v3);
  v7 = *((_QWORD *)this + 2);
  *(_QWORD *)&v43 = this;
  *((_QWORD *)&v43 + 1) = MPCSpatialGestureRecognizerHandler::OnSpatialManipulationUpdated;
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
    *((_OWORD *)v10 + 1) = v43;
    *(_QWORD *)v10 = off_1800D6848;
    v8 = v10;
  }
  v11 = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v7 + 160LL))(v7, v8, (char *)this + 48);
  if ( v11 < 0 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x44,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v11);
  if ( v8 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v8 + 16LL))(v8);
  v12 = *((_QWORD *)this + 2);
  *(_QWORD *)&v44 = this;
  *((_QWORD *)&v44 + 1) = MPCSpatialGestureRecognizerHandler::OnSpatialManipulationCompleted;
  v13 = 0LL;
  v14 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v15 = v14;
  if ( v14 )
  {
    *(_QWORD *)v14 = &Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *>::`vftable';
    v14[3] = 1;
    *(_QWORD *)v14 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)v15 + 1) = v44;
    *(_QWORD *)v15 = off_1800D66B8;
    v13 = v15;
  }
  v16 = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v12 + 176LL))(v12, v13, (char *)this + 56);
  if ( v16 < 0 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x45,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v16);
  if ( v13 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v13 + 16LL))(v13);
  v17 = *((_QWORD *)this + 2);
  *(_QWORD *)&v45 = this;
  *((_QWORD *)&v45 + 1) = MPCSpatialGestureRecognizerHandler::OnSpatialManipulationCanceled;
  v18 = 0LL;
  v19 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v20 = v19;
  if ( v19 )
  {
    *(_QWORD *)v19 = &Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *>::`vftable';
    v19[3] = 1;
    *(_QWORD *)v19 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCanceledEventArgs *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)v20 + 1) = v45;
    *(_QWORD *)v20 = off_1800D68C0;
    v18 = v20;
  }
  v21 = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v17 + 192LL))(v17, v18, (char *)this + 64);
  if ( v21 < 0 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x46,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v21);
  if ( v18 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v18 + 16LL))(v18);
  v22 = *((_QWORD *)this + 2);
  *(_QWORD *)&v46 = this;
  *((_QWORD *)&v46 + 1) = MPCSpatialGestureRecognizerHandler::OnSpatialNavigationStarted;
  v23 = 0LL;
  v24 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v25 = v24;
  if ( v24 )
  {
    *(_QWORD *)v24 = &Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *>::`vftable';
    v24[3] = 1;
    *(_QWORD *)v24 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationStartedEventArgs *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)v25 + 1) = v46;
    *(_QWORD *)v25 = off_1800D6780;
    v23 = v25;
  }
  v26 = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v22 + 208LL))(v22, v23, (char *)this + 72);
  if ( v26 < 0 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x48,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v26);
  if ( v23 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v23 + 16LL))(v23);
  v27 = *((_QWORD *)this + 2);
  *(_QWORD *)&v47 = this;
  *((_QWORD *)&v47 + 1) = MPCSpatialGestureRecognizerHandler::OnSpatialNavigationUpdated;
  v28 = 0LL;
  v29 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v30 = v29;
  if ( v29 )
  {
    *(_QWORD *)v29 = &Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *>::`vftable';
    v29[3] = 1;
    *(_QWORD *)v29 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)v30 + 1) = v47;
    *(_QWORD *)v30 = off_1800D6910;
    v28 = v30;
  }
  v31 = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v27 + 224LL))(v27, v28, (char *)this + 80);
  if ( v31 < 0 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x49,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v31);
  if ( v28 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v28 + 16LL))(v28);
  v32 = *((_QWORD *)this + 2);
  *(_QWORD *)&v48 = this;
  *((_QWORD *)&v48 + 1) = MPCSpatialGestureRecognizerHandler::OnSpatialNavigationCompleted;
  v33 = 0LL;
  v34 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v35 = v34;
  if ( v34 )
  {
    *(_QWORD *)v34 = &Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *>::`vftable';
    v34[3] = 1;
    *(_QWORD *)v34 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationCompletedEventArgs *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)v35 + 1) = v48;
    *(_QWORD *)v35 = off_1800D67D0;
    v33 = v35;
  }
  v36 = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v32 + 240LL))(v32, v33, (char *)this + 88);
  if ( v36 < 0 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x4A,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v36);
  if ( v33 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v33 + 16LL))(v33);
  v37 = *((_QWORD *)this + 2);
  *(_QWORD *)&v49 = this;
  *((_QWORD *)&v49 + 1) = MPCSpatialGestureRecognizerHandler::OnSpatialNavigationCanceled;
  v38 = 0LL;
  v39 = operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
  v40 = v39;
  if ( v39 )
  {
    *(_QWORD *)v39 = &Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialManipulationCompletedEventArgs *>::`vftable';
    v39[3] = 1;
    *(_QWORD *)v39 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationCanceledEventArgs *>>::`vftable';
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                           + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
    *((_OWORD *)v40 + 1) = v49;
    *(_QWORD *)v40 = off_1800D6708;
    v38 = v40;
  }
  v41 = (*(__int64 (__fastcall **)(__int64, _DWORD *, char *))(*(_QWORD *)v37 + 256LL))(v37, v38, (char *)this + 96);
  if ( v41 < 0 )
    wil::details::in1diag3::_FailFast_Hr(
      retaddr,
      (void *)0x4B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcspatialgesturerecognizerhandler.cpp",
      (const char *)(unsigned int)v41);
  if ( v38 )
    (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v38 + 16LL))(v38);
}
