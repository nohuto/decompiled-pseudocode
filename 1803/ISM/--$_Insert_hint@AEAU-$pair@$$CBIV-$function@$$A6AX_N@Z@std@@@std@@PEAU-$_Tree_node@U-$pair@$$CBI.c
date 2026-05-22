/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@1@@Z @ 0x180008BD4
 * Callers:
 *     ?RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV?$function@$$A6AX_N@Z@std@@PEAI@Z @ 0x180007E7C (-RegisterFor3DCompositorRunningChanged@MPC3DStateHelper@@QEAAXV-$function@$$A6AX_N@Z@std@@PEAI@Z.c)
 *     ??0MPCHolographicInputManager@@AEAA@XZ @ 0x18004D1DC (--0MPCHolographicInputManager@@AEAA@XZ.c)
 * Callees:
 *     ??F?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@VWeakRef@WRL@Microsoft@@@std@@@std@@@std@@@std@@QEAAAEAV01@XZ @ 0x180008DF4 (--F-$_Tree_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE_ID@@VWeak.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@1@AEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@1@1@Z @ 0x180008EE8 (--$_Insert_at@AEAU-$pair@$$CBIV-$function@$$A6AX_N@Z@std@@@std@@PEAU-$_Tree_node@U-$pair@$$CBIV-.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@1@@Z @ 0x180009170 (--$_Insert_nohint@AEAU-$pair@$$CBIV-$function@$$A6AX_N@Z@std@@@std@@PEAU-$_Tree_node@U-$pair@$$C.c)
 */

// Hidden C++ exception states: #try_helpers=1
_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Insert_hint<std::pair<unsigned int const,std::function<void (bool)>> &,std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *> *>(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3,
        unsigned int *a4,
        void *Block)
{
  __int64 *v6; // rbx
  int v8; // r14d
  __int64 **v9; // rdi
  int v11; // r9d
  __int64 *v12; // r9
  unsigned int v13; // r15d
  __int64 *v14; // r9
  __int64 **v15; // rax
  __int64 *v16; // rcx
  __int64 *v17; // rax
  __int64 *v18; // rcx
  int v19; // [rsp+38h] [rbp-30h] BYREF
  __int64 *v20; // [rsp+70h] [rbp+8h] BYREF

  v6 = a3;
  v8 = a1;
  v20 = 0LL;
  v9 = *(__int64 ***)a1;
  if ( !*(_QWORD *)(a1 + 8) )
  {
    LOBYTE(a3) = 1;
    std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Insert_at<std::pair<unsigned int const,std::function<void (bool)>> &,std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *> *>(
      a1,
      (_DWORD)a2,
      (_DWORD)a3,
      (_DWORD)v9);
    return a2;
  }
  if ( a3 == *v9 )
  {
    if ( *a4 < *((_DWORD *)a3 + 8) )
    {
      v11 = (int)a3;
      LOBYTE(a3) = 1;
      std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Insert_at<std::pair<unsigned int const,std::function<void (bool)>> &,std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *> *>(
        a1,
        (_DWORD)a2,
        (_DWORD)a3,
        v11);
      return a2;
    }
    goto LABEL_32;
  }
  if ( a3 == (__int64 *)v9 )
  {
    v12 = v9[2];
    if ( *((_DWORD *)v12 + 8) < *a4 )
    {
      std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Insert_at<std::pair<unsigned int const,std::function<void (bool)>> &,std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *> *>(
        a1,
        (_DWORD)a2,
        0,
        (_DWORD)v12);
      return a2;
    }
    goto LABEL_32;
  }
  v13 = *a4;
  if ( *a4 >= *((_DWORD *)a3 + 8)
    || (v20 = a3,
        *(_DWORD *)(*(_QWORD *)std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,Microsoft::WRL::WeakRef>>>>::operator--(&v20)
                  + 32LL) >= v13) )
  {
    if ( *((_DWORD *)v6 + 8) >= v13 )
      goto LABEL_32;
    v14 = v6;
    v20 = v6;
    v15 = (__int64 **)v6;
    if ( !*((_BYTE *)v6 + 25) )
    {
      v14 = (__int64 *)v6[2];
      if ( *((_BYTE *)v14 + 25) )
      {
        v14 = (__int64 *)v6[1];
        if ( !*((_BYTE *)v14 + 25) )
        {
          v17 = v6;
          do
          {
            v18 = v14;
            if ( v17 != (__int64 *)v14[2] )
              break;
            v20 = v14;
            v14 = (__int64 *)v14[1];
            v17 = v18;
          }
          while ( !*((_BYTE *)v14 + 25) );
        }
      }
      else
      {
        v16 = (__int64 *)*v14;
        if ( !*(_BYTE *)(*v14 + 25) )
        {
          do
          {
            v14 = v16;
            v16 = (__int64 *)*v16;
          }
          while ( !*((_BYTE *)v16 + 25) );
        }
      }
      v15 = (__int64 **)v14;
      v20 = v14;
    }
    if ( v15 != v9 && v13 >= *((_DWORD *)v14 + 8) )
    {
LABEL_32:
      *a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Insert_nohint<std::pair<unsigned int const,std::function<void (bool)>> &,std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *> *>(
                         v8,
                         (int)&v19,
                         (int)a3,
                         (int)a4,
                         Block);
      return a2;
    }
    if ( *(_BYTE *)(v6[2] + 25) )
    {
      std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Insert_at<std::pair<unsigned int const,std::function<void (bool)>> &,std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *> *>(
        v8,
        (_DWORD)a2,
        0,
        (_DWORD)v6);
    }
    else
    {
      LOBYTE(a3) = 1;
      std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Insert_at<std::pair<unsigned int const,std::function<void (bool)>> &,std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *> *>(
        v8,
        (_DWORD)a2,
        (_DWORD)a3,
        (_DWORD)v14);
    }
    return a2;
  }
  else
  {
    if ( *(_BYTE *)(v20[2] + 25) )
    {
      std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Insert_at<std::pair<unsigned int const,std::function<void (bool)>> &,std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *> *>(
        v8,
        (_DWORD)a2,
        0,
        (_DWORD)v20);
    }
    else
    {
      LOBYTE(a3) = 1;
      std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Insert_at<std::pair<unsigned int const,std::function<void (bool)>> &,std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *> *>(
        v8,
        (_DWORD)a2,
        (_DWORD)a3,
        (_DWORD)v6);
    }
    return a2;
  }
}
