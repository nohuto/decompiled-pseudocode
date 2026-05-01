/*
 * XREFs of ?DismissView@XamlBaseViewController@@IE$AAAXXZ @ 0x18022372C
 * Callers:
 *     ?HandleSnappingCommands@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@I@Z @ 0x18021DF2C (-HandleSnappingCommands@XamlAllUpViewController@@AE$AAAXPE$AAUISwitchItem@Multitasking@Composabl.c)
 *     ?ActivationChanged@?QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@UE$AAAXPE$AAVObject@Platform@@PE$AAVWindowActivatedEventArgs@Core@UI@Windows@@@Z @ 0x180223660 (-ActivationChanged@-QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@UE$AAAXPE$AAV.c)
 *     ?OnLightDismiss@?QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@UE$AAAXXZ @ 0x180223AE0 (-OnLightDismiss@-QIXamlSwitcherWindowInteractionEvents@@XamlBaseViewController@@UE$AAAXXZ.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     CreationThreadDispatcher::RunAsync__lambda_9bfd9a3a8ffc22fdb84219f9a69e0562___ @ 0x180222F48 (CreationThreadDispatcher--RunAsync__lambda_9bfd9a3a8ffc22fdb84219f9a69e0562___.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall XamlBaseViewController::DismissView(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rbp
  int v5; // eax
  _QWORD v7[8]; // [rsp+28h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v2 = __abi_winrt_ptr_ctor(a1);
  v3 = __abi_winrt_ptr_ctor(a1);
  v7[2] = v3;
  v4 = __abi_winrt_ptr_ctor(v2);
  v7[3] = v4;
  v7[0] = __abi_winrt_ptr_ctor(v3);
  v7[1] = __abi_winrt_ptr_ctor(v4);
  v5 = CreationThreadDispatcher::RunAsync__lambda_9bfd9a3a8ffc22fdb84219f9a69e0562___(*(_QWORD *)(a1 + 80), (__int64)v7);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      116LL,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlbaseviewcontroller.cpp",
      (const char *)(unsigned int)v5);
  __abi_winrt_ptr_dtor(v4);
  __abi_winrt_ptr_dtor(v3);
  return __abi_winrt_ptr_dtor(v2);
}
