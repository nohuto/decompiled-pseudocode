/*
 * XREFs of _std::vector_PointData3D_std::allocator_PointData3D___::emplace_back_PointData3D_const_&___ptr64__::_1_::catch$102 @ 0x1800E57F2
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@UPointData3D@@@std@@QEAAXQEAUPointData3D@@_K@Z @ 0x180040BE0 (-deallocate@-$allocator@UPointData3D@@@std@@QEAAXQEAUPointData3D@@_K@Z.c)
 *     _CxxThrowException_0 @ 0x1800E22F0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_PointData3D_std::allocator_PointData3D___::emplace_back_PointData3D_const_____ptr64__::_1_::catch_102(
        __int64 a1,
        __int64 a2)
{
  std::allocator<PointData3D>::deallocate(a1, *(_QWORD *)(a2 + 96), *(_QWORD *)(a2 + 112));
  throw;
}
