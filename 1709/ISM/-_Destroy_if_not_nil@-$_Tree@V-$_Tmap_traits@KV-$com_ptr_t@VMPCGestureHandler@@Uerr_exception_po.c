/*
 * XREFs of ?_Destroy_if_not_nil@?$_Tree@V?$_Tmap_traits@KV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@@Z @ 0x18005C4A4
 * Callers:
 *     ??$_Insert_at@AEAU?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@1@AEAU?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@1@1@Z @ 0x18005C8A8 (--$_Insert_at@AEAU-$pair@$$CBKV-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@.c)
 *     _std::_Tree_std::_Tmap_traits_unsigned_long_wil::com_ptr_t_MPCGestureHandler_wil::err_exception_policy__std::less_unsigned_long__std::allocator_std::pair_unsigned_long_const__wil::com_ptr_t_MPCGestureHandler_wil::err_exception_policy______0___::_Insert_hint_std::pair_unsigned_long_const__wil::com_ptr_t_MPCGestureHandler_wil::err_exception_policy____&___ptr64_std::_Tree_node_std::pair_unsigned_long_const__wil::com_ptr_t_MPCGestureHandler_wil::err_exception_policy____void_____ptr64______ptr64__::_1_::catch$117 @ 0x1800CF38A (_std--_Tree_std--_Tmap_traits_unsigned_long_wil--com_ptr_t_MPCGestureHandler_wil--err_exception_.c)
 *     _std::_Tree_std::_Tmap_traits_unsigned_long_wil::com_ptr_t_MPCGestureHandler_wil::err_exception_policy__std::less_unsigned_long__std::allocator_std::pair_unsigned_long_const__wil::com_ptr_t_MPCGestureHandler_wil::err_exception_policy______0___::_Insert_nohint_std::pair_unsigned_long_const__wil::com_ptr_t_MPCGestureHandler_wil::err_exception_policy____&___ptr64_std::_Tree_node_std::pair_unsigned_long_const__wil::com_ptr_t_MPCGestureHandler_wil::err_exception_policy____void_____ptr64______ptr64__::_1_::catch$49 @ 0x1800CF3ED (_std--_Tree_std--_Tmap_traits_unsigned_long_wil--com_ptr_t_MPCGestureHandler_wil--e_ea_1800CF3ED.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<unsigned long,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>>,0>>::_Destroy_if_not_nil(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = a2[5];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  operator delete(a2);
}
