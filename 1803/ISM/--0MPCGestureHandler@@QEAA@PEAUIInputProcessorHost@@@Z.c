/*
 * XREFs of ??0MPCGestureHandler@@QEAA@PEAUIInputProcessorHost@@@Z @ 0x180058CE4
 * Callers:
 *     ?MapGestureHandlerToWorkspace@MPCGestureHandlerManager@@AEAAXK@Z @ 0x1800552E0 (-MapGestureHandlerToWorkspace@MPCGestureHandlerManager@@AEAAXK@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x18000515C (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180029500 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180051A7C (-_FailFast_NullAlloc@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??0MPCThrottleableInputHelper@@QEAA@IPEBG@Z @ 0x18005AAA8 (--0MPCThrottleableInputHelper@@QEAA@IPEBG@Z.c)
 *     ??0MPCSpatialGestureRecognizerHandler@@QEAA@KPEAVManipulationInjector@@@Z @ 0x18005ACA4 (--0MPCSpatialGestureRecognizerHandler@@QEAA@KPEAVManipulationInjector@@@Z.c)
 *     ??0ManipulationInjector@@QEAA@XZ @ 0x1800AC0F8 (--0ManipulationInjector@@QEAA@XZ.c)
 *     ?Initialize@ManipulationInjector@@QEAAXPEAUHMONITOR__@@PEBUtagRECT@@@Z @ 0x1800AC2A0 (-Initialize@ManipulationInjector@@QEAAXPEAUHMONITOR__@@PEBUtagRECT@@@Z.c)
 *     ?EndManipulation@ManipulationInjector@@QEAAXK@Z @ 0x1800ACB7C (-EndManipulation@ManipulationInjector@@QEAAXK@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=64
MPCGestureHandler *__fastcall MPCGestureHandler::MPCGestureHandler(
        MPCGestureHandler *this,
        struct IInputProcessorHost *a2)
{
  _QWORD *v4; // r14
  _DWORD *v5; // rsi
  const unsigned __int16 *v6; // r8
  const char *v7; // r9
  struct IInputProcessorHost *v8; // rax
  __int64 v9; // rcx
  HMONITOR v10; // rdx
  const char *v11; // r9
  void *v12; // rcx
  _DWORD *v13; // rbx
  int v14; // eax
  MPCSpatialGestureRecognizerHandler *v15; // rax
  const char *v16; // r9
  void (__fastcall ***v17)(_QWORD, __int64); // rcx
  unsigned int v19; // eax
  unsigned int v20; // eax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  _DWORD *v22; // [rsp+68h] [rbp+10h]
  MPCSpatialGestureRecognizerHandler *v23; // [rsp+68h] [rbp+10h]

  v4 = (_QWORD *)((char *)this + 8);
  Microsoft::WRL::FtmBase::FtmBase((MPCGestureHandler *)((char *)this + 24));
  *((_QWORD *)this + 8) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IRawInputProvider,Microsoft::WRL::FtmBase>::`vftable'{for `IInspectable'};
  *v4 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IRawInputProvider,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IRawInputProvider,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &MPCGestureHandler::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &MPCGestureHandler::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *((_QWORD *)this + 9) = &IManipulationInjectorClient::`vftable';
  *(_QWORD *)this = &MPCGestureHandler::`vftable'{for `IInspectable'};
  *v4 = &MPCGestureHandler::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IRawInputProvider,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &MPCGestureHandler::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &MPCGestureHandler::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 9) = &MPCGestureHandler::`vftable';
  v5 = (_DWORD *)((char *)this + 80);
  ManipulationInjector::ManipulationInjector((MPCGestureHandler *)((char *)this + 80));
  *((_QWORD *)this + 113) = 0LL;
  *((_QWORD *)this + 114) = 0LL;
  *((_QWORD *)this + 115) = 0LL;
  *((_DWORD *)this + 232) = 0;
  *((_QWORD *)this + 117) = 0LL;
  *((_QWORD *)this + 118) = 0LL;
  *((_QWORD *)this + 119) = 0LL;
  *((_QWORD *)this + 120) = 0LL;
  *((_QWORD *)this + 121) = 0LL;
  *((_QWORD *)this + 122) = 0LL;
  *((_DWORD *)this + 246) = 0;
  *((_BYTE *)this + 988) = 0;
  *((_DWORD *)this + 248) = 100;
  MPCThrottleableInputHelper::MPCThrottleableInputHelper((MPCGestureHandler *)((char *)this + 1000), 0x64u, v6);
  v8 = (struct IInputProcessorHost *)*((_QWORD *)this + 114);
  if ( v8 != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct IInputProcessorHost *))(*(_QWORD *)a2 + 8LL))(a2);
    v9 = *((_QWORD *)this + 114);
    *((_QWORD *)this + 114) = a2;
    v8 = a2;
    if ( v9 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      v8 = (struct IInputProcessorHost *)*((_QWORD *)this + 114);
    }
  }
  if ( !v8 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x17,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandler.cpp",
      v7);
    __debugbreak();
  }
  v22 = operator new(0x3D8uLL);
  memset_0(v22, 0, 0x3D8uLL);
  v22[2] = 984;
  v12 = (void *)*((_QWORD *)this + 113);
  *((_QWORD *)this + 113) = v22;
  if ( v12 )
    operator delete(v12);
  if ( !*((_QWORD *)this + 113) )
  {
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      (void *)0x1B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandler.cpp",
      v11);
    __debugbreak();
  }
  if ( ((1LL << gdwDeviceFamily) & 0x224A) != 0 )
  {
    if ( *((_DWORD *)this + 42) )
    {
      v19 = wil::verify_hresult<long>(0x80070057);
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x5A9,
        (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
        (const char *)v19);
      __debugbreak();
    }
    *((_DWORD *)this + 21) = 0;
  }
  if ( *v5 != 5 )
  {
    ManipulationInjector::EndManipulation((MPCGestureHandler *)((char *)this + 80), 0);
    *v5 = 5;
    *(_QWORD *)((char *)this + 812) = 0LL;
  }
  *((_QWORD *)this + 109) = (char *)this + 72;
  if ( *((_DWORD *)this + 42) )
  {
    v20 = wil::verify_hresult<long>(0x80070057);
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x5E7,
      (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
      (const char *)v20);
    __debugbreak();
  }
  *((_DWORD *)this + 28) = 150;
  *((_DWORD *)this + 29) = 150;
  ManipulationInjector::Initialize((MPCGestureHandler *)((char *)this + 80), v10, 0LL);
  v13 = (_DWORD *)*((_QWORD *)this + 113);
  *v13 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 114) + 32LL))(*((_QWORD *)this + 114));
  *(_DWORD *)(*((_QWORD *)this + 113) + 4LL) = 8;
  v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD *))(**((_QWORD **)this + 114) + 40LL))(
          *((_QWORD *)this + 114),
          *((_QWORD *)this + 113),
          v4);
  if ( v14 < 0 )
  {
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x2B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandler.cpp",
      (const char *)(unsigned int)v14);
    __debugbreak();
  }
  v23 = (MPCSpatialGestureRecognizerHandler *)operator new(0xD8uLL);
  v15 = MPCSpatialGestureRecognizerHandler::MPCSpatialGestureRecognizerHandler(
          v23,
          **((_DWORD **)this + 113),
          (MPCGestureHandler *)((char *)this + 80));
  v17 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 115);
  *((_QWORD *)this + 115) = v15;
  if ( v17 )
    (**v17)(v17, 1LL);
  if ( !*((_QWORD *)this + 115) )
  {
    wil::details::in1diag3::_FailFast_NullAlloc(
      retaddr,
      (void *)0x2E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandler.cpp",
      v16);
    JUMPOUT(0x180059096LL);
  }
  return this;
}
