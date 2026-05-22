/*
 * XREFs of _SpatialInteractionDevices::SpatialInteractionController::_SpatialInteractionController_::_1_::dtor$1 @ 0x1800D2220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SpatialInteractionDevices::SpatialInteractionController::_SpatialInteractionController_::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  ThreadpoolTimerHelpers::KeepAliveTimer::~KeepAliveTimer(
    (ThreadpoolTimerHelpers::KeepAliveTimer *)(*(_QWORD *)(a2 + 64) + 640LL),
    a2);
}
