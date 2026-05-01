/*
 * XREFs of Windows::Internal::ComTaskPool::WrapWithTask__lambda_324fa1dbfe6ef799244f529b16be7345___ @ 0x18012A1C0
 * Callers:
 *     Platform::Details::__abi_FunctorCapture__lambda_ddc57e29664aa3d202cee167658fec4e__void_::Invoke @ 0x180129EA0 (Platform--Details--__abi_FunctorCapture__lambda_ddc57e29664aa3d202cee167658fec4e__void_--Invoke.c)
 * Callees:
 *     Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_324fa1dbfe6ef799244f529b16be7345_____lambda_324fa1dbfe6ef799244f529b16be7345___ @ 0x18012A570 (Microsoft--WRL--Details--Make_Windows--Internal--ComTaskPool--CTaskWrapper__lambda_324fa1dbfe6ef.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall Windows::Internal::ComTaskPool::WrapWithTask__lambda_324fa1dbfe6ef799244f529b16be7345___(_QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)Microsoft::WRL::Details::Make_Windows::Internal::ComTaskPool::CTaskWrapper__lambda_324fa1dbfe6ef799244f529b16be7345_____lambda_324fa1dbfe6ef799244f529b16be7345___(&v6);
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
