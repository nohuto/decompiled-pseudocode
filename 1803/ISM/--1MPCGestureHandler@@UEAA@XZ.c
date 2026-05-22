/*
 * XREFs of ??1MPCGestureHandler@@UEAA@XZ @ 0x18005911C
 * Callers:
 *     ??_EMPCGestureHandler@@UEAAPEAXI@Z @ 0x1800590A0 (--_EMPCGestureHandler@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030F8 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U?$ITypedEventHandler@PEAVSpatialGestureRecognizer@Spatial@Input@UI@Windows@@PEAVSpatialNavigationUpdatedEventArgs@2345@@Foundation@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002A0E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@U-$ITypedEventHan.c)
 *     ??1?$vector@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAA@XZ @ 0x18005689C (--1-$vector@V-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@V-$allocator@V-$co.c)
 *     ??1ManipulationInjector@@QEAA@XZ @ 0x1800AC1B8 (--1ManipulationInjector@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall MPCGestureHandler::~MPCGestureHandler(MPCGestureHandler *this)
{
  __int64 v2; // rdx
  int v3; // eax
  void (__fastcall ***v4)(_QWORD, __int64); // rcx
  __int64 v5; // rcx
  void *v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  *(_QWORD *)this = &MPCGestureHandler::`vftable'{for `IInspectable'};
  *((_QWORD *)this + 1) = &MPCGestureHandler::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IRawInputProvider,IWeakReferenceSource,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &MPCGestureHandler::`vftable'{for `IWeakReferenceSource'};
  *((_QWORD *)this + 3) = &MPCGestureHandler::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 9) = &MPCGestureHandler::`vftable';
  v2 = *((_QWORD *)this + 113);
  if ( v2 )
  {
    v3 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 114) + 56LL))(*((_QWORD *)this + 114));
    if ( v3 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x35,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandler.cpp",
        (const char *)(unsigned int)v3);
      JUMPOUT(0x180059249LL);
    }
  }
  std::vector<wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>::~vector<wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>(
    (__int64)this + 936,
    v2);
  v4 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)this + 115);
  if ( v4 )
    (**v4)(v4, 1LL);
  v5 = *((_QWORD *)this + 114);
  if ( v5 )
  {
    *((_QWORD *)this + 114) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = (void *)*((_QWORD *)this + 113);
  if ( v6 )
    operator delete(v6);
  ManipulationInjector::~ManipulationInjector((MPCGestureHandler *)((char *)this + 80));
  v7 = *((_QWORD *)this + 8);
  if ( v7 < 0 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,Windows::Foundation::ITypedEventHandler<Windows::UI::Input::Spatial::SpatialGestureRecognizer *,Windows::UI::Input::Spatial::SpatialNavigationUpdatedEventArgs *>>::Release((volatile signed __int32 *)(2 * v7));
  v8 = *((_QWORD *)this + 6);
  if ( v8 )
  {
    *((_QWORD *)this + 6) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
}
