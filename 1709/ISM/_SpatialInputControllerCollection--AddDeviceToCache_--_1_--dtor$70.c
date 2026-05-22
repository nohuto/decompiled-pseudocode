/*
 * XREFs of _SpatialInputControllerCollection::AddDeviceToCache_::_1_::dtor$70 @ 0x1800D0ED0
 * Callers:
 *     <none>
 * Callees:
 *     ?Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ @ 0x180001840 (-Uninitialize3DComponents@MPCClickerProcessor@@UEAAXXZ.c)
 */

void __fastcall SpatialInputControllerCollection::AddDeviceToCache_::_1_::dtor_70(__int64 a1, __int64 a2)
{
  MPCClickerProcessor::Uninitialize3DComponents(*(MPCClickerProcessor **)(a2 + 112));
}
