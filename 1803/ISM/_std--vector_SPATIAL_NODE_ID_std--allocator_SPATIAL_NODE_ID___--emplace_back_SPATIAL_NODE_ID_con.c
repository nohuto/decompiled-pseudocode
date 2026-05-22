/*
 * XREFs of _std::vector_SPATIAL_NODE_ID_std::allocator_SPATIAL_NODE_ID___::emplace_back_SPATIAL_NODE_ID_const_&___ptr64__::_1_::catch$99 @ 0x1800E9C7C
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@UDeviceDisplayMapping@DWMInputRouter@@@std@@QEAAXQEAUDeviceDisplayMapping@DWMInputRouter@@_K@Z @ 0x1800816B0 (-deallocate@-$allocator@UDeviceDisplayMapping@DWMInputRouter@@@std@@QEAAXQEAUDeviceDisplayMappin.c)
 *     _CxxThrowException_0 @ 0x1800E22F0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_SPATIAL_NODE_ID_std::allocator_SPATIAL_NODE_ID___::emplace_back_SPATIAL_NODE_ID_const_____ptr64__::_1_::catch_99(
        __int64 a1,
        __int64 a2)
{
  std::allocator<DWMInputRouter::DeviceDisplayMapping>::deallocate(a1, *(_QWORD *)(a2 + 96), *(_QWORD *)(a2 + 112));
  throw;
}
