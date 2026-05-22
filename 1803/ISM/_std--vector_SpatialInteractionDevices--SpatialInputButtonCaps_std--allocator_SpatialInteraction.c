/*
 * XREFs of _std::vector_SpatialInteractionDevices::SpatialInputButtonCaps_std::allocator_SpatialInteractionDevices::SpatialInputButtonCaps___::emplace_back_SpatialInteractionDevices::SpatialInputButtonCaps__::_1_::catch$99 @ 0x1800E8CE2
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@USpatialInputButtonCaps@SpatialInteractionDevices@@@std@@QEAAXQEAUSpatialInputButtonCaps@SpatialInteractionDevices@@_K@Z @ 0x18009F5B0 (-deallocate@-$allocator@USpatialInputButtonCaps@SpatialInteractionDevices@@@std@@QEAAXQEAUSpatia.c)
 *     _CxxThrowException_0 @ 0x1800E22F0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_SpatialInteractionDevices::SpatialInputButtonCaps_std::allocator_SpatialInteractionDevices::SpatialInputButtonCaps___::emplace_back_SpatialInteractionDevices::SpatialInputButtonCaps__::_1_::catch_99(
        __int64 a1,
        __int64 a2)
{
  std::allocator<SpatialInteractionDevices::SpatialInputButtonCaps>::deallocate(
    a1,
    *(_QWORD *)(a2 + 96),
    *(_QWORD *)(a2 + 112));
  throw;
}
