/*
 * XREFs of ??1CImmersiveMode@@MEAA@XZ @ 0x180116F54
 * Callers:
 *     ??_ECImmersiveMode@@MEAAPEAXI@Z @ 0x1801174B0 (--_ECImmersiveMode@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x180004F94 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1CWRLObjectWithGITSite@@IEAA@XZ @ 0x1800F5B20 (--1CWRLObjectWithGITSite@@IEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=85
void __fastcall CImmersiveMode::~CImmersiveMode(CImmersiveMode *this)
{
  void *v2; // rcx
  void *v3; // rcx
  __int64 v4; // rsi
  __int64 i; // rdi
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 j; // rdi
  __int64 v9; // rcx
  void *v10; // rcx

  *(_QWORD *)this = &CImmersiveMode::`vftable';
  *((_QWORD *)this + 4) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IActiveZBand,IImmersiveSystemMode,IImmersiveSystemModeInternal,IActiveZBand,IImmersiveSystemModeNotificationServicePrivate,IActiveZBandNotificationServicePrivate,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification>>::`vftable'{for `Microsoft::WRL::Details::Selector<CWRLObjectWithGITSite,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,IActiveZBand,IImmersiveSystemMode,IImmersiveSystemModeInternal,IActiveZBand,IImmersiveSystemModeNotificationServicePrivate,IActiveZBandNotificationServicePrivate,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification>>>'};
  *((_QWORD *)this + 9) = &CImmersiveMode::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IActiveZBand,IImmersiveSystemMode,IImmersiveSystemModeInternal,IActiveZBand,IImmersiveSystemModeNotificationServicePrivate,IActiveZBandNotificationServicePrivate,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification>>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<CWRLObjectWithGITSite>,IActiveZBand,IImmersiveSystemMode,IImmersiveSystemModeInternal,IActiveZBand,IImmersiveSystemModeNotificationServicePrivate,IActiveZBandNotificationServicePrivate,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification>>>'};
  *((_QWORD *)this + 10) = &CImmersiveMode::`vftable'{for `IImmersiveSystemMode'};
  *((_QWORD *)this + 11) = &CImmersiveMode::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveSystemModeInternal,IActiveZBand,IImmersiveSystemModeNotificationServicePrivate,IActiveZBandNotificationServicePrivate,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification>>'};
  *((_QWORD *)this + 12) = &CImmersiveMode::`vftable'{for `IActiveZBand'};
  *((_QWORD *)this + 13) = &CImmersiveMode::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<IImmersiveSystemModeNotificationServicePrivate>,IActiveZBandNotificationServicePrivate,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification>>'};
  *((_QWORD *)this + 15) = &CImmersiveMode::`vftable'{for `Microsoft::WRL::Details::Selector<IActiveZBandNotificationServicePrivate,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<IActiveZBandNotificationServicePrivate>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification>>>'};
  *((_QWORD *)this + 17) = &CImmersiveMode::`vftable'{for `Microsoft::WRL::Details::Selector<Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification>>>,Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Details::ImplementsMarker<IActiveZBandNotificationServicePrivate>,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification>>>'};
  *((_QWORD *)this + 18) = &CImmersiveMode::`vftable'{for `IDesktopVisibilityService'};
  *((_QWORD *)this + 19) = &CImmersiveMode::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IDesktopVisibilityChangesNotification>'};
  v2 = (void *)*((_QWORD *)this + 54);
  if ( v2 )
  {
    LocalFree(v2);
    *((_QWORD *)this + 54) = 0LL;
  }
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  v3 = (void *)*((_QWORD *)this + 50);
  if ( v3 )
  {
    LocalFree(v3);
    *((_QWORD *)this + 50) = 0LL;
  }
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)this + 48);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 43);
  if ( *((_QWORD *)this + 37) )
  {
    v4 = *((_QWORD *)this + 38);
    for ( i = *((_QWORD *)this + 37); i != v4; i += 16LL )
    {
      v6 = *(_QWORD *)(i + 8);
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    std::_Deallocate(*((char **)this + 37), (__int64)(*((_QWORD *)this + 39) - *((_QWORD *)this + 37)) >> 4, 0x10uLL);
    *((_QWORD *)this + 37) = 0LL;
    *((_QWORD *)this + 38) = 0LL;
    *((_QWORD *)this + 39) = 0LL;
  }
  if ( *((_QWORD *)this + 32) )
  {
    v7 = *((_QWORD *)this + 33);
    for ( j = *((_QWORD *)this + 32); j != v7; j += 16LL )
    {
      v9 = *(_QWORD *)(j + 8);
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    std::_Deallocate(*((char **)this + 32), (__int64)(*((_QWORD *)this + 34) - *((_QWORD *)this + 32)) >> 4, 0x10uLL);
    *((_QWORD *)this + 32) = 0LL;
    *((_QWORD *)this + 33) = 0LL;
    *((_QWORD *)this + 34) = 0LL;
  }
  v10 = (void *)*((_QWORD *)this + 30);
  if ( v10 != (void *)-1LL )
  {
    CloseHandle(v10);
    *((_QWORD *)this + 30) = -1LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 184));
  *((_DWORD *)this + 45) = -1073741823;
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite((CImmersiveMode *)((char *)this + 32));
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 3);
}
