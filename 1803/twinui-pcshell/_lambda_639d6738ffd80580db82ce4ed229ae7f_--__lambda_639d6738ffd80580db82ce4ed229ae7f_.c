/*
 * XREFs of _lambda_639d6738ffd80580db82ce4ed229ae7f_::__lambda_639d6738ffd80580db82ce4ed229ae7f_ @ 0x180138478
 * Callers:
 *     _CSplashScreen::add_Dismissed_::_1_::dtor$2 @ 0x180138D5F (_CSplashScreen--add_Dismissed_--_1_--dtor$2.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F9504 (-InternalRelease@-$ComPtr@VCSplashScreen@@@WRL@Microsoft@@IEAAKXZ.c)
 */

unsigned int __fastcall lambda_639d6738ffd80580db82ce4ed229ae7f_::__lambda_639d6738ffd80580db82ce4ed229ae7f_(
        __int64 a1)
{
  Microsoft::WRL::ComPtr<CSplashScreen>::InternalRelease((CSplashScreen **)(a1 + 8));
  return Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::InternalRelease((__int64 *)a1);
}
