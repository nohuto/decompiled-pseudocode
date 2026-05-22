/*
 * XREFs of ??1?$map@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@@std@@QEAA@XZ @ 0x1800079E4
 * Callers:
 *     _std::_Callback_once_std::tuple__lambda_4bfd0116db80ce4255855ce8af72e9c8__&&___ptr64_std::exception_ptr_&___ptr64__std::integer_sequence_unsigned___int64_0__1__::_1_::dtor$10 @ 0x1800CC888 (_std--_Callback_once_std--tuple__lambda_4bfd0116db80ce4255855ce8af72e9c8__--___ptr6_ea_1800CC888.c)
 *     _std::_Callback_once_std::tuple__lambda_4bfd0116db80ce4255855ce8af72e9c8__&&___ptr64_std::exception_ptr_&___ptr64__std::integer_sequence_unsigned___int64_0__1__::_1_::dtor$11 @ 0x1800CC898 (_std--_Callback_once_std--tuple__lambda_4bfd0116db80ce4255855ce8af72e9c8__--___ptr6_ea_1800CC898.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@2@0@Z @ 0x180007F98 (-erase@-$_Tree@V-$_Tmap_traits@IV-$function@$$A6AX_N@Z@std@@U-$less@I@2@V-$allocato_ea_180007F98.c)
 */

void __fastcall std::map<unsigned int,std::function<void (bool)>>::~map<unsigned int,std::function<void (bool)>>(
        void **a1)
{
  char v2; // [rsp+30h] [rbp+8h] BYREF

  std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::erase(
    a1,
    &v2,
    *(_QWORD *)*a1,
    *a1);
  operator delete(*a1);
}
