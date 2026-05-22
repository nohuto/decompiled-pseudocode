/*
 * XREFs of ??1?$ComPtr@VWGIController@@@WRL@Microsoft@@QEAA@XZ @ 0x180077B48
 * Callers:
 *     _WGIRawInputProvider::OnRawGameControllerAdded_::_1_::dtor$1 @ 0x1800E74F8 (_WGIRawInputProvider--OnRawGameControllerAdded_--_1_--dtor$1.c)
 *     _WGIRawInputProvider::OnRawGameControllerAdded_::_1_::dtor$26 @ 0x1800E7510 (_WGIRawInputProvider--OnRawGameControllerAdded_--_1_--dtor$26.c)
 *     _WGIController::NotifyAttachedAndStart_::_1_::dtor$2 @ 0x1800E7765 (_WGIController--NotifyAttachedAndStart_--_1_--dtor$2.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameControllerInputSink@Custom@Input@Gaming@Windows@@UIGipGameControllerInputSink@5678@UIGipGameControllerInputSinkPrivate@Internal@678@UIHidGameControllerInputSink@5678@UIXusbGameControllerInputSink@5678@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800779D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIGameControllerIn.c)
 */

volatile signed __int64 *__fastcall Microsoft::WRL::ComPtr<WGIController>::~ComPtr<WGIController>(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Gaming::Input::Custom::IGameControllerInputSink,Windows::Gaming::Input::Custom::IGipGameControllerInputSink,Windows::Gaming::Input::Internal::IGipGameControllerInputSinkPrivate,Windows::Gaming::Input::Custom::IHidGameControllerInputSink,Windows::Gaming::Input::Custom::IXusbGameControllerInputSink>::Release(result);
  }
  return result;
}
