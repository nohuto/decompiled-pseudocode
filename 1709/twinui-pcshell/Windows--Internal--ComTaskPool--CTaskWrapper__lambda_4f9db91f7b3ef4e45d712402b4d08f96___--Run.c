/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4f9db91f7b3ef4e45d712402b4d08f96___::Run @ 0x180117A40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_4f9db91f7b3ef4e45d712402b4d08f96___::Run(
        __int64 a1)
{
  __int64 result; // rax
  __int64 *v3; // rdi
  __int64 *v4; // rbp
  __int64 v5; // rbx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx

  result = *(_QWORD *)(a1 + 16);
  v3 = *(__int64 **)(result + 464);
  v4 = &v3[2 * *(_QWORD *)(result + 472)];
  while ( v3 != v4 )
  {
    v5 = *v3;
    if ( *v3 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    result = *((unsigned int *)v3 + 2);
    if ( v5 )
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
    v6 = *(_DWORD *)(a1 + 24);
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        v8 = v7 - 1;
        if ( v8 )
        {
          if ( v8 == 1 )
            result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 48LL))(v5, *(_QWORD *)(a1 + 32));
        }
        else
        {
          result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v5 + 40LL))(v5, *(_QWORD *)(a1 + 32));
        }
      }
      else
      {
        result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 32LL))(
                   v5,
                   *(_QWORD *)(a1 + 32),
                   *(unsigned int *)(a1 + 64));
      }
    }
    else
    {
      result = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v5 + 24LL))(
                 v5,
                 *(_QWORD *)(a1 + 32),
                 *(unsigned int *)(a1 + 64));
    }
    if ( v5 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    v3 += 2;
  }
  return result;
}
