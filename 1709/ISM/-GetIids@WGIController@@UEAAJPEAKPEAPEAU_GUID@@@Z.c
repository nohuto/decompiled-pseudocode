/*
 * XREFs of ?GetIids@WGIController@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18009EDF0
 * Callers:
 *     ?GetIids@WGIController@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800A28F0 (-GetIids@WGIController@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@WGIController@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800A29B0 (-GetIids@WGIController@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@WGIController@@WCA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800A2A80 (-GetIids@WGIController@@WCA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 *     ?GetIids@WGIController@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800A2B50 (-GetIids@WGIController@@WCI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall WGIController::GetIids(WGIController *this, unsigned int *a2, struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::GetIids(
           this,
           a2,
           a3);
}
