/*
 * XREFs of CAsyncCallbackWithLambda__lambda_4d1a91e8e0008a4f785d9fb2346d4ff5___::Invoke @ 0x180179D90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180004210 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetAppViewFromSwitchItem@XamlBaseViewController@@IE$AAAJPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIApplicationView@@@Z @ 0x18017AA5C (-GetAppViewFromSwitchItem@XamlBaseViewController@@IE$AAAJPE$AAUISwitchItem@Multitasking@Composab.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAsyncCallbackWithLambda__lambda_4d1a91e8e0008a4f785d9fb2346d4ff5___::Invoke(__int64 a1)
{
  int AppViewFromSwitchItem; // eax
  unsigned int v3; // edi
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // r8
  _QWORD *v8; // rbx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  _QWORD *v12; // [rsp+40h] [rbp+8h] BYREF

  v12 = 0LL;
  AppViewFromSwitchItem = XamlBaseViewController::GetAppViewFromSwitchItem(a1, *(_QWORD *)(a1 + 64), &v12);
  v3 = AppViewFromSwitchItem;
  if ( AppViewFromSwitchItem < 0 )
  {
    v4 = 34LL;
    goto LABEL_3;
  }
  AppViewFromSwitchItem = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 72) + 80LL) + 24LL))(*(_QWORD *)(*(_QWORD *)(a1 + 72) + 80LL));
  v3 = AppViewFromSwitchItem;
  if ( AppViewFromSwitchItem < 0 )
  {
    v4 = 36LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v4,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewcontroller.cpp",
      (const char *)(unsigned int)AppViewFromSwitchItem);
    v5 = v12;
    if ( v12 )
    {
      v6 = *v12;
LABEL_5:
      (*(void (__fastcall **)(_QWORD *))(v6 + 16))(v5);
      return v3;
    }
    return v3;
  }
  v7 = *(_QWORD *)(a1 + 72);
  v8 = v12;
  v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *, __int64))(**(_QWORD **)(v7 + 144) + 24LL))(
         *(_QWORD *)(v7 + 144),
         v12,
         v7 + 152);
  v3 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x25,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewcontroller.cpp",
      (const char *)(unsigned int)v9);
    if ( !v8 )
      return v3;
    v6 = *v8;
    v5 = v8;
    goto LABEL_5;
  }
  if ( v8 )
    (*(void (__fastcall **)(_QWORD *))(*v8 + 16LL))(v8);
  return 0;
}
