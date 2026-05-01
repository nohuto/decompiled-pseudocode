/*
 * XREFs of ?get_VisibilityRevoked@ViewWrapperBase@@UEAAJPEAE@Z @ 0x1801166A0
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLockShared@ViewEventDispatcher@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockShared@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x1800F187C (-AcquireLockShared@ViewEventDispatcher@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_poli.c)
 */

__int64 __fastcall ViewWrapperBase::get_VisibilityRevoked(RTL_SRWLOCK **this, unsigned __int8 *a2)
{
  unsigned int v4; // eax
  unsigned __int8 v5; // cl
  PSRWLOCK SRWLock; // [rsp+30h] [rbp+8h] BYREF

  ViewEventDispatcher::AcquireLockShared(this[17], &SRWLock);
  v4 = *((_DWORD *)this + 16);
  if ( (v4 & 0x18) == 0 || (v5 = 1, (~(v4 >> 5) & 1) == 0) )
    v5 = 0;
  *a2 = v5;
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return 0LL;
}
