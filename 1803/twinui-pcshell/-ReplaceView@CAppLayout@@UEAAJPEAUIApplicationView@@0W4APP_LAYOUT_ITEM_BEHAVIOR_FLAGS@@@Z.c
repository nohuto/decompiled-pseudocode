/*
 * XREFs of ?ReplaceView@CAppLayout@@UEAAJPEAUIApplicationView@@0W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x180313910
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800F60C4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800F60F4 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?_ReplaceView@CAppLayout@@AEAAJPEAUIApplicationView@@0W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z @ 0x180314930 (-_ReplaceView@CAppLayout@@AEAAJPEAUIApplicationView@@0W4APP_LAYOUT_ITEM_BEHAVIOR_FLAGS@@@Z.c)
 */

__int64 __fastcall CAppLayout::ReplaceView(RTL_SRWLOCK *a1, __int64 a2, __int64 a3, unsigned int a4)
{
  RTL_SRWLOCK *v5; // rbx
  RTL_SRWLOCK *v9; // [rsp+30h] [rbp+8h] BYREF

  v5 = a1;
  wil::srwlock::lock_exclusive(a1 + 2, &v9);
  LODWORD(v5) = CAppLayout::_ReplaceView(&v5[-5], a2, a3, a4);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v9);
  return (unsigned int)v5;
}
