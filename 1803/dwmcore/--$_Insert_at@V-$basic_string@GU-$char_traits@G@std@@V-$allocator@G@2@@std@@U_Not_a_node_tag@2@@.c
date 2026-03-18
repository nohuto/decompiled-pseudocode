/*
 * XREFs of ??$_Insert_at@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U_Not_a_node_tag@2@@?$_Tree@V?$_Tset_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@U_Not_a_node_tag@1@@Z @ 0x180146554
 * Callers:
 *     ??$_Insert_nohint@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U_Not_a_node_tag@2@@?$_Tree@V?$_Tset_traits@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@std@@@std@@_N@1@_N$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@U_Not_a_node_tag@1@@Z @ 0x180146E94 (--$_Insert_nohint@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@U_Not_a_node_tag.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?_Lrotate@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@PEAX@2@@Z @ 0x180190064 (-_Lrotate@-$_Tree@V-$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U-$less@PEBVCD3D.c)
 *     ?_Rrotate@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@PEAX@2@@Z @ 0x1801EDA9C (-_Rrotate@-$_Tree@V-$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U-$less@PEBVCD3D.c)
 */

unsigned __int64 *__fastcall std::_Tree<std::_Tset_traits<std::wstring,std::less<std::wstring>,std::allocator<std::wstring>,0>>::_Insert_at<std::wstring,std::_Not_a_node_tag>(
        _QWORD *a1,
        unsigned __int64 *a2,
        char a3,
        unsigned __int64 *a4,
        __int64 a5)
{
  unsigned __int64 v9; // r10
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v12; // r9
  __int64 *v13; // rdx
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rsi
  __int64 *v16; // rcx
  __int64 *v17; // rax
  __int64 v18; // r11
  __int64 *v19; // r9
  __int64 v20; // r11
  __int64 *v21; // r9
  __int64 v22; // rcx
  unsigned __int64 *result; // rax
  const void *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1[1] >= 0x3FFFFFFFFFFFFFEuLL )
    ModuleFailFastForHRESULT(-2147483637, retaddr);
  v9 = std::_Allocate<std::_Default_allocate_traits<1>>(1uLL, 0x40uLL);
  *(_QWORD *)v9 = *a1;
  *(_QWORD *)(v9 + 8) = *a1;
  *(_QWORD *)(v9 + 16) = *a1;
  *(_WORD *)(v9 + 24) = 0;
  *(_QWORD *)(v9 + 48) = 0LL;
  *(_QWORD *)(v9 + 56) = 0LL;
  *(_OWORD *)(v9 + 32) = *(_OWORD *)a5;
  *(_OWORD *)(v9 + 48) = *(_OWORD *)(a5 + 16);
  *(_QWORD *)(a5 + 16) = 0LL;
  *(_QWORD *)(a5 + 24) = 7LL;
  *(_WORD *)a5 = 0;
  ++a1[1];
  *(_QWORD *)(v9 + 8) = a4;
  if ( a4 == (unsigned __int64 *)*a1 )
  {
    *(_QWORD *)(*a1 + 8LL) = v9;
    *(_QWORD *)*a1 = v9;
    v10 = *a1;
LABEL_9:
    *(_QWORD *)(v10 + 16) = v9;
    goto LABEL_10;
  }
  if ( a3 )
  {
    *a4 = v9;
    if ( a4 == *(unsigned __int64 **)*a1 )
      *(_QWORD *)*a1 = v9;
    goto LABEL_10;
  }
  a4[2] = v9;
  v10 = *a1;
  if ( a4 == *(unsigned __int64 **)(*a1 + 16LL) )
    goto LABEL_9;
LABEL_10:
  v11 = *(_QWORD *)(v9 + 8);
  v12 = v9;
  while ( !*(_BYTE *)(v11 + 24) )
  {
    v13 = *(__int64 **)(v12 + 8);
    v14 = v12;
    v15 = v12;
    v16 = (__int64 *)v13[1];
    v17 = (__int64 *)*v16;
    if ( v13 == (__int64 *)*v16 )
    {
      v17 = (__int64 *)v16[2];
      if ( !*((_BYTE *)v17 + 24) )
        goto LABEL_19;
      v18 = v13[2];
      if ( v12 == v18 )
        std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::_Lrotate(
          a1,
          v13);
      v19 = v13;
      if ( v15 != v18 )
        v19 = (__int64 *)v14;
      *(_BYTE *)(v19[1] + 24) = 1;
      *(_BYTE *)(*(_QWORD *)(v19[1] + 8) + 24LL) = 0;
      std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::_Rrotate(a1);
    }
    else
    {
      if ( !*((_BYTE *)v17 + 24) )
      {
LABEL_19:
        *((_BYTE *)v13 + 24) = 1;
        *((_BYTE *)v17 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL) + 24LL) = 0;
        v12 = *(_QWORD *)(*(_QWORD *)(v12 + 8) + 8LL);
        goto LABEL_25;
      }
      v20 = *v13;
      if ( v12 == *v13 )
        std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::_Rrotate(a1);
      v21 = v13;
      if ( v14 != v20 )
        v21 = (__int64 *)v14;
      *(_BYTE *)(v21[1] + 24) = 1;
      *(_BYTE *)(*(_QWORD *)(v21[1] + 8) + 24LL) = 0;
      std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::_Lrotate(
        a1,
        *(_QWORD *)(v21[1] + 8));
    }
LABEL_25:
    v11 = *(_QWORD *)(v12 + 8);
  }
  v22 = *(_QWORD *)(*a1 + 8LL);
  result = a2;
  *a2 = v9;
  *(_BYTE *)(v22 + 24) = 1;
  return result;
}
