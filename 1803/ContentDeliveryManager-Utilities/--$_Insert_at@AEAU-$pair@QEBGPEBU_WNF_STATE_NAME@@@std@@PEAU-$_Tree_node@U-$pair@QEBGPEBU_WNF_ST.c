/*
 * XREFs of ??$_Insert_at@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@1@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@1@1@Z @ 0x180077194
 * Callers:
 *     ??$_Insert_nohint@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@1@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@1@@Z @ 0x180076CB4 (--$_Insert_nohint@AEAU-$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU-$_Tree_node@U-$pair@QEBGPEBU_WN.c)
 *     ??$_Insert_hint@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@1@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@1@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@1@@Z @ 0x180076DFC (--$_Insert_hint@AEAU-$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU-$_Tree_node@U-$pair@QEBGPEBU_WNF_.c)
 * Callees:
 *     ?_Destroy_if_not_nil@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@@Z @ 0x180036DE0 (-_Destroy_if_not_nil@-$_Tree@V-$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFra.c)
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x1800A4638 (-_Xlength_error@std@@YAXPEBD@Z.c)
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_at<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
        _QWORD *a1,
        _QWORD *a2,
        char a3,
        _QWORD *a4,
        __int64 a5,
        _QWORD *a6)
{
  unsigned __int64 v6; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  _QWORD *v11; // rdx
  _QWORD *v12; // r9
  __int64 v13; // rax
  _QWORD *v14; // r11
  __int64 *v15; // rbx
  __int64 v16; // rcx
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // rcx
  _QWORD *v20; // r9
  __int64 v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rcx
  __int64 v24; // rax
  _QWORD *v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  _QWORD *result; // rax

  v6 = a1[1];
  if ( v6 >= 0x555555555555554LL )
  {
    std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Destroy_if_not_nil(
      0x555555555555554LL,
      a6);
    std::_Xlength_error("map/set<T> too long");
  }
  a1[1] = v6 + 1;
  a6[1] = a4;
  if ( a4 == (_QWORD *)*a1 )
  {
    *(_QWORD *)(*a1 + 8LL) = a6;
    *(_QWORD *)*a1 = a6;
    v9 = *a1;
LABEL_8:
    *(_QWORD *)(v9 + 16) = a6;
    goto LABEL_9;
  }
  if ( a3 )
  {
    *a4 = a6;
    if ( a4 == *(_QWORD **)*a1 )
      *(_QWORD *)*a1 = a6;
    goto LABEL_9;
  }
  a4[2] = a6;
  v9 = *a1;
  if ( a4 == *(_QWORD **)(*a1 + 16LL) )
    goto LABEL_8;
LABEL_9:
  v10 = a6[1];
  v11 = a6;
  while ( !*(_BYTE *)(v10 + 24) )
  {
    v12 = v11 + 1;
    v13 = v11[1];
    v14 = (_QWORD *)(v13 + 8);
    v15 = *(__int64 **)(v13 + 8);
    v16 = *v15;
    if ( v13 == *v15 )
    {
      v16 = v15[2];
      if ( !*(_BYTE *)(v16 + 24) )
        goto LABEL_31;
      v17 = *(_QWORD **)(v13 + 16);
      if ( v11 == v17 )
      {
        v11 = (_QWORD *)v11[1];
        *(_QWORD *)(v13 + 16) = *v17;
        if ( !*(_BYTE *)(*v17 + 25LL) )
          *(_QWORD *)(*v17 + 8LL) = v13;
        v17[1] = *v14;
        if ( v13 == *(_QWORD *)(*a1 + 8LL) )
        {
          *(_QWORD *)(*a1 + 8LL) = v17;
        }
        else
        {
          v18 = (_QWORD *)*v14;
          if ( v11 == *(_QWORD **)*v14 )
            *v18 = v17;
          else
            v18[2] = v17;
        }
        *v17 = v11;
        v12 = v14;
        *v14 = v17;
      }
      else
      {
        v17 = (_QWORD *)v11[1];
      }
      *((_BYTE *)v17 + 24) = 1;
      *(_BYTE *)(*(_QWORD *)(*v12 + 8LL) + 24LL) = 0;
      v19 = *(_QWORD **)(*v12 + 8LL);
      v20 = (_QWORD *)*v19;
      *v19 = *(_QWORD *)(*v19 + 16LL);
      v21 = v20[2];
      if ( !*(_BYTE *)(v21 + 25) )
        *(_QWORD *)(v21 + 8) = v19;
      v20[1] = v19[1];
      if ( v19 == *(_QWORD **)(*a1 + 8LL) )
      {
        *(_QWORD *)(*a1 + 8LL) = v20;
      }
      else
      {
        v22 = (_QWORD *)v19[1];
        if ( v19 == (_QWORD *)v22[2] )
          v22[2] = v20;
        else
          *v22 = v20;
      }
      v20[2] = v19;
    }
    else
    {
      if ( !*(_BYTE *)(v16 + 24) )
      {
LABEL_31:
        *(_BYTE *)(v13 + 24) = 1;
        *(_BYTE *)(v16 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*v12 + 8LL) + 24LL) = 0;
        v11 = *(_QWORD **)(*v12 + 8LL);
        goto LABEL_51;
      }
      v23 = *(_QWORD **)v13;
      if ( v11 == *(_QWORD **)v13 )
      {
        v11 = (_QWORD *)v11[1];
        *(_QWORD *)v13 = v23[2];
        v24 = v23[2];
        if ( !*(_BYTE *)(v24 + 25) )
          *(_QWORD *)(v24 + 8) = v11;
        v23[1] = *v14;
        if ( v11 == *(_QWORD **)(*a1 + 8LL) )
        {
          *(_QWORD *)(*a1 + 8LL) = v23;
        }
        else
        {
          v25 = (_QWORD *)*v14;
          if ( v11 == *(_QWORD **)(*v14 + 16LL) )
            v25[2] = v23;
          else
            *v25 = v23;
        }
        v23[2] = v11;
        v12 = v14;
        *v14 = v23;
      }
      else
      {
        v23 = (_QWORD *)v11[1];
      }
      *((_BYTE *)v23 + 24) = 1;
      *(_BYTE *)(*(_QWORD *)(*v12 + 8LL) + 24LL) = 0;
      v19 = *(_QWORD **)(*v12 + 8LL);
      v20 = (_QWORD *)v19[2];
      v19[2] = *v20;
      if ( !*(_BYTE *)(*v20 + 25LL) )
        *(_QWORD *)(*v20 + 8LL) = v19;
      v20[1] = v19[1];
      if ( v19 == *(_QWORD **)(*a1 + 8LL) )
      {
        *(_QWORD *)(*a1 + 8LL) = v20;
      }
      else
      {
        v26 = (_QWORD *)v19[1];
        if ( v19 == (_QWORD *)*v26 )
          *v26 = v20;
        else
          v26[2] = v20;
      }
      *v20 = v19;
    }
    v19[1] = v20;
LABEL_51:
    v10 = v11[1];
  }
  v27 = *a1;
  *a2 = a6;
  v28 = *(_QWORD *)(v27 + 8);
  result = a2;
  *(_BYTE *)(v28 + 24) = 1;
  return result;
}
