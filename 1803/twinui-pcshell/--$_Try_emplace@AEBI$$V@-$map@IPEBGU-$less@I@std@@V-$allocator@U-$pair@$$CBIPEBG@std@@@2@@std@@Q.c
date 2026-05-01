/*
 * XREFs of ??$_Try_emplace@AEBI$$V@?$map@IPEBGU?$less@I@std@@V?$allocator@U?$pair@$$CBIPEBG@std@@@2@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIPEBG@std@@@std@@@std@@@std@@_N@1@AEBI@Z @ 0x18008B07C
 * Callers:
 *     ?SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXAEBUPoint@Foundation@Windows@@I@Z @ 0x180252AA8 (-SaveFloatingBottomPosition@TabTipAdapterPolicy@KeyboardHosting@@AEAAXAEBUPoint@Foundation@Windo.c)
 * Callees:
 *     ??$_Insert_hint@AEAU?$pair@$$CBIPEBG@std@@PEAU?$_Tree_node@U?$pair@$$CBIPEBG@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@IPEBGU?$less@I@std@@V?$allocator@U?$pair@$$CBIPEBG@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIPEBG@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIPEBG@std@@@std@@@std@@@1@AEAU?$pair@$$CBIPEBG@1@PEAU?$_Tree_node@U?$pair@$$CBIPEBG@std@@PEAX@1@@Z @ 0x1802461A4 (--$_Insert_hint@AEAU-$pair@$$CBIPEBG@std@@PEAU-$_Tree_node@U-$pair@$$CBIPEBG@std@@PEAX@2@@-$_Tre.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBK@2@V?$tuple@$$V@2@@?$_Tree_comp_alloc@V?$_Tmap_traits@KV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBKV?$ComPtr@UIApplicationFrame@@@WRL@Microsoft@@@std@@PEAX@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBK@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1802B5BA4 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBK@2@V-$tuple@$$V@2@@-$_Tree_comp_alloc@V-.c)
 */

__int64 __fastcall std::map<unsigned int,unsigned short const *>::_Try_emplace<unsigned int const &,>(
        __int64 *a1,
        __int64 a2,
        unsigned int *a3)
{
  __int64 *v3; // r9
  __int64 v4; // rdi
  __int64 *v6; // rbx
  __int64 *v7; // rax
  unsigned int v8; // ecx
  __int64 *v9; // r10
  void *v11; // rax
  unsigned int *v12; // [rsp+40h] [rbp+8h] BYREF

  v3 = (__int64 *)*a1;
  v4 = a2;
  v6 = (__int64 *)*a1;
  v7 = *(__int64 **)(*a1 + 8);
  if ( *((_BYTE *)v7 + 25) )
    goto LABEL_13;
  a2 = *a3;
  do
  {
    v8 = *((_DWORD *)v7 + 8);
    v9 = v7;
    if ( v8 < (unsigned int)a2 )
      v7 = (__int64 *)v7[2];
    else
      v7 = (__int64 *)*v7;
    if ( v8 >= (unsigned int)a2 )
      v6 = v9;
  }
  while ( !*((_BYTE *)v7 + 25) );
  if ( v6 == v3 || (unsigned int)a2 < *((_DWORD *)v6 + 8) )
  {
LABEL_13:
    v12 = a3;
    v11 = (void *)std::_Tree_comp_alloc<std::_Tmap_traits<unsigned long,Microsoft::WRL::ComPtr<IApplicationFrame>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>>,0>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned long const &>,std::tuple<>>(
                    a1,
                    a2,
                    &v12);
    std::_Tree<std::_Tmap_traits<unsigned int,unsigned short const *,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,unsigned short const *>>,0>>::_Insert_hint<std::pair<unsigned int const,unsigned short const *> &,std::_Tree_node<std::pair<unsigned int const,unsigned short const *>,void *> *>(
      (int)a1,
      (int)&v12,
      (int)v6,
      v11);
    *(_QWORD *)v4 = v12;
    *(_BYTE *)(v4 + 8) = 1;
  }
  else
  {
    *(_QWORD *)v4 = v6;
    *(_BYTE *)(v4 + 8) = 0;
  }
  return v4;
}
