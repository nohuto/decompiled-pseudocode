/*
 * XREFs of std::_Func_impl__lambda_af9b671aa906e030469e276bcd26d6be__std::allocator_int__void_Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier_const_&___ptr64_::_Do_call @ 0x1801011E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180026DDC (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_c42184d898c0806d92bf2f8c2d17483b_::operator() @ 0x1800F57D0 (_lambda_c42184d898c0806d92bf2f8c2d17483b_--operator().c)
 *     ?_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z @ 0x1800F82C8 (-_ViewFromViewInstanceId@ViewEventDispatcher@@AEAAJIPEAPEAUIViewWrapperInternal@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl__lambda_af9b671aa906e030469e276bcd26d6be__std::allocator_int__void_Windows::Internal::OneCore::ViewEventHandlers::tagHostIdentifier_const_____ptr64_::_Do_call(
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
        v5 = lambda_c42184d898c0806d92bf2f8c2d17483b_::operator()(*(unsigned int ***)(a1 + 16), &v7);
        if ( v5 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x669,
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
