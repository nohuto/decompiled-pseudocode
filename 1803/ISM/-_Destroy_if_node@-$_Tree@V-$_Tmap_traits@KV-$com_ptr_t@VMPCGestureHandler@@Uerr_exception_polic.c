/*
 * XREFs of ?_Destroy_if_node@?$_Tree@V?$_Tmap_traits@KV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@@Z @ 0x180056094
 * Callers:
 *     ??$_Insert_at@AEAU?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@4@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@PEAX@1@AEAU?$pair@$$CBKV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@1@1@Z @ 0x180056494 (--$_Insert_at@AEAU-$pair@$$CBKV-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@.c)
 *     _std::_Tree_std::_Tmap_traits_unsigned_long_wil::com_ptr_t_MPCGestureHandler_wil::err_exception_policy__std::less_unsigned_long__std::allocator_std::pair_unsigned_long_const__wil::com_ptr_t_MPCGestureHandler_wil::err_exception_policy______0___::_Insert_hint_std::pair_unsigned_long_const__wil::com_ptr_t_MPCGestureHandler_wil::err_exception_policy____&___ptr64_std::_Tree_node_std::pair_unsigned_long_const__wil::com_ptr_t_MPCGestureHandler_wil::err_exception_policy____void_____ptr64______ptr64__::_1_::catch$123 @ 0x1800E6809 (_std--_Tree_std--_Tmap_traits_unsigned_long_wil--com_ptr_t_MPCGestureHandler_wil--err_exception_.c)
 *     _std::_Tree_std::_Tmap_traits_unsigned_long_wil::com_ptr_t_MPCGestureHandler_wil::err_exception_policy__std::less_unsigned_long__std::allocator_std::pair_unsigned_long_const__wil::com_ptr_t_MPCGestureHandler_wil::err_exception_policy______0___::_Insert_nohint_std::pair_unsigned_long_const__wil::com_ptr_t_MPCGestureHandler_wil::err_exception_policy____&___ptr64_std::_Tree_node_std::pair_unsigned_long_const__wil::com_ptr_t_MPCGestureHandler_wil::err_exception_policy____void_____ptr64______ptr64__::_1_::catch$50 @ 0x1800E684F (_std--_Tree_std--_Tmap_traits_unsigned_long_wil--com_ptr_t_MPCGestureHandler_wil--e_ea_1800E684F.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<unsigned long,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>>,0>>::_Destroy_if_node(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // rcx

  v2 = a2[5];
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  operator delete(a2);
}
