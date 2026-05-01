/*
 * XREFs of ?RemoveView@CAppLayout@@UEAAJPEAUIApplicationView@@@Z @ 0x1803138C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800F60C4 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800F60F4 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?_RemoveView@CAppLayout@@AEAAJPEAUIApplicationView@@@Z @ 0x1803148C4 (-_RemoveView@CAppLayout@@AEAAJPEAUIApplicationView@@@Z.c)
 */

__int64 __fastcall CAppLayout::RemoveView(RTL_SRWLOCK *this, struct IApplicationView *a2)
{
  RTL_SRWLOCK *v3; // rbx
  RTL_SRWLOCK *v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = this;
  wil::srwlock::lock_exclusive(this + 2, &v5);
  LODWORD(v3) = CAppLayout::_RemoveView((CAppLayout *)&v3[-5], a2);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v5);
  return (unsigned int)v3;
}
