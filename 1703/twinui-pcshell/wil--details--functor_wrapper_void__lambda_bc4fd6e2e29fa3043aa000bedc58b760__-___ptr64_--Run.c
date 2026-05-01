/*
 * XREFs of wil::details::functor_wrapper_void__lambda_bc4fd6e2e29fa3043aa000bedc58b760__&___ptr64_::Run @ 0x1800853A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::functor_wrapper_void__lambda_bc4fd6e2e29fa3043aa000bedc58b760______ptr64_::Run(
        __int64 a1)
{
  __int64 v1; // rcx
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_QWORD *)(**(_QWORD **)(a1 + 8) + 136LL);
  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 40LL))(v1);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x7E,
      (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
      (const char *)(unsigned int)v2);
    JUMPOUT(0x1800853E3LL);
  }
  return 0LL;
}
