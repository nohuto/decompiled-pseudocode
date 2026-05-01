/*
 * XREFs of wistd::_Func_impl_wistd::_Callable_obj__lambda_548464be655e837fe70a6c635a8d08fa__0__wistd::details::function_allocator_wistd::_Func_class_long_unsigned_int_unsigned___int64___int64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_unsigned_int_unsigned___int64___int64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x1800A98B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wistd::_Func_impl_wistd::_Callable_obj__lambda_548464be655e837fe70a6c635a8d08fa__0__wistd::details::function_allocator_wistd::_Func_class_long_unsigned_int_unsigned___int64___int64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil____long_unsigned_int_unsigned___int64___int64_wistd::_Nil_wistd::_Nil_wistd::_Nil_wistd::_Nil_::_Do_call(
        __int64 a1,
        unsigned int *a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 v5; // rsi
  __int64 v6; // rbp
  unsigned int v7; // r14d
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned int v11; // edi
  __int64 v12; // rcx
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF

  v5 = *a4;
  v6 = *a3;
  v7 = *a2;
  v8 = 0;
  v14 = 0LL;
  v9 = *(_QWORD *)(a1 + 8);
  if ( v9
    && (*(int (__fastcall **)(__int64, GUID *, __int64 *))(*(_QWORD *)v9 + 24LL))(
         v9,
         &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
         &v14) < 0 )
  {
    v10 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
    }
  }
  else
  {
    v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(a1 + 24))(
            *(_QWORD *)(a1 + 16) + *(int *)(a1 + 32),
            v7,
            v6,
            v5);
    v12 = v14;
    if ( v14 )
    {
      v14 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
    }
    return v11;
  }
  return v8;
}
