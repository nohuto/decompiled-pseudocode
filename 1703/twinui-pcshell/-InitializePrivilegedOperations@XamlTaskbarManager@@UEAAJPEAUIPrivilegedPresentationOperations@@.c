/*
 * XREFs of ?InitializePrivilegedOperations@XamlTaskbarManager@@UEAAJPEAUIPrivilegedPresentationOperations@@@Z @ 0x180120770
 * Callers:
 *     <none>
 * Callees:
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800261EC (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlTaskbarManager::InitializePrivilegedOperations(
        RTL_SRWLOCK *this,
        struct IPrivilegedPresentationOperations *a2)
{
  RTL_SRWLOCK *Ptr; // rdi
  const char *v5; // r9
  PVOID v6; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF
  PSRWLOCK v10; // [rsp+48h] [rbp+10h] BYREF

  try
  {
    wil::srwlock::lock_exclusive(this + 33, &v10);
    Ptr = (RTL_SRWLOCK *)this[6].Ptr;
    wil::srwlock::lock_exclusive(Ptr + 10, &SRWLock);
    if ( Ptr[5].Ptr != a2 )
    {
      if ( a2 )
        (*(void (__fastcall **)(struct IPrivilegedPresentationOperations *))(*(_QWORD *)a2 + 8LL))(a2);
      v6 = Ptr[5].Ptr;
      Ptr[5].Ptr = a2;
      if ( v6 )
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)v6 + 16LL))(v6);
    }
    if ( SRWLock )
      ReleaseSRWLockExclusive(SRWLock);
    if ( v10 )
      ReleaseSRWLockExclusive(v10);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x53,
                           (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamltaskbarmanager.cpp",
                           v5);
  }
  return result;
}
