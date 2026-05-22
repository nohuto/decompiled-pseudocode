/*
 * XREFs of _std::_Tree_comp_alloc_std::_Tmap_traits_unsigned_int_MPCProcessor::InputData_std::less_unsigned_int__std::allocator_std::pair_unsigned_int_const__MPCProcessor::InputData____0___::_Buynode0_::_1_::catch$21 @ 0x1800E5D70
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@PEAX@std@@@std@@QEAAXQEAU?$_Tree_node@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@PEAX@2@_K@Z @ 0x18000897C (-deallocate@-$allocator@U-$_Tree_node@U-$pair@$$CBKV-$shared_ptr@VSpatialInteractionSourceDevice.c)
 *     _CxxThrowException_0 @ 0x1800E22F0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Tree_comp_alloc_std::_Tmap_traits_unsigned_int_MPCProcessor::InputData_std::less_unsigned_int__std::allocator_std::pair_unsigned_int_const__MPCProcessor::InputData____0___::_Buynode0_::_1_::catch_21(
        __int64 a1,
        __int64 a2)
{
  std::allocator<std::_Tree_node<std::pair<unsigned long const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>>,void *>>::deallocate(
    a1,
    *(void **)(a2 + 64));
  throw;
}
