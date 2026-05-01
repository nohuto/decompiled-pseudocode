/*
 * XREFs of ?SetRect@CAppLayoutItem@@UEAAXW4APP_LAYOUT_RECT_TYPE@@PEBUtagRECT@@@Z @ 0x180315660
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800F60C4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800F60F4 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 */

void __fastcall CAppLayoutItem::SetRect(RTL_SRWLOCK *a1, int a2, const RECT *a3)
{
  struct tagRECT *v6; // rcx
  RTL_SRWLOCK *v7; // [rsp+30h] [rbp+8h] BYREF

  wil::srwlock::lock_exclusive(a1 + 3, &v7);
  if ( !a2 )
  {
    v6 = (struct tagRECT *)&a1[6];
    goto LABEL_5;
  }
  if ( a2 == 1 )
  {
    v6 = (struct tagRECT *)&a1[8];
LABEL_5:
    CopyRect(v6, a3);
  }
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v7);
}
