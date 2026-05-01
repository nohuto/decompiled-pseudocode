/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a454b71a2548c162ba69e30212a6224f___::Run @ 0x180145440
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLockExclusive@ViewEventDispatcher@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18011C2F8 (-AcquireLockExclusive@ViewEventDispatcher@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_p.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_a454b71a2548c162ba69e30212a6224f___::Run(
        __int64 a1)
{
  __int64 v2; // rdx
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  ViewEventDispatcher::AcquireLockExclusive(*(RTL_SRWLOCK **)(*(_QWORD *)(a1 + 24) + 176LL), &SRWLock);
  v2 = *(_QWORD *)(a1 + 24);
  if ( !*(_DWORD *)(v2 + 336) )
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(*(_QWORD *)(v2 + 176) + 520LL) + 32LL))(
      *(_QWORD *)(*(_QWORD *)(v2 + 176) + 520LL),
      *(unsigned int *)(v2 + 156),
      *(unsigned int *)(v2 + 284));
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
}
