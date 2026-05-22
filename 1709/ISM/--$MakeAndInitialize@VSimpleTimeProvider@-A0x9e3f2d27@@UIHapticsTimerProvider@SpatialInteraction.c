/*
 * XREFs of ??$MakeAndInitialize@VSimpleTimeProvider@?A0x9e3f2d27@@UIHapticsTimerProvider@SpatialInteractionDevices@@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIHapticsTimerProvider@SpatialInteractionDevices@@@Z @ 0x1800C75C0
 * Callers:
 *     ?CreateTimeProvider@SpatialInteractionController@SpatialInteractionDevices@@CAJPEAPEAUIHapticsTimerProvider@2@@Z @ 0x1800C6C48 (-CreateTimeProvider@SpatialInteractionController@SpatialInteractionDevices@@CAJPEAPEAUIHapticsTi.c)
 * Callees:
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800367A8 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??0?$ImplementsHelper@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00VFtmBase@23@@Details@WRL@Microsoft@@QEAA@XZ @ 0x180063244 (--0-$ImplementsHelper@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00VFtmBase@23@@Details@WRL@Micros.c)
 *     __security_check_cookie @ 0x1800CAB30 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800CB534 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<`anonymous namespace'::SimpleTimeProvider,SpatialInteractionDevices::IHapticsTimerProvider,>(
        _QWORD *a1)
{
  _QWORD *v2; // rax
  _QWORD *v3; // rbx
  int ActivationFactory; // edi
  _QWORD *v5; // rdi
  struct Microsoft::WRL::Details::ModuleBase *v6; // rcx
  HRESULT v7; // eax
  HSTRING v8; // rbp
  __int64 v9; // rcx
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-38h] BYREF
  HSTRING string; // [rsp+38h] [rbp-20h] BYREF

  *a1 = 0LL;
  v2 = operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    v5 = v2 + 3;
    Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::FtmBase>::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::FtmBase>(v2 + 3);
    v6 = Microsoft::WRL::Details::ModuleBase::module_;
    *v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,SpatialInteractionDevices::IHapticsTimerProvider,Windows::System::Threading::ITimerElapsedHandler,Microsoft::WRL::FtmBase>::`vftable'{for `SpatialInteractionDevices::IHapticsTimerProvider'};
    v3[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,SpatialInteractionDevices::IHapticsTimerProvider,Windows::System::Threading::ITimerElapsedHandler,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::System::Threading::ITimerElapsedHandler,Microsoft::WRL::FtmBase>'};
    v3[2] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,SpatialInteractionDevices::IHapticsTimerProvider,Windows::System::Threading::ITimerElapsedHandler,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::System::Threading::ITimerElapsedHandler'};
    *v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,SpatialInteractionDevices::IHapticsTimerProvider,Windows::System::Threading::ITimerElapsedHandler,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::FtmBase>'};
    v3[9] = 1LL;
    if ( v6 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v6 + 8LL))(v6);
    *v3 = off_1800D9648;
    v3[1] = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,SpatialInteractionDevices::IHapticsTimerProvider,Windows::System::Threading::ITimerElapsedHandler,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::System::Threading::ITimerElapsedHandler,Microsoft::WRL::FtmBase>'};
    v3[2] = off_1800D97A0;
    *v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,SpatialInteractionDevices::IHapticsTimerProvider,Windows::System::Threading::ITimerElapsedHandler,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::FtmBase>'};
    v3[10] = 0LL;
    v3[11] = 0LL;
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v3 + 12), 0, 0);
    string = 0LL;
    v7 = WindowsCreateStringReference(L"Windows.System.Threading.ThreadPoolTimer", 0x28u, &hstringHeader, &string);
    if ( v7 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7);
      JUMPOUT(0x1800C7767LL);
    }
    v8 = string;
    v9 = v3[11];
    if ( v9 )
    {
      v3[11] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    ActivationFactory = RoGetActivationFactory(v8, &GUID_1a8a9d02_e482_461b_b8c7_8efad1cce590, v3 + 11);
    if ( ActivationFactory >= 0 )
      ActivationFactory = (*(__int64 (__fastcall **)(_QWORD *, GUID *, _QWORD *))*v3)(
                            v3,
                            &GUID_2961038b_b15c_4430_90c9_29048094d5ef,
                            a1);
    if ( v3 )
      (*(void (__fastcall **)(_QWORD *))(*v3 + 16LL))(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)ActivationFactory;
}
