/*
 * XREFs of ??_GCClassicWindowManager@@MEAAPEAXI@Z @ 0x180034480
 * Callers:
 *     <none>
 * Callees:
 *     ??1CWRLObjectWithGITSite@@IEAA@XZ @ 0x18001EAF0 (--1CWRLObjectWithGITSite@@IEAA@XZ.c)
 *     ??1?$CActivationBasedCollection@V?$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@UEAA@XZ @ 0x180037CE4 (--1-$CActivationBasedCollection@V-$ComPtr@UIClassicWindow@@@WRL@Microsoft@@@@UEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall CClassicWindowManager::`scalar deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this,
        char a2)
{
  HANDLE OwningThread; // rcx
  __int64 v5; // rcx
  HANDLE v6; // rcx

  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CClassicWindowManager::`vftable';
  this->LockSemaphore = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,IClassicWindowManagerPrivate,IApplicationActivationHistory,IClassicWindowManager,IClassicWindowPresentation,IClassicWindowCollectionRefresh,ITaskListChangeListener,IClassicWindowOwnershipQuery>::`vftable'{for `CWRLObjectWithGITSite'};
  this[1].OwningThread = &CClassicWindowManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IClassicWindowManagerPrivate,Microsoft::WRL::Details::InterfaceList<IApplicationActivationHistory,Microsoft::WRL::Details::InterfaceList<IClassicWindowManager,Microsoft::WRL::Details::InterfaceList<IClassicWindowPresentation,Microsoft::WRL::Details::InterfaceList<IClassicWindowCollectionRefresh,Microsoft::WRL::Details::InterfaceList<ITaskListChangeListener,Microsoft::WRL::Details::InterfaceList<IClassicWindowOwnershipQuery,Microsoft::WRL::Details::Nil>>>>>>>,1,0>'};
  this[1].LockSemaphore = &CClassicWindowManager::`vftable'{for `IApplicationActivationHistory'};
  this[1].SpinCount = (ULONG_PTR)&CClassicWindowManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IClassicWindowManager,Microsoft::WRL::Details::InterfaceList<IClassicWindowPresentation,Microsoft::WRL::Details::InterfaceList<IClassicWindowCollectionRefresh,Microsoft::WRL::Details::InterfaceList<ITaskListChangeListener,Microsoft::WRL::Details::InterfaceList<IClassicWindowOwnershipQuery,Microsoft::WRL::Details::Nil>>>>>,1,0>'};
  this[2].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CClassicWindowManager::`vftable'{for `IClassicWindowPresentation'};
  *(_QWORD *)&this[2].LockCount = &CClassicWindowManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IClassicWindowCollectionRefresh,Microsoft::WRL::Details::InterfaceList<ITaskListChangeListener,Microsoft::WRL::Details::InterfaceList<IClassicWindowOwnershipQuery,Microsoft::WRL::Details::Nil>>>,1,0>'};
  this[2].OwningThread = &CClassicWindowManager::`vftable'{for `ITaskListChangeListener'};
  this[2].LockSemaphore = &CClassicWindowManager::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IClassicWindowOwnershipQuery,Microsoft::WRL::Details::Nil>,1,0>'};
  OwningThread = this[6].OwningThread;
  if ( OwningThread )
  {
    this[6].OwningThread = 0LL;
    (*(void (__fastcall **)(HANDLE))(*(_QWORD *)OwningThread + 16LL))(OwningThread);
  }
  v5 = *(_QWORD *)&this[6].LockCount;
  if ( v5 )
  {
    *(_QWORD *)&this[6].LockCount = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::~CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>(&this[5].LockCount);
  CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>::~CActivationBasedCollection<Microsoft::WRL::ComPtr<IClassicWindow>>(&this[4].LockCount);
  DeleteCriticalSection(this + 3);
  HIDWORD(this[2].SpinCount) = -1073741823;
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite((CWRLObjectWithGITSite *)&this->LockSemaphore);
  v6 = this->OwningThread;
  if ( v6 )
  {
    this->OwningThread = 0LL;
    (*(void (__fastcall **)(HANDLE))(*(_QWORD *)v6 + 16LL))(v6);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
