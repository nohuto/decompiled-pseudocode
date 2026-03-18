/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@PEAVCResource@@PEBGU?$less@PEAVCResource@@@std@@V?$allocator@U?$pair@QEAVCResource@@PEBG@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCResource@@PEBG@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCResource@@PEBG@std@@@std@@@std@@@2@0@Z @ 0x180157F00
 * Callers:
 *     ??1CAnimationLoggingManager@@UEAA@XZ @ 0x180156A64 (--1CAnimationLoggingManager@@UEAA@XZ.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@PEAVCResource@@PEBGU?$less@PEAVCResource@@@std@@V?$allocator@U?$pair@QEAVCResource@@PEBG@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEAVCResource@@PEBG@std@@PEAX@2@@Z @ 0x180007870 (-_Erase@-$_Tree@V-$_Tmap_traits@PEAVCResource@@PEBGU-$less@PEAVCResource@@@std@@V-$allocator@U-$.c)
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAVCResource@@PEBGU?$less@PEAVCResource@@@std@@V?$allocator@U?$pair@QEAVCResource@@PEBG@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCResource@@PEBG@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAVCResource@@PEBG@std@@@std@@@std@@@2@@Z @ 0x180157FC8 (-erase@-$_Tree@V-$_Tmap_traits@PEAVCResource@@PEBGU-$less@PEAVCResource@@@std@@V-$a_ea_180157FC8.c)
 */

__int64 **__fastcall std::_Tree<std::_Tmap_traits<CResource *,unsigned short const *,std::less<CResource *>,std::allocator<std::pair<CResource * const,unsigned short const *>>,0>>::erase(
        __int64 ***a1,
        __int64 **a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 **v6; // rdx
  __int64 *v7; // rbx
  __int64 **v9; // rax
  __int64 *v10; // r8
  __int64 *v11; // rax
  __int64 *i; // rax
  char v14; // [rsp+30h] [rbp+8h] BYREF

  v6 = *a1;
  v7 = a3;
  if ( a3 == **a1 && a4 == (__int64 *)v6 )
  {
    std::_Tree<std::_Tmap_traits<CResource *,unsigned short const *,std::less<CResource *>,std::allocator<std::pair<CResource * const,unsigned short const *>>,0>>::_Erase(
      (__int64)a1,
      v6[1]);
    (*a1)[1] = (__int64 *)*a1;
    **a1 = (__int64 *)*a1;
    (*a1)[2] = (__int64 *)*a1;
    v9 = *a1;
    a1[1] = 0LL;
    *a2 = *v9;
  }
  else
  {
    while ( v7 != a4 )
    {
      v10 = v7;
      if ( !*((_BYTE *)v7 + 25) )
      {
        v11 = (__int64 *)v7[2];
        if ( *((_BYTE *)v11 + 25) )
        {
          for ( i = (__int64 *)v7[1]; !*((_BYTE *)i + 25) && v7 == (__int64 *)i[2]; i = (__int64 *)i[1] )
            v7 = i;
          v7 = i;
        }
        else
        {
          do
          {
            v7 = v11;
            v11 = (__int64 *)*v11;
          }
          while ( !*((_BYTE *)v11 + 25) );
        }
      }
      std::_Tree<std::_Tmap_traits<CResource *,unsigned short const *,std::less<CResource *>,std::allocator<std::pair<CResource * const,unsigned short const *>>,0>>::erase(
        a1,
        &v14,
        v10);
    }
    *a2 = v7;
  }
  return a2;
}
