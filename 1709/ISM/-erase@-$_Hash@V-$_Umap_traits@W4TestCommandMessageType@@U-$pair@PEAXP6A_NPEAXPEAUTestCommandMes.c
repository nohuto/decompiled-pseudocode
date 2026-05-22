/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@V?$_Uhash_compare@W4TestCommandMessageType@@U?$hash@W4TestCommandMessageType@@@std@@U?$equal_to@W4TestCommandMessageType@@@3@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBW4TestCommandMessageType@@@Z @ 0x18000A248
 * Callers:
 *     ??1CommandRegistrationToken@TestCommandHost@@QEAA@XZ @ 0x180009B84 (--1CommandRegistrationToken@TestCommandHost@@QEAA@XZ.c)
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@IUtagInputRoutingInfo@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@3@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000A618 (-_Init@-$_Hash@V-$_Umap_traits@IUtagInputRoutingInfo@@V-$_Uhash_compare@IU-$hash@I@std@@U-$equal.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@IUtagInputRoutingInfo@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@3@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@std@@@std@@@2@@Z @ 0x18000A6A8 (-erase@-$_Hash@V-$_Umap_traits@IUtagInputRoutingInfo@@V-$_Uhash_compare@IU-$hash@I@std@@U-$equal.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Hash<std::_Umap_traits<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>,std::_Uhash_compare<enum TestCommandMessageType,std::hash<enum TestCommandMessageType>,std::equal_to<enum TestCommandMessageType>>,std::allocator<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>,0>>::erase(
        _QWORD *a1,
        _DWORD *a2)
{
  __int64 v3; // rcx
  unsigned __int64 i; // r8
  __int64 v5; // rbp
  __int64 v6; // r9
  _QWORD *v7; // rbx
  _QWORD **v8; // rax
  _QWORD **v9; // r11
  _QWORD *v10; // rcx
  _QWORD *v11; // rdi
  _QWORD *v12; // rcx
  _QWORD *v13; // rcx
  __int64 j; // rbp
  _QWORD *v15; // rcx
  _QWORD *v16; // rbx
  _QWORD *v17; // r8
  char v19; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v3 = 0x100000001B3LL * (*((unsigned __int8 *)a2 + i) ^ (unsigned __int64)v3);
  v5 = 2 * (v3 & a1[6]);
  v6 = a1[3];
  v7 = *(_QWORD **)(v6 + 16 * (v3 & a1[6]));
  v8 = (_QWORD **)a1[1];
  v9 = (_QWORD **)v7;
  while ( 1 )
  {
    if ( v9 == v8 )
      v10 = (_QWORD *)a1[1];
    else
      v10 = **(_QWORD ***)(v6 + 8 * v5 + 8);
    if ( v7 == v10 )
      goto LABEL_18;
    if ( *((_DWORD *)v7 + 4) == *a2 )
      break;
    v7 = (_QWORD *)*v7;
  }
  v11 = v7;
  while ( 1 )
  {
    v12 = v9 == v8 ? (_QWORD *)a1[1] : **(_QWORD ***)(v6 + 8 * v5 + 8);
    if ( v7 == v12 || *a2 != *((_DWORD *)v7 + 4) )
      break;
    v7 = (_QWORD *)*v7;
  }
  if ( v11 == v7 )
  {
LABEL_18:
    v7 = (_QWORD *)a1[1];
    v11 = v7;
  }
  v13 = v11;
  for ( j = 0LL; v13 != v7; v13 = (_QWORD *)*v13 )
    ++j;
  v15 = *v8;
  if ( v11 == *v8 && v7 == v8 )
  {
    *v8 = v8;
    *(_QWORD *)(a1[1] + 8LL) = a1[1];
    a1[2] = 0LL;
    if ( v15 != (_QWORD *)a1[1] )
    {
      do
      {
        v16 = (_QWORD *)*v15;
        operator delete(v15);
        v15 = v16;
      }
      while ( v16 != (_QWORD *)a1[1] );
    }
    std::_Hash<std::_Umap_traits<unsigned int,tagInputRoutingInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,tagInputRoutingInfo>>,0>>::_Init(
      a1,
      8LL);
  }
  else
  {
    while ( v11 != v7 )
    {
      v17 = v11;
      v11 = (_QWORD *)*v11;
      std::_Hash<std::_Umap_traits<unsigned int,tagInputRoutingInfo,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,tagInputRoutingInfo>>,0>>::erase(
        a1,
        &v19,
        v17);
    }
  }
  return j;
}
