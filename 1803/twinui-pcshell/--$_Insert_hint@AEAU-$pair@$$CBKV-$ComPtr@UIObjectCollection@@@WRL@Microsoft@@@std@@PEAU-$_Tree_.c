/*
 * XREFs of ??$_Insert_hint@AEAU?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@1@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x1802B5C08
 * Callers:
 *     wil::ResultFromException__lambda_7a5168388c52e35df9f99ba32a5252ab___ @ 0x180026024 (wil--ResultFromException__lambda_7a5168388c52e35df9f99ba32a5252ab___.c)
 *     _lambda_46851bff5b4673daf3d019eee80c73b2_::operator() @ 0x180088554 (_lambda_46851bff5b4673daf3d019eee80c73b2_--operator().c)
 *     _lambda_69f1d5bd17a52b1cfb35c35a1e227214_::operator() @ 0x1802B60C0 (_lambda_69f1d5bd17a52b1cfb35c35a1e227214_--operator().c)
 *     ??$_Try_emplace@AEBK$$V@?$map@KV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@5@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEBK@Z @ 0x1802B84D0 (--$_Try_emplace@AEBK$$V@-$map@KV-$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U-$less@K@std@@V-$a.c)
 * Callees:
 *     ?_Min@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHMONITOR__@@N@std@@@std@@@std@@SAPEAU?$_Tree_node@U?$pair@QEAUHMONITOR__@@N@std@@PEAX@2@PEAU32@@Z @ 0x180253EA0 (-_Min@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAUHMONITOR__@@N@std@@@std@@@std@@SAPEAU-$_Tree.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@1@AEAU?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@1@1@Z @ 0x1802B81E0 (--$_Insert_at@AEAU-$pair@$$CBKV-$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAU-$_Tree_no.c)
 *     ??$_Insert_nohint@AEAU?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@1@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x1802B8378 (--$_Insert_nohint@AEAU-$pair@$$CBKV-$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAU-$_Tre.c)
 */

// Hidden C++ exception states: #try_helpers=1
_QWORD *__fastcall std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>,0>>::_Insert_hint<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>> &,std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>,void *> *>(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3,
        unsigned int *a4,
        __int64 a5)
{
  int v7; // r11d
  __int64 **v8; // r10
  int v10; // r9d
  __int64 *v11; // r9
  unsigned int v12; // edi
  bool v13; // cf
  __int64 *v14; // rax
  __int64 *v15; // r9
  __int64 *j; // rax
  __int64 *i; // rcx
  int v18; // r9d
  __int64 *v19; // rax
  __int64 v20; // rcx
  __int64 k; // rcx
  char v22; // [rsp+38h] [rbp-20h] BYREF

  v7 = a1;
  v8 = *(__int64 ***)a1;
  if ( !*(_QWORD *)(a1 + 8) )
  {
    LOBYTE(a3) = 1;
    std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::_Insert_at<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>> &,std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>,void *> *>(
      a1,
      (_DWORD)a2,
      (_DWORD)a3,
      (_DWORD)v8);
    return a2;
  }
  if ( a3 == *v8 )
  {
    if ( *a4 < *((_DWORD *)a3 + 8) )
    {
      v10 = (int)a3;
      LOBYTE(a3) = 1;
      std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::_Insert_at<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>> &,std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>,void *> *>(
        a1,
        (_DWORD)a2,
        (_DWORD)a3,
        v10);
      return a2;
    }
    goto LABEL_44;
  }
  if ( a3 == (__int64 *)v8 )
  {
    v11 = v8[2];
    if ( *((_DWORD *)v11 + 8) < *a4 )
    {
      std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::_Insert_at<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>> &,std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>,void *> *>(
        a1,
        (_DWORD)a2,
        0,
        (_DWORD)v11);
      return a2;
    }
    goto LABEL_44;
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
        std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::_Insert_at<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>> &,std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>,void *> *>(
          v7,
          (_DWORD)a2,
          0,
          (_DWORD)v15);
      }
      else
      {
        v18 = (int)a3;
        LOBYTE(a3) = 1;
        std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::_Insert_at<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>> &,std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>,void *> *>(
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
    goto LABEL_44;
  v19 = a3;
  if ( !*((_BYTE *)a3 + 25) )
  {
    v20 = a3[2];
    if ( *(_BYTE *)(v20 + 25) )
    {
      for ( k = a3[1]; !*(_BYTE *)(k + 25) && v19 == *(__int64 **)(k + 16); k = *(_QWORD *)(k + 8) )
        v19 = (__int64 *)k;
      v19 = (__int64 *)k;
    }
    else
    {
      v19 = std::_Tree_val<std::_Tree_simple_types<std::pair<HMONITOR__ * const,double>>>::_Min((_QWORD *)v20);
    }
  }
  if ( v19 != (__int64 *)v8 && v12 >= *((_DWORD *)v19 + 8) )
  {
LABEL_44:
    *a2 = *(_QWORD *)std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>,0>>::_Insert_nohint<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>> &,std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>,void *> *>(
                       v7,
                       (unsigned int)&v22,
                       (_DWORD)a3,
                       (_DWORD)a4,
                       a5);
    return a2;
  }
  if ( *(_BYTE *)(a3[2] + 25) )
  {
    std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::_Insert_at<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>> &,std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>,void *> *>(
      v7,
      (_DWORD)a2,
      0,
      (_DWORD)a3);
  }
  else
  {
    LOBYTE(a3) = 1;
    std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::_Insert_at<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>> &,std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>,void *> *>(
      v7,
      (_DWORD)a2,
      (_DWORD)a3,
      (_DWORD)v19);
  }
  return a2;
}
