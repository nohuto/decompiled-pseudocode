/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@KU_GUID@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKU_GUID@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKU_GUID@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKU_GUID@@@std@@@std@@@std@@@2@0@Z @ 0x18004C550
 * Callers:
 *     ?erase@?$_Tree@V?$_Tmap_traits@KU_GUID@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKU_GUID@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x18004C184 (-erase@-$_Tree@V-$_Tmap_traits@KU_GUID@@U-$less@K@std@@V-$allocator@U-$pair@$$CBKU_GUID@@@std@@@.c)
 *     ??1SpatialGraphDriverClient@Holographic@Internal@Windows@@EEAA@XZ @ 0x1800C223C (--1SpatialGraphDriverClient@Holographic@Internal@Windows@@EEAA@XZ.c)
 *     ?PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAAJXZ @ 0x1800C2EFC (-PropertyUpdatedListenerThreadProcV2@SpatialGraphDriverClient@Holographic@Internal@Windows@@AEAA.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@std@@@std@@@2@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@std@@@std@@@2@@Z @ 0x180046E00 (-erase@-$_Tree@V-$_Tmap_traits@KUAugmentedInputCacheState@@U-$less@K@std@@V-$allocator@U-$pair@$.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KUAugmentedInputCacheState@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@@3@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKUAugmentedInputCacheState@@@std@@PEAX@2@@Z @ 0x1800472C4 (-_Erase@-$_Tree@V-$_Tmap_traits@KUAugmentedInputCacheState@@U-$less@K@std@@V-$allocator@U-$pair@.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 **__fastcall std::_Tree<std::_Tmap_traits<unsigned long,_GUID,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,_GUID>>,0>>::erase(
        __int64 **a1,
        __int64 **a2,
        __int64 *a3,
        __int64 *a4)
{
  __int64 *v5; // rbx
  __int64 *v8; // rax
  void **v9; // rdi
  void **v10; // rbx
  __int64 *v11; // r8
  __int64 **v12; // rax
  __int64 *j; // rcx
  __int64 *i; // rax
  __int64 *v16; // [rsp+40h] [rbp+8h] BYREF

  v5 = a3;
  v8 = *a1;
  if ( a3 == (__int64 *)**a1 && a4 == v8 )
  {
    v9 = (void **)v8[1];
    v10 = v9;
    if ( !*((_BYTE *)v9 + 25) )
    {
      do
      {
        std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::_Erase(
          (__int64)a1,
          v10[2]);
        v10 = (void **)*v10;
        operator delete(v9);
        v9 = v10;
      }
      while ( !*((_BYTE *)v10 + 25) );
      v8 = *a1;
    }
    v8[1] = (__int64)v8;
    **a1 = (__int64)*a1;
    (*a1)[2] = (__int64)*a1;
    a1[1] = 0LL;
    *a2 = (__int64 *)**a1;
  }
  else
  {
    while ( v5 != a4 )
    {
      v11 = v5;
      if ( !*((_BYTE *)v5 + 25) )
      {
        v12 = (__int64 **)v5[2];
        if ( *((_BYTE *)v12 + 25) )
        {
          for ( i = (__int64 *)v5[1]; !*((_BYTE *)i + 25) && v5 == (__int64 *)i[2]; i = (__int64 *)i[1] )
            v5 = i;
          v5 = i;
        }
        else
        {
          v5 = (__int64 *)v5[2];
          for ( j = *v12; !*((_BYTE *)j + 25); j = (__int64 *)*j )
            v5 = j;
        }
      }
      std::_Tree<std::_Tmap_traits<unsigned long,AugmentedInputCacheState,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,AugmentedInputCacheState>>,0>>::erase(
        a1,
        &v16,
        v11);
    }
    *a2 = v5;
  }
  return a2;
}
