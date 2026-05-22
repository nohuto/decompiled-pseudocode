/*
 * XREFs of ?AttachProvider@MPCGestureHandler@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180059C38
 * Callers:
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005497C (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     std::_Pass_fn__lambda_a7cd9de14d30ca1c71c4a0ea53cb8bcf__0_ @ 0x180050E90 (std--_Pass_fn__lambda_a7cd9de14d30ca1c71c4a0ea53cb8bcf__0_.c)
 *     ??$emplace_back@AEBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAAEAV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@AEBV23@@Z @ 0x18005569C (--$emplace_back@AEBV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@-$vect.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCGestureHandler::AttachProvider(__int64 a1, __int64 *a2)
{
  __int64 v4; // r8
  __int64 **v5; // r15
  __int64 *v6; // rdi
  __int64 *v7; // r12
  __int64 *v8; // rbx
  __int64 v9; // r8
  const char *v10; // r9
  __int64 v11; // rsi
  __int64 v12; // rbp
  __int64 result; // rax
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v15; // [rsp+70h] [rbp+8h] BYREF
  __int64 *v16; // [rsp+78h] [rbp+10h]
  __int64 v17; // [rsp+80h] [rbp+18h] BYREF

  v16 = a2;
  v4 = *a2;
  v15 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = (__int64 **)(a1 + 936);
  v6 = *(__int64 **)(a1 + 936);
  v7 = *(__int64 **)(a1 + 944);
  v8 = (__int64 *)*std::_Pass_fn__lambda_a7cd9de14d30ca1c71c4a0ea53cb8bcf__0_(&v17, (__int64)&v15);
  if ( v6 != v7 )
  {
    do
    {
      v11 = *v6;
      if ( *v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(*v6);
      v12 = *v8;
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      if ( v11 == v12 )
        break;
      ++v6;
    }
    while ( v6 != v7 );
    v9 = v15;
  }
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v6 != v5[1] )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x16F,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandler.cpp",
      v10);
    __debugbreak();
  }
  result = std::vector<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>>::emplace_back<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy> const &>(
             v5,
             a2);
  if ( *a2 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)*a2 + 16LL))(*a2);
  return result;
}
