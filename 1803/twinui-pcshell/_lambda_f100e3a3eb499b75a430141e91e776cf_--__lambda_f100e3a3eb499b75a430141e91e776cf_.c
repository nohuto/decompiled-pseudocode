/*
 * XREFs of _lambda_f100e3a3eb499b75a430141e91e776cf_::__lambda_f100e3a3eb499b75a430141e91e776cf_ @ 0x1802226AC
 * Callers:
 *     CreationThreadDispatcher::RunAsync__lambda_f100e3a3eb499b75a430141e91e776cf___ @ 0x180222284 (CreationThreadDispatcher--RunAsync__lambda_f100e3a3eb499b75a430141e91e776cf___.c)
 *     _CreationThreadDispatcher::RunAsync__lambda_f100e3a3eb499b75a430141e91e776cf____::_1_::dtor$0 @ 0x18022235F (_CreationThreadDispatcher--RunAsync__lambda_f100e3a3eb499b75a430141e91e776cf____--_1_--dtor$0.c)
 *     CreationThreadDispatcher::RunSync__lambda_f100e3a3eb499b75a430141e91e776cf___ @ 0x180222390 (CreationThreadDispatcher--RunSync__lambda_f100e3a3eb499b75a430141e91e776cf___.c)
 *     _lambda_521142a9b3d1e74a384fab04623ad1ff_::__lambda_521142a9b3d1e74a384fab04623ad1ff_ @ 0x18022268C (_lambda_521142a9b3d1e74a384fab04623ad1ff_--__lambda_521142a9b3d1e74a384fab04623ad1ff_.c)
 *     ??_G?$CAsyncCallbackWithLambda@V_lambda_e5f9824fe3ffbbdd694ec0ced6f5fdc3_@@@@UEAAPEAXI@Z @ 0x1802227B0 (--_G-$CAsyncCallbackWithLambda@V_lambda_e5f9824fe3ffbbdd694ec0ced6f5fdc3_@@@@UEAAPEAXI@Z.c)
 *     ??_G?$CTaskWrapper@V_lambda_521142a9b3d1e74a384fab04623ad1ff_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180222800 (--_G-$CTaskWrapper@V_lambda_521142a9b3d1e74a384fab04623ad1ff_@@@ComTaskPool@Internal@Windows@@UE.c)
 *     ?InvokeSwitchItem@?QIXamlMultitaskingViewController@@XamlSnapAssistViewController@@UE$AAAXPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@@Z @ 0x18022287C (-InvokeSwitchItem@-QIXamlMultitaskingViewController@@XamlSnapAssistViewController@@UE$AAAXPE$AAU.c)
 *     _XamlSnapAssistViewController::[IXamlMultitaskingViewController]::InvokeSwitchItem_::_1_::dtor$2 @ 0x180222999 (_XamlSnapAssistViewController--[IXamlMultitaskingViewController]--InvokeSwitchItem_--_1_--dtor$2.c)
 * Callees:
 *     ?__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z @ 0x1801F9568 (-__abi_winrt_ptr_dtor@@YAXQE$ADVObject@Platform@@@Z.c)
 */

__int64 __fastcall lambda_f100e3a3eb499b75a430141e91e776cf_::__lambda_f100e3a3eb499b75a430141e91e776cf_(__int64 *a1)
{
  __abi_winrt_ptr_dtor(a1[2]);
  __abi_winrt_ptr_dtor(a1[1]);
  return __abi_winrt_ptr_dtor(*a1);
}
