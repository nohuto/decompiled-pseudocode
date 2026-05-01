/*
 * XREFs of _lambda_637b889d7309fa55c34979987552fc96_::__lambda_637b889d7309fa55c34979987552fc96_ @ 0x18027313C
 * Callers:
 *     ??_E?$CTaskWrapper@AEAV_lambda_637b889d7309fa55c34979987552fc96_@@@ComTaskPool@Internal@Windows@@UEAAPEAXI@Z @ 0x180273370 (--_E-$CTaskWrapper@AEAV_lambda_637b889d7309fa55c34979987552fc96_@@@ComTaskPool@Internal@Windows@.c)
 *     ?RuntimeClassInitialize@CWinRTAppIconLoader@@QEAAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEAUIApplicationViewIconLoaderNotifications@@@Z @ 0x18027346C (-RuntimeClassInitialize@CWinRTAppIconLoader@@QEAAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEA.c)
 * Callees:
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x18018D5B8 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_637b889d7309fa55c34979987552fc96_::__lambda_637b889d7309fa55c34979987552fc96_(__int64 *a1)
{
  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(a1 + 6);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(a1 + 5);
  return Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(a1);
}
