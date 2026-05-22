/*
 * XREFs of ??1?$map@KV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@2@@std@@QEAA@XZ @ 0x18004BBD4
 * Callers:
 *     _std::_Callback_once_std::tuple__lambda_43312c5cbdd7f3514316a63667026241__&&___ptr64_std::exception_ptr_&___ptr64__std::integer_sequence_unsigned___int64_0__1__::_1_::dtor$8 @ 0x1800E614A (_std--_Callback_once_std--tuple__lambda_43312c5cbdd7f3514316a63667026241__--___ptr6_ea_1800E614A.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@KV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$variant@K_NM@2@@std@@@2@@std@@@std@@@std@@@std@@@2@0@Z @ 0x18004C65C (-erase@-$_Tree@V-$_Tmap_traits@KV-$map@V-$basic_string@DU-$char_traits@D@std@@V-$al_ea_18004C65C.c)
 */

void __fastcall __1__map_KV__map_V__basic_string_DU__char_traits_D_std__V__allocator_D_2__std__V__variant_K_NM_2_U__less_V__basic_string_DU__char_traits_D_std__V__allocator_D_2__std___2_V__allocator_U__pair___CBV__basic_string_DU__char_traits_D_std__V__allocator_D_2__std__V__variant_K_NM_2__std___2__std__U__less_K_2_V__allocator_U__pair___CBKV__map_V__basic_string_DU__char_traits_D_std__V__allocator_D_2__std__V__variant_K_NM_2_U__less_V__basic_string_DU__char_traits_D_std__V__allocator_D_2__std___2_V__allocator_U__pair___CBV__basic_string_DU__char_traits_D_std__V__allocator_D_2__std__V__variant_K_NM_2__std___2__std___std___2__std__QEAA_XZ(
        void **a1)
{
  char v2; // [rsp+30h] [rbp+8h] BYREF

  std::_Tree<std::_Tmap_traits<unsigned long,std::map<std::string,std::variant<unsigned long,bool,float>>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::map<std::string,std::variant<unsigned long,bool,float>>>>,0>>::erase(
    a1,
    &v2,
    *(_QWORD *)*a1);
  operator delete(*a1);
}
