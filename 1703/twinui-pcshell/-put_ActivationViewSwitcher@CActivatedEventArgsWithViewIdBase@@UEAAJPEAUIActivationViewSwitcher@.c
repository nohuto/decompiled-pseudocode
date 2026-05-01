/*
 * XREFs of ?put_ActivationViewSwitcher@CActivatedEventArgsWithViewIdBase@@UEAAJPEAUIActivationViewSwitcher@ViewManagement@UI@Windows@@@Z @ 0x180192FA0
 * Callers:
 *     <none>
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18002620C (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CActivatedEventArgsWithViewIdBase::put_ActivationViewSwitcher(
        RTL_SRWLOCK *this,
        struct Windows::UI::ViewManagement::IActivationViewSwitcher *a2)
{
  unsigned int v4; // esi
  PVOID Ptr; // rcx
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp+8h] BYREF

  wil::srwlock::lock_exclusive(this + 5, &v7);
  v4 = this[2].Ptr != 0LL ? 0x8000FFFF : 0;
  if ( !this[2].Ptr && this[2].Ptr != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct Windows::UI::ViewManagement::IActivationViewSwitcher *))(*(_QWORD *)a2 + 8LL))(a2);
    Ptr = this[2].Ptr;
    this[2].Ptr = a2;
    if ( Ptr )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v7);
  return v4;
}
