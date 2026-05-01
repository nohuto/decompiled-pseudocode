/*
 * XREFs of ??$_Insert@AEAU?$pair@$$CBUHostIdentifierKey@@I@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBUHostIdentifierKey@@I@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@1@@Z @ 0x1801C9024
 * Callers:
 *     ?RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@AEAAJAEAUComponentInfo@12345@I@Z @ 0x1801C4B10 (-RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows.c)
 *     ??$_Insert@AEAU?$pair@$$CBUHostIdentifierKey@@I@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBUHostIdentifierKey@@I@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@1@@Z @ 0x1801C9024 (--$_Insert@AEAU-$pair@$$CBUHostIdentifierKey@@I@std@@V-$_List_unchecked_iterator@V-$_List_val@U-.c)
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@IEAAX_K@Z @ 0x1800E5D9C (-_Init@-$_Hash@V-$_Umap_traits@UHostIdentifierKey@@IV-$_Uhash_compare@UHostIdentifierKey@@U-$has.c)
 *     ??$_Insert@AEAU?$pair@$$CBUHostIdentifierKey@@I@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBUHostIdentifierKey@@I@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@1@@Z @ 0x1801C9024 (--$_Insert@AEAU-$pair@$$CBUHostIdentifierKey@@I@std@@V-$_List_unchecked_iterator@V-$_List_val@U-.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::_Insert<std::pair<HostIdentifierKey const,unsigned int> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<HostIdentifierKey const,unsigned int>>>>>(
        float *a1,
        __int64 a2,
        int *a3,
        __int64 a4)
{
  __int64 v5; // r11
  int v7; // r10d
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  __int64 *v10; // rax
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 *v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  float v21; // xmm0_4
  float v22; // xmm2_4
  _QWORD *v23; // rax
  __int64 v24; // rdi
  _QWORD *iter; // rax
  __int64 v27[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v28[40]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v31; // [rsp+70h] [rbp+18h] BYREF
  __int64 v32; // [rsp+78h] [rbp+20h]

  v32 = a4;
  v27[1] = -2LL;
  v5 = a2;
  try
  {
    v7 = *a3;
    v8 = 0xCBF29CE484222325uLL;
    v9 = 0LL;
    if ( *a3 == 1 )
    {
      LODWORD(v31) = a3[2];
      do
        v8 = 0x100000001B3LL * (*((unsigned __int8 *)&v31 + v9++) ^ (unsigned __int64)v8);
      while ( v9 < 4 );
    }
    else
    {
      LODWORD(v31) = a3[1];
      do
        v8 = 0x100000001B3LL * (*((unsigned __int8 *)&v31 + v9++) ^ (unsigned __int64)v8);
      while ( v9 < 4 );
    }
    v10 = (__int64 *)*((_QWORD *)a1 + 1);
    v11 = 2 * (v8 & *((_QWORD *)a1 + 6));
    v12 = *((_QWORD *)a1 + 3);
    if ( v10 != *(__int64 **)(v12 + 16 * (v8 & *((_QWORD *)a1 + 6))) )
    {
      v10 = **(__int64 ***)(v12 + 16 * (v8 & *((_QWORD *)a1 + 6)) + 8);
      while ( v10 != *(__int64 **)(v12 + 16 * (v8 & *((_QWORD *)a1 + 6))) )
      {
        v10 = (__int64 *)v10[1];
        if ( v7 == *((_DWORD *)v10 + 4)
          && (!v7 && a3[1] == *((_DWORD *)v10 + 5) || v7 == 1 && a3[2] == *((_DWORD *)v10 + 6)) )
        {
          v10 = (__int64 *)*v10;
          goto LABEL_41;
        }
      }
    }
  }
  catch ( ... )
  {
    std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::_Destroy_if_not_nil(
      a1,
      v32);
    throw;
  }
LABEL_41:
  v27[0] = a4;
  v13 = *(_QWORD *)a4;
  if ( v10 != *(__int64 **)a4 )
  {
    **(_QWORD **)(a4 + 8) = v13;
    **(_QWORD **)(v13 + 8) = v10;
    *(_QWORD *)v10[1] = a4;
    v14 = v10[1];
    v10[1] = *(_QWORD *)(v13 + 8);
    *(_QWORD *)(v13 + 8) = *(_QWORD *)(a4 + 8);
    *(_QWORD *)(a4 + 8) = v14;
  }
  v15 = *((_QWORD *)a1 + 3);
  v16 = *(_QWORD *)(v15 + 8 * v11);
  if ( v16 == *((_QWORD *)a1 + 1) )
  {
    *(_QWORD *)(v15 + 8 * v11) = a4;
    *(_QWORD *)(*((_QWORD *)a1 + 3) + 8 * v11 + 8) = a4;
  }
  else if ( (__int64 *)v16 == v10 )
  {
    *(_QWORD *)(v15 + 8 * v11) = a4;
  }
  else
  {
    v17 = *(__int64 **)(v15 + 8 * v11 + 8);
    v16 = *v17;
    *(_QWORD *)(v15 + 8 * v11 + 8) = *v17;
    if ( v16 != a4 )
    {
      v18 = *((_QWORD *)a1 + 3);
      v16 = *(_QWORD *)(*(_QWORD *)(v18 + 8 * v11 + 8) + 8LL);
      *(_QWORD *)(v18 + 8 * v11 + 8) = v16;
    }
  }
  try
  {
    v19 = *((_QWORD *)a1 + 2);
    v20 = *((_QWORD *)a1 + 7);
    v21 = (float)(int)v19;
    if ( v19 < 0 )
      v21 = v21 + 1.8446744e19;
    v22 = (float)(int)v20;
    if ( v20 < 0 )
      v22 = v22 + 1.8446744e19;
    if ( (float)(v21 / v22) > *a1 )
    {
      if ( (unsigned __int64)v20 >= 0x200 )
      {
        if ( (unsigned __int64)v20 < 0xFFFFFFFFFFFFFFFLL )
          v20 *= 2LL;
      }
      else
      {
        v20 *= 8LL;
      }
      std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::_Init(
        a1,
        v20);
      v23 = (_QWORD *)*((_QWORD *)a1 + 1);
      if ( (_QWORD *)*v23 != v23 )
      {
        v31 = v23[1];
        do
        {
          v24 = **((_QWORD **)a1 + 1);
          std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::_Insert<std::pair<HostIdentifierKey const,unsigned int> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<HostIdentifierKey const,unsigned int>>>>>(
            a1,
            v28,
            v24 + 16);
        }
        while ( v24 != v31 );
      }
      v5 = a2;
    }
  }
  catch ( ... )
  {
    iter = std::_Hash<std::_Umap_traits<Microsoft::WRL::ComPtr<IImmersiveMonitor>,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>,std::_Uhash_compare<Microsoft::WRL::ComPtr<IImmersiveMonitor>,std::hash<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,std::equal_to<Microsoft::WRL::ComPtr<IImmersiveMonitor>>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>,0>>::_Make_iter(
             v16,
             &v31,
             v27[0]);
    std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::erase(
      a1,
      v27,
      (_DWORD *)*iter);
    throw;
  }
  *(_QWORD *)v5 = a4;
  *(_BYTE *)(v5 + 8) = 1;
  return v5;
}
