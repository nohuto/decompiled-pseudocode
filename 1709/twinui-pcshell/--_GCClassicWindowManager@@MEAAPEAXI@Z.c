/*
 * XREFs of ??_GCClassicWindowManager@@MEAAPEAXI@Z @ 0x180035AF0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CWRLObjectWithGITSite@@IEAA@XZ @ 0x18001F820 (--1CWRLObjectWithGITSite@@IEAA@XZ.c)
 *     ??1?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@UEAA@XZ @ 0x1800394B8 (--1-$CActivationBasedCollection@V-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

CClassicWindowManager *__fastcall CClassicWindowManager::`scalar deleting destructor'(
        CClassicWindowManager *this,
        char a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx

  *(_QWORD *)this = &CClassicWindowManager::`vftable';
  *((_QWORD *)this + 5) = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IClassicWindowManagerPrivate,IApplicationActivationHistory,IClassicWindowManager,IClassicWindowPresentation,IClassicWindowCollectionRefresh,ITaskListChangeListener,IClassicWindowOwnershipQuery>::`vftable'{for `CWRLObjectWithGITSite'};
  *((_QWORD *)this + 10) = &CClassicWindowManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IClassicWindowManagerPrivate,IApplicationActivationHistory,IClassicWindowManager,IClassicWindowPresentation,IClassicWindowCollectionRefresh,ITaskListChangeListener,IClassicWindowOwnershipQuery>'};
  *((_QWORD *)this + 11) = &CClassicWindowManager::`vftable'{for `IApplicationActivationHistory'};
  *((_QWORD *)this + 12) = &CClassicWindowManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IClassicWindowManager,IClassicWindowPresentation,IClassicWindowCollectionRefresh,ITaskListChangeListener,IClassicWindowOwnershipQuery>'};
  *((_QWORD *)this + 13) = &CClassicWindowManager::`vftable'{for `IClassicWindowPresentation'};
  *((_QWORD *)this + 14) = &CClassicWindowManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IClassicWindowCollectionRefresh,ITaskListChangeListener,IClassicWindowOwnershipQuery>'};
  *((_QWORD *)this + 15) = &CClassicWindowManager::`vftable'{for `ITaskListChangeListener'};
  *((_QWORD *)this + 16) = &CClassicWindowManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IClassicWindowOwnershipQuery>'};
  v4 = *((_QWORD *)this + 36);
  if ( v4 )
  {
    *((_QWORD *)this + 36) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = *((_QWORD *)this + 35);
  if ( v5 )
  {
    *((_QWORD *)this + 35) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = *((_QWORD *)this + 34);
  if ( v6 )
  {
    *((_QWORD *)this + 34) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::~CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>((char *)this + 232);
  CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::~CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>((char *)this + 192);
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 144));
  *((_DWORD *)this + 35) = -1073741823;
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite((CClassicWindowManager *)((char *)this + 40));
  v7 = *((_QWORD *)this + 4);
  if ( v7 )
  {
    *((_QWORD *)this + 4) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
