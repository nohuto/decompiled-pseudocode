/*
 * XREFs of ??1?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@QEAA@XZ @ 0x18003B768
 * Callers:
 *     __lambda_0d63f0eebaff590cd6794bb27eb1a224_::operator()_::_1_::dtor$53 @ 0x1800E4FE7 (__lambda_0d63f0eebaff590cd6794bb27eb1a224_--operator()_--_1_--dtor$53.c)
 *     _std::map_std::basic_string_char_std::char_traits_char__std::allocator_char____std::variant_unsigned_long_bool_float__std::less_std::basic_string_char_std::char_traits_char__std::allocator_char______std::allocator_std::pair_std::basic_string_char_std::char_traits_char__std::allocator_char____const__std::variant_unsigned_long_bool_float_______::map_std::basic_string_char_std::char_traits_char__std::allocator_char____std::variant_unsigned_long_bool_float__std::less_std::basic_string_char_std::char_traits_char__std::allocator_char______std::allocator_std::pair_std::basic_string_char_std::char_traits_char__std::allocator_char____const__std::variant_unsigned_long_bool_float________::_1_::dtor$0 @ 0x1800E57E6 (_std--map_std--basic_string_char_std--char_traits_char__std--allocator_char____std--variant_unsi.c)
 *     _std::_Callback_once_std::tuple__lambda_301fd7a8fc024bbcef569520ec2ad4e1__&&___ptr64_std::exception_ptr_&___ptr64__std::integer_sequence_unsigned___int64_0__1__::_1_::dtor$9 @ 0x1800E5CCE (_std--_Callback_once_std--tuple__lambda_301fd7a8fc024bbcef569520ec2ad4e1__--___ptr6_ea_1800E5CCE.c)
 *     _std::_Callback_once_std::tuple__lambda_286394bed54c76db5c0d94726973c3a4__&&___ptr64_std::exception_ptr_&___ptr64__std::integer_sequence_unsigned___int64_0__1__::_1_::dtor$7 @ 0x1800E5DEB (_std--_Callback_once_std--tuple__lambda_286394bed54c76db5c0d94726973c3a4__--___ptr64_std--except.c)
 *     _std::_Callback_once_std::tuple__lambda_5a74ae54013b7a0b63e4e3845ba7868b__&&___ptr64_std::exception_ptr_&___ptr64__std::integer_sequence_unsigned___int64_0__1__::_1_::dtor$12 @ 0x1800E5FA0 (_std--_Callback_once_std--tuple__lambda_5a74ae54013b7a0b63e4e3845ba7868b__--___ptr6_ea_1800E5FA0.c)
 *     _std::_Callback_once_std::tuple__lambda_172571034a44f8156ea06ee89e7e6c96__&&___ptr64_std::exception_ptr_&___ptr64__std::integer_sequence_unsigned___int64_0__1__::_1_::dtor$15 @ 0x1800E86ED (_std--_Callback_once_std--tuple__lambda_172571034a44f8156ea06ee89e7e6c96__--___ptr6_ea_1800E86ED.c)
 *     __lambda_0fe84b0df1de98c8718b27672fc0a862_::operator()_::_1_::dtor$9 @ 0x1800E8869 (__lambda_0fe84b0df1de98c8718b27672fc0a862_--operator()_--_1_--dtor$9.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@std@@@std@@@2@0@Z @ 0x180040C34 (-erase@-$_Tree@V-$_Tmap_traits@V-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@V-$.c)
 */

void __fastcall std::map<std::string,std::variant<unsigned long,bool,float>>::~map<std::string,std::variant<unsigned long,bool,float>>(
        void **a1)
{
  char v2; // [rsp+30h] [rbp+8h] BYREF

  std::_Tree<std::_Tmap_traits<std::string,std::variant<unsigned long,bool,float>,std::less<std::string>,std::allocator<std::pair<std::string const,std::variant<unsigned long,bool,float>>>,0>>::erase(
    a1,
    &v2,
    *(_QWORD *)*a1);
  operator delete(*a1);
}
