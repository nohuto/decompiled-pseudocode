/*
 * XREFs of ?DetachProvider@MPCGestureHandler@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180062BC0
 * Callers:
 *     ?DetachProvider@MPCGestureHandlerManager@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005A8D4 (-DetachProvider@MPCGestureHandlerManager@@QEAAXV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_excepti.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?EndManipulation@ManipulationInjector@@QEAAXK@Z @ 0x1800C0E28 (-EndManipulation@ManipulationInjector@@QEAAXK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MPCGestureHandler::DetachProvider(_QWORD *a1, _QWORD *a2, __int64 a3, const char *a4)
{
  __int64 v6; // rbx
  _QWORD *v7; // rsi
  _QWORD *i; // r14
  __int64 v9; // rdi
  unsigned int v10; // eax
  __int64 *v11; // rdi
  __int64 *j; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 result; // rax
  __int64 v16; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v6 = *a2;
  if ( *a2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 8LL))(*a2);
  v7 = (_QWORD *)a1[119];
  for ( i = (_QWORD *)a1[118]; i != v7; ++i )
  {
    v9 = *i;
    if ( *i )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 8LL))(*i);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    if ( v9 == v6 )
      break;
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( i == (_QWORD *)a1[119] )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x16B,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandler.cpp",
      a4);
    __debugbreak();
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 88LL))(*a2);
  ManipulationInjector::EndManipulation((ManipulationInjector *)(a1 + 11), v10);
  v11 = (__int64 *)a1[119];
  for ( j = i + 1; j != v11; ++j )
  {
    v13 = *j;
    *j = 0LL;
    v14 = *(j - 1);
    *(j - 1) = v13;
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  result = a1[119];
  v16 = *(_QWORD *)(result - 8);
  if ( v16 )
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  a1[119] -= 8LL;
  if ( *a2 )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
  return result;
}
