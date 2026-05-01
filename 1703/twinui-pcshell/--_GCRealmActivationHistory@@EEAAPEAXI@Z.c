/*
 * XREFs of ??_GCRealmActivationHistory@@EEAAPEAXI@Z @ 0x18004A0E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CWRLObjectWithGITSite@@IEAA@XZ @ 0x18001EAF0 (--1CWRLObjectWithGITSite@@IEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall CRealmActivationHistory::`scalar deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this,
        char a2)
{
  HANDLE OwningThread; // rcx
  __int64 v5; // rcx
  HANDLE v6; // rcx

  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CRealmActivationHistory::`vftable'{for `Microsoft::WRL::FtmBase'};
  this->LockSemaphore = &CRealmActivationHistory::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<CWRLObjectWithGITSite,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IRealmActivationHistory,IRealmActivationHistoryInternal,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil>>,1,1>'};
  this[1].OwningThread = &CRealmActivationHistory::`vftable'{for `IRealmActivationHistory'};
  this[1].LockSemaphore = &CRealmActivationHistory::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::Details::InterfaceList<IRealmActivationHistoryInternal,Microsoft::WRL::Details::Nil>,1,0>'};
  OwningThread = this[9].OwningThread;
  if ( OwningThread )
  {
    this[9].OwningThread = 0LL;
    (*(void (__fastcall **)(HANDLE))(*(_QWORD *)OwningThread + 16LL))(OwningThread);
  }
  v5 = *(_QWORD *)&this[9].LockCount;
  if ( v5 )
  {
    *(_QWORD *)&this[9].LockCount = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  DeleteCriticalSection(this + 2);
  HIDWORD(this[1].SpinCount) = -1073741823;
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
