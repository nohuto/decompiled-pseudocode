/*
 * XREFs of _lambda_69f1d5bd17a52b1cfb35c35a1e227214_::operator() @ 0x1802B60C0
 * Callers:
 *     wil::ResultFromException__lambda_69f1d5bd17a52b1cfb35c35a1e227214___ @ 0x1802B5B60 (wil--ResultFromException__lambda_69f1d5bd17a52b1cfb35c35a1e227214___.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@KV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1802B5BA4 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_Tree_comp_alloc@V-.c)
 *     ??$_Insert_hint@AEAU?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@@std@@@std@@@1@AEAU?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@1@PEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAX@1@@Z @ 0x1802B5C08 (--$_Insert_hint@AEAU-$pair@$$CBKV-$ComPtr@UIObjectCollection@@@WRL@Microsoft@@@std@@PEAU-$_Tree_.c)
 */

__int64 __fastcall lambda_69f1d5bd17a52b1cfb35c35a1e227214_::operator()(unsigned int **a1, __int64 a2)
{
  unsigned int *v2; // rsi
  unsigned int *v4; // r9
  __int64 *v5; // rcx
  __int64 *v6; // rbx
  __int64 *v7; // rax
  unsigned int v8; // r8d
  __int64 *v9; // r10
  char *v10; // rax
  __int64 v11; // r14
  __int64 **v12; // rsi
  __int64 *v13; // rbx
  __int64 *v14; // rax
  unsigned int v15; // r8d
  __int64 *v16; // r10
  char *v17; // rax
  unsigned int *v19; // [rsp+40h] [rbp+8h] BYREF

  v2 = *a1;
  v4 = a1[1];
  v5 = (__int64 *)*((_QWORD *)*a1 + 17);
  v6 = v5;
  v7 = (__int64 *)v5[1];
  if ( *((_BYTE *)v7 + 25) )
    goto LABEL_11;
  a2 = *v4;
  do
  {
    v8 = *((_DWORD *)v7 + 8);
    v9 = v7;
    if ( v8 >= (unsigned int)a2 )
      v7 = (__int64 *)*v7;
    else
      v7 = (__int64 *)v7[2];
    if ( v8 >= (unsigned int)a2 )
      v6 = v9;
  }
  while ( !*((_BYTE *)v7 + 25) );
  if ( v6 == v5 || (unsigned int)a2 < *((_DWORD *)v6 + 8) )
  {
LABEL_11:
    v19 = v4;
    v10 = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
            (_QWORD *)v2 + 17,
            a2,
            &v19);
    std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>,0>>::_Insert_hint<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>> &,std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>,void *> *>(
      (__int64)(v2 + 34),
      &v19,
      v6,
      (unsigned int *)v10 + 8,
      (__int64)v10);
    v6 = (__int64 *)v19;
  }
  if ( v6[5] )
  {
    v11 = *((_QWORD *)*a1 + 16);
    v12 = (__int64 **)(*a1 + 34);
    v13 = *v12;
    v14 = (__int64 *)(*v12)[1];
    if ( *((_BYTE *)v14 + 25) )
      goto LABEL_23;
    a2 = *a1[1];
    do
    {
      v15 = *((_DWORD *)v14 + 8);
      v16 = v14;
      if ( v15 >= (unsigned int)a2 )
        v14 = (__int64 *)*v14;
      else
        v14 = (__int64 *)v14[2];
      if ( v15 >= (unsigned int)a2 )
        v13 = v16;
    }
    while ( !*((_BYTE *)v14 + 25) );
    if ( v13 == *v12 || (unsigned int)a2 < *((_DWORD *)v13 + 8) )
    {
LABEL_23:
      v19 = a1[1];
      v17 = std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
              v12,
              a2,
              &v19);
      std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IObjectCollection>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>>,0>>::_Insert_hint<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>> &,std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IObjectCollection>>,void *> *>(
        (__int64)v12,
        &v19,
        v13,
        (unsigned int *)v17 + 8,
        (__int64)v17);
      v13 = (__int64 *)v19;
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 32LL))(v11, v13[5]);
  }
  return std::_Tree<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::erase(
           *a1 + 34,
           a1[1]);
}
