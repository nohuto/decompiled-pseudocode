/*
 * XREFs of ?GetAppViewFromSwitchItem@XamlBaseViewController@@IE$AAAJPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAPEAUIApplicationView@@@Z @ 0x180145CA0
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_0a6dfc4b60d4d0baccf5499df5f27c2c___::Invoke @ 0x180144B80 (CAsyncCallbackWithLambda__lambda_0a6dfc4b60d4d0baccf5499df5f27c2c___--Invoke.c)
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAXPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180145620 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAXPE$AAUISwitc.c)
 *     CAsyncCallbackWithLambda__lambda_9d14f4c5953655842eb18c10ba19f0b4___::Invoke @ 0x180146560 (CAsyncCallbackWithLambda__lambda_9d14f4c5953655842eb18c10ba19f0b4___--Invoke.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$query@UIAppViewSwitchItem@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIAppViewSwitchItem@@Uerr_exception_policy@wil@@@1@XZ @ 0x180130BA8 (--$query@UIAppViewSwitchItem@@@-$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA-.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall XamlBaseViewController::GetAppViewFromSwitchItem(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v5; // rax
  int v6; // edi
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v9; // [rsp+40h] [rbp+8h] BYREF
  __int64 v10; // [rsp+48h] [rbp+10h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h]

  v9 = a1;
  *a3 = 0LL;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  v11 = a2;
  v9 = a2;
  if ( a2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
  v5 = (_QWORD *)wil::com_ptr_t<IInspectable,wil::err_exception_policy>::query<IAppViewSwitchItem>(&v9, (__int64)&v10);
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)*v5 + 24LL))(*v5, a3);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  if ( v6 >= 0 )
  {
    if ( a2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x5D,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlbaseviewcontroller.cpp",
      (const char *)(unsigned int)v6);
    if ( a2 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 16LL))(a2);
    }
    return (unsigned int)v6;
  }
}
