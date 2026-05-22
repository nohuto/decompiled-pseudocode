/*
 * XREFs of _MPCGestureHandlerManager::MapGestureHandlerToWorkspace_::_1_::dtor$22 @ 0x1800CF204
 * Callers:
 *     <none>
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001840 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 */

void __fastcall MPCGestureHandlerManager::MapGestureHandlerToWorkspace_::_1_::dtor_22(__int64 a1, __int64 a2)
{
  MPCClickerProcessor::Uninitialize3DComponents(*(MPCClickerProcessor **)(a2 + 56));
}
