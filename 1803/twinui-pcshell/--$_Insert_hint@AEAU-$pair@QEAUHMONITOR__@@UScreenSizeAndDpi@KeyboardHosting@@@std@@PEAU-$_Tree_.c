/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@std@@@std@@@1@AEAU?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@1@PEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAX@1@@Z @ 0x180256950
 * Callers:
 *     ??$_Try_emplace@AEBQEAUHMONITOR__@@$$V@?$map@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@5@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@std@@@std@@@std@@_N@1@AEBQEAUHMONITOR__@@@Z @ 0x180256D38 (--$_Try_emplace@AEBQEAUHMONITOR__@@$$V@-$map@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@N@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@N@std@@PEAX@2@PEAU32@@Z @ 0x180253EA0 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAUHMONITOR__@@N@std@@@std@@@std@@SAPEAU-$_Tree.c)
 *     ??$_Insert_at@AEAU?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAX@1@AEAU?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@1@1@Z @ 0x1802567B0 (--$_Insert_at@AEAU-$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAU-$_Tree_no.c)
 *     ??$_Insert_nohint@AEAU?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@U?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@1@PEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAX@1@@Z @ 0x180256BCC (--$_Insert_nohint@AEAU-$pair@QEAUHMONITOR__@@UScreenSizeAndDpi@KeyboardHosting@@@std@@PEAU-$_Tre.c)
 */

// Hidden C++ exception states: #try_helpers=1
char **__fastcall std::_Tree<std::_Tmap_traits<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>>,0>>::_Insert_hint<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi> &,std::_Tree_node<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>,void *> *>(
        _QWORD *a1,
        char **a2,
        __int64 a3,
        unsigned __int64 *a4,
        char *a5)
{
  _QWORD *v7; // r11
  __int64 v8; // r10
  __int64 v10; // r9
  unsigned __int64 v11; // rdi
  bool v12; // cf
  char *v13; // rax
  char *v14; // r9
  __int64 j; // rax
  __int64 i; // rcx
  char **v17; // rax
  __int64 v18; // rcx
  __int64 k; // rcx
  int v20; // [rsp+20h] [rbp-38h]

  v7 = a1;
  v8 = *a1;
  if ( !a1[1] )
  {
    std::_Tree<std::_Tmap_traits<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>>,0>>::_Insert_at<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi> &,std::_Tree_node<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>,void *> *>(
      a1,
      a2,
      1,
      (char **)v8,
      v20,
      a5);
    return a2;
  }
  if ( a3 == *(_QWORD *)v8 )
  {
    if ( *a4 < *(_QWORD *)(a3 + 32) )
    {
      std::_Tree<std::_Tmap_traits<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>>,0>>::_Insert_at<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi> &,std::_Tree_node<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>,void *> *>(
        a1,
        a2,
        1,
        (char **)a3,
        v20,
        a5);
      return a2;
    }
    goto LABEL_44;
  }
  if ( a3 == v8 )
  {
    v10 = *(_QWORD *)(v8 + 16);
    if ( *(_QWORD *)(v10 + 32) < *a4 )
    {
      std::_Tree<std::_Tmap_traits<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>>,0>>::_Insert_at<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi> &,std::_Tree_node<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>,void *> *>(
        a1,
        a2,
        0,
        (char **)v10,
        v20,
        a5);
      return a2;
    }
    goto LABEL_44;
  }
  v11 = *a4;
  v12 = *(_QWORD *)(a3 + 32) < *a4;
  if ( *(_QWORD *)(a3 + 32) > *a4 )
  {
    v13 = (char *)a3;
    if ( *(_BYTE *)(a3 + 25) )
    {
      v14 = *(char **)(a3 + 16);
    }
    else
    {
      v14 = *(char **)a3;
      if ( *(_BYTE *)(*(_QWORD *)a3 + 25LL) )
      {
        for ( i = *(_QWORD *)(a3 + 8); !*(_BYTE *)(i + 25) && v13 == *(char **)i; i = *(_QWORD *)(i + 8) )
          v13 = (char *)i;
        v14 = v13;
        if ( !v13[25] )
          v14 = (char *)i;
      }
      else
      {
        for ( j = *((_QWORD *)v14 + 2); !*(_BYTE *)(j + 25); j = *(_QWORD *)(j + 16) )
          v14 = (char *)j;
      }
    }
    if ( *((_QWORD *)v14 + 4) < v11 )
    {
      if ( *(_BYTE *)(*((_QWORD *)v14 + 2) + 25LL) )
        std::_Tree<std::_Tmap_traits<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>>,0>>::_Insert_at<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi> &,std::_Tree_node<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>,void *> *>(
          v7,
          a2,
          0,
          (char **)v14,
          v20,
          a5);
      else
        std::_Tree<std::_Tmap_traits<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>>,0>>::_Insert_at<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi> &,std::_Tree_node<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>,void *> *>(
          v7,
          a2,
          1,
          (char **)a3,
          v20,
          a5);
      return a2;
    }
    v12 = *(_QWORD *)(a3 + 32) < v11;
  }
  if ( !v12 )
    goto LABEL_44;
  v17 = (char **)a3;
  if ( !*(_BYTE *)(a3 + 25) )
  {
    v18 = *(_QWORD *)(a3 + 16);
    if ( *(_BYTE *)(v18 + 25) )
    {
      for ( k = *(_QWORD *)(a3 + 8); !*(_BYTE *)(k + 25) && v17 == *(char ***)(k + 16); k = *(_QWORD *)(k + 8) )
        v17 = (char **)k;
      v17 = (char **)k;
    }
    else
    {
      v17 = (char **)std::_Tree_val<std::_Tree_simple_types<std::pair<HMONITOR__ * const,double>>>::_Min((_QWORD *)v18);
    }
  }
  if ( v17 != (char **)v8 && v11 >= (unsigned __int64)v17[4] )
  {
LABEL_44:
    *a2 = *(char **)std::_Tree<std::_Tmap_traits<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>>,0>>::_Insert_nohint<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi> &,std::_Tree_node<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>,void *> *>(
                      (int)v7,
                      a5);
    return a2;
  }
  if ( *(_BYTE *)(*(_QWORD *)(a3 + 16) + 25LL) )
    std::_Tree<std::_Tmap_traits<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>>,0>>::_Insert_at<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi> &,std::_Tree_node<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>,void *> *>(
      v7,
      a2,
      0,
      (char **)a3,
      v20,
      a5);
  else
    std::_Tree<std::_Tmap_traits<HMONITOR__ *,KeyboardHosting::ScreenSizeAndDpi,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>>,0>>::_Insert_at<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi> &,std::_Tree_node<std::pair<HMONITOR__ * const,KeyboardHosting::ScreenSizeAndDpi>,void *> *>(
      v7,
      a2,
      1,
      v17,
      v20,
      a5);
  return a2;
}
