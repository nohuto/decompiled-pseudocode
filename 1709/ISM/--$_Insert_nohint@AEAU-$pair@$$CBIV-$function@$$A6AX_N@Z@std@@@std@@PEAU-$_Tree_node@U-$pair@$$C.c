/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@1@@Z @ 0x180009278
 * Callers:
 *     ??$_Insert_hint@AEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@1@@Z @ 0x180008D3C (--$_Insert_hint@AEAU-$pair@$$CBIV-$function@$$A6AX_N@Z@std@@@std@@PEAU-$_Tree_node@U-$pair@$$CBI.c)
 * Callees:
 *     ??$_Insert_at@AEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IV?$function@$$A6AX_N@Z@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@std@@PEAX@1@AEAU?$pair@$$CBIV?$function@$$A6AX_N@Z@std@@@1@1@Z @ 0x180008FF4 (--$_Insert_at@AEAU-$pair@$$CBIV-$function@$$A6AX_N@Z@std@@@std@@PEAU-$_Tree_node@U-$pair@$$CBIV-.c)
 *     ??3@YAXPEAX@Z @ 0x1800CAD08 (--3@YAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Insert_nohint<std::pair<unsigned int const,std::function<void (bool)>> &,std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *> *>(
        __int64 ***a1,
        __int64 a2,
        __int64 a3,
        unsigned int *a4,
        _QWORD *Block)
{
  _QWORD *v8; // r14
  __int64 **v9; // rdx
  __int64 *v10; // rax
  __int64 *v11; // r9
  char v12; // r8
  unsigned int v13; // ecx
  __int64 *v14; // rbx
  __int64 v15; // rcx
  __int64 result; // rax
  __int64 *v17; // rax
  __int64 *i; // rax
  _QWORD *v19; // rcx
  __int64 v20; // [rsp+20h] [rbp-28h]
  __int64 v21; // [rsp+50h] [rbp+8h] BYREF

  try
  {
    v8 = Block;
    v9 = *a1;
    v10 = (*a1)[1];
    v11 = (__int64 *)*a1;
    v12 = 1;
    if ( !*((_BYTE *)v10 + 25) )
    {
      v13 = *a4;
      do
      {
        v11 = v10;
        v12 = v13 < *((_DWORD *)v10 + 8);
        if ( v13 >= *((_DWORD *)v10 + 8) )
          v10 = (__int64 *)v10[2];
        else
          v10 = (__int64 *)*v10;
      }
      while ( !*((_BYTE *)v10 + 25) );
    }
    v14 = v11;
    if ( v12 )
    {
      if ( v11 == *v9 )
      {
        *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Insert_at<std::pair<unsigned int const,std::function<void (bool)>> &,std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *> *>(
                           a1,
                           &v21,
                           1,
                           v11,
                           v20,
                           Block);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( *((_BYTE *)v11 + 25) )
      {
        v14 = (__int64 *)v11[2];
      }
      else
      {
        v17 = (__int64 *)*v11;
        if ( *(_BYTE *)(*v11 + 25) )
        {
          for ( i = (__int64 *)v11[1]; !*((_BYTE *)i + 25) && v14 == (__int64 *)*i; i = (__int64 *)i[1] )
            v14 = i;
          if ( !*((_BYTE *)v14 + 25) )
            v14 = i;
        }
        else
        {
          do
          {
            v14 = v17;
            v17 = (__int64 *)v17[2];
          }
          while ( !*((_BYTE *)v17 + 25) );
        }
      }
    }
    if ( *((_DWORD *)v14 + 8) >= *a4 )
    {
      v19 = (_QWORD *)Block[12];
      if ( v19 )
      {
        LOBYTE(v9) = v19 != Block + 5;
        (*(void (__fastcall **)(_QWORD *, __int64 **))(*v19 + 32LL))(v19, v9);
        v8[12] = 0LL;
      }
      operator delete(v8);
      *(_QWORD *)a2 = v14;
      *(_BYTE *)(a2 + 8) = 0;
      result = a2;
    }
    else
    {
      *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Insert_at<std::pair<unsigned int const,std::function<void (bool)>> &,std::_Tree_node<std::pair<unsigned int const,std::function<void (bool)>>,void *> *>(
                         a1,
                         &v21,
                         v12,
                         v11,
                         v20,
                         Block);
      *(_BYTE *)(a2 + 8) = 1;
      result = a2;
    }
  }
  catch ( ... )
  {
    std::_Tree<std::_Tmap_traits<unsigned int,std::function<void (bool)>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::function<void (bool)>>>,0>>::_Destroy_if_not_nil(
      v15,
      Block);
    throw;
  }
  return result;
}
