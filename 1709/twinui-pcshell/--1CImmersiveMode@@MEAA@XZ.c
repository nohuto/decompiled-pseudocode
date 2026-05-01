/*
 * XREFs of ??1CImmersiveMode@@MEAA@XZ @ 0x180031D24
 * Callers:
 *     ??_ECImmersiveMode@@MEAAPEAXI@Z @ 0x180031CF0 (--_ECImmersiveMode@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$vector@UItem@AgileRegistrationList@@V?$allocator@UItem@AgileRegistrationList@@@std@@@std@@QEAA@XZ @ 0x1800183F4 (--1-$vector@UItem@AgileRegistrationList@@V-$allocator@UItem@AgileRegistrationList@@@std@@@std@@Q.c)
 *     ??1CWRLObjectWithGITSite@@IEAA@XZ @ 0x18001F820 (--1CWRLObjectWithGITSite@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CImmersiveMode::~CImmersiveMode(CImmersiveMode *this)
{
  void *v2; // rcx
  void *v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  void *v6; // rcx
  __int64 v7; // rcx

  *(_QWORD *)this = &CImmersiveMode::`vftable';
  *((_QWORD *)this + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IActiveZBand,IImmersiveSystemMode,IImmersiveSystemModeInternal,IActiveZBand,IImmersiveSystemModeNotificationServicePrivate,IActiveZBandNotificationServicePrivate,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification>>::`vftable'{for `CWRLObjectWithGITSite'};
  *((_QWORD *)this + 10) = &CImmersiveMode::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IActiveZBand,IImmersiveSystemMode,IImmersiveSystemModeInternal,IActiveZBand,IImmersiveSystemModeNotificationServicePrivate,IActiveZBandNotificationServicePrivate,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification>>'};
  *((_QWORD *)this + 11) = &CImmersiveMode::`vftable'{for `IImmersiveSystemMode'};
  *((_QWORD *)this + 12) = &CImmersiveMode::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveSystemModeInternal,IActiveZBand,IImmersiveSystemModeNotificationServicePrivate,IActiveZBandNotificationServicePrivate,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification>>'};
  *((_QWORD *)this + 13) = &CImmersiveMode::`vftable'{for `IActiveZBand'};
  *((_QWORD *)this + 14) = &CImmersiveMode::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IImmersiveSystemModeNotificationServicePrivate,IActiveZBandNotificationServicePrivate,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification>>'};
  *((_QWORD *)this + 16) = &CImmersiveMode::`vftable'{for `IActiveZBandNotificationServicePrivate'};
  *((_QWORD *)this + 18) = &CImmersiveMode::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification>>'};
  *((_QWORD *)this + 19) = &CImmersiveMode::`vftable'{for `IDesktopVisibilityService'};
  *((_QWORD *)this + 20) = &CImmersiveMode::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IDesktopVisibilityChangesNotification>'};
  v2 = (void *)*((_QWORD *)this + 55);
  if ( v2 )
  {
    LocalFree(v2);
    *((_QWORD *)this + 55) = 0LL;
  }
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  v3 = (void *)*((_QWORD *)this + 51);
  if ( v3 )
  {
    LocalFree(v3);
    *((_QWORD *)this + 51) = 0LL;
  }
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  v4 = *((_QWORD *)this + 49);
  if ( v4 )
  {
    *((_QWORD *)this + 49) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 44);
  if ( v5 )
  {
    *((_QWORD *)this + 44) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  std::vector<AgileRegistrationList::Item>::~vector<AgileRegistrationList::Item>((unsigned __int64 *)this + 38);
  std::vector<AgileRegistrationList::Item>::~vector<AgileRegistrationList::Item>((unsigned __int64 *)this + 33);
  v6 = (void *)*((_QWORD *)this + 31);
  if ( v6 != (void *)-1LL )
  {
    CloseHandle(v6);
    *((_QWORD *)this + 31) = -1LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 192));
  *((_DWORD *)this + 47) = -1073741823;
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite((CImmersiveMode *)((char *)this + 40));
  v7 = *((_QWORD *)this + 4);
  if ( v7 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
}
