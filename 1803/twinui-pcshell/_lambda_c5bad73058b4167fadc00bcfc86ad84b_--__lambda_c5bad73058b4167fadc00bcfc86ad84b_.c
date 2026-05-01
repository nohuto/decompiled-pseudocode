/*
 * XREFs of _lambda_c5bad73058b4167fadc00bcfc86ad84b_::__lambda_c5bad73058b4167fadc00bcfc86ad84b_ @ 0x18011D7AC
 * Callers:
 *     _CAppViewManager::PrepareToSwitch_::_1_::dtor$2 @ 0x180121595 (_CAppViewManager--PrepareToSwitch_--_1_--dtor$2.c)
 *     _CAppViewManager::ShowView_::_1_::dtor$2 @ 0x180121B4B (_CAppViewManager--ShowView_--_1_--dtor$2.c)
 *     _CAppViewManager::SwitchViews_::_1_::dtor$2 @ 0x180125685 (_CAppViewManager--SwitchViews_--_1_--dtor$2.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ @ 0x18000827C (-InternalRelease@-$ComPtr@UIAsyncCallback@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_c5bad73058b4167fadc00bcfc86ad84b_::__lambda_c5bad73058b4167fadc00bcfc86ad84b_(__int64 a1)
{
  Microsoft::WRL::ComPtr<IAsyncCallback>::InternalRelease((void **)(a1 + 32));
  return Microsoft::WRL::ComPtr<CAppViewManager>::InternalRelease((__int64 *)a1);
}
