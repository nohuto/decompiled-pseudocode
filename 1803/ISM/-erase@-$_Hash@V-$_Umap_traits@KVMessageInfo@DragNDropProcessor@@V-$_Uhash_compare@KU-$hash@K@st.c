/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@KVMessageInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x180065674
 * Callers:
 *     ?OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorResponse@@@Z @ 0x180064530 (-OnInput@DragNDropProcessor@@UEAAJPEAUInputInfo@@PEAUInputContext@@PEAUContextualProcessorRespon.c)
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@K_KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000A408 (-_Init@-$_Hash@V-$_Umap_traits@K_KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@V-$all.c)
 *     ??1MessageInfo@DragNDropProcessor@@QEAA@XZ @ 0x1800638B8 (--1MessageInfo@DragNDropProcessor@@QEAA@XZ.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@KVMessageInfo@DragNDropProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKVMessageInfo@DragNDropProcessor@@@std@@@std@@@std@@@2@@Z @ 0x180065888 (-erase@-$_Hash@V-$_Umap_traits@KVMessageInfo@DragNDropProcessor@@V-$_Uhash_compare@_ea_180065888.c)
 *     ??3@YAXPEAX@Z @ 0x1800E1CE8 (--3@YAXPEAX@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::MessageInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>>,0>>::erase(
        _QWORD *a1,
        _DWORD *a2)
{
  __int64 v4; // rcx
  unsigned __int64 i; // r8
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // r10
  _QWORD *v9; // rbx
  __int64 v10; // rcx
  _QWORD **v11; // rdx
  _QWORD **v12; // r11
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rdi
  _QWORD *v16; // rcx
  _QWORD *v17; // rax
  __int64 j; // r14
  _QWORD *v19; // rsi
  _QWORD *v20; // rbx
  _QWORD *v21; // r8
  char v23; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 4; ++i )
    v4 = 0x100000001B3LL * (*((unsigned __int8 *)a2 + i) ^ (unsigned __int64)v4);
  v6 = v4 & a1[6];
  v7 = 2 * v6;
  v8 = a1[3];
  v9 = *(_QWORD **)(v8 + 16 * v6);
  v10 = 2 * v6;
  v11 = (_QWORD **)a1[1];
  v12 = (_QWORD **)v9;
  while ( 1 )
  {
    if ( v12 == v11 )
      v13 = (_QWORD *)a1[1];
    else
      v13 = **(_QWORD ***)(v8 + 8 * v10 + 8);
    if ( v9 == v13 )
      goto LABEL_18;
    if ( *((_DWORD *)v9 + 4) == *a2 )
      break;
    v9 = (_QWORD *)*v9;
  }
  v14 = v9;
  v15 = v9;
  while ( 1 )
  {
    v16 = v12 == v11 ? (_QWORD *)a1[1] : **(_QWORD ***)(v8 + 8 * v7 + 8);
    if ( v9 == v16 || *a2 != *((_DWORD *)v9 + 4) )
      break;
    v9 = (_QWORD *)*v9;
  }
  if ( v14 == v9 )
  {
LABEL_18:
    v15 = (_QWORD *)a1[1];
    v9 = v15;
  }
  v17 = v15;
  for ( j = 0LL; v17 != v9; v17 = (_QWORD *)*v17 )
    ++j;
  v19 = *v11;
  if ( v15 == *v11 && v9 == v11 )
  {
    *v11 = v11;
    *(_QWORD *)(a1[1] + 8LL) = a1[1];
    a1[2] = 0LL;
    if ( v19 != (_QWORD *)a1[1] )
    {
      do
      {
        v20 = (_QWORD *)*v19;
        DragNDropProcessor::MessageInfo::~MessageInfo((DragNDropProcessor::MessageInfo *)(v19 + 3));
        operator delete(v19);
        v19 = v20;
      }
      while ( v20 != (_QWORD *)a1[1] );
    }
    std::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>::_Init(
      a1,
      8LL);
  }
  else
  {
    while ( v15 != v9 )
    {
      v21 = v15;
      v15 = (_QWORD *)*v15;
      std::_Hash<std::_Umap_traits<unsigned long,DragNDropProcessor::MessageInfo,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>>,0>>::erase(
        a1,
        &v23,
        v21);
    }
  }
  return j;
}
