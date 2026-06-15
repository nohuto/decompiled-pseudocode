/*
 * XREFs of ?erase@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@$0A@@std@@@std@@QEAA_KAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@2@@Z @ 0x18002E1E8
 * Callers:
 *     ?ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z @ 0x18002DE20 (-ReleaseEndpointVolumeReference@CEndpointVolumeStateManager@@UEAAJPEBGAEA_N1AEAM11@Z.c)
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x180019204 (-_Init@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V-$.c)
 *     ?erase@?$_Hash@V?$_Umap_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@V?$_Uhash_compare@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@std@@@std@@@2@@Z @ 0x18002E6C8 (-erase@-$_Hash@V-$_Umap_traits@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@_ea_18002E6C8.c)
 *     ?_Freenode@?$_List_buy@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@@2@@std@@QEAAXPEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@PEAX@2@@Z @ 0x18002E798 (-_Freenode@-$_List_buy@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::_Hash<std::_Umap_traits<std::wstring,std::unique_ptr<CEndpointVolumeState>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>,0>>::erase(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 v4; // r14
  __int64 v5; // r9
  unsigned __int64 v6; // rcx
  __int64 i; // r8
  __int64 v8; // r15
  _QWORD *v9; // rbx
  __int64 v10; // r12
  __int64 v11; // rbp
  _QWORD *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // eax
  _QWORD *v16; // rax
  _QWORD *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // r11
  unsigned __int16 v20; // cx
  _QWORD *v21; // rax
  __int64 j; // rbp
  _QWORD **v23; // rax
  _QWORD *v24; // rdx
  _QWORD *v25; // rbx
  _QWORD *v26; // r8
  __int64 v28; // [rsp+20h] [rbp-38h]
  char v29; // [rsp+60h] [rbp+8h] BYREF

  v28 = -2LL;
  v4 = a2[2];
  v5 = (__int64)a2;
  if ( (unsigned __int64)a2[3] >= 8 )
    v5 = *a2;
  v6 = 0LL;
  for ( i = 0xCBF29CE484222325uLL; v6 < 2 * v4; ++v6 )
    i = 0x100000001B3LL * (*(unsigned __int8 *)(v6 + v5) ^ (unsigned __int64)i);
  v8 = a1[3];
  v9 = *(_QWORD **)(v8 + 16 * (i & a1[6]));
  v10 = 2 * (i & a1[6]);
  v11 = a1[1];
  while ( 1 )
  {
    if ( *(_QWORD *)(v8 + 8 * v10) == v11 )
      v12 = (_QWORD *)a1[1];
    else
      v12 = **(_QWORD ***)(v8 + 8 * v10 + 8);
    if ( v9 == v12 )
      goto LABEL_42;
    v6 = (unsigned __int64)(v9 + 2);
    v13 = (__int64)a2;
    if ( (unsigned __int64)a2[3] >= 8 )
      v13 = *a2;
    i = (__int64)(v9 + 2);
    if ( v9[5] >= 8uLL )
      i = *(_QWORD *)v6;
    v14 = v9[4];
    if ( v14 == v4 )
    {
      if ( v14 )
      {
        i -= v13;
        while ( 1 )
        {
          v6 = *(unsigned __int16 *)(i + v13);
          v5 = *(unsigned __int16 *)v13;
          if ( (_WORD)v6 != (_WORD)v5 )
            break;
          v13 += 2LL;
          if ( !--v14 )
            goto LABEL_19;
        }
        v15 = (unsigned __int16)v6 < (unsigned __int16)v5 ? -1 : 1;
      }
      else
      {
LABEL_19:
        v15 = 0;
      }
      if ( !v15 )
        break;
    }
    v9 = (_QWORD *)*v9;
  }
  v16 = v9;
  v17 = v9;
  while ( 1 )
  {
    v6 = *(_QWORD *)(v8 + 8 * v10) == v11 ? a1[1] : **(_QWORD **)(v8 + 8 * v10 + 8);
    if ( v9 == (_QWORD *)v6 )
      break;
    v6 = (unsigned __int64)(v9 + 2);
    v18 = (__int64)(v9 + 2);
    if ( v9[5] >= 8uLL )
      v18 = *(_QWORD *)v6;
    i = (__int64)a2;
    if ( (unsigned __int64)a2[3] >= 8 )
      i = *a2;
    if ( v4 != v9[4] )
      break;
    v19 = v4;
    if ( v4 )
    {
      i -= v18;
      while ( 1 )
      {
        v20 = *(_WORD *)(v18 + i);
        v5 = *(unsigned __int16 *)v18;
        if ( v20 != (_WORD)v5 )
          break;
        v18 += 2LL;
        if ( !--v19 )
          goto LABEL_37;
      }
      v6 = v20 < (unsigned __int16)v5 ? -1 : 1;
    }
    else
    {
LABEL_37:
      v6 = 0LL;
    }
    if ( (_DWORD)v6 )
      break;
    v9 = (_QWORD *)*v9;
  }
  if ( v16 == v9 )
  {
LABEL_42:
    v17 = (_QWORD *)a1[1];
    v9 = v17;
  }
  v21 = v17;
  for ( j = 0LL; v21 != v9; v21 = (_QWORD *)*v21 )
    ++j;
  v23 = (_QWORD **)a1[1];
  v24 = *v23;
  if ( v17 == *v23 && v9 == v23 )
  {
    *v23 = v23;
    *(_QWORD *)(a1[1] + 8LL) = a1[1];
    a1[2] = 0LL;
    if ( v24 != (_QWORD *)a1[1] )
    {
      do
      {
        v25 = (_QWORD *)*v24;
        std::_List_buy<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>::_Freenode(
          v6,
          v24,
          i,
          v5,
          v28);
        v24 = v25;
      }
      while ( v25 != (_QWORD *)a1[1] );
    }
    std::_Hash<std::_Umap_traits<std::wstring,std::unique_ptr<CEndpointVolumeState>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>,0>>::_Init(
      a1,
      8LL);
  }
  else
  {
    while ( v17 != v9 )
    {
      v26 = v17;
      v17 = (_QWORD *)*v17;
      std::_Hash<std::_Umap_traits<std::wstring,std::unique_ptr<CEndpointVolumeState>,std::_Uhash_compare<std::wstring,std::hash<std::wstring>,std::equal_to<std::wstring>>,std::allocator<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>>,0>>::erase(
        a1,
        &v29,
        v26);
    }
  }
  return j;
}
