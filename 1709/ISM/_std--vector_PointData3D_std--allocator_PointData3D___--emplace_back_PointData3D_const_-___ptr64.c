/*
 * XREFs of _std::vector_PointData3D_std::allocator_PointData3D___::emplace_back_PointData3D_const_&___ptr64__::_1_::catch$106 @ 0x1800CE677
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$_Wrap_alloc@V?$allocator@UPointData3D@@@std@@@std@@QEAAXPEAUPointData3D@@_K@Z @ 0x180039DD4 (-deallocate@-$_Wrap_alloc@V-$allocator@UPointData3D@@@std@@@std@@QEAAXPEAUPointData3D@@_K@Z.c)
 *     _CxxThrowException_0 @ 0x1800CB710 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_PointData3D_std::allocator_PointData3D___::emplace_back_PointData3D_const_____ptr64__::_1_::catch_106(
        __int64 a1,
        __int64 a2)
{
  std::_Wrap_alloc<std::allocator<PointData3D>>::deallocate(a1, *(_QWORD **)(a2 + 112), *(_QWORD *)(a2 + 96));
  throw;
}
