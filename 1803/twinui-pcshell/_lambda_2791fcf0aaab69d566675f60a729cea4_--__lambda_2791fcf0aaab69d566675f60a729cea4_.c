/*
 * XREFs of _lambda_2791fcf0aaab69d566675f60a729cea4_::__lambda_2791fcf0aaab69d566675f60a729cea4_ @ 0x18011D760
 * Callers:
 *     ??_G?$DelegateInvokeHelper@UIAsyncCallback@@AEAV_lambda_2791fcf0aaab69d566675f60a729cea4_@@$0?0J@?$DelegateArgTraits@P8IAsyncCallback@@EAAJJ@Z@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18011E010 (--_G-$DelegateInvokeHelper@UIAsyncCallback@@AEAV_lambda_2791fcf0aaab69d566675f60a729cea4_@@$0-0J.c)
 *     ?_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIAsyncCallback@@@Z @ 0x180127904 (-_SwitchAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIViewWrapp.c)
 *     _CAppViewManager::_SwitchAsyncWorker_::_1_::dtor$5 @ 0x180127C01 (_CAppViewManager--_SwitchAsyncWorker_--_1_--dtor$5.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ @ 0x18000827C (-InternalRelease@-$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??1SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA@XZ @ 0x18011DB74 (--1SwitchAsyncWorker@CAppViewManagerTelemetry@@QEAA@XZ.c)
 */

__int64 __fastcall lambda_2791fcf0aaab69d566675f60a729cea4_::__lambda_2791fcf0aaab69d566675f60a729cea4_(__int64 a1)
{
  Microsoft::WRL::ComPtr<IAsyncCallback>::InternalRelease((void **)(a1 + 344));
  CAppViewManagerTelemetry::SwitchAsyncWorker::~SwitchAsyncWorker((CAppViewManagerTelemetry::SwitchAsyncWorker *)(a1 + 32));
  return Microsoft::WRL::ComPtr<CAppViewManager>::InternalRelease((__int64 *)a1);
}
