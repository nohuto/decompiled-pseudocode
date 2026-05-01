/*
 * XREFs of Windows::Internal::ComTaskPool::WrapWithTask__lambda_20dfa1d11f9a8ab28c3bf8ec347b89c5___ @ 0x180142E7C
 * Callers:
 *     CreationThreadDispatcher::RunAsync__lambda_c12dfab9154669097a3cd6f4b2210f79___ @ 0x180142A44 (CreationThreadDispatcher--RunAsync__lambda_c12dfab9154669097a3cd6f4b2210f79___.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_20dfa1d11f9a8ab28c3bf8ec347b89c5_____lambda_20dfa1d11f9a8ab28c3bf8ec347b89c5___ @ 0x1801430D0 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_20dfa1d11f9a8.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::WrapWithTask__lambda_20dfa1d11f9a8ab28c3bf8ec347b89c5___(_QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_20dfa1d11f9a8ab28c3bf8ec347b89c5_____lambda_20dfa1d11f9a8ab28c3bf8ec347b89c5___(&v6);
  v3 = *v2;
  *v2 = 0LL;
  v4 = v6;
  *a1 = v3;
  if ( v4 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return a1;
}
