/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9bfcdedc9431ed62816a8472b97e3b70___::Run @ 0x18001C7A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9bfcdedc9431ed62816a8472b97e3b70___::Run(
        _QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v1 = a1[2];
  v6 = 0LL;
  v2 = a1[3];
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v1 + 56LL))(v1, v2, &v6);
  }
  else
  {
    v3 = a1[4];
    if ( v3 )
      (*(void (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v1 + 48LL))(v1, v3, &v6);
  }
  result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v1 + 136LL))(v1, v6);
  v5 = v6;
  if ( v6 )
  {
    v6 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return result;
}
