/*
 * XREFs of ?Release@CSplashScreen@@UEAAKXZ @ 0x18005EAA0
 * Callers:
 *     ?Release@CSplashScreen@@W7EAAKXZ @ 0x180070EB0 (-Release@CSplashScreen@@W7EAAKXZ.c)
 *     ?Release@CSplashScreen@@WBA@EAAKXZ @ 0x180070EE0 (-Release@CSplashScreen@@WBA@EAAKXZ.c)
 *     ?Release@CSplashScreen@@WBI@EAAKXZ @ 0x180070F00 (-Release@CSplashScreen@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CSplashScreen::Release(volatile signed __int64 *this)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::ApplicationModel::Activation::ISplashScreen,Microsoft::WRL::Details::InterfaceList<ISplashScreen,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(this);
}
