/*
 * XREFs of ?GetIids@CSplashScreen@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x180073BB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CSplashScreen::GetIids(__int64 this, _DWORD *a2, GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Activation::ISplashScreen,ISplashScreen,Microsoft::WRL::FtmBase>::GetIids(
           this,
           a2,
           a3);
}
