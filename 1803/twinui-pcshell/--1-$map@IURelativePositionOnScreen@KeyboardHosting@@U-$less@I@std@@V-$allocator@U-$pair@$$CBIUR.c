/*
 * XREFs of ??1?$map@IURelativePositionOnScreen@KeyboardHosting@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIURelativePositionOnScreen@KeyboardHosting@@@std@@@4@@std@@QEAA@XZ @ 0x1802476AC
 * Callers:
 *     _std::map_unsigned_int_unsigned_short_const_____ptr64_std::less_unsigned_int__std::allocator_std::pair_unsigned_int_const__unsigned_short_const_____ptr64_____::map_unsigned_int_unsigned_short_const_____ptr64_std::less_unsigned_int__std::allocator_std::pair_unsigned_int_const__unsigned_short_const_____ptr64______::_1_::dtor$0 @ 0x180247125 (_std--map_unsigned_int_unsigned_short_const_____ptr64_std--less_unsigned_int__std--allocator_std.c)
 *     _KeyboardHosting::TabTipAdapterPolicy::TabTipAdapterPolicy_::_1_::dtor$1 @ 0x180247565 (_KeyboardHosting--TabTipAdapterPolicy--TabTipAdapterPolicy_--_1_--dtor$1.c)
 *     _KeyboardHosting::TabTipAdapterPolicy::TabTipAdapterPolicy_::_1_::dtor$2 @ 0x180247575 (_KeyboardHosting--TabTipAdapterPolicy--TabTipAdapterPolicy_--_1_--dtor$2.c)
 *     _KeyboardHosting::TabTipAdapterPolicy::TabTipAdapterPolicy_::_1_::dtor$5 @ 0x1802475AB (_KeyboardHosting--TabTipAdapterPolicy--TabTipAdapterPolicy_--_1_--dtor$5.c)
 *     _KeyboardHosting::PositionAndSizeOptionsProvider::PositionAndSizeOptionsProvider_::_1_::dtor$5 @ 0x180251729 (_KeyboardHosting--PositionAndSizeOptionsProvider--PositionAndSizeOptionsProvider_--_1_--dtor$5.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@IPEBGU?$less@I@std@@V?$allocator@U?$pair@$$CBIPEBG@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIPEBG@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIPEBG@std@@@std@@@std@@@2@0@Z @ 0x18024FEE0 (-erase@-$_Tree@V-$_Tmap_traits@IPEBGU-$less@I@std@@V-$allocator@U-$pair@$$CBIPEBG@std@@@2@$0A@@s.c)
 */

void __fastcall std::map<unsigned int,KeyboardHosting::RelativePositionOnScreen>::~map<unsigned int,KeyboardHosting::RelativePositionOnScreen>(
        char **a1)
{
  char v2; // [rsp+30h] [rbp+8h] BYREF

  std::_Tree<std::_Tmap_traits<unsigned int,unsigned short const *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short const *>>,0>>::erase(
    a1,
    &v2,
    *(_QWORD *)*a1);
  std::_Deallocate(*a1, 1uLL, 0x30uLL);
}
