/*
 * XREFs of ?_Erase@?$_Tree@V?$_Tset_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@2@@Z @ 0x1800C67EC
 * Callers:
 *     _anonymous_namespace_::FramesReport::_FramesReport @ 0x18002282C (_anonymous_namespace_--FramesReport--_FramesReport.c)
 *     ?_Erase@?$_Tree@V?$_Tset_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@2@@Z @ 0x1800C67EC (-_Erase@-$_Tree@V-$_Tset_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x1800BE1E4 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?_Erase@?$_Tree@V?$_Tset_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@2@@Z @ 0x1800C67EC (-_Erase@-$_Tree@V-$_Tset_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U-.c)
 */

void __fastcall std::_Tree<std::_Tset_traits<std::wstring,std::less<std::wstring>,std::allocator<std::wstring>,0>>::_Erase(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v2; // rbx
  __int64 *i; // rdi
  unsigned __int64 v5; // rdx

  v2 = a2;
  for ( i = a2; !*((_BYTE *)i + 25); v2 = i )
  {
    std::_Tree<std::_Tset_traits<std::wstring,std::less<std::wstring>,std::allocator<std::wstring>,0>>::_Erase(a1, i[2]);
    v5 = v2[7];
    i = (__int64 *)*i;
    if ( v5 >= 8 )
      std::_Deallocate((char *)v2[4], v5 + 1, 2uLL);
    v2[6] = 0LL;
    v2[7] = 7LL;
    *((_WORD *)v2 + 16) = 0;
    std::_Deallocate((char *)v2, 1uLL, 0x40uLL);
  }
}
