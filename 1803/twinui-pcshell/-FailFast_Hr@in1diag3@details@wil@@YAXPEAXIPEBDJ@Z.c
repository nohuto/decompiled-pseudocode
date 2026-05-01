/*
 * XREFs of ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180149828
 * Callers:
 *     ?ResultFromCaughtException@wil@@YAJXZ @ 0x180148910 (-ResultFromCaughtException@wil@@YAJXZ.c)
 *     _wil::details::ScopeExitFnGuard__lambda_9566a7ebb49e26bd67a2921c9c088adc___::operator()_::_1_::catch$0 @ 0x180189581 (_wil--details--ScopeExitFnGuard__lambda_9566a7ebb49e26bd67a2921c9c088adc___--operator()_--_1_--c.c)
 *     ?RuntimeClassInitialize@Win32BackedViewHostItem@@QEAAJPEAUIApplicationView@@PEAUHWND__@@PEAUIServiceProvider@@@Z @ 0x1801B8EF0 (-RuntimeClassInitialize@Win32BackedViewHostItem@@QEAAJPEAUIApplicationView@@PEAUHWND__@@PEAUISer.c)
 *     _anonymous_namespace_::_DisplayInHeadset @ 0x1801B9924 (_anonymous_namespace_--_DisplayInHeadset.c)
 *     ?RuntimeClassInitialize@ModalLink@@QEAAJPEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z @ 0x1801BED7C (-RuntimeClassInitialize@ModalLink@@QEAAJPEAUIViewHostItem@Holographic@Shell@Internal@Windows@@@Z.c)
 *     _lambda_3c23c103e221e9d7edb5a529b76dd87c_::operator() @ 0x1801EA6B8 (_lambda_3c23c103e221e9d7edb5a529b76dd87c_--operator().c)
 *     _lambda_5507c52a3c96750a474d626313f63385_::operator() @ 0x1801EABE8 (_lambda_5507c52a3c96750a474d626313f63385_--operator().c)
 *     _WindowManagerBridge::RuntimeClassInitialize_::_1_::catch$2 @ 0x1801EDABE (_WindowManagerBridge--RuntimeClassInitialize_--_1_--catch$2.c)
 *     ?WindowManagerWatcherConnected@WindowManagerBridge@@AEAAJXZ @ 0x1801EDDD8 (-WindowManagerWatcherConnected@WindowManagerBridge@@AEAAJXZ.c)
 *     _lambda_f1fd7dcd3a18171c461af661371627e6_::operator() @ 0x18023C438 (_lambda_f1fd7dcd3a18171c461af661371627e6_--operator().c)
 *     ?GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1802B49B8 (-GetViewValueSetFromSite@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAPEAUIPropertySet@Collect.c)
 *     ?CreateDesktopWallpaperHWND@DesktopWallpaperHelpers@@SAJAEBUCRect@Geometry@@PEAPEAUHWND__@@@Z @ 0x1802FE8F0 (-CreateDesktopWallpaperHWND@DesktopWallpaperHelpers@@SAJAEBUCRect@Geometry@@PEAPEAUHWND__@@@Z.c)
 * Callees:
 *     ?ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z @ 0x180082EA8 (-ReportFailure_Hr@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J@Z.c)
 */

void __fastcall wil::details::in1diag3::FailFast_Hr(
        wil::details::in1diag3 *this,
        __int64 a2,
        __int64 a3,
        const char *a4)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  wil::details::ReportFailure_Hr((__int64)this, a2, a3, 0LL, 0LL, retaddr);
}
