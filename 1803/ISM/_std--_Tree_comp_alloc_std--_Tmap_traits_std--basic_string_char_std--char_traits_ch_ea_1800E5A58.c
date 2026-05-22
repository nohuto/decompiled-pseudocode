/*
 * XREFs of _std::_Tree_comp_alloc_std::_Tmap_traits_std::basic_string_char_std::char_traits_char__std::allocator_char____std::variant_unsigned_long_bool_float__std::less_std::basic_string_char_std::char_traits_char__std::allocator_char______std::allocator_std::pair_std::basic_string_char_std::char_traits_char__std::allocator_char____const__std::variant_unsigned_long_bool_float______0___::_Buynode_std::piecewise_construct_t_const_&___ptr64_std::tuple_std::basic_string_char_std::char_traits_char__std::allocator_char____const_&___ptr64__std::tuple_____::_1_::catch$18 @ 0x1800E5A58
 * Callers:
 *     <none>
 * Callees:
 *     ?deallocate@?$allocator@U?$_Tree_node@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@PEAX@std@@@std@@QEAAXQEAU?$_Tree_node@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@PEAX@2@_K@Z @ 0x18000897C (-deallocate@-$allocator@U-$_Tree_node@U-$pair@$$CBKV-$shared_ptr@VSpatialInteractionSourceDevice.c)
 *     _CxxThrowException_0 @ 0x1800E22F0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Tree_comp_alloc_std::_Tmap_traits_std::basic_string_char_std::char_traits_char__std::allocator_char____std::variant_unsigned_long_bool_float__std::less_std::basic_string_char_std::char_traits_char__std::allocator_char______std::allocator_std::pair_std::basic_string_char_std::char_traits_char__std::allocator_char____const__std::variant_unsigned_long_bool_float______0___::_Buynode_std::piecewise_construct_t_const_____ptr64_std::tuple_std::basic_string_char_std::char_traits_char__std::allocator_char____const_____ptr64__std::tuple_____::_1_::catch_18(
        __int64 a1,
        __int64 a2)
{
  std::allocator<std::_Tree_node<std::pair<unsigned long const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>>,void *>>::deallocate(
    a1,
    *(void **)(a2 + 104));
  throw;
}
