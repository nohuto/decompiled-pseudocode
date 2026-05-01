/*
 * XREFs of ??0CSplashScreen@@QEAA@XZ @ 0x18005BA60
 * Callers:
 *     ?Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z @ 0x18005E0C8 (-Initialize@CImmersiveWindowCollection@CImmersiveApp@@QEAAJPEAUIIAMServiceProvider@@@Z.c)
 * Callees:
 *     ?IncrementObjectCount@?$Module@$00V?$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UEAAKXZ @ 0x18004E690 (-IncrementObjectCount@-$Module@$00V-$DefaultModule@$00@Details@WRL@Microsoft@@@WRL@Microsoft@@UE.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

CSplashScreen *__fastcall CSplashScreen::CSplashScreen(CSplashScreen *this)
{
  __int64 *v1; // rdi
  __int64 v3; // rcx
  LPUNKNOWN v4; // rcx
  void (*v5)(void); // rax
  CSplashScreen *result; // rax
  LPUNKNOWN v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = (__int64 *)((char *)this + 48);
  *((_QWORD *)this + 3) = &CActivatedEventArgsBase::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<1>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 6) = 0LL;
  v7 = 0LL;
  if ( CoCreateFreeThreadedMarshaler(0LL, &v7) >= 0 )
  {
    v3 = *v1;
    if ( *v1 )
    {
      *v1 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    ((void (__fastcall *)(LPUNKNOWN, GUID *, __int64 *))v7->lpVtbl->QueryInterface)(
      v7,
      &GUID_00000003_0000_0000_c000_000000000046,
      v1);
  }
  v4 = v7;
  if ( v7 )
  {
    v7 = 0LL;
    ((void (__fastcall *)(LPUNKNOWN))v4->lpVtbl->Release)(v4);
  }
  *((_QWORD *)this + 8) = 1LL;
  *(_QWORD *)this = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::ApplicationModel::Activation::ISplashScreen,ISplashScreen,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::ApplicationModel::Activation::ISplashScreen'};
  *((_QWORD *)this + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::ApplicationModel::Activation::ISplashScreen,ISplashScreen,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,ISplashScreen,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::ApplicationModel::Activation::ISplashScreen,ISplashScreen,Microsoft::WRL::FtmBase>::`vftable'{for `ISplashScreen'};
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::ApplicationModel::Activation::ISplashScreen,ISplashScreen,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
  {
    v5 = *(void (**)(void))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 8LL);
    if ( (char *)v5 == (char *)Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount )
      Microsoft::WRL::Module<1,Microsoft::WRL::Details::DefaultModule<1>>::IncrementObjectCount();
    else
      v5();
  }
  *(_QWORD *)this = &CSplashScreen::`vftable'{for `Windows::ApplicationModel::Activation::ISplashScreen'};
  *((_QWORD *)this + 1) = &CSplashScreen::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,ISplashScreen,Microsoft::WRL::FtmBase>'};
  *((_QWORD *)this + 2) = &CSplashScreen::`vftable'{for `ISplashScreen'};
  *((_QWORD *)this + 3) = &CSplashScreen::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
  *((_QWORD *)this + 9) = 0LL;
  InitializeSRWLock((PSRWLOCK)this + 10);
  InitializeSRWLock((PSRWLOCK)this + 11);
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_WORD *)this + 64) = 1;
  *(_QWORD *)((char *)this + 132) = 0LL;
  result = this;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 38) = 0;
  *((_QWORD *)this + 20) = 0LL;
  *((_BYTE *)this + 168) = 0;
  return result;
}
