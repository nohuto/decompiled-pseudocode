/*
 * XREFs of ?Release@WGIController@@UEAAKXZ @ 0x18009D060
 * Callers:
 *     ?Release@WGIController@@WBI@EAAKXZ @ 0x1800A2940 (-Release@WGIController@@WBI@EAAKXZ.c)
 *     ?Release@WGIController@@WCA@EAAKXZ @ 0x1800A2A10 (-Release@WGIController@@WCA@EAAKXZ.c)
 *     ?Release@WGIController@@W7EAAKXZ @ 0x1800A2AD0 (-Release@WGIController@@W7EAAKXZ.c)
 *     ?Release@WGIController@@WCI@EAAKXZ @ 0x1800A2AE0 (-Release@WGIController@@WCI@EAAKXZ.c)
 *     ?Release@WGIController@@WBA@EAAKXZ @ 0x1800A2B80 (-Release@WGIController@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall WGIController::Release(WGIController *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::Release(this);
}
