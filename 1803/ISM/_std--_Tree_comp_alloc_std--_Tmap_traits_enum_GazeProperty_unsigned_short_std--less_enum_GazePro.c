/*
 * XREFs of _std::_Tree_comp_alloc_std::_Tmap_traits_enum_GazeProperty_unsigned_short_std::less_enum_GazeProperty__std::allocator_std::pair_enum_GazeProperty_const__unsigned_short____0___::_Buyheadnode_::_1_::catch$9 @ 0x1800E92FD
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@PEAX@std@@@std@@QEAAXQEAU?$_Tree_node@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@PEAX@2@_K@Z @ 0x18000897C (-deallocate@-$allocator@U-$_Tree_node@U-$pair@$$CBKV-$shared_ptr@VSpatialInteractionSourceDevice.c)
 *     _CxxThrowException_0 @ 0x1800E22F0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Tree_comp_alloc_std::_Tmap_traits_enum_GazeProperty_unsigned_short_std::less_enum_GazeProperty__std::allocator_std::pair_enum_GazeProperty_const__unsigned_short____0___::_Buyheadnode_::_1_::catch_9(
        __int64 a1,
        __int64 a2)
{
  std::allocator<std::_Tree_node<std::pair<unsigned long const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>>,void *>>::deallocate(
    a1,
    *(void **)(a2 + 64));
  throw;
}
