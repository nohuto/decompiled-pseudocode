/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_844449e548af17c9f319f8c2e0def985___::Run @ 0x18003A540
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_844449e548af17c9f319f8c2e0def985___::Run(
        __int64 a1)
{
  __int64 *v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(__int64 **)(a1 + 16);
  v7 = 0LL;
  v3 = *v2;
  v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 24) + 24LL))(*(_QWORD *)(a1 + 24));
  result = (*(__int64 (__fastcall **)(__int64 *, __int64, __int64 *))(v3 + 48))(v2, v4, &v7);
  if ( (int)result >= 0 )
    result = (*(__int64 (__fastcall **)(__int64 *, __int64, _QWORD, _QWORD))(*v2 + 160))(
               v2,
               v7,
               *(unsigned int *)(a1 + 32),
               0LL);
  v6 = v7;
  if ( v7 )
  {
    v7 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  return result;
}
