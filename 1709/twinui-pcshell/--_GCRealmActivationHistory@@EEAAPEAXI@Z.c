/*
 * XREFs of ??_GCRealmActivationHistory@@EEAAPEAXI@Z @ 0x18004C450
 * Callers:
 *     <none>
 * Callees:
 *     ??1CWRLObjectWithGITSite@@IEAA@XZ @ 0x18001F820 (--1CWRLObjectWithGITSite@@IEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall CRealmActivationHistory::`scalar deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this,
        char a2)
{
  HANDLE OwningThread; // rcx
  __int64 v5; // rcx
  ULONG_PTR SpinCount; // rcx

  this->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CRealmActivationHistory::`vftable'{for `Microsoft::WRL::FtmBase'};
  this[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::FtmBase,CWRLObjectWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IRealmActivationHistory,IRealmActivationHistoryInternal>>::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,CWRLObjectWithGITSite,Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,IRealmActivationHistory,IRealmActivationHistoryInternal>>'};
  this[2].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)&CRealmActivationHistory::`vftable'{for `IRealmActivationHistory'};
  *(_QWORD *)&this[2].LockCount = &CRealmActivationHistory::`vftable'{for `Microsoft::WRL::Details::ImplementsHelper<Microsoft::WRL::RuntimeClassFlags<2>,1,IRealmActivationHistoryInternal>'};
  OwningThread = this[10].OwningThread;
  if ( OwningThread )
  {
    this[10].OwningThread = 0LL;
    (*(void (__fastcall **)(HANDLE))(*(_QWORD *)OwningThread + 16LL))(OwningThread);
  }
  v5 = *(_QWORD *)&this[10].LockCount;
  if ( v5 )
  {
    *(_QWORD *)&this[10].LockCount = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  DeleteCriticalSection(this + 3);
  HIDWORD(this[2].SpinCount) = -1073741823;
  CWRLObjectWithGITSite::~CWRLObjectWithGITSite((CWRLObjectWithGITSite *)&this[1]);
  SpinCount = this->SpinCount;
  if ( SpinCount )
  {
    this->SpinCount = 0LL;
    (*(void (__fastcall **)(ULONG_PTR))(*(_QWORD *)SpinCount + 16LL))(SpinCount);
  }
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
