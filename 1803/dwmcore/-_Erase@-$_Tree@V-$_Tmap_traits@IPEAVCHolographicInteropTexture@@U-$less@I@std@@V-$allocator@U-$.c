/*
 * XREFs of ?_Erase@?$_Tree@V?$_Tmap_traits@IPEAVCHolographicInteropTexture@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIPEAVCHolographicInteropTexture@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBIPEAVCHolographicInteropTexture@@@std@@PEAX@2@@Z @ 0x1801FCF6C
 * Callers:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@IPEAVCHolographicInteropTexture@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIPEAVCHolographicInteropTexture@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBIPEAVCHolographicInteropTexture@@@std@@PEAX@2@@Z @ 0x1801FCF6C (-_Erase@-$_Tree@V-$_Tmap_traits@IPEAVCHolographicInteropTexture@@U-$less@I@std@@V-$allocator@U-$.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@IPEAVCHolographicInteropTexture@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIPEAVCHolographicInteropTexture@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIPEAVCHolographicInteropTexture@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIPEAVCHolographicInteropTexture@@@std@@@std@@@std@@@2@0@Z @ 0x1801FD020 (-erase@-$_Tree@V-$_Tmap_traits@IPEAVCHolographicInteropTexture@@U-$less@I@std@@V-$allocator@U-$p.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@IPEAVCHolographicInteropTexture@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIPEAVCHolographicInteropTexture@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBIPEAVCHolographicInteropTexture@@@std@@PEAX@2@@Z @ 0x1801FCF6C (-_Erase@-$_Tree@V-$_Tmap_traits@IPEAVCHolographicInteropTexture@@U-$less@I@std@@V-$allocator@U-$.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<unsigned int,CHolographicInteropTexture *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,CHolographicInteropTexture *>>,0>>::_Erase(
        __int64 a1,
        char *a2)
{
  char *v2; // rbx
  char *i; // rdi

  v2 = a2;
  for ( i = a2; !i[25]; v2 = i )
  {
    std::_Tree<std::_Tmap_traits<unsigned int,CHolographicInteropTexture *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,CHolographicInteropTexture *>>,0>>::_Erase(
      a1,
      *((_QWORD *)i + 2));
    i = *(char **)i;
    std::_Deallocate(v2, 1uLL, 0x30uLL);
  }
}
