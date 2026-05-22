/*
 * XREFs of _std::vector_SpatialInteractionDevices::SpatialInputButtonCaps_std::allocator_SpatialInteractionDevices::SpatialInputButtonCaps___::emplace_back_SpatialInteractionDevices::SpatialInputButtonCaps__::_1_::catch$106 @ 0x1800CFFD8
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$_Wrap_alloc@V?$allocator@USpatialInputButtonCaps@SpatialInteractionDevices@@@std@@@std@@QEAAXPEAUSpatialInputButtonCaps@SpatialInteractionDevices@@_K@Z @ 0x18007AC7C (-deallocate@-$_Wrap_alloc@V-$allocator@USpatialInputButtonCaps@SpatialInteractionDevices@@@std@@.c)
 *     _CxxThrowException_0 @ 0x1800CB710 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_SpatialInteractionDevices::SpatialInputButtonCaps_std::allocator_SpatialInteractionDevices::SpatialInputButtonCaps___::emplace_back_SpatialInteractionDevices::SpatialInputButtonCaps__::_1_::catch_106(
        __int64 a1,
        __int64 a2)
{
  std::_Wrap_alloc<std::allocator<SpatialInteractionDevices::SpatialInputButtonCaps>>::deallocate(
    a1,
    *(_QWORD **)(a2 + 112),
    *(_QWORD *)(a2 + 96));
  throw;
}
