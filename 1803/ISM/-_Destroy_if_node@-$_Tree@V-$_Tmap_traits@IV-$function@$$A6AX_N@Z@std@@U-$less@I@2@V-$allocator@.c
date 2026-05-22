/*
 * XREFs of ?_Destroy_if_node@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@@Z @ 0x180008EA4
 * Callers:
 *     ??$_Insert_at@AEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@1@AEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@1@1@Z @ 0x180008EE8 (--$_Insert_at@AEAU-$pair@$$CBIV-$function@$$A6AX_N@Z@std@@@std@@PEAU-$_Tree_node@U-$pair@$$CBIV-.c)
 *     _std::_Tree_std::_Tmap_traits_unsigned_int_std::function_void___cdecl(bool)__std::less_unsigned_int__std::allocator_std::pair_unsigned_int_const__std::function_void___cdecl(bool)______0___::_Insert_hint_std::pair_unsigned_int_const__std::function_void___cdecl(bool)____&___ptr64_std::_Tree_node_std::pair_unsigned_int_const__std::function_void___cdecl(bool)____void_____ptr64______ptr64__::_1_::catch$123 @ 0x1800E37DC (_std--_Tree_std--_Tmap_traits_unsigned_int_std--function_void___cdecl(bool)__std--less_unsigned_.c)
 *     _std::_Tree_std::_Tmap_traits_unsigned_int_std::function_void___cdecl(bool)__std::less_unsigned_int__std::allocator_std::pair_unsigned_int_const__std::function_void___cdecl(bool)______0___::_Insert_nohint_std::pair_unsigned_int_const__std::function_void___cdecl(bool)____&___ptr64_std::_Tree_node_std::pair_unsigned_int_const__std::function_void___cdecl(bool)____void_____ptr64______ptr64__::_1_::catch$60 @ 0x1800E381F (_std--_Tree_std--_Tmap_traits_unsigned_int_std--function_void___cdecl(bool)__std--l_ea_1800E381F.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Destroy_if_node(
        __int64 a1,
        _QWORD *a2)
{
  _QWORD *v2; // rdi
  void *v3; // rbx
  _QWORD *v4; // rcx

  v2 = a2 + 5;
  v3 = a2;
  v4 = (_QWORD *)a2[12];
  if ( v4 )
  {
    LOBYTE(a2) = v4 != v2;
    (*(void (__fastcall **)(_QWORD *, _QWORD *))(*v4 + 32LL))(v4, a2);
    v2[7] = 0LL;
  }
  operator delete(v3);
}
