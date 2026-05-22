/*
 * XREFs of _std::_List_buy_std::pair_tagMsgRoutingInfo_const__tagInputRoutingInfo__std::allocator_std::pair_tagMsgRoutingInfo_const__tagInputRoutingInfo_____::_Buynode_tagMsgRoutingInfo_const_&___ptr64_tagInputRoutingInfo_const_&___ptr64__::_1_::catch$7 @ 0x1800E44F8
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@PEAX@std@@@std@@QEAAXQEAU?$_Tree_node@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@PEAX@2@_K@Z @ 0x18000897C (-deallocate@-$allocator@U-$_Tree_node@U-$pair@$$CBKV-$shared_ptr@VSpatialInteractionSourceDevice.c)
 *     _CxxThrowException_0 @ 0x1800E22F0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_List_buy_std::pair_tagMsgRoutingInfo_const__tagInputRoutingInfo__std::allocator_std::pair_tagMsgRoutingInfo_const__tagInputRoutingInfo_____::_Buynode_tagMsgRoutingInfo_const_____ptr64_tagInputRoutingInfo_const_____ptr64__::_1_::catch_7(
        __int64 a1,
        __int64 a2)
{
  std::allocator<std::_Tree_node<std::pair<unsigned long const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>>,void *>>::deallocate(
    a1,
    *(void **)(a2 + 64));
  throw;
}
