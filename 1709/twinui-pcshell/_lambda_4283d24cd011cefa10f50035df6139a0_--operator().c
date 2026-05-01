/*
 * XREFs of _lambda_4283d24cd011cefa10f50035df6139a0_::operator() @ 0x18006A910
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_67eef396734d09a1eef436dbd1978d71___::Run @ 0x18006E650 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_67eef396734d09a1eef436dbd1978d71___--Run.c)
 * Callees:
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_a9ee8af99aca72ecf026a7a37da514a5___ @ 0x18006D6F8 (Windows--Internal--ComTaskPool--QueueTask__lambda_a9ee8af99aca72ecf026a7a37da514a5___.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 *__fastcall lambda_4283d24cd011cefa10f50035df6139a0_::operator()(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 *result; // rax
  PSRWLOCK v4; // rsi
  PVOID Ptr; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  PVOID v8; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+38h] [rbp-10h]
  __int64 v10; // [rsp+70h] [rbp+28h] BYREF
  __int64 v11; // [rsp+78h] [rbp+30h]
  __int64 v12; // [rsp+80h] [rbp+38h]
  __int64 *v13; // [rsp+88h] [rbp+40h]

  v1 = *a1;
  v11 = v1;
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  v12 = v1;
  if ( v1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
  v2 = v1;
  v10 = v1;
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
    v2 = v10;
  }
  result = &v10;
  v13 = &v10;
  v4 = CApplicationManagerUtility::g_pIAMGlobals;
  Ptr = CApplicationManagerUtility::g_pIAMGlobals[12].Ptr;
  if ( Ptr )
  {
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v8 = Ptr;
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 8LL))(Ptr);
    v7 = v10;
    v9 = v10;
    if ( v10 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
    Windows::Internal::ComTaskPool::QueueTask__lambda_a9ee8af99aca72ecf026a7a37da514a5___(
      v7,
      v6,
      LODWORD(v4[13].Ptr),
      &v8,
      -2LL,
      Ptr);
    if ( v9 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    if ( v8 )
      (*(void (__fastcall **)(PVOID))(*(_QWORD *)v8 + 16LL))(v8);
    result = (__int64 *)(*(__int64 (__fastcall **)(PVOID))(*(_QWORD *)Ptr + 16LL))(Ptr);
    v2 = v10;
  }
  if ( v2 )
  {
    v10 = 0LL;
    result = (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
    return (__int64 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
  }
  return result;
}
