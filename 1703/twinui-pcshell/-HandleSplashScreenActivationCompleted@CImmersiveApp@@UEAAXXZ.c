/*
 * XREFs of ?HandleSplashScreenActivationCompleted@CImmersiveApp@@UEAAXXZ @ 0x180054E30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CImmersiveApp::HandleSplashScreenActivationCompleted(CImmersiveApp *this)
{
  CImmersiveApp::_UpdatePresentedWindow((CImmersiveApp *)((char *)this - 88));
}
