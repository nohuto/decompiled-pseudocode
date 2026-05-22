/*
 * XREFs of ??1MPCGestureHandler@@UEAA@XZ @ 0x1800620CC
 * Callers:
 *     ??_EMPCGestureHandler@@UEAAPEAXI@Z @ 0x180062090 (--_EMPCGestureHandler@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800077C0 (-_FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$vector@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x18005ACD4 (--1-$vector@V-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@V-$allocator@V-$co.c)
 *     ??1ManipulationInjector@@QEAA@XZ @ 0x1800C047C (--1ManipulationInjector@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800CBCC8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
void __fastcall MPCGestureHandler::~MPCGestureHandler(MPCGestureHandler *this)
{
  int v2; // eax
  void (__fastcall ***v3)(_QWORD, __int64); // rcx
  __int64 v4; // rcx
  void *v5; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)this = &MPCGestureHandler::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &MPCGestureHandler::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IRawInputProvider,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &MPCGestureHandler::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,IRawInputProvider,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 10) = &MPCGestureHandler::`vftable';
  if ( *((_QWORD *)this + 114) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 115) + 56LL))(*((_QWORD *)this + 115));
    if ( v2 < 0 )
      wil::details::in1diag3::_FailFast_Hr(
        retaddr,
        (void *)0x2F,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandler.cpp",
        (const char *)(unsigned int)v2);
  }
  std::vector<wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::~vector<wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>((unsigned __int64 *)this + 118);
  v3 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 116);
  if ( v3 )
    (**v3)(v3, 1LL);
  v4 = *((_QWORD *)this + 115);
  if ( v4 )
  {
    *((_QWORD *)this + 115) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = (void *)*((_QWORD *)this + 114);
  if ( v5 )
    operator delete(v5);
  ManipulationInjector::~ManipulationInjector((MPCGestureHandler *)((char *)this + 88));
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,SpatialInteractionDevices::IHapticsTimerProvider,Windows::System::Threading::ITimerElapsedHandler,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,SpatialInteractionDevices::IHapticsTimerProvider,Windows::System::Threading::ITimerElapsedHandler,Microsoft::WRL::FtmBase>(this);
}
