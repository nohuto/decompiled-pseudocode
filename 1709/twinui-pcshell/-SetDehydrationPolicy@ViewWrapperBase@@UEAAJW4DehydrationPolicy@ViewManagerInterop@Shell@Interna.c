/*
 * XREFs of ?SetDehydrationPolicy@ViewWrapperBase@@UEAAJW4DehydrationPolicy@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x180141070
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireLockExclusive@ViewEventDispatcher@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@XZ @ 0x18011C2F8 (-AcquireLockExclusive@ViewEventDispatcher@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_p.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ViewWrapperBase::SetDehydrationPolicy(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  ViewEventDispatcher::AcquireLockExclusive(*(RTL_SRWLOCK **)(a1 + 152), &SRWLock);
  if ( a2 != *(_DWORD *)(a1 + 316) )
  {
    *(_DWORD *)(a1 + 316) = a2;
    v4 = *(_QWORD *)(a1 + 168);
    if ( v4 )
      (*(void (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 152) + 520LL) + 72LL))(
        *(_QWORD *)(*(_QWORD *)(a1 + 152) + 520LL),
        v4,
        a2);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  return 0LL;
}
