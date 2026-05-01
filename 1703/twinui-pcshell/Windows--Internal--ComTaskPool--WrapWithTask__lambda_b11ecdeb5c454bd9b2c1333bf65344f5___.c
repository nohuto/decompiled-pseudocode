/*
 * XREFs of Windows::Internal::ComTaskPool::WrapWithTask__lambda_b11ecdeb5c454bd9b2c1333bf65344f5___ @ 0x1800FFE2C
 * Callers:
 *     _lambda_c42184d898c0806d92bf2f8c2d17483b_::operator() @ 0x1800F57D0 (_lambda_c42184d898c0806d92bf2f8c2d17483b_--operator().c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b11ecdeb5c454bd9b2c1333bf65344f5_____lambda_b11ecdeb5c454bd9b2c1333bf65344f5___ @ 0x180100C40 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_b11ecdeb5c454.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::WrapWithTask__lambda_b11ecdeb5c454bd9b2c1333bf65344f5___(_QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_b11ecdeb5c454bd9b2c1333bf65344f5_____lambda_b11ecdeb5c454bd9b2c1333bf65344f5___(&v6);
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
