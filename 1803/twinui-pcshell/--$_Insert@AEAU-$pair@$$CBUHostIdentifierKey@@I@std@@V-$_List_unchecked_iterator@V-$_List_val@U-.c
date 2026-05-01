/*
 * XREFs of ??$_Insert@AEAU?$pair@$$CBUHostIdentifierKey@@I@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBUHostIdentifierKey@@I@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@1@@Z @ 0x180072664
 * Callers:
 *     ?RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows@@AEAAJAEAUComponentInfo@12345@I@Z @ 0x18002F190 (-RegisterHostComponentPair@ComponentRelationshipStore@ViewEventHandlers@OneCore@Internal@Windows.c)
 *     ??$_Insert@AEAU?$pair@$$CBUHostIdentifierKey@@I@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBUHostIdentifierKey@@I@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@1@@Z @ 0x180072664 (--$_Insert@AEAU-$pair@$$CBUHostIdentifierKey@@I@std@@V-$_List_unchecked_iterator@V-$_List_val@U-.c)
 * Callees:
 *     ??$_Insert@AEAU?$pair@$$CBUHostIdentifierKey@@I@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBUHostIdentifierKey@@I@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUHostIdentifierKey@@I@std@@@std@@@std@@@1@@Z @ 0x180072664 (--$_Insert@AEAU-$pair@$$CBUHostIdentifierKey@@I@std@@V-$_List_unchecked_iterator@V-$_List_val@U-.c)
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x18008DAB0 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@UHostIdentifierKey@@IV?$_Uhash_compare@UHostIdentifierKey@@U?$hash@UHostIdentifierKey@@@std@@U?$equal_to@UHostIdentifierKey@@@3@@std@@V?$allocator@U?$pair@$$CBUHostIdentifierKey@@I@std@@@3@$00@std@@@std@@IEAAX_K@Z @ 0x18025F548 (-_Init@-$_Hash@V-$_Umap_traits@UHostIdentifierKey@@IV-$_Uhash_compare@UHostIdentifierKey@@U-$has.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::_Insert<std::pair<HostIdentifierKey const,unsigned int> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<HostIdentifierKey const,unsigned int>>>>>(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 *a4)
{
  _DWORD *v5; // r11
  int v7; // edi
  __int64 v8; // rcx
  unsigned __int64 i; // rdx
  __int64 *v10; // rax
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 *v13; // r8
  __int64 *v14; // rcx
  __int64 v15; // rdx
  __int64 *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  float v19; // xmm0_4
  float v20; // xmm2_4
  __int64 result; // rax
  char v22; // dl
  __int64 v23; // r8
  __int64 **v24; // rax
  __int64 *v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // rdi
  _BYTE v28[40]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v29; // [rsp+60h] [rbp+8h] BYREF
  __int64 v30; // [rsp+68h] [rbp+10h]
  __int64 v31; // [rsp+70h] [rbp+18h] BYREF
  __int64 *v32; // [rsp+78h] [rbp+20h]

  v32 = a4;
  v30 = a2;
  v29 = a1;
  v5 = a3;
  try
  {
    v7 = *a3;
    if ( *a3 == 1 )
    {
      LODWORD(v31) = a3[2];
      v8 = std::_Hash_bytes((const unsigned __int8 *)&v31, 4uLL);
    }
    else
    {
      LODWORD(v31) = a3[1];
      v8 = 0xCBF29CE484222325uLL;
      for ( i = 0LL; i < 4; ++i )
        v8 = 0x100000001B3LL * (*((unsigned __int8 *)&v31 + i) ^ (unsigned __int64)v8);
    }
    v10 = *(__int64 **)(a1 + 8);
    v11 = 2 * (v8 & *(_QWORD *)(a1 + 48));
    v12 = *(_QWORD *)(a1 + 24);
    v13 = *(__int64 **)(v12 + 8 * v11);
    if ( v10 != v13 )
    {
      v10 = **(__int64 ***)(v12 + 8 * v11 + 8);
      while ( v10 != v13 )
      {
        v10 = (__int64 *)v10[1];
        v22 = 1;
        if ( v7 == *((_DWORD *)v10 + 4) )
        {
          if ( !v7 && v5[1] == *((_DWORD *)v10 + 5) || (v22 = 1, v7 == 1) && (v22 = 1, v5[2] == *((_DWORD *)v10 + 6)) )
            v22 = 0;
        }
        if ( !v22 )
        {
          v10 = (__int64 *)*v10;
          goto LABEL_44;
        }
      }
    }
  }
  catch ( ... )
  {
    std::list<std::pair<HostIdentifierKey const,unsigned int>>::erase(v29 + 8, &v29, v32);
    throw;
  }
LABEL_44:
  v14 = (__int64 *)*a4;
  if ( v10 != (__int64 *)*a4 )
  {
    *(_QWORD *)a4[1] = v14;
    *(_QWORD *)v14[1] = v10;
    *(_QWORD *)v10[1] = a4;
    v23 = v10[1];
    v10[1] = v14[1];
    v14[1] = a4[1];
    a4[1] = v23;
  }
  v15 = *(_QWORD *)(a1 + 24);
  v16 = *(__int64 **)(v15 + 8 * v11);
  if ( v16 == *(__int64 **)(a1 + 8) )
  {
    *(_QWORD *)(v15 + 8 * v11) = a4;
    *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v11 + 8) = a4;
  }
  else if ( v16 == v10 )
  {
    *(_QWORD *)(v15 + 8 * v11) = a4;
  }
  else
  {
    v24 = *(__int64 ***)(v15 + 8 * v11 + 8);
    v25 = *v24;
    *(_QWORD *)(v15 + 8 * v11 + 8) = *v24;
    if ( v25 != a4 )
      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v11 + 8) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v11 + 8) + 8LL);
  }
  try
  {
    v17 = *(_QWORD *)(a1 + 16);
    v18 = *(_QWORD *)(a1 + 56);
    v19 = (float)(int)v17;
    if ( v17 < 0 )
      v19 = v19 + 1.8446744e19;
    v20 = (float)(int)v18;
    if ( v18 < 0 )
      v20 = v20 + 1.8446744e19;
    if ( (float)(v19 / v20) > *(float *)a1 )
    {
      if ( (unsigned __int64)v18 >= 0x200 )
      {
        if ( (unsigned __int64)v18 < 0xFFFFFFFFFFFFFFFLL )
          v18 *= 2LL;
      }
      else
      {
        v18 *= 8LL;
      }
      std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::_Init(
        a1,
        v18);
      v26 = *(_QWORD **)(a1 + 8);
      if ( (_QWORD *)*v26 != v26 )
      {
        v31 = v26[1];
        do
        {
          v27 = **(_QWORD **)(a1 + 8);
          std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::_Insert<std::pair<HostIdentifierKey const,unsigned int> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<HostIdentifierKey const,unsigned int>>>>>(
            a1,
            v28,
            v27 + 16);
        }
        while ( v27 != v31 );
      }
    }
  }
  catch ( ... )
  {
    std::_Hash<std::_Umap_traits<HostIdentifierKey,unsigned int,std::_Uhash_compare<HostIdentifierKey,std::hash<HostIdentifierKey>,std::equal_to<HostIdentifierKey>>,std::allocator<std::pair<HostIdentifierKey const,unsigned int>>,1>>::erase(
      v29,
      &v31);
    throw;
  }
  result = v30;
  *(_QWORD *)v30 = a4;
  *(_BYTE *)(v30 + 8) = 1;
  return result;
}
