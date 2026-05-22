/*
 * XREFs of ?AddRef@WGIController@@UEAAKXZ @ 0x180029C80
 * Callers:
 *     ?AddRef@WGIController@@W7EAAKXZ @ 0x1800297B0 (-AddRef@WGIController@@W7EAAKXZ.c)
 *     ?AddRef@WGIController@@WBA@EAAKXZ @ 0x180029C90 (-AddRef@WGIController@@WBA@EAAKXZ.c)
 *     ?AddRef@WGIController@@WCI@EAAKXZ @ 0x18007AE10 (-AddRef@WGIController@@WCI@EAAKXZ.c)
 *     ?AddRef@WGIController@@WBI@EAAKXZ @ 0x18007AF90 (-AddRef@WGIController@@WBI@EAAKXZ.c)
 *     ?AddRef@WGIController@@WCA@EAAKXZ @ 0x18007B040 (-AddRef@WGIController@@WCA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall WGIController::AddRef(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::AddRef(this);
}
