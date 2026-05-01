/*
 * XREFs of _lambda_3723e99f8ac1c766dbc5b421cdf09ee2_::__lambda_3723e99f8ac1c766dbc5b421cdf09ee2_ @ 0x1802B3950
 * Callers:
 *     _CPerMonitorDesktopVisibilityService::FullScreenVisibilityChanged_::_1_::dtor$4 @ 0x1802B3EDD (_CPerMonitorDesktopVisibilityService--FullScreenVisibilityChanged_--_1_--dtor$4.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180003FC4 (-InternalRelease@-$ComPtr@UIPropertyValue@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ.c)
 */

unsigned int __fastcall lambda_3723e99f8ac1c766dbc5b421cdf09ee2_::__lambda_3723e99f8ac1c766dbc5b421cdf09ee2_(
        __int64 a1)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::IPropertyValue>::InternalRelease((__int64 *)(a1 + 16));
  return Microsoft::WRL::ComPtr<IObjectArray>::InternalRelease((void **)a1);
}
