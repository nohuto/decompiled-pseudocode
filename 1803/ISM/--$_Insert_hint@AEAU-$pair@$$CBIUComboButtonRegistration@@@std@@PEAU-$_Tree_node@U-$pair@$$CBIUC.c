/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@$$CBIUComboButtonRegistration@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IUComboButtonRegistration@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUComboButtonRegistration@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBIUComboButtonRegistration@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@1@@Z @ 0x1800B8D58
 * Callers:
 *     ?RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@@Z @ 0x1800B7758 (-RegisterComboButton@ButtonRecognizer@@QEAAJPEAUtagMsgRoutingInfo@@_NPEAUButtonRegistrationABI@@.c)
 * Callees:
 *     ??F?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@std@@QEAAAEAV01@XZ @ 0x180008DF4 (--F-$_Tree_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE_ID@@VWeak.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBIUComboButtonRegistration@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IUComboButtonRegistration@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUComboButtonRegistration@@@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@1@AEAU?$pair@$$CBIUComboButtonRegistration@@@1@1@Z @ 0x1800B906C (--$_Insert_at@AEAU-$pair@$$CBIUComboButtonRegistration@@@std@@PEAU-$_Tree_node@U-$pair@$$CBIUCom.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBIUComboButtonRegistration@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IUComboButtonRegistration@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUComboButtonRegistration@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUComboButtonRegistration@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBIUComboButtonRegistration@@@1@PEAU?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@1@@Z @ 0x1800B92F4 (--$_Insert_nohint@AEAU-$pair@$$CBIUComboButtonRegistration@@@std@@PEAU-$_Tree_node@U-$pair@$$CBI.c)
 */

// Hidden C++ exception states: #try_helpers=1
_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned int,ComboButtonRegistration,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ComboButtonRegistration>>,0>>::_Insert_hint<std::pair<unsigned int const,ComboButtonRegistration> &,std::_Tree_node<std::pair<unsigned int const,ComboButtonRegistration>,void *> *>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        unsigned int *a4,
        void *Block)
{
  __int64 v6; // rbx
  int v8; // r14d
  _QWORD *v9; // rdi
  int v11; // r9d
  __int64 v12; // r9
  unsigned int v13; // r15d
  __int64 v14; // r9
  _QWORD *v15; // rax
  __int64 i; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // [rsp+38h] [rbp-30h] BYREF
  __int64 *v20; // [rsp+70h] [rbp+8h] BYREF

  v6 = a3;
  v8 = a1;
  v20 = 0LL;
  v9 = *(_QWORD **)a1;
  if ( !*(_QWORD *)(a1 + 8) )
  {
    LOBYTE(a3) = 1;
    std::_Tree<std::_Tmap_traits<unsigned int,ComboButtonRegistration,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ComboButtonRegistration>>,0>>::_Insert_at<std::pair<unsigned int const,ComboButtonRegistration> &,std::_Tree_node<std::pair<unsigned int const,ComboButtonRegistration>,void *> *>(
      a1,
      (_DWORD)a2,
      a3,
      (_DWORD)v9);
    return a2;
  }
  if ( a3 == *v9 )
  {
    if ( *a4 < *(_DWORD *)(a3 + 32) )
    {
      v11 = a3;
      LOBYTE(a3) = 1;
      std::_Tree<std::_Tmap_traits<unsigned int,ComboButtonRegistration,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ComboButtonRegistration>>,0>>::_Insert_at<std::pair<unsigned int const,ComboButtonRegistration> &,std::_Tree_node<std::pair<unsigned int const,ComboButtonRegistration>,void *> *>(
        a1,
        (_DWORD)a2,
        a3,
        v11);
      return a2;
    }
    goto LABEL_32;
  }
  if ( (_QWORD *)a3 == v9 )
  {
    v12 = v9[2];
    if ( *(_DWORD *)(v12 + 32) < *a4 )
    {
      std::_Tree<std::_Tmap_traits<unsigned int,ComboButtonRegistration,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ComboButtonRegistration>>,0>>::_Insert_at<std::pair<unsigned int const,ComboButtonRegistration> &,std::_Tree_node<std::pair<unsigned int const,ComboButtonRegistration>,void *> *>(
        a1,
        (_DWORD)a2,
        0,
        v12);
      return a2;
    }
    goto LABEL_32;
  }
  v13 = *a4;
  if ( *a4 >= *(_DWORD *)(a3 + 32)
    || (v20 = (__int64 *)a3,
        *((_DWORD *)*std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>>>::operator--(&v20)
        + 8) >= v13) )
  {
    if ( *(_DWORD *)(v6 + 32) >= v13 )
      goto LABEL_32;
    v14 = v6;
    v20 = (__int64 *)v6;
    v15 = (_QWORD *)v6;
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
      v15 = (_QWORD *)v14;
      v20 = (__int64 *)v14;
    }
    if ( v15 != v9 && v13 >= *(_DWORD *)(v14 + 32) )
    {
LABEL_32:
      *a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned int,ComboButtonRegistration,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ComboButtonRegistration>>,0>>::_Insert_nohint<std::pair<unsigned int const,ComboButtonRegistration> &,std::_Tree_node<std::pair<unsigned int const,ComboButtonRegistration>,void *> *>(
                         v8,
                         (int)&v19,
                         a3,
                         (int)a4,
                         Block);
      return a2;
    }
    if ( *(_BYTE *)(*(_QWORD *)(v6 + 16) + 25LL) )
    {
      std::_Tree<std::_Tmap_traits<unsigned int,ComboButtonRegistration,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ComboButtonRegistration>>,0>>::_Insert_at<std::pair<unsigned int const,ComboButtonRegistration> &,std::_Tree_node<std::pair<unsigned int const,ComboButtonRegistration>,void *> *>(
        v8,
        (_DWORD)a2,
        0,
        v6);
    }
    else
    {
      LOBYTE(a3) = 1;
      std::_Tree<std::_Tmap_traits<unsigned int,ComboButtonRegistration,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ComboButtonRegistration>>,0>>::_Insert_at<std::pair<unsigned int const,ComboButtonRegistration> &,std::_Tree_node<std::pair<unsigned int const,ComboButtonRegistration>,void *> *>(
        v8,
        (_DWORD)a2,
        a3,
        v14);
    }
    return a2;
  }
  else
  {
    if ( *(_BYTE *)(v20[2] + 25) )
    {
      std::_Tree<std::_Tmap_traits<unsigned int,ComboButtonRegistration,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ComboButtonRegistration>>,0>>::_Insert_at<std::pair<unsigned int const,ComboButtonRegistration> &,std::_Tree_node<std::pair<unsigned int const,ComboButtonRegistration>,void *> *>(
        v8,
        (_DWORD)a2,
        0,
        (_DWORD)v20);
    }
    else
    {
      LOBYTE(a3) = 1;
      std::_Tree<std::_Tmap_traits<unsigned int,ComboButtonRegistration,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ComboButtonRegistration>>,0>>::_Insert_at<std::pair<unsigned int const,ComboButtonRegistration> &,std::_Tree_node<std::pair<unsigned int const,ComboButtonRegistration>,void *> *>(
        v8,
        (_DWORD)a2,
        a3,
        v6);
    }
    return a2;
  }
}
