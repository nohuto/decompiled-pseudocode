/*
 * XREFs of ??_ECImmersiveMode@@MEAAPEAXI@Z @ 0x180030570
 * Callers:
 *     <none>
 * Callees:
 *     ??1AgileRegistrationList@@QEAA@XZ @ 0x180007BCC (--1AgileRegistrationList@@QEAA@XZ.c)
 *     ??1CWRLObjectWithGITSite@@IEAA@XZ @ 0x18001EAF0 (--1CWRLObjectWithGITSite@@IEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

CImmersiveMode *__fastcall CImmersiveMode::`vector deleting destructor'(CImmersiveMode *this, char a2)
{
  void *v4; // rcx
  void *v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  void *v8; // rcx
  __int64 v9; // rcx

  *(_QWORD *)this = &CImmersiveMode::`vftable';
  *((_QWORD *)this + 3) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IActiveZBand,IImmersiveSystemMode,IImmersiveSystemModeInternal,IActiveZBand,IImmersiveSystemModeNotificationServicePrivate,IActiveZBandNotificationServicePrivate,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>>::`vftable'{for `CWRLObjectWithGITSite'};
  *((_QWORD *)this + 7) = &CImmersiveMode::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IActiveZBand,Microsoft::WRL::Details::InterfaceList<IImmersiveSystemMode,Microsoft::WRL::Details::InterfaceList<IImmersiveSystemModeInternal,Microsoft::WRL::Details::InterfaceList<IActiveZBand,Microsoft::WRL::Details::InterfaceList<IImmersiveSystemModeNotificationServicePrivate,Microsoft::WRL::Details::InterfaceList<IActiveZBandNotificationServicePrivate,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil>>>>>>>,1,0>'};
  *((_QWORD *)this + 8) = &CImmersiveMode::`vftable'{for `IImmersiveSystemMode'};
  *((_QWORD *)this + 9) = &CImmersiveMode::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IImmersiveSystemModeInternal,Microsoft::WRL::Details::InterfaceList<IActiveZBand,Microsoft::WRL::Details::InterfaceList<IImmersiveSystemModeNotificationServicePrivate,Microsoft::WRL::Details::InterfaceList<IActiveZBandNotificationServicePrivate,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil>>>>>,1,0>'};
  *((_QWORD *)this + 10) = &CImmersiveMode::`vftable'{for `IActiveZBand'};
  *((_QWORD *)this + 11) = &CImmersiveMode::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IImmersiveSystemModeNotificationServicePrivate,Microsoft::WRL::Details::InterfaceList<IActiveZBandNotificationServicePrivate,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil>>>,1,1>'};
  *((_QWORD *)this + 12) = &CImmersiveMode::`vftable'{for `IActiveZBandNotificationServicePrivate'};
  *((_QWORD *)this + 13) = &CImmersiveMode::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IImmersiveMonitorNotification,IDesktopVisibilityService,IDesktopVisibilityChangesNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil>,1,1>'};
  *((_QWORD *)this + 14) = &CImmersiveMode::`vftable'{for `IDesktopVisibilityService'};
  *((_QWORD *)this + 15) = &CImmersiveMode::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IDesktopVisibilityChangesNotification,Microsoft::WRL::Details::Nil>,1,0>'};
  v4 = (void *)*((_QWORD *)this + 48);
  if ( v4 )
  {
    LocalFree(v4);
    *((_QWORD *)this + 48) = 0LL;
  }
  *((_QWORD *)this + 49) = 0LL;
  *((_QWORD *)this + 51) = 0LL;
  v5 = (void *)*((_QWORD *)this + 44);
  if ( v5 )
  {
    LocalFree(v5);
    *((_QWORD *)this + 44) = 0LL;
  }
  *((_QWORD *)this + 45) = 0LL;
  *((_QWORD *)this + 47) = 0LL;
  v6 = *((_QWORD *)this + 42);
  if ( v6 )
  {
    *((_QWORD *)this + 42) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = *((_QWORD *)this + 37);
  if ( v7 )
  {
    *((_QWORD *)this + 37) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  AgileRegistrationList::~AgileRegistrationList((CImmersiveMode *)((char *)this + 248));
  AgileRegistrationList::~AgileRegistrationList((CImmersiveMode *)((char *)this + 208));
  v8 = (void *)*((_QWORD *)this + 24);
  if ( v8 != (void *)-1LL )
  {
    CloseHandle(v8);
    *((_QWORD *)this + 24) = -1LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 136));
  *((_DWORD *)this + 33) = -1073741823;
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite((CImmersiveMode *)((char *)this + 24));
  v9 = *((_QWORD *)this + 2);
  if ( v9 )
  {
    *((_QWORD *)this + 2) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
