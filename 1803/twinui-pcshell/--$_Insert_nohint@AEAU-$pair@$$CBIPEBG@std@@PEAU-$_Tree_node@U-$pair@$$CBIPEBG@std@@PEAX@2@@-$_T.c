/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@$$CBIPEBG@std@@PEAU?$_Tree_node@U?$pair@$$CBIPEBG@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IPEBGU?$less@I@std@@V?$allocator@U?$pair@$$CBIPEBG@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIPEBG@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBIPEBG@1@PEAU?$_Tree_node@U?$pair@$$CBIPEBG@std@@PEAX@1@@Z @ 0x180246420
 * Callers:
 *     ??$_Insert_hint@AEAU?$pair@$$CBIPEBG@std@@PEAU?$_Tree_node@U?$pair@$$CBIPEBG@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IPEBGU?$less@I@std@@V?$allocator@U?$pair@$$CBIPEBG@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIPEBG@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIPEBG@std@@@std@@@std@@@1@AEAU?$pair@$$CBIPEBG@1@PEAU?$_Tree_node@U?$pair@$$CBIPEBG@std@@PEAX@1@@Z @ 0x1802461A4 (--$_Insert_hint@AEAU-$pair@$$CBIPEBG@std@@PEAU-$_Tree_node@U-$pair@$$CBIPEBG@std@@PEAX@2@@-$_Tre.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBIPEBG@std@@PEAU?$_Tree_node@U?$pair@$$CBIPEBG@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IPEBGU?$less@I@std@@V?$allocator@U?$pair@$$CBIPEBG@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIPEBG@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBIPEBG@std@@PEAX@1@AEAU?$pair@$$CBIPEBG@1@1@Z @ 0x180250A0C (--$_Insert_at@AEAU-$pair@$$CBIPEBG@std@@PEAU-$_Tree_node@U-$pair@$$CBIPEBG@std@@PEAX@2@@-$_Tree@.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned int,unsigned short const *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short const *>>,0>>::_Insert_nohint<std::pair<unsigned int const,unsigned short const *> &,std::_Tree_node<std::pair<unsigned int const,unsigned short const *>,void *> *>(
        __int64 **a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        void *a5)
{
  int v7; // esi
  __int64 *v8; // rax
  __int64 *v9; // r9
  char v10; // r10
  __int64 *v11; // rbx
  __int64 result; // rax
  __int64 *v13; // rax
  __int64 *v14; // rax
  __int64 *v15; // rcx
  int v16; // [rsp+20h] [rbp-28h]
  int v17; // [rsp+50h] [rbp+8h] BYREF

  v7 = (int)a1;
  try
  {
    v8 = (__int64 *)(*a1)[1];
    v9 = *a1;
    v10 = 1;
    while ( !*((_BYTE *)v8 + 25) )
    {
      v9 = v8;
      if ( *a4 >= *((_DWORD *)v8 + 8) )
      {
        v10 = 0;
        v8 = (__int64 *)v8[2];
      }
      else
      {
        v10 = 1;
        v8 = (__int64 *)*v8;
      }
    }
    v11 = v9;
    if ( v10 )
    {
      if ( v9 == (__int64 *)**a1 )
      {
        *(_QWORD *)a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned int,unsigned short const *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short const *>>,0>>::_Insert_at<std::pair<unsigned int const,unsigned short const *> &,std::_Tree_node<std::pair<unsigned int const,unsigned short const *>,void *> *>(
                                     (int)a1,
                                     (int)&v17,
                                     1,
                                     (int)v9,
                                     v16,
                                     a5);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( *((_BYTE *)v9 + 25) )
      {
        v11 = (__int64 *)v9[2];
      }
      else
      {
        v13 = (__int64 *)*v9;
        if ( *(_BYTE *)(*v9 + 25) )
        {
          v14 = (__int64 *)v9[1];
          if ( !*((_BYTE *)v14 + 25) )
          {
            v15 = v9;
            do
            {
              if ( v15 != (__int64 *)*v14 )
                break;
              v11 = v14;
              v14 = (__int64 *)v14[1];
              v15 = v11;
            }
            while ( !*((_BYTE *)v14 + 25) );
          }
          if ( !*((_BYTE *)v11 + 25) )
            v11 = v14;
        }
        else
        {
          do
          {
            v11 = v13;
            v13 = (__int64 *)v13[2];
          }
          while ( !*((_BYTE *)v13 + 25) );
        }
      }
    }
    if ( *((_DWORD *)v11 + 8) >= *a4 )
    {
      std::_Deallocate((char *)a5, 1uLL, 0x30uLL);
      *(_QWORD *)a2 = v11;
      *(_BYTE *)(a2 + 8) = 0;
    }
    else
    {
      *(_QWORD *)a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned int,unsigned short const *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short const *>>,0>>::_Insert_at<std::pair<unsigned int const,unsigned short const *> &,std::_Tree_node<std::pair<unsigned int const,unsigned short const *>,void *> *>(
                                   v7,
                                   (int)&v17,
                                   v10,
                                   (int)v9,
                                   v16,
                                   a5);
      *(_BYTE *)(a2 + 8) = 1;
    }
    result = a2;
  }
  catch ( ... )
  {
    std::_Deallocate((char *)a5, 1uLL, 0x30uLL);
    throw;
  }
  return result;
}
