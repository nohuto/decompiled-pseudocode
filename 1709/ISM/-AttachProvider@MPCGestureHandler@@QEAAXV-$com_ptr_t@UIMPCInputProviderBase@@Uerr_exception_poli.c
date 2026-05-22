/*
 * XREFs of ?AttachProvider@MPCGestureHandler@@QEAAXV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180062AD0
 * Callers:
 *     ?DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005A148 (-DownLevelTo2D@MPCGestureHandlerManager@@QEAAXPEAUInputInfo@@V-$com_ptr_t@UIMPCInputProviderBase.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180003388 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$emplace_back@AEBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@?$vector@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@QEAAXAEBV?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18005BC64 (--$emplace_back@AEBV-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@@-$vect.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall MPCGestureHandler::AttachProvider(__int64 a1, __int64 *a2, __int64 a3, const char *a4)
{
  __int64 v6; // rbx
  _QWORD *v7; // rsi
  _QWORD *i; // r14
  __int64 v9; // rdi
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  v6 = *a2;
  if ( *a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(*a2);
  v7 = *(_QWORD **)(a1 + 952);
  for ( i = *(_QWORD **)(a1 + 944); i != v7; ++i )
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
  if ( i != *(_QWORD **)(a1 + 952) )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x15C,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\mpc\\lib\\mpcgesturehandler.cpp",
      a4);
    __debugbreak();
  }
  std::vector<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>>::emplace_back<wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy> const &>(
    (unsigned __int64 *)(a1 + 944),
    a2);
  if ( *a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)*a2 + 16LL))(*a2);
}
