/*
 * XREFs of ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x18000637C
 * Callers:
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180007968 (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 * Callees:
 *     ?Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z @ 0x180006D70 (-Read@UsageIndexProperty@details_abi@wil@@QEAA_NAEAPEAEPEAE@Z.c)
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_2f784ef15c303f2c8d3bec493a729414__0__wistd::details::function_allocator_wistd::_Func_class_bool_void_____ptr64_unsigned___int64_void_____ptr64_unsigned___int64_unsigned_int_wistd::_Nil_wistd::_Nil____bool_void_____ptr64_unsigned___int64_void_____ptr64_unsigned___int64_unsigned_int_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x180006F90 (wistd--_Func_impl_wistd--_Callable_obj__lambda_2f784ef15c303f2c8d3bec493a729414__0__wistd--detai.c)
 *     ?_Tidy@?$_Func_class@_NPEAX_KPEAX_KIU_Nil@wistd@@U12@@wistd@@IEAAXXZ @ 0x1800078F0 (-_Tidy@-$_Func_class@_NPEAX_KPEAX_KIU_Nil@wistd@@U12@@wistd@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall wil::details_abi::RawUsageIndex::Iterate(__int64 a1, __int64 a2)
{
  char v4; // r8
  char v5; // cl
  int v6; // edi
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 (__fastcall *v9)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64); // rax
  char v10; // al
  __int64 v12; // [rsp+40h] [rbp-39h] BYREF
  __int64 v13; // [rsp+48h] [rbp-31h] BYREF
  _QWORD v14[2]; // [rsp+50h] [rbp-29h] BYREF
  __int16 v15; // [rsp+60h] [rbp-19h] BYREF
  char v16; // [rsp+62h] [rbp-17h]
  unsigned int v17; // [rsp+64h] [rbp-15h]
  unsigned __int16 v18; // [rsp+68h] [rbp-11h]
  __int128 v19; // [rsp+70h] [rbp-9h]
  __int16 v20; // [rsp+80h] [rbp+7h] BYREF
  char v21; // [rsp+82h] [rbp+9h]
  int v22; // [rsp+84h] [rbp+Bh]
  unsigned __int16 v23; // [rsp+88h] [rbp+Fh]
  __int128 v24; // [rsp+90h] [rbp+17h]
  int v25; // [rsp+E0h] [rbp+67h] BYREF
  __int64 v26; // [rsp+E8h] [rbp+6Fh]
  unsigned __int8 *v27; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v28; // [rsp+F8h] [rbp+7Fh] BYREF

  v26 = a2;
  v14[1] = -2LL;
  v27 = (unsigned __int8 *)(*(_QWORD *)(a1 + 24) + 10LL);
  v4 = *(_BYTE *)(a1 + 4);
  v15 = *(_WORD *)(a1 + 2);
  v16 = v4;
  v17 = 0;
  v18 = 0;
  v19 = 0LL;
  v5 = *(_BYTE *)(a1 + 8);
  v20 = *(_WORD *)(a1 + 6);
  v21 = v5;
  v22 = 0;
  v23 = 0;
  v24 = 0LL;
LABEL_2:
  while ( wil::details_abi::UsageIndexProperty::Read(
            (wil::details_abi::UsageIndexProperty *)&v15,
            &v27,
            *(unsigned __int8 **)(a1 + 32)) )
  {
    v6 = 0;
    if ( v17 )
    {
      v7 = *((_QWORD *)&v19 + 1);
      while ( wil::details_abi::UsageIndexProperty::Read(
                (wil::details_abi::UsageIndexProperty *)&v20,
                &v27,
                *(unsigned __int8 **)(a1 + 32)) )
      {
        v25 = v22;
        v28 = v23;
        v12 = *((_QWORD *)&v24 + 1);
        v13 = v18;
        v14[0] = v7;
        v8 = *(_QWORD *)(a2 + 104);
        if ( !v8 )
          __fastfail(7u);
        v9 = *(__int64 (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64))(*(_QWORD *)v8 + 16LL);
        if ( v9 == wistd::_Func_impl_wistd::_Callable_obj__lambda_2f784ef15c303f2c8d3bec493a729414__0__wistd::details::function_allocator_wistd::_Func_class_bool_void_____ptr64_unsigned___int64_void_____ptr64_unsigned___int64_unsigned_int_wistd::_Nil_wistd::_Nil____bool_void_____ptr64_unsigned___int64_void_____ptr64_unsigned___int64_unsigned_int_wistd::_Nil_wistd::_Nil_::_Do_call )
          v10 = wistd::_Func_impl_wistd::_Callable_obj__lambda_2f784ef15c303f2c8d3bec493a729414__0__wistd::details::function_allocator_wistd::_Func_class_bool_void_____ptr64_unsigned___int64_void_____ptr64_unsigned___int64_unsigned_int_wistd::_Nil_wistd::_Nil____bool_void_____ptr64_unsigned___int64_void_____ptr64_unsigned___int64_unsigned_int_wistd::_Nil_wistd::_Nil_::_Do_call(
                  v8,
                  (unsigned int)v14,
                  (unsigned int)&v13,
                  (unsigned int)&v12,
                  (__int64)&v28,
                  (__int64)&v25);
        else
          v10 = v9(v8, v14, &v13, &v12, (__int64)&v28, (__int64)&v25);
        if ( !v10 )
        {
          wistd::_Func_class<bool,void *,unsigned __int64,void *,unsigned __int64,unsigned int,wistd::_Nil,wistd::_Nil>::_Tidy(a2);
          wistd::_Func_class<bool,void *,unsigned __int64,void *,unsigned __int64,unsigned int,wistd::_Nil,wistd::_Nil>::_Tidy(a2);
          return 0;
        }
        if ( ++v6 >= v17 )
          goto LABEL_2;
      }
    }
  }
  wistd::_Func_class<bool,void *,unsigned __int64,void *,unsigned __int64,unsigned int,wistd::_Nil,wistd::_Nil>::_Tidy(a2);
  wistd::_Func_class<bool,void *,unsigned __int64,void *,unsigned __int64,unsigned int,wistd::_Nil,wistd::_Nil>::_Tidy(a2);
  return 1;
}
