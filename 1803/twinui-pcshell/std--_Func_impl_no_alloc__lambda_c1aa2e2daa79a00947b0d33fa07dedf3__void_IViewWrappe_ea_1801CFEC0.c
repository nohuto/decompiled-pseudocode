/*
 * XREFs of std::_Func_impl_no_alloc__lambda_c1aa2e2daa79a00947b0d33fa07dedf3__void_IViewWrapperInternal_____ptr64_::_Do_call @ 0x1801CFEC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_HostChanged@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z @ 0x180032664 (-_HostChanged@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D044 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_c1aa2e2daa79a00947b0d33fa07dedf3__void_IViewWrapperInternal_____ptr64_::_Do_call(
        __int64 a1,
        struct IViewWrapperInternal **a2)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = ViewEventDispatcher::_HostChanged(*(ViewEventDispatcher **)(a1 + 8), *a2);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      2700LL,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v2);
}
