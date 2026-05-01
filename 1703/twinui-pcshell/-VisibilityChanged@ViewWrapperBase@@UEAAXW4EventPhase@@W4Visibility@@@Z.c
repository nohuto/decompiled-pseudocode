/*
 * XREFs of ?VisibilityChanged@ViewWrapperBase@@UEAAXW4EventPhase@@W4Visibility@@@Z @ 0x180113B40
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLockExclusive@ViewEventDispatcher@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x1800F185C (-AcquireLockExclusive@ViewEventDispatcher@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_p.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall ViewWrapperBase::VisibilityChanged(__int64 a1, unsigned int a2, unsigned int a3)
{
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  ViewEventDispatcher::AcquireLockExclusive(*(RTL_SRWLOCK **)(a1 + 144), &SRWLock);
  (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(a1 - 8) + 192LL))(a1 - 8, a2, a3);
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
