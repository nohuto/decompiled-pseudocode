/*
 * XREFs of _lambda_4283d24cd011cefa10f50035df6139a0_::operator() @ 0x180068574
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_67eef396734d09a1eef436dbd1978d71___::Run @ 0x18006B400 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_67eef396734d09a1eef436dbd1978d71___--Run.c)
 * Callees:
 *     ?RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask@23@PEAPEAUIUnknown@@@Z @ 0x180022EA8 (-RunTask@ComTaskPool@Internal@Windows@@SAJW4TaskApartment@23@W4TaskOptions@23@KKPEAUIComPoolTask.c)
 *     Windows::Internal::ComTaskPool::WrapWithTask__lambda_a9ee8af99aca72ecf026a7a37da514a5___ @ 0x18006AD24 (Windows--Internal--ComTaskPool--WrapWithTask__lambda_a9ee8af99aca72ecf026a7a37da514a5___.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 *__fastcall lambda_4283d24cd011cefa10f50035df6139a0_::operator()(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 *result; // rax
  PSRWLOCK v4; // rsi
  PVOID Ptr; // rdi
  int v6; // esi
  IUnknown **v7; // rax
  __int64 v8; // rcx
  PVOID v9; // [rsp+48h] [rbp-20h] BYREF
  __int64 v10; // [rsp+50h] [rbp-18h]
  __int64 v11; // [rsp+90h] [rbp+28h] BYREF
  __int64 v12; // [rsp+98h] [rbp+30h] BYREF
  __int64 v13; // [rsp+A0h] [rbp+38h]
  __int64 v14; // [rsp+A8h] [rbp+40h]

  v1 = *a1;
  v13 = v1;
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  v14 = v1;
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  v2 = v1;
  v11 = v1;
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
    v2 = v11;
  }
  result = &v11;
  v4 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[12].Ptr;
  if ( Ptr )
  {
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v9 = Ptr;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v10 = v11;
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
    v6 = (int)v4[13].Ptr;
    v7 = (IUnknown **)Windows::Internal::ComTaskPool::WrapWithTask__lambda_a9ee8af99aca72ecf026a7a37da514a5___(
                        &v12,
                        &v9);
    Windows::Internal::ComTaskPool::RunTask(3, 2u, v6, 0, *v7, 0LL);
    v8 = v12;
    if ( v12 )
    {
      v12 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    if ( v9 )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v9 + 16LL))(v9);
    result = (__int64 *)(*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
    v2 = v11;
  }
  if ( v2 )
  {
    v11 = 0LL;
    result = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    return (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
  return result;
}
