/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_20dfa1d11f9a8ab28c3bf8ec347b89c5___::Run @ 0x180142EC0
 * Callers:
 *     <none>
 * Callees:
 *     CreationThreadDispatcher::RunSync__lambda_c12dfab9154669097a3cd6f4b2210f79___ @ 0x180142C1C (CreationThreadDispatcher--RunSync__lambda_c12dfab9154669097a3cd6f4b2210f79___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_20dfa1d11f9a8ab28c3bf8ec347b89c5___::Run(
        _QWORD *a1)
{
  __int64 v1; // rbx
  __int64 v3; // rbx
  __int64 v4; // rcx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v1 = a1[2];
  if ( v1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v1 + 8LL))(a1[2]);
  v6[0] = v1;
  v3 = a1[3];
  if ( v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 8LL))(a1[3]);
  v4 = a1[4];
  v6[1] = v3;
  return CreationThreadDispatcher::RunSync__lambda_c12dfab9154669097a3cd6f4b2210f79___(v4, v6);
}
