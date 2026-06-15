/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@KUAPPLICATION_REF_DATA@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@@std@@@2@0@Z @ 0x18009DC20
 * Callers:
 *     ??1CPowerReferenceManager@@QEAA@XZ @ 0x180060F74 (--1CPowerReferenceManager@@QEAA@XZ.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KUAPPLICATION_REF_DATA@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@PEAX@2@@Z @ 0x18005C510 (-_Erase@-$_Tree@V-$_Tmap_traits@KUAPPLICATION_REF_DATA@@U-$less@K@std@@V-$allocator@U-$pair@$$CB.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@KUAPPLICATION_REF_DATA@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAPPLICATION_REF_DATA@@@std@@@std@@@std@@@2@@Z @ 0x18009DCF0 (-erase@-$_Tree@V-$_Tmap_traits@KUAPPLICATION_REF_DATA@@U-$less@K@std@@V-$allocator@_ea_18009DCF0.c)
 */

// Hidden C++ exception states: #wind=1
__int64 **__fastcall std::_Tree<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>::erase(
        __int64 ***a1,
        __int64 **a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 *v5; // rbx
  __int64 **v8; // rdx
  __int64 *v9; // r8
  __int64 *v10; // rax
  __int64 *i; // rax
  char v13; // [rsp+40h] [rbp+8h] BYREF

  v5 = a3;
  v8 = *a1;
  if ( a3 == **a1 && a4 == (__int64 *)v8 )
  {
    std::_Tree<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>::_Erase(
      (__int64)a1,
      v8[1]);
    (*a1)[1] = (__int64 *)*a1;
    **a1 = (__int64 *)*a1;
    (*a1)[2] = (__int64 *)*a1;
    a1[1] = 0LL;
    *a2 = **a1;
  }
  else
  {
    while ( v5 != a4 )
    {
      v9 = v5;
      if ( !*((_BYTE *)v5 + 25) )
      {
        v10 = (__int64 *)v5[2];
        if ( *((_BYTE *)v10 + 25) )
        {
          for ( i = (__int64 *)v5[1]; !*((_BYTE *)i + 25) && v5 == (__int64 *)i[2]; i = (__int64 *)i[1] )
            v5 = i;
          v5 = i;
        }
        else
        {
          do
          {
            v5 = v10;
            v10 = (__int64 *)*v10;
          }
          while ( !*((_BYTE *)v10 + 25) );
        }
      }
      std::_Tree<std::_Tmap_traits<unsigned long,APPLICATION_REF_DATA,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,APPLICATION_REF_DATA>>,0>>::erase(
        a1,
        &v13,
        v9);
    }
    *a2 = v5;
  }
  return a2;
}
