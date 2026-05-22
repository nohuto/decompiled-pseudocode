/*
 * XREFs of ??$MakeAndInitialize@VSimpleTimeProvider@HapticsEngine@SpatialInteractions@Internal@Windows@@UIHapticsTimerProvider@345@$$V@Details@WRL@Microsoft@@YAJPEAPEAUIHapticsTimerProvider@SpatialInteractions@Internal@Windows@@@Z @ 0x1800DA064
 * Callers:
 *     ?RuntimeClassInitialize@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAJ_N_J1E00V?$function@$$A6AXE@Z@std@@@Z @ 0x1800D4FB4 (-RuntimeClassInitialize@HapticsEngine@SpatialInteractions@Internal@Windows@@QEAAJ_N_J1E00V-$func.c)
 * Callees:
 *     ??0FtmBase@WRL@Microsoft@@QEAA@XZ @ 0x180029500 (--0FtmBase@WRL@Microsoft@@QEAA@XZ.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18005D838 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1800E1B10 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800E210C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::MakeAndInitialize<Windows::Internal::SpatialInteractions::HapticsEngine::SimpleTimeProvider,Windows::Internal::SpatialInteractions::IHapticsTimerProvider,>(
        _QWORD *a1)
{
  char *v2; // rax
  char *v3; // rbx
  int ActivationFactory; // edi
  _QWORD *v5; // rdi
  struct Microsoft::WRL::Details::ModuleBase *v6; // rcx
  HRESULT v7; // eax
  HSTRING v8; // rbp
  __int64 v9; // rcx
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-38h] BYREF
  HSTRING string; // [rsp+38h] [rbp-20h] BYREF

  *a1 = 0LL;
  v2 = (char *)operator new(0x88uLL, (const struct std::nothrow_t *)&std::nothrow);
  v3 = v2;
  if ( v2 )
  {
    v5 = v2 + 24;
    Microsoft::WRL::FtmBase::FtmBase((Microsoft::WRL::FtmBase *)(v2 + 24));
    v6 = Microsoft::WRL::Details::ModuleBase::module_;
    *(_QWORD *)v3 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::SpatialInteractions::IHapticsTimerProvider,Windows::System::Threading::ITimerElapsedHandler,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::Internal::SpatialInteractions::IHapticsTimerProvider'};
    *((_QWORD *)v3 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::SpatialInteractions::IHapticsTimerProvider,Windows::System::Threading::ITimerElapsedHandler,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::System::Threading::ITimerElapsedHandler,Microsoft::WRL::FtmBase>'};
    *((_QWORD *)v3 + 2) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::SpatialInteractions::IHapticsTimerProvider,Windows::System::Threading::ITimerElapsedHandler,Microsoft::WRL::FtmBase>::`vftable'{for `Windows::System::Threading::ITimerElapsedHandler'};
    *v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::SpatialInteractions::IHapticsTimerProvider,Windows::System::Threading::ITimerElapsedHandler,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    *((_QWORD *)v3 + 8) = 1LL;
    if ( v6 )
      (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)v6 + 8LL))(v6);
    *(_QWORD *)v3 = &Windows::Internal::SpatialInteractions::HapticsEngine::SimpleTimeProvider::`vftable'{for `Windows::Internal::SpatialInteractions::IHapticsTimerProvider'};
    *((_QWORD *)v3 + 1) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::SpatialInteractions::IHapticsTimerProvider,Windows::System::Threading::ITimerElapsedHandler,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,IWeakReferenceSource,Windows::System::Threading::ITimerElapsedHandler,Microsoft::WRL::FtmBase>'};
    *((_QWORD *)v3 + 2) = &Windows::Internal::SpatialInteractions::HapticsEngine::SimpleTimeProvider::`vftable'{for `Windows::System::Threading::ITimerElapsedHandler'};
    *v5 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<3>,Windows::Internal::SpatialInteractions::IHapticsTimerProvider,Windows::System::Threading::ITimerElapsedHandler,Microsoft::WRL::FtmBase>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<3>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::FtmBase>>'};
    *((_QWORD *)v3 + 9) = 0LL;
    *((_QWORD *)v3 + 10) = 0LL;
    *((_QWORD *)v3 + 11) = 0LL;
    InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v3 + 96), 0, 0);
    string = 0LL;
    v7 = WindowsCreateStringReference(L"Windows.System.Threading.ThreadPoolTimer", 0x28u, &hstringHeader, &string);
    if ( v7 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7);
      JUMPOUT(0x1800DA210LL);
    }
    v8 = string;
    v9 = *((_QWORD *)v3 + 10);
    if ( v9 )
    {
      *((_QWORD *)v3 + 10) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    ActivationFactory = RoGetActivationFactory(v8, &GUID_1a8a9d02_e482_461b_b8c7_8efad1cce590, v3 + 80);
    if ( ActivationFactory >= 0 )
      ActivationFactory = (**(__int64 (__fastcall ***)(char *, GUID *, _QWORD *))v3)(
                            v3,
                            &GUID_a933a9eb_3914_4eb6_af73_692a6fca813c,
                            a1);
    if ( v3 )
      (*(void (__fastcall **)(char *))(*(_QWORD *)v3 + 16LL))(v3);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)ActivationFactory;
}
