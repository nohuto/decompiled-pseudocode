/*
 * XREFs of ?DetachProvider@MPCGestureHandler@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180059D4C
 * Callers:
 *     ?DetachProvider@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x1800551B0 (-DetachProvider@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_excepti.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003148 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     std::_Pass_fn__lambda_a7cd9de14d30ca1c71c4a0ea53cb8bcf__0_ @ 0x180050E90 (std--_Pass_fn__lambda_a7cd9de14d30ca1c71c4a0ea53cb8bcf__0_.c)
 *     ?EndManipulation@ManipulationInjector@@QEAAXK@Z @ 0x1800ACB7C (-EndManipulation@ManipulationInjector@@QEAAXK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCGestureHandler::DetachProvider(_QWORD *a1, _QWORD *a2)
{
  __int64 v4; // r8
  _QWORD *v5; // rdi
  _QWORD *v6; // rbp
  __int64 *v7; // rbx
  __int64 v8; // r8
  const char *v9; // r9
  __int64 v10; // r14
  __int64 v11; // r12
  unsigned int v12; // eax
  __int64 *v13; // rbx
  __int64 *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v19; // [rsp+70h] [rbp+8h] BYREF
  _QWORD *v20; // [rsp+78h] [rbp+10h]
  __int64 v21; // [rsp+80h] [rbp+18h] BYREF

  v20 = a2;
  v4 = *a2;
  v19 = v4;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  v5 = (_QWORD *)a1[117];
  v6 = (_QWORD *)a1[118];
  v7 = (__int64 *)*std::_Pass_fn__lambda_a7cd9de14d30ca1c71c4a0ea53cb8bcf__0_(&v21, (__int64)&v19);
  if ( v5 != v6 )
  {
    do
    {
      v10 = *v5;
      if ( *v5 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 8LL))(*v5);
      v11 = *v7;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      if ( v10 == v11 )
        break;
      ++v5;
    }
    while ( v5 != v6 );
    v8 = v19;
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  if ( v5 == (_QWORD *)a1[118] )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x17E,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandler.cpp",
      v9);
    JUMPOUT(0x180059ED1LL);
  }
  v12 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 88LL))(*a2);
  ManipulationInjector::EndManipulation((ManipulationInjector *)(a1 + 10), v12);
  v13 = (__int64 *)a1[118];
  v14 = v5 + 1;
  if ( v14 != v13 )
  {
    do
    {
      v15 = *v14;
      *v14 = 0LL;
      v16 = *(v14 - 1);
      *(v14 - 1) = v15;
      if ( v16 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      ++v14;
    }
    while ( v14 != v13 );
    v13 = (__int64 *)a1[118];
  }
  v17 = *(v13 - 1);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  a1[118] -= 8LL;
  if ( *a2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
}
