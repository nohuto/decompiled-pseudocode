/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@1@@Z @ 0x180008D3C
 * Callers:
 *     ?RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x180007D08 (-RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV-$function@$$A6AX_N@Z@std@@PEAI@Z.c)
 *     ??0MPCHolographicInputManager@@AEAA@XZ @ 0x180056074 (--0MPCHolographicInputManager@@AEAA@XZ.c)
 * Callees:
 *     ??$_Insert_at@AEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@1@AEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@1@1@Z @ 0x180008FF4 (--$_Insert_at@AEAU-$pair@$$CBIV-$function@$$A6AX_N@Z@std@@@std@@PEAU-$_Tree_node@U-$pair@$$CBIV-.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@1@@Z @ 0x180009278 (--$_Insert_nohint@AEAU-$pair@$$CBIV-$function@$$A6AX_N@Z@std@@@std@@PEAU-$_Tree_node@U-$pair@$$C.c)
 */

// Hidden C++ exception states: #try_helpers=1
_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Insert_hint<std::pair<unsigned int const,std::function<void (bool)>> &,std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *> *>(
        __int64 ***a1,
        _QWORD *a2,
        __int64 *a3,
        unsigned int *a4,
        void *Block)
{
  int v7; // r10d
  __int64 **v9; // rcx
  int v10; // r9d
  __int64 *v11; // r9
  unsigned int v12; // r11d
  bool v13; // cf
  __int64 *v14; // rax
  __int64 *v15; // r9
  __int64 *j; // rax
  __int64 *i; // rdx
  int v18; // r9d
  __int64 *v19; // r9
  __int64 *v20; // rax
  __int64 *k; // rax
  int v22; // [rsp+38h] [rbp-20h] BYREF

  v7 = (int)a1;
  if ( !a1[1] )
  {
    LOBYTE(a3) = 1;
    std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Insert_at<std::pair<unsigned int const,std::function<void (bool)>> &,std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *> *>(
      (_DWORD)a1,
      (_DWORD)a2,
      (_DWORD)a3,
      (unsigned int)*a1);
    return a2;
  }
  v9 = *a1;
  if ( a3 == *v9 )
  {
    if ( *a4 < *((_DWORD *)a3 + 8) )
    {
      v10 = (int)a3;
      LOBYTE(a3) = 1;
      std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Insert_at<std::pair<unsigned int const,std::function<void (bool)>> &,std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *> *>(
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
    if ( *((_DWORD *)v11 + 8) < *a4 )
    {
      std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Insert_at<std::pair<unsigned int const,std::function<void (bool)>> &,std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *> *>(
        v7,
        (_DWORD)a2,
        0,
        (_DWORD)v11);
      return a2;
    }
    goto LABEL_45;
  }
  v12 = *a4;
  v13 = *((_DWORD *)a3 + 8) < *a4;
  if ( *((_DWORD *)a3 + 8) > *a4 )
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
    if ( *((_DWORD *)v15 + 8) < v12 )
    {
      if ( *(_BYTE *)(v15[2] + 25) )
      {
        std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Insert_at<std::pair<unsigned int const,std::function<void (bool)>> &,std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *> *>(
          v7,
          (_DWORD)a2,
          0,
          (_DWORD)v15);
      }
      else
      {
        v18 = (int)a3;
        LOBYTE(a3) = 1;
        std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Insert_at<std::pair<unsigned int const,std::function<void (bool)>> &,std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *> *>(
          v7,
          (_DWORD)a2,
          (_DWORD)a3,
          v18);
      }
      return a2;
    }
    v13 = *((_DWORD *)a3 + 8) < v12;
  }
  if ( !v13 )
    goto LABEL_45;
  v19 = a3;
  if ( !*((_BYTE *)a3 + 25) )
  {
    v20 = (__int64 *)a3[2];
    if ( *((_BYTE *)v20 + 25) )
    {
      for ( k = (__int64 *)a3[1]; !*((_BYTE *)k + 25) && v19 == (__int64 *)k[2]; k = (__int64 *)k[1] )
        v19 = k;
      v19 = k;
    }
    else
    {
      do
      {
        v19 = v20;
        v20 = (__int64 *)*v20;
      }
      while ( !*((_BYTE *)v20 + 25) );
    }
  }
  if ( v19 != (__int64 *)v9 && v12 >= *((_DWORD *)v19 + 8) )
  {
LABEL_45:
    *a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Insert_nohint<std::pair<unsigned int const,std::function<void (bool)>> &,std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *> *>(
                       v7,
                       (int)&v22,
                       (int)a3,
                       (int)a4,
                       Block);
    return a2;
  }
  if ( *(_BYTE *)(a3[2] + 25) )
  {
    std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Insert_at<std::pair<unsigned int const,std::function<void (bool)>> &,std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *> *>(
      v7,
      (_DWORD)a2,
      0,
      (_DWORD)a3);
  }
  else
  {
    LOBYTE(a3) = 1;
    std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Insert_at<std::pair<unsigned int const,std::function<void (bool)>> &,std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *> *>(
      v7,
      (_DWORD)a2,
      (_DWORD)a3,
      (_DWORD)v19);
  }
  return a2;
}
