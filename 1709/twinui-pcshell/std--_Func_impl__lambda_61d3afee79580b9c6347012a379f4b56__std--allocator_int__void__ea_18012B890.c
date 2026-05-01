/*
 * XREFs of std::_Func_impl__lambda_61d3afee79580b9c6347012a379f4b56__std::allocator_int__void_Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier_const_&___ptr64_::_Do_call @ 0x18012B890
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800277A4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_2eb1fbe1035c77226416228cd90d3016_::operator() @ 0x1801206D4 (_lambda_2eb1fbe1035c77226416228cd90d3016_--operator().c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x180123568 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl__lambda_61d3afee79580b9c6347012a379f4b56__std::allocator_int__void_Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier_const_____ptr64_::_Do_call(
        __int64 a1,
        _DWORD *a2)
{
  struct IViewWrapperInternal *v3; // rcx
  int v4; // edx
  int v5; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IViewWrapperInternal *v7; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0LL;
  v7 = 0LL;
  if ( !*a2 )
  {
    v4 = a2[1];
    if ( v4 )
    {
      if ( (int)ViewEventDispatcher::_ViewFromViewInstanceId(*(ViewEventDispatcher **)(a1 + 8), v4, &v7) >= 0 )
      {
        v5 = lambda_2eb1fbe1035c77226416228cd90d3016_::operator()(*(unsigned int ***)(a1 + 16), &v7);
        if ( v5 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x672,
            (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
            (const char *)(unsigned int)v5);
      }
      v3 = v7;
    }
  }
  if ( v3 )
  {
    v7 = 0LL;
    (*(void (__fastcall **)(struct IViewWrapperInternal *))(*(_QWORD *)v3 + 16LL))(v3);
  }
}
