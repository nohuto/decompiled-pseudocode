/*
 * XREFs of ??0CFrameApplicationPresentation@@QEAA@XZ @ 0x180015F98
 * Callers:
 *     ?Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x18005E0C8 (-Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z.c)
 * Callees:
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E690 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     memset_0 @ 0x18009911C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
CFrameApplicationPresentation *__fastcall CFrameApplicationPresentation::CFrameApplicationPresentation(
        CFrameApplicationPresentation *this)
{
  __int64 *v2; // rbx
  __int64 v3; // rcx
  LPUNKNOWN v4; // rcx
  void (__fastcall *v5)(struct Microsoft::WRL::Details::ModuleBase *); // rax
  LPUNKNOWN v7; // [rsp+40h] [rbp+8h] BYREF

  *((_QWORD *)this + 1) = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  v2 = (__int64 *)((char *)this + 32);
  *((_QWORD *)this + 4) = 0LL;
  v7 = 0LL;
  if ( CoCreateFreeThreadedMarshaler(0LL, &v7) >= 0 )
  {
    v3 = *v2;
    if ( *v2 )
    {
      *v2 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    ((void (__fastcall *)(LPUNKNOWN, GUID *, __int64 *))v7->lpVtbl->QueryInterface)(
      v7,
      &GUID_00000003_0000_0000_c000_000000000046,
      v2);
  }
  v4 = v7;
  if ( v7 )
  {
    v7 = 0LL;
    ((void (__fastcall *)(LPUNKNOWN))v4->lpVtbl->Release)(v4);
  }
  *((_DWORD *)this + 11) = 1;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationPresentationLayer,Microsoft::WRL::FtmBase>::`vftable'{for `IApplicationPresentationLayer'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationPresentationLayer,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
  {
    v5 = *(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                             + 8LL);
    if ( (char *)v5 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
      Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount(Microsoft::WRL::Details::ModuleBase::module_);
    else
      v5(Microsoft::WRL::Details::ModuleBase::module_);
  }
  *(_QWORD *)this = &CFrameApplicationPresentation::`vftable'{for `IApplicationPresentationLayer'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,IApplicationPresentationLayer,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_DWORD *)this + 12) = _InterlockedIncrement((volatile signed __int32 *)&Windows::Internal::ComTaskPool::s_dwUniqueCallingContext);
  *((_WORD *)this + 26) = 0;
  *((_BYTE *)this + 54) = 0;
  *((_DWORD *)this + 14) = 0;
  *((_DWORD *)this + 15) = -1;
  *((_QWORD *)this + 8) = (char *)this + 80;
  *((_QWORD *)this + 9) = (char *)this + 88;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_BYTE *)this + 96) = 1;
  *((_QWORD *)this + 13) = *((_QWORD *)this + 8);
  *((_QWORD *)this + 14) = *((_QWORD *)this + 9);
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 51) = 0;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = &ObjectWithClassName::`vftable';
  *((_QWORD *)this + 27) = &wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::`vftable';
  *((_QWORD *)this + 28) = 0LL;
  *((_QWORD *)this + 29) = (char *)this + 216;
  *((_QWORD *)this + 30) = 0LL;
  *((_DWORD *)this + 62) = 0;
  *((_QWORD *)this + 32) = (char *)this + 312;
  *((_QWORD *)this + 33) = (char *)this + 272;
  *((_DWORD *)this + 68) = 0;
  *((_BYTE *)this + 276) = 0;
  *((_BYTE *)this + 336) = 0;
  *((_DWORD *)this + 78) = 0;
  *((_QWORD *)this + 40) = "SplashScreenSuppressed";
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 43) = 1LL;
  *((_QWORD *)this + 62) = 0LL;
  *((_QWORD *)this + 63) = 0LL;
  memset_0((char *)this + 352, 0, 0x90uLL);
  *((_QWORD *)this + 64) = 0LL;
  *((_QWORD *)this + 65) = 0LL;
  *((_QWORD *)this + 27) = &CFramePresentationTelemetry::SplashScreenSuppressed::`vftable';
  *((_BYTE *)this + 528) = 1;
  *((_DWORD *)this + 134) = 1;
  *((_WORD *)this + 270) = 0;
  *((_QWORD *)this + 68) = 0LL;
  *((_QWORD *)this + 69) = 0LL;
  *((_QWORD *)this + 70) = 0LL;
  *((_QWORD *)this + 72) = 0LL;
  SetRectEmpty((LPRECT)((char *)this + 136));
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_DWORD *)this + 50) = 3;
  return this;
}
