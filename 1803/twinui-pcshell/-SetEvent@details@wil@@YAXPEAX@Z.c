/*
 * XREFs of ?SetEvent@details@wil@@YAXPEAX@Z @ 0x180189CB8
 * Callers:
 *     _wil::details::WaitForCompletion_Windows::Foundation::IAsyncOperation_enum_Windows::ApplicationModel::AppService::AppServiceConnectionStatus______ptr64__::_2_::CompletionDelegate::Invoke @ 0x180189640 (_wil--details--WaitForCompletion_Windows--Foundation--IAsyncOperation_enum_Windows-_ea_180189640.c)
 *     CAsyncCallbackWithLambda__lambda_70db04ee97ce611edc9e35899f670330___::Invoke @ 0x18018D600 (CAsyncCallbackWithLambda__lambda_70db04ee97ce611edc9e35899f670330___--Invoke.c)
 *     ?ShutdownServices@PenWorkspaceDiscoverBroker@@UEAAJPEAUIProfferService@@@Z @ 0x180192E10 (-ShutdownServices@PenWorkspaceDiscoverBroker@@UEAAJPEAUIProfferService@@@Z.c)
 *     ?UnsubscribeFromServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801CF790 (-UnsubscribeFromServices@ViewEventDispatcher@@UEAAJPEAUIServiceProvider@@@Z.c)
 *     _ViewManagerBridge::InitializeAndRunCoreUiMessageLoop_::_1_::catch$4 @ 0x1801DD0FF (_ViewManagerBridge--InitializeAndRunCoreUiMessageLoop_--_1_--catch$4.c)
 *     ?OnConnected@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@@Z @ 0x1801DD4C0 (-OnConnected@ViewManagerBridge@@UEAAJPEAUIMessageProxy@@@Z.c)
 *     _WindowManagerBridge::RuntimeClassInitialize_::_1_::catch$2 @ 0x1801EDABE (_WindowManagerBridge--RuntimeClassInitialize_--_1_--catch$2.c)
 *     ?Uninitialize@WindowManagerBridge@@UEAAXXZ @ 0x1801EDD10 (-Uninitialize@WindowManagerBridge@@UEAAXXZ.c)
 *     ?WindowManagerWatcherConnected@WindowManagerBridge@@AEAAJXZ @ 0x1801EDDD8 (-WindowManagerWatcherConnected@WindowManagerBridge@@AEAAJXZ.c)
 * Callees:
 *     ?_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180100280 (-_FailFast_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

void __fastcall wil::details::SetEvent(wil::details *this, void *a2)
{
  const char *v2; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !SetEvent(this) )
  {
    wil::details::in1diag3::_FailFast_GetLastError(
      retaddr,
      (void *)0x86F,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      v2);
    __debugbreak();
  }
}
