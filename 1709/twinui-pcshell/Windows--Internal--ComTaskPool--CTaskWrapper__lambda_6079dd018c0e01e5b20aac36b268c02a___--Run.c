/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6079dd018c0e01e5b20aac36b268c02a___::Run @ 0x1801771A0
 * Callers:
 *     <none>
 * Callees:
 *     CreationThreadDispatcher::RunSync__lambda_403a39f84d2665c6c6e66947b8b7190c___ @ 0x180176678 (CreationThreadDispatcher--RunSync__lambda_403a39f84d2665c6c6e66947b8b7190c___.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_6079dd018c0e01e5b20aac36b268c02a___::Run(
        __int64 a1)
{
  __int64 v2; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v4 = v2;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return CreationThreadDispatcher::RunSync__lambda_403a39f84d2665c6c6e66947b8b7190c___(*(_QWORD *)(a1 + 24), &v4);
}
