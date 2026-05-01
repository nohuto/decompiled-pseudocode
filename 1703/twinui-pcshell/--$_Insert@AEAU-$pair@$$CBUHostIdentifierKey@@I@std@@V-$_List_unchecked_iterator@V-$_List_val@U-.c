/*
 * XREFs of ??$_Insert@AEAU?$pair@$$CBUHostIdentifierKey@@I@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBUHostIdentifierKey@@I@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@1@@Z @ 0x18017C25C
 * Callers:
 *     ?RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@UEAAJUtagHostIdentifier@2345@IIPEAUIInspectable@@@Z @ 0x1801789F0 (-RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows.c)
 *     ??$_Insert@AEAU?$pair@$$CBUHostIdentifierKey@@I@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBUHostIdentifierKey@@I@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@1@@Z @ 0x18017C25C (--$_Insert@AEAU-$pair@$$CBUHostIdentifierKey@@I@std@@V-$_List_unchecked_iterator@V-$_List_val@U-.c)
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@IEAAX_K@Z @ 0x1800FDB68 (-_Init@-$_Hash@V-$_Umap_traits@UHostIdentifierKey@@IV-$_Uhash_compare@UHostIdentifierKey@@U-$has.c)
 *     ??$_Insert@AEAU?$pair@$$CBUHostIdentifierKey@@I@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBUHostIdentifierKey@@I@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@1@@Z @ 0x18017C25C (--$_Insert@AEAU-$pair@$$CBUHostIdentifierKey@@I@std@@V-$_List_unchecked_iterator@V-$_List_val@U-.c)
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
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 *v12; // rcx
  __int64 *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  float v22; // xmm0_4
  float v23; // xmm2_4
  _QWORD *v24; // rax
  __int64 v25; // rdi
  char **iter; // rax
  __int64 v28[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v29[40]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v32; // [rsp+70h] [rbp+18h] BYREF
  __int64 v33; // [rsp+78h] [rbp+20h]

  v33 = a4;
  v28[1] = -2LL;
  v5 = a2;
  try
  {
    v7 = *a3;
    v8 = 0xCBF29CE484222325uLL;
    v9 = 0LL;
    if ( *a3 == 1 )
    {
      LODWORD(v32) = a3[2];
      do
        v8 = 0x100000001B3LL * (*((unsigned __int8 *)&v32 + v9++) ^ (unsigned __int64)v8);
      while ( v9 < 4 );
    }
    else
    {
      LODWORD(v32) = a3[1];
      do
        v8 = 0x100000001B3LL * (*((unsigned __int8 *)&v32 + v9++) ^ (unsigned __int64)v8);
      while ( v9 < 4 );
    }
    v10 = 2 * (v8 & *((_QWORD *)a1 + 6));
    v11 = *((_QWORD *)a1 + 3);
    v12 = *(__int64 **)(v11 + 16 * (v8 & *((_QWORD *)a1 + 6)));
    if ( v12 == *((__int64 **)a1 + 1) )
      v13 = (__int64 *)*((_QWORD *)a1 + 1);
    else
      v13 = **(__int64 ***)(v11 + 8 * v10 + 8);
    while ( v13 != v12 )
    {
      v13 = (__int64 *)v13[1];
      if ( v7 == *((_DWORD *)v13 + 4)
        && (!v7 && a3[1] == *((_DWORD *)v13 + 5) || v7 == 1 && a3[2] == *((_DWORD *)v13 + 6)) )
      {
        v13 = (__int64 *)*v13;
        goto LABEL_42;
      }
    }
  }
  catch ( ... )
  {
    std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::_Destroy_if_not_nil(
      a1,
      v33);
    throw;
  }
LABEL_42:
  v28[0] = a4;
  v14 = *(_QWORD *)a4;
  if ( v13 != *(__int64 **)a4 )
  {
    **(_QWORD **)(a4 + 8) = v14;
    **(_QWORD **)(v14 + 8) = v13;
    *(_QWORD *)v13[1] = a4;
    v15 = v13[1];
    v13[1] = *(_QWORD *)(v14 + 8);
    *(_QWORD *)(v14 + 8) = *(_QWORD *)(a4 + 8);
    *(_QWORD *)(a4 + 8) = v15;
  }
  v16 = *((_QWORD *)a1 + 3);
  v17 = *(_QWORD *)(v16 + 8 * v10);
  if ( v17 == *((_QWORD *)a1 + 1) )
  {
    *(_QWORD *)(v16 + 8 * v10) = a4;
    *(_QWORD *)(*((_QWORD *)a1 + 3) + 8 * v10 + 8) = a4;
  }
  else if ( (__int64 *)v17 == v13 )
  {
    *(_QWORD *)(v16 + 8 * v10) = a4;
  }
  else
  {
    v18 = *(__int64 **)(v16 + 8 * v10 + 8);
    v17 = *v18;
    *(_QWORD *)(v16 + 8 * v10 + 8) = *v18;
    if ( v17 != a4 )
    {
      v19 = *((_QWORD *)a1 + 3);
      v17 = *(_QWORD *)(*(_QWORD *)(v19 + 8 * v10 + 8) + 8LL);
      *(_QWORD *)(v19 + 8 * v10 + 8) = v17;
    }
  }
  try
  {
    v20 = *((_QWORD *)a1 + 2);
    v21 = *((_QWORD *)a1 + 7);
    v22 = (float)(int)v20;
    if ( v20 < 0 )
      v22 = v22 + 1.8446744e19;
    v23 = (float)(int)v21;
    if ( v21 < 0 )
      v23 = v23 + 1.8446744e19;
    if ( (float)(v22 / v23) > *a1 )
    {
      if ( (unsigned __int64)v21 >= 0x200 )
      {
        if ( (unsigned __int64)v21 < 0xFFFFFFFFFFFFFFFLL )
          v21 *= 2LL;
      }
      else
      {
        v21 *= 8LL;
      }
      std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::_Init(
        a1,
        v21);
      v24 = (_QWORD *)*((_QWORD *)a1 + 1);
      if ( (_QWORD *)*v24 != v24 )
      {
        v32 = v24[1];
        do
        {
          v25 = **((_QWORD **)a1 + 1);
          std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::_Insert<std::pair<HostIdentifierKey const,unsigned int> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<HostIdentifierKey const,unsigned int>>>>>(
            a1,
            v29,
            v25 + 16,
            v25);
        }
        while ( v25 != v32 );
      }
      v5 = a2;
    }
  }
  catch ( ... )
  {
    iter = (char **)std::_Hash<std::_Umap_traits<Microsoft::WRL::ComPtr<IImmersiveMonitor>,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>,std::_Uhash_compare<Microsoft::WRL::ComPtr<IImmersiveMonitor>,std::hash<Microsoft::WRL::ComPtr<IImmersiveMonitor>>,std::equal_to<Microsoft::WRL::ComPtr<IImmersiveMonitor>>>,std::allocator<std::pair<Microsoft::WRL::ComPtr<IImmersiveMonitor> const,Microsoft::WRL::ComPtr<IXamlTaskbarProxyInternal>>>,0>>::_Make_iter(
                      v17,
                      &v32,
                      v28[0]);
    std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::erase(
      a1,
      v28,
      *iter);
    throw;
  }
  *(_QWORD *)v5 = a4;
  *(_BYTE *)(v5 + 8) = 1;
  return v5;
}
