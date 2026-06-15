/*
 * XREFs of ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x180029684
 * Callers:
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180028780 (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 * Callees:
 *     ?_Tidy@?$_Func_class@_NPEAX_KPEAX_KIU_Nil@wistd@@U12@@wistd@@IEAAXXZ @ 0x180028904 (-_Tidy@-$_Func_class@_NPEAX_KPEAX_KIU_Nil@wistd@@U12@@wistd@@IEAAXXZ.c)
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_2f784ef15c303f2c8d3bec493a729414__0__wistd::details::function_allocator_wistd::_Func_class_bool_void_____ptr64_unsigned___int64_void_____ptr64_unsigned___int64_unsigned_int_wistd::_Nil_wistd::_Nil____bool_void_____ptr64_unsigned___int64_void_____ptr64_unsigned___int64_unsigned_int_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x180029510 (wistd--_Func_impl_wistd--_Callable_obj__lambda_2f784ef15c303f2c8d3bec493a729414__0__wistd--detai.c)
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x180029FCC (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180057FC0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall wil::details_abi::RawUsageIndex::Iterate(__int64 a1, __int64 a2)
{
  char v4; // r8
  char v5; // cl
  __int64 v6; // rdx
  int v7; // edi
  void *v8; // r15
  __int64 v9; // rcx
  char (__fastcall *v10)(__int64, void **, size_t *, void **, unsigned __int64 *, unsigned int *); // rax
  char v11; // al
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v15; // rdx
  void *v16; // [rsp+40h] [rbp-39h] BYREF
  size_t v17; // [rsp+48h] [rbp-31h] BYREF
  void *v18[2]; // [rsp+50h] [rbp-29h] BYREF
  __int16 v19; // [rsp+60h] [rbp-19h] BYREF
  char v20; // [rsp+62h] [rbp-17h]
  unsigned int v21; // [rsp+64h] [rbp-15h]
  unsigned __int16 v22; // [rsp+68h] [rbp-11h]
  __int128 v23; // [rsp+70h] [rbp-9h]
  __int16 v24; // [rsp+80h] [rbp+7h] BYREF
  char v25; // [rsp+82h] [rbp+9h]
  unsigned int v26; // [rsp+84h] [rbp+Bh]
  unsigned __int16 v27; // [rsp+88h] [rbp+Fh]
  __int128 v28; // [rsp+90h] [rbp+17h]
  unsigned int v29; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v30; // [rsp+E8h] [rbp+6Fh]
  unsigned __int8 *v31; // [rsp+F0h] [rbp+77h] BYREF
  unsigned __int64 v32; // [rsp+F8h] [rbp+7Fh] BYREF

  v30 = a2;
  v18[1] = (void *)-2LL;
  v31 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 10LL);
  v4 = *(_BYTE *)(a1 + 4);
  v19 = *(_WORD *)(a1 + 2);
  v20 = v4;
  v21 = 0;
  v22 = 0;
  v23 = 0LL;
  v5 = *(_BYTE *)(a1 + 8);
  v24 = *(_WORD *)(a1 + 6);
  v25 = v5;
  v26 = 0;
  v27 = 0;
  v28 = 0LL;
LABEL_2:
  while ( wil::details_abi::UsageIndexProperty::Read(
            (wil::details_abi::UsageIndexProperty *)&v19,
            &v31,
            *(unsigned __int8 **)(a1 + 32)) )
  {
    v7 = 0;
    if ( v21 )
    {
      v8 = (void *)*((_QWORD *)&v23 + 1);
      while ( wil::details_abi::UsageIndexProperty::Read(
                (wil::details_abi::UsageIndexProperty *)&v24,
                &v31,
                *(unsigned __int8 **)(a1 + 32)) )
      {
        v29 = v26;
        v32 = v27;
        v16 = (void *)*((_QWORD *)&v28 + 1);
        v17 = v22;
        v18[0] = v8;
        v9 = *(_QWORD *)(a2 + 104);
        if ( !v9 )
          __fastfail(7u);
        v10 = *(char (__fastcall **)(__int64, void **, size_t *, void **, unsigned __int64 *, unsigned int *))(*(_QWORD *)v9 + 16LL);
        if ( v10 == wistd::_Func_impl_wistd::_Callable_obj__lambda_2f784ef15c303f2c8d3bec493a729414__0__wistd::details::function_allocator_wistd::_Func_class_bool_void_____ptr64_unsigned___int64_void_____ptr64_unsigned___int64_unsigned_int_wistd::_Nil_wistd::_Nil____bool_void_____ptr64_unsigned___int64_void_____ptr64_unsigned___int64_unsigned_int_wistd::_Nil_wistd::_Nil_::_Do_call )
          v11 = wistd::_Func_impl_wistd::_Callable_obj__lambda_2f784ef15c303f2c8d3bec493a729414__0__wistd::details::function_allocator_wistd::_Func_class_bool_void_____ptr64_unsigned___int64_void_____ptr64_unsigned___int64_unsigned_int_wistd::_Nil_wistd::_Nil____bool_void_____ptr64_unsigned___int64_void_____ptr64_unsigned___int64_unsigned_int_wistd::_Nil_wistd::_Nil_::_Do_call(
                  v9,
                  v18,
                  &v17,
                  &v16,
                  &v32,
                  &v29);
        else
          v11 = v10(v9, v18, &v17, &v16, &v32, &v29);
        if ( !v11 )
        {
          wistd::_Func_class<bool,void *,unsigned __int64,void *,unsigned __int64,unsigned int,wistd::_Nil,wistd::_Nil>::_Tidy(
            a2,
            v12);
          wistd::_Func_class<bool,void *,unsigned __int64,void *,unsigned __int64,unsigned int,wistd::_Nil,wistd::_Nil>::_Tidy(
            a2,
            v15);
          return 0;
        }
        if ( ++v7 >= v21 )
          goto LABEL_2;
      }
    }
  }
  wistd::_Func_class<bool,void *,unsigned __int64,void *,unsigned __int64,unsigned int,wistd::_Nil,wistd::_Nil>::_Tidy(
    a2,
    v6);
  wistd::_Func_class<bool,void *,unsigned __int64,void *,unsigned __int64,unsigned int,wistd::_Nil,wistd::_Nil>::_Tidy(
    a2,
    v13);
  return 1;
}
