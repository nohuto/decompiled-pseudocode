/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@$0A@@std@@@std@@QEAA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x1800254A8
 * Callers:
 *     ?ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x1800250F0 (-ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z.c)
 * Callees:
 *     ?erase@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@std@@@std@@@2@@Z @ 0x180025A28 (-erase@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@_ea_180025A28.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x180025AF8 (-_Init@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 *     ?_Freenode@?$_List_buy@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@@std@@QEAAXPEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@PEAX@2@@Z @ 0x180025DC8 (-_Freenode@-$_List_buy@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Hash<std::_Umap_traits<std::wstring,std::unique_ptr<CEndpointVolumeState>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>,0>>::erase(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v4; // r11
  _QWORD *v5; // r8
  __int64 v6; // rcx
  unsigned __int64 i; // rdx
  __int64 v8; // rax
  __int64 v9; // rsi
  _QWORD *v10; // rdi
  __int64 v11; // r14
  _QWORD *v12; // r15
  _QWORD *v13; // rax
  char *v14; // rax
  char *v15; // r8
  __int64 v16; // rdx
  signed __int64 v17; // r8
  int v18; // eax
  _QWORD *v19; // rbx
  _QWORD *v20; // rax
  _QWORD *v21; // rdx
  __int64 v22; // r9
  char *v23; // rdx
  unsigned __int16 v24; // ax
  int v25; // eax
  _QWORD *v26; // rax
  __int64 j; // rsi
  _QWORD **v28; // rax
  _QWORD *v29; // rdx
  _QWORD *v30; // rbx
  _QWORD *v31; // r8
  char v33; // [rsp+50h] [rbp+8h] BYREF

  v4 = a2[2];
  v5 = a2;
  if ( a2[3] >= 8uLL )
    v5 = (_QWORD *)*a2;
  v6 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 2 * v4; ++i )
    v6 = 0x100000001B3LL * (*((unsigned __int8 *)v5 + i) ^ (unsigned __int64)v6);
  v8 = v6 & a1[6];
  v9 = a1[3];
  v10 = *(_QWORD **)(v9 + 16 * v8);
  v11 = 2 * v8;
  v12 = v10;
  while ( 1 )
  {
    if ( v12 == (_QWORD *)a1[1] )
      v13 = (_QWORD *)a1[1];
    else
      v13 = **(_QWORD ***)(v9 + 8 * v11 + 8);
    if ( v10 == v13 )
      goto LABEL_44;
    v6 = (__int64)(v10 + 2);
    v14 = (char *)a2;
    if ( a2[3] >= 8uLL )
      v14 = (char *)*a2;
    v15 = (char *)(v10 + 2);
    if ( v10[5] >= 8uLL )
      v15 = *(char **)v6;
    v16 = v10[4];
    if ( v16 == v4 )
    {
      if ( v16 )
      {
        v17 = v15 - v14;
        while ( 1 )
        {
          v6 = *(unsigned __int16 *)&v14[v17];
          if ( (_WORD)v6 != *(_WORD *)v14 )
            break;
          v14 += 2;
          if ( !--v16 )
            goto LABEL_21;
        }
        v18 = (unsigned __int16)v6 < *(_WORD *)v14 ? -1 : 1;
      }
      else
      {
LABEL_21:
        v18 = 0;
      }
      if ( !v18 )
        break;
    }
    v10 = (_QWORD *)*v10;
  }
  v19 = v10;
  while ( 1 )
  {
    v20 = v12 == (_QWORD *)a1[1] ? (_QWORD *)a1[1] : **(_QWORD ***)(v9 + 8 * v11 + 8);
    if ( v10 == v20 )
      break;
    v6 = (__int64)(v10 + 2);
    if ( v10[5] >= 8uLL )
      v6 = v10[2];
    v21 = a2;
    if ( a2[3] >= 8uLL )
      v21 = (_QWORD *)*a2;
    if ( v4 != v10[4] )
      break;
    v22 = v4;
    if ( v4 )
    {
      v23 = (char *)v21 - v6;
      while ( 1 )
      {
        v24 = *(_WORD *)&v23[v6];
        if ( v24 != *(_WORD *)v6 )
          break;
        v6 += 2LL;
        if ( !--v22 )
          goto LABEL_40;
      }
      v25 = v24 < *(_WORD *)v6 ? -1 : 1;
    }
    else
    {
LABEL_40:
      v25 = 0;
    }
    if ( v25 )
      break;
    v10 = (_QWORD *)*v10;
  }
  if ( v19 == v10 )
  {
LABEL_44:
    v19 = (_QWORD *)a1[1];
    v10 = v19;
  }
  v26 = v19;
  for ( j = 0LL; v26 != v10; v26 = (_QWORD *)*v26 )
    ++j;
  v28 = (_QWORD **)a1[1];
  v29 = *v28;
  if ( v19 == *v28 && v10 == v28 )
  {
    *v28 = v28;
    *(_QWORD *)(a1[1] + 8LL) = a1[1];
    a1[2] = 0LL;
    if ( v29 != (_QWORD *)a1[1] )
    {
      do
      {
        v30 = (_QWORD *)*v29;
        std::_List_buy<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>::_Freenode(v6);
        v29 = v30;
      }
      while ( v30 != (_QWORD *)a1[1] );
    }
    std::_Hash<std::_Umap_traits<std::wstring,std::unique_ptr<CEndpointVolumeState>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>,0>>::_Init(
      a1,
      8LL);
  }
  else
  {
    while ( v19 != v10 )
    {
      v31 = v19;
      v19 = (_QWORD *)*v19;
      std::_Hash<std::_Umap_traits<std::wstring,std::unique_ptr<CEndpointVolumeState>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>,0>>::erase(
        a1,
        &v33,
        v31);
    }
  }
  return j;
}
