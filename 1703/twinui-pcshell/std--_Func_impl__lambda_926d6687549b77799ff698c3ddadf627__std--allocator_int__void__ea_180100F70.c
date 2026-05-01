/*
 * XREFs of std::_Func_impl__lambda_926d6687549b77799ff698c3ddadf627__std::allocator_int__void_IViewWrapperInternal_____ptr64_::_Do_call @ 0x180100F70
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_HostChanged@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z @ 0x1800F8D74 (-_HostChanged@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@@Z.c)
 */

void __fastcall std::_Func_impl__lambda_926d6687549b77799ff698c3ddadf627__std::allocator_int__void_IViewWrapperInternal_____ptr64_::_Do_call(
        __int64 a1,
        struct IViewWrapperInternal **a2)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = ViewEventDispatcher::_HostChanged(*(ViewEventDispatcher **)(a1 + 8), *a2);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xBA3,
      (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
      (const char *)(unsigned int)v2);
}
