/*
 * XREFs of ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x180005278
 * Callers:
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x18000688C (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 * Callees:
 *     memcpy_s @ 0x180006E28 (memcpy_s.c)
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_2f784ef15c303f2c8d3bec493a729414__0__wistd::details::function_allocator_wistd::_Func_class_bool_void_____ptr64_unsigned___int64_void_____ptr64_unsigned___int64_unsigned_int_wistd::_Nil_wistd::_Nil____bool_void_____ptr64_unsigned___int64_void_____ptr64_unsigned___int64_unsigned_int_wistd::_Nil_wistd::_Nil_::_Do_call @ 0x18002FBB0 (wistd--_Func_impl_wistd--_Callable_obj__lambda_2f784ef15c303f2c8d3bec493a729414__0__wistd--detai.c)
 *     wistd::_Func_impl_wistd::_Callable_obj__lambda_2f784ef15c303f2c8d3bec493a729414__0__wistd::details::function_allocator_wistd::_Func_class_bool_void_____ptr64_unsigned___int64_void_____ptr64_unsigned___int64_unsigned_int_wistd::_Nil_wistd::_Nil____bool_void_____ptr64_unsigned___int64_void_____ptr64_unsigned___int64_unsigned_int_wistd::_Nil_wistd::_Nil_::_Delete_this @ 0x18002FC50 (wistd--_Func_impl_wistd--_Callable_obj__lambda_2f784ef15c303f2c8d3bec493a729414__0__ea_18002FC50.c)
 *     _invalid_parameter_noinfo @ 0x180033A26 (_invalid_parameter_noinfo.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 *     ?_Tidy@?$_Func_class@_NPEAX_KPEAX_KIU_Nil@wistd@@U12@@wistd@@IEAAXXZ @ 0x18005C098 (-_Tidy@-$_Func_class@_NPEAX_KPEAX_KIU_Nil@wistd@@U12@@wistd@@IEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall wil::details_abi::RawUsageIndex::Iterate(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // r9
  char *v4; // rbx
  unsigned __int16 v5; // r8
  unsigned int v6; // r15d
  unsigned __int64 v7; // r14
  char *v8; // rsi
  unsigned __int16 v9; // ax
  unsigned int v10; // r13d
  unsigned __int64 v11; // r12
  char *v12; // r14
  unsigned __int16 v13; // r11
  unsigned __int16 v14; // ax
  __int64 v15; // rcx
  char *v16; // rax
  __int64 v17; // rcx
  __int64 (__fastcall *v18)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64); // rax
  char v19; // al
  __int64 v20; // rcx
  void (__fastcall *v21)(__int64, __int64); // rax
  __int64 v22; // rcx
  __int16 v24; // [rsp+40h] [rbp-79h]
  unsigned __int16 v25; // [rsp+42h] [rbp-77h]
  int v26; // [rsp+48h] [rbp-71h] BYREF
  unsigned __int16 v27; // [rsp+50h] [rbp-69h] BYREF
  __int16 v28; // [rsp+58h] [rbp-61h]
  char v29; // [rsp+5Ah] [rbp-5Fh]
  unsigned int v30; // [rsp+5Ch] [rbp-5Dh] BYREF
  unsigned __int16 v31; // [rsp+60h] [rbp-59h] BYREF
  __int128 v32; // [rsp+68h] [rbp-51h]
  unsigned __int16 v33; // [rsp+78h] [rbp-41h]
  char v34; // [rsp+7Ah] [rbp-3Fh]
  int Destination; // [rsp+7Ch] [rbp-3Dh] BYREF
  unsigned __int16 v36; // [rsp+80h] [rbp-39h] BYREF
  __int128 v37; // [rsp+88h] [rbp-31h]
  __int64 v38; // [rsp+98h] [rbp-21h] BYREF
  char *v39; // [rsp+A0h] [rbp-19h] BYREF
  __int64 v40; // [rsp+A8h] [rbp-11h] BYREF
  char *v41; // [rsp+B0h] [rbp-9h] BYREF
  __int64 v42; // [rsp+B8h] [rbp-1h]
  __int64 v43; // [rsp+C0h] [rbp+7h]
  char v45; // [rsp+130h] [rbp+77h]
  char v46; // [rsp+138h] [rbp+7Fh]

  v43 = -2LL;
  v2 = a2;
  v3 = a1;
  v4 = (char *)(*(_QWORD *)(a1 + 24) + 10LL);
  LOBYTE(a2) = *(_BYTE *)(a1 + 4);
  v45 = a2;
  v5 = *(_WORD *)(a1 + 2);
  v24 = v5;
  v28 = v5;
  v29 = a2;
  v6 = 0;
  v30 = 0;
  v31 = 0;
  v32 = 0LL;
  v46 = *(_BYTE *)(a1 + 8);
  v25 = *(_WORD *)(a1 + 6);
  v33 = v25;
  v34 = v46;
  Destination = 0;
  v36 = 0;
  v37 = 0LL;
  while ( 1 )
  {
LABEL_2:
    v7 = *(_QWORD *)(v3 + 32);
    v8 = v4;
    if ( (_BYTE)a2 == 1 )
    {
      v8 = v4 + 2;
      if ( (unsigned __int64)(v4 + 2) > v7 )
        break;
      *(_QWORD *)&v32 = v4;
      if ( v4 )
      {
        LOWORD(v4) = *(_WORD *)v4;
      }
      else
      {
        *(_DWORD *)_o__errno() = 22;
        invalid_parameter_noinfo();
        LOBYTE(a2) = v45;
        v5 = v24;
      }
      v6 = (unsigned __int16)v4;
      v30 = (unsigned __int16)v4;
    }
    else if ( (_BYTE)a2 == 2 )
    {
      v8 = v4 + 4;
      if ( (unsigned __int64)(v4 + 4) > v7 )
        break;
      *(_QWORD *)&v32 = v4;
      memcpy_s(&v30, 4uLL, v4, 4uLL);
      v6 = v30;
      LOBYTE(a2) = v29;
      v45 = v29;
      v5 = v28;
      v24 = v28;
    }
    v9 = v5;
    v31 = v5;
    if ( v5 )
      goto LABEL_8;
    if ( (unsigned __int64)(v8 + 2) > v7 )
      break;
    memcpy_s(&v31, 2uLL, v8, 2uLL);
    v8 += 2;
    v9 = v31;
    v6 = v30;
    LOBYTE(a2) = v29;
    v45 = v29;
    v5 = v28;
    v24 = v28;
LABEL_8:
    v42 = v9;
    v4 = &v8[v9];
    if ( (unsigned __int64)v4 > v7 )
      break;
    *((_QWORD *)&v32 + 1) = v8;
    v10 = 0;
    v26 = 0;
    v3 = a1;
    if ( v6 )
    {
      while ( 1 )
      {
        v3 = a1;
        v11 = *(_QWORD *)(a1 + 32);
        v12 = v4;
        if ( v46 == 1 )
          break;
        if ( v46 != 2 )
          goto LABEL_12;
        v12 = v4 + 4;
        LOBYTE(a2) = v45;
        v5 = v24;
        if ( (unsigned __int64)(v4 + 4) > v11 )
          goto LABEL_2;
        *(_QWORD *)&v37 = v4;
        memcpy_s(&Destination, 4uLL, v4, 4uLL);
        v46 = v34;
        v13 = v33;
        v25 = v33;
        v3 = a1;
LABEL_13:
        v14 = v13;
        v36 = v13;
        if ( !v13 )
        {
          LOBYTE(a2) = v45;
          v5 = v24;
          if ( (unsigned __int64)(v12 + 2) > v11 )
            goto LABEL_2;
          memcpy_s(&v36, 2uLL, v12, 2uLL);
          v12 += 2;
          v14 = v36;
          v46 = v34;
          a2 = v33;
          v25 = v33;
          v10 = v26;
        }
        v15 = v14;
        v16 = &v12[v14];
        LOBYTE(a2) = v45;
        v5 = v24;
        v3 = a1;
        if ( (unsigned __int64)v16 > v11 )
          goto LABEL_2;
        *((_QWORD *)&v37 + 1) = v12;
        v4 = v16;
        v26 = Destination;
        v38 = v15;
        v39 = v12;
        v40 = v42;
        v41 = v8;
        v17 = *(_QWORD *)(v2 + 104);
        if ( !v17 )
          __fastfail(7u);
        v18 = *(__int64 (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD, __int64, __int64))(*(_QWORD *)v17 + 16LL);
        if ( v18 == wistd::_Func_impl_wistd::_Callable_obj__lambda_2f784ef15c303f2c8d3bec493a729414__0__wistd::details::function_allocator_wistd::_Func_class_bool_void_____ptr64_unsigned___int64_void_____ptr64_unsigned___int64_unsigned_int_wistd::_Nil_wistd::_Nil____bool_void_____ptr64_unsigned___int64_void_____ptr64_unsigned___int64_unsigned_int_wistd::_Nil_wistd::_Nil_::_Do_call )
          v19 = wistd::_Func_impl_wistd::_Callable_obj__lambda_2f784ef15c303f2c8d3bec493a729414__0__wistd::details::function_allocator_wistd::_Func_class_bool_void_____ptr64_unsigned___int64_void_____ptr64_unsigned___int64_unsigned_int_wistd::_Nil_wistd::_Nil____bool_void_____ptr64_unsigned___int64_void_____ptr64_unsigned___int64_unsigned_int_wistd::_Nil_wistd::_Nil_::_Do_call(
                  v17,
                  (unsigned int)&v41,
                  (unsigned int)&v40,
                  (unsigned int)&v39,
                  (__int64)&v38,
                  (__int64)&v26);
        else
          v19 = v18(v17, &v41, &v40, &v39, (__int64)&v38, (__int64)&v26);
        if ( !v19 )
        {
          wistd::_Func_class<bool,void *,unsigned __int64,void *,unsigned __int64,unsigned int,wistd::_Nil,wistd::_Nil>::_Tidy(v2);
          wistd::_Func_class<bool,void *,unsigned __int64,void *,unsigned __int64,unsigned int,wistd::_Nil,wistd::_Nil>::_Tidy(v2);
          return 0;
        }
        v26 = ++v10;
        if ( v10 >= v6 )
        {
          LOBYTE(a2) = v45;
          v5 = v24;
          v3 = a1;
          goto LABEL_2;
        }
      }
      v12 = v4 + 2;
      LOBYTE(a2) = v45;
      v5 = v24;
      if ( (unsigned __int64)(v4 + 2) > v11 )
        continue;
      *(_QWORD *)&v37 = v4;
      memcpy_s(&v27, 2uLL, v4, 2uLL);
      Destination = v27;
      v3 = a1;
LABEL_12:
      v13 = v25;
      goto LABEL_13;
    }
  }
  v20 = *(_QWORD *)(v2 + 104);
  if ( v20 )
  {
    LOBYTE(a2) = v20 != v2;
    v21 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v20 + 24LL);
    if ( (char *)v21 == (char *)wistd::_Func_impl_wistd::_Callable_obj__lambda_2f784ef15c303f2c8d3bec493a729414__0__wistd::details::function_allocator_wistd::_Func_class_bool_void_____ptr64_unsigned___int64_void_____ptr64_unsigned___int64_unsigned_int_wistd::_Nil_wistd::_Nil____bool_void_____ptr64_unsigned___int64_void_____ptr64_unsigned___int64_unsigned_int_wistd::_Nil_wistd::_Nil_::_Delete_this )
      wistd::_Func_impl_wistd::_Callable_obj__lambda_2f784ef15c303f2c8d3bec493a729414__0__wistd::details::function_allocator_wistd::_Func_class_bool_void_____ptr64_unsigned___int64_void_____ptr64_unsigned___int64_unsigned_int_wistd::_Nil_wistd::_Nil____bool_void_____ptr64_unsigned___int64_void_____ptr64_unsigned___int64_unsigned_int_wistd::_Nil_wistd::_Nil_::_Delete_this(
        v20,
        a2);
    else
      v21(v20, a2);
    *(_QWORD *)(v2 + 104) = 0LL;
  }
  v22 = *(_QWORD *)(v2 + 104);
  if ( v22 )
  {
    LOBYTE(a2) = v22 != v2;
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v22 + 24LL))(v22, a2);
    *(_QWORD *)(v2 + 104) = 0LL;
  }
  return 1;
}
