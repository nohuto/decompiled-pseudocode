/*
 * XREFs of _lambda_f100e3a3eb499b75a430141e91e776cf_::operator() @ 0x1802226E4
 * Callers:
 *     CAsyncCallbackWithLambda__lambda_e5f9824fe3ffbbdd694ec0ced6f5fdc3___::Invoke @ 0x180222860 (CAsyncCallbackWithLambda__lambda_e5f9824fe3ffbbdd694ec0ced6f5fdc3___--Invoke.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180082E78 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ?GetAppViewFromSwitchItem@XamlBaseViewController@@IE$AAAJPE$AAUISwitchItem@Multitasking@ComposableShell@Internal@Windows@@PEAPEAUIApplicationView@@@Z @ 0x180223808 (-GetAppViewFromSwitchItem@XamlBaseViewController@@IE$AAAJPE$AAUISwitchItem@Multitasking@Composab.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_f100e3a3eb499b75a430141e91e776cf_::operator()(__int64 a1)
{
  int AppViewFromSwitchItem; // eax
  unsigned int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0LL;
  AppViewFromSwitchItem = XamlBaseViewController::GetAppViewFromSwitchItem(a1, *(_QWORD *)(a1 + 8), &v7);
  v3 = AppViewFromSwitchItem;
  if ( AppViewFromSwitchItem >= 0 )
  {
    AppViewFromSwitchItem = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 16) + 80LL) + 24LL))(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 80LL));
    v3 = AppViewFromSwitchItem;
    if ( AppViewFromSwitchItem >= 0 )
    {
      AppViewFromSwitchItem = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(*(_QWORD *)(a1 + 16)
                                                                                                + 160LL)
                                                                                  + 24LL))(
                                *(_QWORD *)(*(_QWORD *)(a1 + 16) + 160LL),
                                v7,
                                *(_QWORD *)(a1 + 16) + 168LL);
      v3 = AppViewFromSwitchItem;
      if ( AppViewFromSwitchItem >= 0 )
      {
        v3 = 0;
        goto LABEL_9;
      }
      v4 = 37LL;
    }
    else
    {
      v4 = 36LL;
    }
  }
  else
  {
    v4 = 34LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v4,
    (__int64)"pcshell\\twinui\\xamlmultitaskingview\\lib\\xamlsnapassistviewcontroller.cpp",
    (const char *)(unsigned int)AppViewFromSwitchItem);
LABEL_9:
  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(&v7);
  return v3;
}
