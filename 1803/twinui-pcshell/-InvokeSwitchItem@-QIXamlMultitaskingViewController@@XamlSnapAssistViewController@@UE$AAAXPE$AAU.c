/*
 * XREFs of ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlSnapAssistViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18022287C
 * Callers:
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlSnapAssistViewController@@WBA@E$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x1800AC770 (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlSnapAssistViewController@@WBA@E$AAAXPE$.c)
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800FFA38 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 *     ?__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z @ 0x1801F9D70 (-__abi_winrt_ptr_ctor@@YAPEAXQE$ADVObject@Platform@@@Z.c)
 *     CreationThreadDispatcher::RunAsync__lambda_f100e3a3eb499b75a430141e91e776cf___ @ 0x180222284 (CreationThreadDispatcher--RunAsync__lambda_f100e3a3eb499b75a430141e91e776cf___.c)
 *     _lambda_f100e3a3eb499b75a430141e91e776cf_::__lambda_f100e3a3eb499b75a430141e91e776cf_ @ 0x1802226AC (_lambda_f100e3a3eb499b75a430141e91e776cf_--__lambda_f100e3a3eb499b75a430141e91e776cf_.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall _InvokeSwitchItem__QIXamlMultitaskingViewController__XamlSnapAssistViewController__UE_AAAXPE_AAUISwitchItem_Multitasking_ComposableShell_Internal_Windows___Z(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // r15
  __int64 v4; // r12
  int v5; // eax
  _QWORD v7[3]; // [rsp+28h] [rbp-38h] BYREF
  __int64 v8; // [rsp+40h] [rbp-20h] BYREF
  __int64 v9; // [rsp+48h] [rbp-18h]
  __int64 v10; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]

  v3 = __abi_winrt_ptr_ctor(a2);
  v4 = __abi_winrt_ptr_ctor(a1);
  v8 = __abi_winrt_ptr_ctor(v4);
  v9 = __abi_winrt_ptr_ctor(v3);
  v10 = __abi_winrt_ptr_ctor(a1);
  v7[0] = __abi_winrt_ptr_ctor(v8);
  v7[1] = __abi_winrt_ptr_ctor(v9);
  v7[2] = __abi_winrt_ptr_ctor(v10);
  v5 = CreationThreadDispatcher::RunAsync__lambda_f100e3a3eb499b75a430141e91e776cf___(
         *(_QWORD *)(a1 + 88),
         (volatile int *)v7);
  if ( v5 < 0 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      41LL,
      (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewcontroller.cpp",
      (const char *)(unsigned int)v5);
  lambda_f100e3a3eb499b75a430141e91e776cf_::__lambda_f100e3a3eb499b75a430141e91e776cf_(&v8);
  __abi_winrt_ptr_dtor(v4);
  return __abi_winrt_ptr_dtor(v3);
}
