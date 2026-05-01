/*
 * XREFs of CAsyncCallbackWithLambda__lambda_0a6dfc4b60d4d0baccf5499df5f27c2c___::Invoke @ 0x180144B80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18000405C (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAppViewFromSwitchItem@XamlBaseViewController@@IE$AAAJPE$AAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAPEAUIApplicationView@@@Z @ 0x180145CA0 (-GetAppViewFromSwitchItem@XamlBaseViewController@@IE$AAAJPE$AAUISwitchItem@Common@Multitasking@E.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAsyncCallbackWithLambda__lambda_0a6dfc4b60d4d0baccf5499df5f27c2c___::Invoke(__int64 a1)
{
  int AppViewFromSwitchItem; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  AppViewFromSwitchItem = XamlBaseViewController::GetAppViewFromSwitchItem(a1, *(_QWORD *)(a1 + 48), &v7);
  v3 = AppViewFromSwitchItem;
  if ( AppViewFromSwitchItem < 0 )
  {
    v4 = 34LL;
    goto LABEL_3;
  }
  AppViewFromSwitchItem = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 56) + 80LL) + 24LL))(*(_QWORD *)(*(_QWORD *)(a1 + 56) + 80LL));
  v3 = AppViewFromSwitchItem;
  if ( AppViewFromSwitchItem < 0 )
  {
    v4 = 36LL;
    goto LABEL_3;
  }
  AppViewFromSwitchItem = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 56)
                                                                                            + 144LL)
                                                                              + 24LL))(
                            *(_QWORD *)(*(_QWORD *)(a1 + 56) + 144LL),
                            v7,
                            *(_QWORD *)(a1 + 56) + 152LL);
  v3 = AppViewFromSwitchItem;
  if ( AppViewFromSwitchItem < 0 )
  {
    v4 = 37LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewcontroller.cpp",
      (const char *)(unsigned int)AppViewFromSwitchItem);
    if ( v7 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    return v3;
  }
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  return 0;
}
