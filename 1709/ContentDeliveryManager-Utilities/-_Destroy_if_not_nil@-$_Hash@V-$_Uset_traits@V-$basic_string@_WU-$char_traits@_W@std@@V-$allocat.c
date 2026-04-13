/*
 * XREFs of ?_Destroy_if_not_nil@?$_Hash@V?$_Uset_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$_Uhash_compare@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@U?$hash@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@U?$equal_to@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@2@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@$0A@@std@@@std@@IEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1800792A0
 * Callers:
 *     _std::_Hash_std::_Uset_traits_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____std::_Uhash_compare_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____std::hash_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______std::equal_to_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t________std::allocator_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______0___::_Insert_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____const_&___ptr64_std::_List_unchecked_const_iterator_std::_List_val_std::_List_simple_types_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t________std::_Iterator_base0____::_1_::catch$1 @ 0x1800BAA00 (_std--_Hash_std--_Uset_traits_std--basic_string_wchar_t_std--char_traits_wchar_t__std--allocator.c)
 * Callees:
 *     ?erase@?$list@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V?$allocator@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@std@@@std@@@2@@Z @ 0x180078AB8 (-erase@-$list@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V-$allocator@V-$b.c)
 */

_QWORD *__fastcall std::_Hash<std::_Uset_traits<std::wstring,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::wstring>,0>>::_Destroy_if_not_nil(
        void **a1,
        void *a2)
{
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF

  return std::list<std::wstring>::erase(a1, &v3, a2);
}
