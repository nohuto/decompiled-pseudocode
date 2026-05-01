/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_818e1247758777a74d4013294a5c3000___::Run @ 0x1800389B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_818e1247758777a74d4013294a5c3000___::Run(
        __int64 a1)
{
  __int64 v1; // rbx
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v4 = 0LL;
  result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v1 + 48LL))(v1, *(_QWORD *)(a1 + 24), &v4);
  if ( (int)result >= 0 )
    result = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v1 + 160LL))(v1, v4, 5LL);
  v3 = v4;
  if ( v4 )
  {
    v4 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  }
  return result;
}
