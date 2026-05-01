/*
 * XREFs of ?SetViewData@CAppLayoutItem@@UEAAXPEBUAPPLICATION_VIEW_DATA@@@Z @ 0x1803156C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800F60C4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800F60F4 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 */

void __fastcall CAppLayoutItem::SetViewData(RTL_SRWLOCK *this, const struct APPLICATION_VIEW_DATA *a2)
{
  RTL_SRWLOCK *v4; // [rsp+30h] [rbp+8h] BYREF

  wil::srwlock::lock_exclusive(this + 3, &v4);
  *(_OWORD *)&this[10].Ptr = *(_OWORD *)a2;
  *(_OWORD *)&this[12].Ptr = *((_OWORD *)a2 + 1);
  LODWORD(this[14].Ptr) = *((_DWORD *)a2 + 8);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v4);
}
