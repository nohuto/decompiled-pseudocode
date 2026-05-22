/*
 * XREFs of ?QueryInterface@WGIController@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009EE00
 * Callers:
 *     ?QueryInterface@WGIController@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A28C0 (-QueryInterface@WGIController@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@WGIController@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A2960 (-QueryInterface@WGIController@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@WGIController@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A2990 (-QueryInterface@WGIController@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@WGIController@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A2A50 (-QueryInterface@WGIController@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@WGIController@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A2B20 (-QueryInterface@WGIController@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall WGIController::QueryInterface(WGIController *this, const struct _GUID *a2, void **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::QueryInterface(
           this,
           a2,
           a3);
}
