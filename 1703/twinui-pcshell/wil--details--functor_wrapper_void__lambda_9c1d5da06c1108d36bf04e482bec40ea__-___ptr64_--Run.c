/*
 * XREFs of wil::details::functor_wrapper_void__lambda_9c1d5da06c1108d36bf04e482bec40ea__&___ptr64_::Run @ 0x180085410
 * Callers:
 *     <none>
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180024F20 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::functor_wrapper_void__lambda_9c1d5da06c1108d36bf04e482bec40ea______ptr64_::Run(
        __int64 a1)
{
  int v1; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**(_QWORD **)(**(_QWORD **)(a1 + 8) + 136LL) + 24LL))(
         *(_QWORD *)(**(_QWORD **)(a1 + 8) + 136LL),
         **(_QWORD **)(*(_QWORD *)(a1 + 8) + 8LL),
         **(_QWORD **)(*(_QWORD *)(a1 + 8) + 16LL));
  if ( v1 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x5E,
      (__int64)"pcshell\\twinui\\bluelightreduction\\desktopbluelightreductionmanager.cpp",
      (const char *)(unsigned int)v1);
    JUMPOUT(0x180085461LL);
  }
  return 0LL;
}
