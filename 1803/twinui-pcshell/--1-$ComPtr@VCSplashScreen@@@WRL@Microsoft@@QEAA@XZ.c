/*
 * XREFs of ??1?$ComPtr@VCSplashScreen@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F9524
 * Callers:
 *     _CSplashScreen::OnSystemVisualChanged_::_1_::dtor$0 @ 0x1800B4B7C (_CSplashScreen--OnSystemVisualChanged_--_1_--dtor$0.c)
 *     _CSplashScreen::OnSystemVisualChanged_::_1_::dtor$1 @ 0x1800B4B88 (_CSplashScreen--OnSystemVisualChanged_--_1_--dtor$1.c)
 *     _CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual_::_1_::dtor$0 @ 0x1800B4C49 (_CImmersiveApp--CImmersiveWindowCollection--RemoveSystemVisual_--_1_--dtor$0.c)
 *     _CImmersiveApp::CImmersiveWindowCollection::RemoveSystemVisual_::_1_::dtor$1 @ 0x1800B4C55 (_CImmersiveApp--CImmersiveWindowCollection--RemoveSystemVisual_--_1_--dtor$1.c)
 *     __lambda_ca324c265ed58b3d9541d2204f682216_::operator()_::_1_::dtor$1 @ 0x1800B5ED4 (__lambda_ca324c265ed58b3d9541d2204f682216_--operator()_--_1_--dtor$1.c)
 *     _CSplashScreen::add_Dismissed_::_1_::dtor$1 @ 0x180138D53 (_CSplashScreen--add_Dismissed_--_1_--dtor$1.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<CSplashScreen>::~ComPtr<CSplashScreen>(CSplashScreen **a1)
{
  return Microsoft::WRL::ComPtr<CSplashScreen>::InternalRelease(a1);
}
