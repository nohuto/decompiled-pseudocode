/*
 * XREFs of ?QueryInterface@CSplashScreen@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18005EC50
 * Callers:
 *     ?QueryInterface@CSplashScreen@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180070EA0 (-QueryInterface@CSplashScreen@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSplashScreen@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180070ED0 (-QueryInterface@CSplashScreen@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSplashScreen@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180070F20 (-QueryInterface@CSplashScreen@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CSplashScreen::QueryInterface(char *this, __int64 a2, void **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::ApplicationModel::Activation::ISplashScreen,Microsoft::WRL::Details::InterfaceList<ISplashScreen,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
           this,
           a2,
           a3);
}
