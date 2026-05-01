/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@$$CBIPEBG@std@@PEAU?$_Tree_node@U?$pair@$$CBIPEBG@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IPEBGU?$less@I@std@@V?$allocator@U?$pair@$$CBIPEBG@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIPEBG@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIPEBG@std@@@std@@@std@@@1@AEAU?$pair@$$CBIPEBG@1@PEAU?$_Tree_node@U?$pair@$$CBIPEBG@std@@PEAX@1@@Z @ 0x1802461A4
 * Callers:
 *     ?OnEditControlPositionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@Text@Internal@UI@Windows@@PEAUICoreKeyboardManagerEditControlPositionChangedEventArgs@45678@@Z @ 0x180060230 (-OnEditControlPositionChanged@TabTipAdapter@KeyboardHosting@@AEAAJPEAUICoreKeyboardManager@Core@.c)
 *     ??$_Try_emplace@AEBI$$V@?$map@IPEBGU?$less@I@std@@V?$allocator@U?$pair@$$CBIPEBG@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIPEBG@std@@@std@@@std@@@std@@_N@1@AEBI@Z @ 0x18008B07C (--$_Try_emplace@AEBI$$V@-$map@IPEBGU-$less@I@std@@V-$allocator@U-$pair@$$CBIPEBG@std@@@2@@std@@Q.c)
 *     ?LoadFloatingBottomPositionIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAJI@Z @ 0x1800F36DC (-LoadFloatingBottomPositionIfNecessary@TabTipAdapterPolicy@KeyboardHosting@@AEAAJI@Z.c)
 *     ??0?$map@IPEBGU?$less@I@std@@V?$allocator@U?$pair@$$CBIPEBG@std@@@2@@std@@QEAA@V?$initializer_list@U?$pair@$$CBIPEBG@std@@@1@@Z @ 0x1802470A0 (--0-$map@IPEBGU-$less@I@std@@V-$allocator@U-$pair@$$CBIPEBG@std@@@2@@std@@QEAA@V-$initializer_li.c)
 * Callees:
 *     ??$_Insert_nohint@AEAU?$pair@$$CBIPEBG@std@@PEAU?$_Tree_node@U?$pair@$$CBIPEBG@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IPEBGU?$less@I@std@@V?$allocator@U?$pair@$$CBIPEBG@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIPEBG@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBIPEBG@1@PEAU?$_Tree_node@U?$pair@$$CBIPEBG@std@@PEAX@1@@Z @ 0x180246420 (--$_Insert_nohint@AEAU-$pair@$$CBIPEBG@std@@PEAU-$_Tree_node@U-$pair@$$CBIPEBG@std@@PEAX@2@@-$_T.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBIPEBG@std@@PEAU?$_Tree_node@U?$pair@$$CBIPEBG@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IPEBGU?$less@I@std@@V?$allocator@U?$pair@$$CBIPEBG@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIPEBG@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBIPEBG@std@@PEAX@1@AEAU?$pair@$$CBIPEBG@1@1@Z @ 0x180250A0C (--$_Insert_at@AEAU-$pair@$$CBIPEBG@std@@PEAU-$_Tree_node@U-$pair@$$CBIPEBG@std@@PEAX@2@@-$_Tree@.c)
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@N@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@N@std@@PEAX@2@PEAU32@@Z @ 0x180253EA0 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAUHMONITOR__@@N@std@@@std@@@std@@SAPEAU-$_Tree.c)
 */

// Hidden C++ exception states: #try_helpers=1
_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned int,unsigned short const *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short const *>>,0>>::_Insert_hint<std::pair<unsigned int const,unsigned short const *> &,std::_Tree_node<std::pair<unsigned int const,unsigned short const *>,void *> *>(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        unsigned int *a4,
        void *a5)
{
  int v7; // r11d
  _QWORD *v8; // r10
  int v10; // r9d
  __int64 v11; // r9
  unsigned int v12; // edi
  bool v13; // cf
  __int64 v14; // rax
  __int64 v15; // r9
  __int64 j; // rax
  __int64 i; // rcx
  int v18; // r9d
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 k; // rcx
  int v22; // [rsp+20h] [rbp-38h]

  v7 = a1;
  v8 = *(_QWORD **)a1;
  if ( !*(_QWORD *)(a1 + 8) )
  {
    LOBYTE(a3) = 1;
    std::_Tree<std::_Tmap_traits<unsigned int,unsigned short const *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short const *>>,0>>::_Insert_at<std::pair<unsigned int const,unsigned short const *> &,std::_Tree_node<std::pair<unsigned int const,unsigned short const *>,void *> *>(
      a1,
      (int)a2,
      a3,
      (int)v8,
      v22,
      a5);
    return a2;
  }
  if ( a3 == *v8 )
  {
    if ( *a4 < *(_DWORD *)(a3 + 32) )
    {
      v10 = a3;
      LOBYTE(a3) = 1;
      std::_Tree<std::_Tmap_traits<unsigned int,unsigned short const *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short const *>>,0>>::_Insert_at<std::pair<unsigned int const,unsigned short const *> &,std::_Tree_node<std::pair<unsigned int const,unsigned short const *>,void *> *>(
        a1,
        (int)a2,
        a3,
        v10,
        v22,
        a5);
      return a2;
    }
    goto LABEL_44;
  }
  if ( (_QWORD *)a3 == v8 )
  {
    v11 = v8[2];
    if ( *(_DWORD *)(v11 + 32) < *a4 )
    {
      std::_Tree<std::_Tmap_traits<unsigned int,unsigned short const *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short const *>>,0>>::_Insert_at<std::pair<unsigned int const,unsigned short const *> &,std::_Tree_node<std::pair<unsigned int const,unsigned short const *>,void *> *>(
        a1,
        (int)a2,
        0,
        v11,
        v22,
        a5);
      return a2;
    }
    goto LABEL_44;
  }
  v12 = *a4;
  v13 = *(_DWORD *)(a3 + 32) < *a4;
  if ( *(_DWORD *)(a3 + 32) > *a4 )
  {
    v14 = a3;
    if ( *(_BYTE *)(a3 + 25) )
    {
      v15 = *(_QWORD *)(a3 + 16);
    }
    else
    {
      v15 = *(_QWORD *)a3;
      if ( *(_BYTE *)(*(_QWORD *)a3 + 25LL) )
      {
        for ( i = *(_QWORD *)(a3 + 8); !*(_BYTE *)(i + 25) && v14 == *(_QWORD *)i; i = *(_QWORD *)(i + 8) )
          v14 = i;
        v15 = v14;
        if ( !*(_BYTE *)(v14 + 25) )
          v15 = i;
      }
      else
      {
        for ( j = *(_QWORD *)(v15 + 16); !*(_BYTE *)(j + 25); j = *(_QWORD *)(j + 16) )
          v15 = j;
      }
    }
    if ( *(_DWORD *)(v15 + 32) < v12 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(v15 + 16) + 25LL) )
      {
        std::_Tree<std::_Tmap_traits<unsigned int,unsigned short const *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short const *>>,0>>::_Insert_at<std::pair<unsigned int const,unsigned short const *> &,std::_Tree_node<std::pair<unsigned int const,unsigned short const *>,void *> *>(
          v7,
          (int)a2,
          0,
          v15,
          v22,
          a5);
      }
      else
      {
        v18 = a3;
        LOBYTE(a3) = 1;
        std::_Tree<std::_Tmap_traits<unsigned int,unsigned short const *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short const *>>,0>>::_Insert_at<std::pair<unsigned int const,unsigned short const *> &,std::_Tree_node<std::pair<unsigned int const,unsigned short const *>,void *> *>(
          v7,
          (int)a2,
          a3,
          v18,
          v22,
          a5);
      }
      return a2;
    }
    v13 = *(_DWORD *)(a3 + 32) < v12;
  }
  if ( !v13 )
    goto LABEL_44;
  v19 = a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    v20 = *(_QWORD *)(a3 + 16);
    if ( *(_BYTE *)(v20 + 25) )
    {
      for ( k = *(_QWORD *)(a3 + 8); !*(_BYTE *)(k + 25) && v19 == *(_QWORD *)(k + 16); k = *(_QWORD *)(k + 8) )
        v19 = k;
      v19 = k;
    }
    else
    {
      v19 = std::_Tree_val<std::_Tree_simple_types<std::pair<HMONITOR__ * const,double>>>::_Min(v20, a2, a3);
    }
  }
  if ( (_QWORD *)v19 != v8 && v12 >= *(_DWORD *)(v19 + 32) )
  {
LABEL_44:
    *a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned int,unsigned short const *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short const *>>,0>>::_Insert_nohint<std::pair<unsigned int const,unsigned short const *> &,std::_Tree_node<std::pair<unsigned int const,unsigned short const *>,void *> *>(
                       v7,
                       a5);
    return a2;
  }
  if ( *(_BYTE *)(*(_QWORD *)(a3 + 16) + 25LL) )
  {
    std::_Tree<std::_Tmap_traits<unsigned int,unsigned short const *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short const *>>,0>>::_Insert_at<std::pair<unsigned int const,unsigned short const *> &,std::_Tree_node<std::pair<unsigned int const,unsigned short const *>,void *> *>(
      v7,
      (int)a2,
      0,
      a3,
      v22,
      a5);
  }
  else
  {
    LOBYTE(a3) = 1;
    std::_Tree<std::_Tmap_traits<unsigned int,unsigned short const *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short const *>>,0>>::_Insert_at<std::pair<unsigned int const,unsigned short const *> &,std::_Tree_node<std::pair<unsigned int const,unsigned short const *>,void *> *>(
      v7,
      (int)a2,
      a3,
      v19,
      v22,
      a5);
  }
  return a2;
}
