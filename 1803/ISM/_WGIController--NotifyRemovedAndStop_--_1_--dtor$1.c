/*
 * XREFs of _WGIController::NotifyRemovedAndStop_::_1_::dtor$1 @ 0x1800E777D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall WGIController::NotifyRemovedAndStop_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  std::unique_ptr<WGIController::DeviceRemovalEventArgs>::~unique_ptr<WGIController::DeviceRemovalEventArgs>((__int64 **)(a2 + 80));
}
