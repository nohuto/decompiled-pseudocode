/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@1@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@1@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@1@@Z @ 0x180076DFC
 * Callers:
 *     ?GetWellKnownWnfStateByName@Triggers@CreativeFramework@@YAJPEBGPEAPEBU_WNF_STATE_NAME@@@Z @ 0x1800767E8 (-GetWellKnownWnfStateByName@Triggers@CreativeFramework@@YAJPEBGPEAPEBU_WNF_STATE_NAME@@@Z.c)
 * Callees:
 *     ??F?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@std@@@std@@@std@@QEAAAEAV01@XZ @ 0x180048640 (--F-$_Tree_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$basic_string@_WU-$ch.c)
 *     ??$_Insert_nohint@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@1@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@1@@Z @ 0x180076CB4 (--$_Insert_nohint@AEAU-$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU-$_Tree_node@U-$pair@QEBGPEBU_WN.c)
 *     ??$_Insert_at@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEBGPEBU_WNF_STATE_NAME@@Uless@Triggers@CreativeFramework@@V?$allocator@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAX@1@AEAU?$pair@QEBGPEBU_WNF_STATE_NAME@@@1@1@Z @ 0x180077194 (--$_Insert_at@AEAU-$pair@QEBGPEBU_WNF_STATE_NAME@@@std@@PEAU-$_Tree_node@U-$pair@QEBGPEBU_WNF_ST.c)
 */

// Hidden C++ exception states: #try_helpers=1
_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_hint<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
        __int64 **a1,
        _QWORD *a2,
        __int64 a3,
        LPCWCH *a4,
        void *a5)
{
  __int64 v6; // rbx
  __int64 *v9; // rcx
  __int64 v11; // r8
  __int64 **v12; // rax
  int v13; // r8d
  __int64 v14; // r9
  __int64 *v15; // rax
  __int64 i; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  char v19[24]; // [rsp+38h] [rbp-30h] BYREF
  __int64 *v20; // [rsp+70h] [rbp+8h] BYREF

  v6 = a3;
  v20 = 0LL;
  v9 = *a1;
  if ( !a1[1] )
  {
    LOBYTE(a3) = 1;
    std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_at<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
      (_DWORD)a1,
      (_DWORD)a2,
      a3,
      (_DWORD)v9);
    return a2;
  }
  if ( a3 == *v9 )
  {
    if ( CompareStringOrdinal(*a4, -1, *(LPCWCH *)(a3 + 32), -1, 1) == 1 )
    {
      LOBYTE(v11) = 1;
      std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_at<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
        (_DWORD)a1,
        (_DWORD)a2,
        v11,
        v6);
      return a2;
    }
    goto LABEL_33;
  }
  if ( (__int64 *)a3 == v9 )
  {
    if ( CompareStringOrdinal(*(LPCWCH *)(v9[2] + 32), -1, *a4, -1, 1) == 1 )
    {
      std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_at<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
        (_DWORD)a1,
        (_DWORD)a2,
        0,
        (*a1)[2]);
      return a2;
    }
    goto LABEL_33;
  }
  if ( CompareStringOrdinal(*a4, -1, *(LPCWCH *)(a3 + 32), -1, 1) == 1 )
  {
    v20 = (__int64 *)v6;
    v12 = std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::wstring>>>>::operator--(&v20);
    if ( CompareStringOrdinal((LPCWCH)(*v12)[4], -1, *a4, -1, 1) == 1 )
    {
      if ( *(_BYTE *)(v20[2] + 25) )
      {
        std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_at<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
          (_DWORD)a1,
          (_DWORD)a2,
          0,
          (_DWORD)v20);
      }
      else
      {
        LOBYTE(v13) = 1;
        std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_at<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
          (_DWORD)a1,
          (_DWORD)a2,
          v13,
          v6);
      }
      return a2;
    }
  }
  if ( CompareStringOrdinal(*(LPCWCH *)(v6 + 32), -1, *a4, -1, 1) != 1 )
    goto LABEL_33;
  v14 = v6;
  v20 = (__int64 *)v6;
  v15 = (__int64 *)v6;
  if ( !*(_BYTE *)(v6 + 25) )
  {
    v14 = *(_QWORD *)(v6 + 16);
    if ( *(_BYTE *)(v14 + 25) )
    {
      v14 = *(_QWORD *)(v6 + 8);
      if ( !*(_BYTE *)(v14 + 25) )
      {
        v17 = v6;
        do
        {
          v18 = v14;
          if ( v17 != *(_QWORD *)(v14 + 16) )
            break;
          v20 = (__int64 *)v14;
          v14 = *(_QWORD *)(v14 + 8);
          v17 = v18;
        }
        while ( !*(_BYTE *)(v14 + 25) );
      }
    }
    else
    {
      for ( i = *(_QWORD *)v14; !*(_BYTE *)(i + 25); i = *(_QWORD *)i )
        v14 = i;
    }
    v15 = (__int64 *)v14;
    v20 = (__int64 *)v14;
  }
  if ( v15 == *a1 )
    goto LABEL_29;
  if ( CompareStringOrdinal(*a4, -1, *(LPCWCH *)(v14 + 32), -1, 1) != 1 )
  {
LABEL_33:
    *a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_nohint<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
                       a1,
                       (__int64)v19,
                       v11,
                       a4,
                       a5);
    return a2;
  }
  LODWORD(v14) = (_DWORD)v20;
LABEL_29:
  if ( *(_BYTE *)(*(_QWORD *)(v6 + 16) + 25LL) )
  {
    std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_at<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
      (_DWORD)a1,
      (_DWORD)a2,
      0,
      v6);
  }
  else
  {
    LOBYTE(v11) = 1;
    std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Insert_at<std::pair<unsigned short const * const,_WNF_STATE_NAME const *> &,std::_Tree_node<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>,void *> *>(
      (_DWORD)a1,
      (_DWORD)a2,
      v11,
      v14);
  }
  return a2;
}
