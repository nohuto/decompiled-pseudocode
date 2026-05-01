/*
 * XREFs of ?CloseSwitchItem@?QIXamlMultitaskingViewController@@XamlBaseViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x180223684
 * Callers:
 *     ?CloseSwitchItem@?QIXamlMultitaskingViewController@@XamlBaseViewController@@W7E$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1800AB660 (-CloseSwitchItem@-QIXamlMultitaskingViewController@@XamlBaseViewController@@W7E$AAAXPE$AAUISwitc.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     CreationThreadDispatcher::RunAsync__lambda_a108a8c11bb5b98786bc6ab4691e60b5___ @ 0x180223064 (CreationThreadDispatcher--RunAsync__lambda_a108a8c11bb5b98786bc6ab4691e60b5___.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall _CloseSwitchItem__QIXamlMultitaskingViewController__XamlBaseViewController__UE_AAAXPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Z(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rdi
  int v4; // eax
  _QWORD v6[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v3 = __abi_winrt_ptr_ctor(a2);
  v6[0] = __abi_winrt_ptr_ctor(v3);
  v6[1] = __abi_winrt_ptr_ctor(a1);
  v4 = CreationThreadDispatcher::RunAsync__lambda_a108a8c11bb5b98786bc6ab4691e60b5___(*(_QWORD *)(a1 + 80), (__int64)v6);
  if ( v4 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      74LL,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlbaseviewcontroller.cpp",
      (const char *)(unsigned int)v4);
  return __abi_winrt_ptr_dtor(v3);
}
