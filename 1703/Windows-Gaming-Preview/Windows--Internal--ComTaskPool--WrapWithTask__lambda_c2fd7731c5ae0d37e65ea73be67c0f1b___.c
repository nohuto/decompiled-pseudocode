/*
 * XREFs of Windows::Internal::ComTaskPool::WrapWithTask__lambda_c2fd7731c5ae0d37e65ea73be67c0f1b___ @ 0x180012250
 * Callers:
 *     ?FireCompletion@ComTaskPoolHandler@Internal@Windows@@QEAAJPEAUIAsyncFireCompletion@23@@Z @ 0x180012294 (-FireCompletion@ComTaskPoolHandler@Internal@Windows@@QEAAJPEAUIAsyncFireCompletion@23@@Z.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_____lambda_c2fd7731c5ae0d37e65ea73be67c0f1b___ @ 0x1800121A4 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_c2fd7731c5ae0.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::WrapWithTask__lambda_c2fd7731c5ae0d37e65ea73be67c0f1b___(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_c2fd7731c5ae0d37e65ea73be67c0f1b_____lambda_c2fd7731c5ae0d37e65ea73be67c0f1b___(
         &v7,
         a2);
  v4 = *v3;
  *v3 = 0LL;
  v5 = v7;
  *a1 = v4;
  if ( v5 )
  {
    v7 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return a1;
}
