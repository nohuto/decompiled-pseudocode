/*
 * XREFs of ?QueryInterface@CSplashScreen@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180060820
 * Callers:
 *     ?QueryInterface@CSplashScreen@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180073950 (-QueryInterface@CSplashScreen@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSplashScreen@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x180073970 (-QueryInterface@CSplashScreen@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CSplashScreen@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800739C0 (-QueryInterface@CSplashScreen@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CSplashScreen::QueryInterface(char *this, __int64 a2, void **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::ApplicationModel::Activation::ISplashScreen,ISplashScreen,Microsoft::WRL::FtmBase>::QueryInterface(
           this,
           a2,
           a3);
}
