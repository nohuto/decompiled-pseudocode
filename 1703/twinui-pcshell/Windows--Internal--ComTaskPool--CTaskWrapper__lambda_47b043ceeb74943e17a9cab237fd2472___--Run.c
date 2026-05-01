/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_47b043ceeb74943e17a9cab237fd2472___::Run @ 0x18001B910
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_47b043ceeb74943e17a9cab237fd2472___::Run(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // [rsp+40h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v4 = 0LL;
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v1 + 56LL))(v1, *(_QWORD *)(a1 + 24), &v4);
  if ( (int)result >= 0 )
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 144LL))(v1, v4);
  v3 = v4;
  if ( v4 )
  {
    v4 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
