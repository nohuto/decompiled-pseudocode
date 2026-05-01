/*
 * XREFs of ?GrowLayoutRect@CAppLayoutItem@@UEAAXW4ABSOLUTE_DIRECTION@@H@Z @ 0x1803152E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800F60C4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800F60F4 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 */

void __fastcall CAppLayoutItem::GrowLayoutRect(__int64 a1, int a2, int a3)
{
  RTL_SRWLOCK *v6; // [rsp+30h] [rbp+8h] BYREF

  wil::srwlock::lock_exclusive((RTL_SRWLOCK *)(a1 + 24), &v6);
  if ( a2 == -1 )
    *(_DWORD *)(a1 + 48) -= a3;
  else
    *(_DWORD *)(a1 + 56) += a3;
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v6);
}
