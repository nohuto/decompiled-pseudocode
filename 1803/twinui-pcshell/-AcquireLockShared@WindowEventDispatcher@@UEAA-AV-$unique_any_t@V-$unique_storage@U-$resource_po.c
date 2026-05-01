/*
 * XREFs of ?AcquireLockShared@WindowEventDispatcher@@UEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x1801D3060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

RTL_SRWLOCK **__fastcall WindowEventDispatcher::AcquireLockShared(RTL_SRWLOCK *a1, RTL_SRWLOCK **a2)
{
  RTL_SRWLOCK *v2; // rbx

  v2 = a1 + 56;
  AcquireSRWLockShared(a1 + 56);
  *a2 = v2;
  return a2;
}
