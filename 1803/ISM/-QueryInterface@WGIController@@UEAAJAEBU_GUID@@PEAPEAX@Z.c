/*
 * XREFs of ?QueryInterface@WGIController@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180077E70
 * Callers:
 *     ?QueryInterface@WGIController@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007AE00 (-QueryInterface@WGIController@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@WGIController@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007AE90 (-QueryInterface@WGIController@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@WGIController@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007AEC0 (-QueryInterface@WGIController@@WCI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@WGIController@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007AF70 (-QueryInterface@WGIController@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@WGIController@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18007B030 (-QueryInterface@WGIController@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
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
