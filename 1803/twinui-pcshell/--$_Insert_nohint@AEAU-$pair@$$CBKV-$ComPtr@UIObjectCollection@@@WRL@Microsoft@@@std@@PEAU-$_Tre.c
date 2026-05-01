/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@1@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x1802B8378
 * Callers:
 *     ??$_Insert_hint@AEAU?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@1@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x1802B5C08 (--$_Insert_hint@AEAU-$pair@$$CBKV-$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAU-$_Tree_.c)
 * Callees:
 *     ?_Destroy_if_node@?$_Tree@V?$_Tmap_traits@KV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@2@@Z @ 0x1802B7788 (-_Destroy_if_node@-$_Tree@V-$_Tmap_traits@KV-$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U-$less.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@1@AEAU?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@1@1@Z @ 0x1802B81E0 (--$_Insert_at@AEAU-$pair@$$CBKV-$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAU-$_Tree_no.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>,0>>::_Insert_nohint<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>> &,std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>,void *> *>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4,
        __int64 a5)
{
  _QWORD *v7; // rsi
  __int64 *v8; // rax
  __int64 v9; // r9
  char v10; // r10
  __int64 v11; // rbx
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // [rsp+20h] [rbp-28h]
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF

  v7 = a1;
  try
  {
    v8 = *(__int64 **)(*a1 + 8LL);
    v9 = *a1;
    v10 = 1;
    while ( !*((_BYTE *)v8 + 25) )
    {
      v9 = (__int64)v8;
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
      if ( v9 == *(_QWORD *)*a1 )
      {
        *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::_Insert_at<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>> &,std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>,void *> *>(
                           a1,
                           &v17,
                           1,
                           (__int64 *)v9,
                           v16,
                           a5);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( *(_BYTE *)(v9 + 25) )
      {
        v11 = *(_QWORD *)(v9 + 16);
      }
      else
      {
        v14 = *(_QWORD *)v9;
        if ( *(_BYTE *)(*(_QWORD *)v9 + 25LL) )
        {
          v15 = *(_QWORD *)(v9 + 8);
          if ( !*(_BYTE *)(v15 + 25) )
          {
            a1 = (_QWORD *)v9;
            do
            {
              if ( a1 != *(_QWORD **)v15 )
                break;
              v11 = v15;
              v15 = *(_QWORD *)(v15 + 8);
              a1 = (_QWORD *)v11;
            }
            while ( !*(_BYTE *)(v15 + 25) );
          }
          if ( !*(_BYTE *)(v11 + 25) )
            v11 = v15;
        }
        else
        {
          do
          {
            v11 = v14;
            v14 = *(_QWORD *)(v14 + 16);
          }
          while ( !*(_BYTE *)(v14 + 25) );
        }
      }
    }
    if ( *(_DWORD *)(v11 + 32) >= *a4 )
    {
      std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>,0>>::_Destroy_if_node(
        (__int64)a1,
        a5);
      *(_QWORD *)a2 = v11;
      *(_BYTE *)(a2 + 8) = 0;
    }
    else
    {
      *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::_Insert_at<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>> &,std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>,void *> *>(
                         v7,
                         &v17,
                         v10,
                         (__int64 *)v9,
                         v16,
                         a5);
      *(_BYTE *)(a2 + 8) = 1;
    }
    result = a2;
  }
  catch ( ... )
  {
    std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>,0>>::_Destroy_if_node(
      v12,
      a5);
    throw;
  }
  return result;
}
