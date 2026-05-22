/*
 * XREFs of ?UnregisterControllerProcessor@ControllerNavigationManager@@QEAAJK@Z @ 0x18003C220
 * Callers:
 *     ??1ControllerProcessor@@MEAA@XZ @ 0x18003D2D8 (--1ControllerProcessor@@MEAA@XZ.c)
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@IUtagInputRoutingInfo@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000A618 (-_Init@-$_Hash@V-$_Umap_traits@IUtagInputRoutingInfo@@V-$_Uhash_compare@IU-$hash@I@std@@U-$equal.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@IUtagInputRoutingInfo@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@std@@@std@@@2@@Z @ 0x18000A6A8 (-erase@-$_Hash@V-$_Umap_traits@IUtagInputRoutingInfo@@V-$_Uhash_compare@IU-$hash@I@std@@U-$equal.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ControllerNavigationManager::UnregisterControllerProcessor(
        ControllerNavigationManager *this,
        int a2)
{
  _QWORD *v2; // rsi
  __int64 v3; // rcx
  unsigned __int64 i; // r8
  __int64 v5; // r11
  __int64 v6; // r8
  _QWORD *v7; // rbx
  _QWORD **v8; // rax
  _QWORD **v9; // r10
  _QWORD *v10; // rcx
  _QWORD *v11; // rdi
  _QWORD *v12; // rcx
  _QWORD *v13; // rcx
  _QWORD *v14; // rbx
  _QWORD *v15; // r8
  _QWORD *v17; // [rsp+40h] [rbp+8h] BYREF
  int v18; // [rsp+48h] [rbp+10h]

  v18 = a2;
  v2 = (_QWORD *)((char *)this + 24);
  v3 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v3 = 0x100000001B3LL * (*((unsigned __int8 *)&v18 + i) ^ (unsigned __int64)v3);
  v5 = 2 * (v3 & v2[6]);
  v6 = v2[3];
  v7 = *(_QWORD **)(v6 + 16 * (v3 & v2[6]));
  v8 = (_QWORD **)v2[1];
  v9 = (_QWORD **)v7;
  while ( 1 )
  {
    if ( v9 == v8 )
      v10 = (_QWORD *)v2[1];
    else
      v10 = **(_QWORD ***)(v6 + 8 * v5 + 8);
    if ( v7 == v10 )
      goto LABEL_18;
    if ( *((_DWORD *)v7 + 4) == a2 )
      break;
    v7 = (_QWORD *)*v7;
  }
  v11 = v7;
  while ( 1 )
  {
    v12 = v9 == v8 ? (_QWORD *)v2[1] : **(_QWORD ***)(v6 + 8 * v5 + 8);
    if ( v7 == v12 || a2 != *((_DWORD *)v7 + 4) )
      break;
    v7 = (_QWORD *)*v7;
  }
  if ( v11 == v7 )
  {
LABEL_18:
    v7 = (_QWORD *)v2[1];
    v11 = v7;
  }
  v17 = v11;
  v13 = *v8;
  if ( v11 == *v8 && v7 == v8 )
  {
    *v8 = v8;
    *(_QWORD *)(v2[1] + 8LL) = v2[1];
    v2[2] = 0LL;
    if ( v13 != (_QWORD *)v2[1] )
    {
      do
      {
        v14 = (_QWORD *)*v13;
        operator delete(v13);
        v13 = v14;
      }
      while ( v14 != (_QWORD *)v2[1] );
    }
    std::_Hash<std::_Umap_traits<unsigned int,tagInputRoutingInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,tagInputRoutingInfo>>,0>>::_Init(
      v2,
      8LL);
  }
  else
  {
    while ( v11 != v7 )
    {
      v15 = v11;
      v11 = (_QWORD *)*v11;
      std::_Hash<std::_Umap_traits<unsigned int,tagInputRoutingInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,tagInputRoutingInfo>>,0>>::erase(
        v2,
        &v17,
        v15);
    }
  }
  return 0LL;
}
