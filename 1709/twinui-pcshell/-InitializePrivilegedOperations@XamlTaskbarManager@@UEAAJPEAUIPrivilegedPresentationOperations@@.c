/*
 * XREFs of ?InitializePrivilegedOperations@XamlTaskbarManager@@UEAAJPEAUIPrivilegedPresentationOperations@@@Z @ 0x18014ACB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlTaskbarManager::InitializePrivilegedOperations(
        RTL_SRWLOCK *this,
        struct IPrivilegedPresentationOperations *a2)
{
  RTL_SRWLOCK *v4; // rsi
  RTL_SRWLOCK *Ptr; // rdi
  const char *v6; // r9
  PVOID v7; // rcx
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  try
  {
    v4 = this + 35;
    AcquireSRWLockExclusive(this + 35);
    Ptr = (RTL_SRWLOCK *)this[8].Ptr;
    AcquireSRWLockExclusive(Ptr + 11);
    if ( Ptr[5].Ptr != a2 )
    {
      if ( a2 )
        (*(void (__fastcall **)(struct IPrivilegedPresentationOperations *))(*(_QWORD *)a2 + 8LL))(a2);
      v7 = Ptr[5].Ptr;
      Ptr[5].Ptr = a2;
      if ( v7 )
        (*(void (__fastcall **)(PVOID))(*(_QWORD *)v7 + 16LL))(v7);
    }
    if ( Ptr != (RTL_SRWLOCK *)-88LL )
      ReleaseSRWLockExclusive(Ptr + 11);
    if ( v4 )
      ReleaseSRWLockExclusive(v4);
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0x53,
                           (__int64)"pcshell\\twinui\\xamlexplorerhost\\lib\\xamltaskbarmanager.cpp",
                           v6);
  }
  return result;
}
