/*
 * XREFs of ?put_IsHolographic@CActivatedEventArgsBase@@UEAAJE@Z @ 0x180192C70
 * Callers:
 *     <none>
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x18002620C (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 */

__int64 __fastcall CActivatedEventArgsBase::put_IsHolographic(RTL_SRWLOCK *this, char a2)
{
  RTL_SRWLOCK *v5; // [rsp+30h] [rbp+8h] BYREF

  wil::srwlock::lock_exclusive(this + 9, &v5);
  LOBYTE(this[8].Ptr) = a2;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v5);
  return 0LL;
}
