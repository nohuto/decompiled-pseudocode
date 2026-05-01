/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@QEAUHMONITOR__@@N@std@@PEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@N@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAUHMONITOR__@@NU?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@N@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@N@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@N@std@@@std@@@std@@@1@AEAU?$pair@QEAUHMONITOR__@@N@1@PEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@N@std@@PEAX@1@@Z @ 0x1801AF664
 * Callers:
 *     ?GetDefaultKeyboardSize@PositionAndSizeOptionsHelper@KeyboardHosting@@QEAA?AUKeyboardSize@2@PEAUHMONITOR__@@URect@Foundation@Windows@@W4DEVICE_SCALE_FACTOR@@I@Z @ 0x1801AF35C (-GetDefaultKeyboardSize@PositionAndSizeOptionsHelper@KeyboardHosting@@QEAA-AUKeyboardSize@2@PEAU.c)
 * Callees:
 *     ??$_Insert_at@AEAU?$pair@QEAUHMONITOR__@@N@std@@PEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@N@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAUHMONITOR__@@NU?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@N@std@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@N@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@N@std@@PEAX@1@AEAU?$pair@QEAUHMONITOR__@@N@1@1@Z @ 0x1801AF880 (--$_Insert_at@AEAU-$pair@QEAUHMONITOR__@@N@std@@PEAU-$_Tree_node@U-$pair@QEAUHMONITOR__@@N@std@@.c)
 *     ??$_Insert_nohint@AEAU?$pair@QEAUHMONITOR__@@N@std@@PEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@N@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@PEAUHMONITOR__@@NU?$less@PEAUHMONITOR__@@@std@@V?$allocator@U?$pair@QEAUHMONITOR__@@N@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@N@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@QEAUHMONITOR__@@N@1@PEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@N@std@@PEAX@1@@Z @ 0x1801AFB04 (--$_Insert_nohint@AEAU-$pair@QEAUHMONITOR__@@N@std@@PEAU-$_Tree_node@U-$pair@QEAUHMONITOR__@@N@s.c)
 */

// Hidden C++ exception states: #try_helpers=1
_QWORD *__fastcall std::_Tree<std::_Tmap_traits<HMONITOR__ *,double,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,double>>,0>>::_Insert_hint<std::pair<HMONITOR__ * const,double> &,std::_Tree_node<std::pair<HMONITOR__ * const,double>,void *> *>(
        __int64 ***a1,
        _QWORD *a2,
        __int64 *a3,
        unsigned __int64 *a4,
        void *Block)
{
  int v7; // r10d
  __int64 **v9; // rcx
  int v10; // r9d
  __int64 *v11; // r9
  unsigned __int64 v12; // r11
  bool v13; // cf
  __int64 *v14; // rax
  __int64 *v15; // r9
  __int64 *j; // rax
  __int64 *i; // rdx
  int v18; // r9d
  __int64 **v19; // r9
  __int64 *v20; // rax
  __int64 k; // rax
  int v22; // [rsp+38h] [rbp-20h] BYREF

  v7 = (int)a1;
  if ( !a1[1] )
  {
    LOBYTE(a3) = 1;
    std::_Tree<std::_Tmap_traits<HMONITOR__ *,double,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,double>>,0>>::_Insert_at<std::pair<HMONITOR__ * const,double> &,std::_Tree_node<std::pair<HMONITOR__ * const,double>,void *> *>(
      (_DWORD)a1,
      (_DWORD)a2,
      (_DWORD)a3,
      (unsigned int)*a1);
    return a2;
  }
  v9 = *a1;
  if ( a3 == *v9 )
  {
    if ( *a4 < a3[4] )
    {
      v10 = (int)a3;
      LOBYTE(a3) = 1;
      std::_Tree<std::_Tmap_traits<HMONITOR__ *,double,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,double>>,0>>::_Insert_at<std::pair<HMONITOR__ * const,double> &,std::_Tree_node<std::pair<HMONITOR__ * const,double>,void *> *>(
        v7,
        (_DWORD)a2,
        (_DWORD)a3,
        v10);
      return a2;
    }
    goto LABEL_45;
  }
  if ( a3 == (__int64 *)v9 )
  {
    v11 = v9[2];
    if ( v11[4] < *a4 )
    {
      std::_Tree<std::_Tmap_traits<HMONITOR__ *,double,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,double>>,0>>::_Insert_at<std::pair<HMONITOR__ * const,double> &,std::_Tree_node<std::pair<HMONITOR__ * const,double>,void *> *>(
        v7,
        (_DWORD)a2,
        0,
        (_DWORD)v11);
      return a2;
    }
    goto LABEL_45;
  }
  v12 = *a4;
  v13 = a3[4] < *a4;
  if ( a3[4] > *a4 )
  {
    v14 = a3;
    if ( *((_BYTE *)a3 + 25) )
    {
      v15 = (__int64 *)a3[2];
    }
    else
    {
      v15 = (__int64 *)*a3;
      if ( *(_BYTE *)(*a3 + 25) )
      {
        for ( i = (__int64 *)a3[1]; !*((_BYTE *)i + 25) && v14 == (__int64 *)*i; i = (__int64 *)i[1] )
          v14 = i;
        v15 = v14;
        if ( !*((_BYTE *)v14 + 25) )
          v15 = i;
      }
      else
      {
        for ( j = (__int64 *)v15[2]; !*((_BYTE *)j + 25); j = (__int64 *)j[2] )
          v15 = j;
      }
    }
    if ( v15[4] < v12 )
    {
      if ( *(_BYTE *)(v15[2] + 25) )
      {
        std::_Tree<std::_Tmap_traits<HMONITOR__ *,double,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,double>>,0>>::_Insert_at<std::pair<HMONITOR__ * const,double> &,std::_Tree_node<std::pair<HMONITOR__ * const,double>,void *> *>(
          v7,
          (_DWORD)a2,
          0,
          (_DWORD)v15);
      }
      else
      {
        v18 = (int)a3;
        LOBYTE(a3) = 1;
        std::_Tree<std::_Tmap_traits<HMONITOR__ *,double,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,double>>,0>>::_Insert_at<std::pair<HMONITOR__ * const,double> &,std::_Tree_node<std::pair<HMONITOR__ * const,double>,void *> *>(
          v7,
          (_DWORD)a2,
          (_DWORD)a3,
          v18);
      }
      return a2;
    }
    v13 = a3[4] < v12;
  }
  if ( !v13 )
    goto LABEL_45;
  v19 = (__int64 **)a3;
  if ( !*((_BYTE *)a3 + 25) )
  {
    v20 = (__int64 *)a3[2];
    if ( *((_BYTE *)v20 + 25) )
    {
      for ( k = a3[1]; !*(_BYTE *)(k + 25) && v19 == *(__int64 ***)(k + 16); k = *(_QWORD *)(k + 8) )
        v19 = (__int64 **)k;
      v19 = (__int64 **)k;
    }
    else
    {
      do
      {
        v19 = (__int64 **)v20;
        v20 = (__int64 *)*v20;
      }
      while ( !*((_BYTE *)v20 + 25) );
    }
  }
  if ( v19 != v9 && v12 >= (unsigned __int64)v19[4] )
  {
LABEL_45:
    *a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<HMONITOR__ *,double,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,double>>,0>>::_Insert_nohint<std::pair<HMONITOR__ * const,double> &,std::_Tree_node<std::pair<HMONITOR__ * const,double>,void *> *>(
                       v7,
                       (int)&v22,
                       (int)a3,
                       (int)a4,
                       Block);
    return a2;
  }
  if ( *(_BYTE *)(a3[2] + 25) )
  {
    std::_Tree<std::_Tmap_traits<HMONITOR__ *,double,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,double>>,0>>::_Insert_at<std::pair<HMONITOR__ * const,double> &,std::_Tree_node<std::pair<HMONITOR__ * const,double>,void *> *>(
      v7,
      (_DWORD)a2,
      0,
      (_DWORD)a3);
  }
  else
  {
    LOBYTE(a3) = 1;
    std::_Tree<std::_Tmap_traits<HMONITOR__ *,double,std::less<HMONITOR__ *>,std::allocator<std::pair<HMONITOR__ * const,double>>,0>>::_Insert_at<std::pair<HMONITOR__ * const,double> &,std::_Tree_node<std::pair<HMONITOR__ * const,double>,void *> *>(
      v7,
      (_DWORD)a2,
      (_DWORD)a3,
      (_DWORD)v19);
  }
  return a2;
}
