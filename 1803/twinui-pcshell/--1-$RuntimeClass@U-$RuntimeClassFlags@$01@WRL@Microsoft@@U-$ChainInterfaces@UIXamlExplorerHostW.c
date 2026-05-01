/*
 * XREFs of ??1?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ChainInterfaces@UIXamlExplorerHostWindowInternal@@UIXamlExplorerHostWindow@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@VFtmBase@23@@WRL@Microsoft@@UEAA@XZ @ 0x1800F4090
 * Callers:
 *     _AgileRegistrationList::AgileCallbackArray::AgileCallbackArray_::_1_::dtor$0 @ 0x1800978B1 (_AgileRegistrationList--AgileCallbackArray--AgileCallbackArray_--_1_--dtor$0.c)
 *     _XamlExplorerHostWindow::_XamlExplorerHostWindow_::_1_::dtor$0 @ 0x1802012FA (_XamlExplorerHostWindow--_XamlExplorerHostWindow_--_1_--dtor$0.c)
 *     ??_E?$CAsyncCallbackWithLambda@V_lambda_6dcf47c7a64d744d561044cc52c68c53_@@@@UEAAPEAXI@Z @ 0x180273320 (--_E-$CAsyncCallbackWithLambda@V_lambda_6dcf47c7a64d744d561044cc52c68c53_@@@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IXamlExplorerHostWindowInternal,IXamlExplorerHostWindow,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::FtmBase>::~RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Microsoft::WRL::ChainInterfaces<IXamlExplorerHostWindowInternal,IXamlExplorerHostWindow,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::FtmBase>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 44) = -1073741823;
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)(a1 + 32));
}
