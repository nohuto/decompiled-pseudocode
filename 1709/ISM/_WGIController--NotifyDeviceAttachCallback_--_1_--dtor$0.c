/*
 * XREFs of _WGIController::NotifyDeviceAttachCallback_::_1_::dtor$0 @ 0x1800D16F8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WGIController::NotifyDeviceAttachCallback_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  std::unique_ptr<WGIController::DeviceAttachEventArgs>::~unique_ptr<WGIController::DeviceAttachEventArgs>((__int64 **)(a2 + 80));
}
