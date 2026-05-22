/*
 * XREFs of _std::_List_buy_std::pair_unsigned_long_const__DragNDropProcessorLegacy::PointerCache__std::allocator_std::pair_unsigned_long_const__DragNDropProcessorLegacy::PointerCache_____::_Buynode_unsigned_long_&___ptr64_DragNDropProcessorLegacy::PointerCache__::_1_::catch$10 @ 0x1800E6EE4
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@PEAX@std@@@std@@QEAAXQEAU?$_Tree_node@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@PEAX@2@_K@Z @ 0x18000897C (-deallocate@-$allocator@U-$_Tree_node@U-$pair@$$CBKV-$shared_ptr@VSpatialInteractionSourceDevice.c)
 *     _CxxThrowException_0 @ 0x1800E22F0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_List_buy_std::pair_unsigned_long_const__DragNDropProcessorLegacy::PointerCache__std::allocator_std::pair_unsigned_long_const__DragNDropProcessorLegacy::PointerCache_____::_Buynode_unsigned_long_____ptr64_DragNDropProcessorLegacy::PointerCache__::_1_::catch_10(
        __int64 a1,
        __int64 a2)
{
  std::allocator<std::_Tree_node<std::pair<unsigned long const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>>,void *>>::deallocate(
    a1,
    *(void **)(a2 + 64));
  throw;
}
