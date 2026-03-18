/*
 * XREFs of ??$_Insert_at@AEBQEAVCWindowBackgroundTreatment@@U_Not_a_node_tag@std@@@?$_Tree@V?$_Tset_traits@PEAVCWindowBackgroundTreatment@@U?$less@PEAVCWindowBackgroundTreatment@@@std@@V?$allocator@PEAVCWindowBackgroundTreatment@@@3@$0A@@std@@@std@@IEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowBackgroundTreatment@@@std@@@std@@@1@_NPEAU?$_Tree_node@PEAVCWindowBackgroundTreatment@@PEAX@1@AEBQEAVCWindowBackgroundTreatment@@U_Not_a_node_tag@1@@Z @ 0x18001A1DC
 * Callers:
 *     ??$_Insert_nohint@AEBQEAVCWindowBackgroundTreatment@@U_Not_a_node_tag@std@@@?$_Tree@V?$_Tset_traits@PEAVCWindowBackgroundTreatment@@U?$less@PEAVCWindowBackgroundTreatment@@@std@@V?$allocator@PEAVCWindowBackgroundTreatment@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowBackgroundTreatment@@@std@@@std@@@std@@_N@1@_NAEBQEAVCWindowBackgroundTreatment@@U_Not_a_node_tag@1@@Z @ 0x18001A2A4 (--$_Insert_nohint@AEBQEAVCWindowBackgroundTreatment@@U_Not_a_node_tag@std@@@-$_Tree@V-$_Tset_tra.c)
 * Callees:
 *     ??$_Allocate@U?$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z @ 0x1800BCDBC (--$_Allocate@U-$_Default_allocate_traits@$00@std@@@std@@YAPEAX_K0@Z.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     ?_Lrotate@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@PEAX@2@@Z @ 0x180190064 (-_Lrotate@-$_Tree@V-$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U-$less@PEBVCD3D.c)
 *     ?_Rrotate@?$_Tree@V?$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U?$less@PEBVCD3DDeviceLevel1@@@std@@V?$allocator@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@@5@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@QEBVCD3DDeviceLevel1@@UCache@CGradientSource@@@std@@PEAX@2@@Z @ 0x1801EDA9C (-_Rrotate@-$_Tree@V-$_Tmap_traits@PEBVCD3DDeviceLevel1@@UCache@CGradientSource@@U-$less@PEBVCD3D.c)
 */

__int64 *__fastcall std::_Tree<std::_Tset_traits<CWindowBackgroundTreatment *,std::less<CWindowBackgroundTreatment *>,std::allocator<CWindowBackgroundTreatment *>,0>>::_Insert_at<CWindowBackgroundTreatment * const &,std::_Not_a_node_tag>(
        _QWORD *a1,
        __int64 *a2,
        char a3,
        __int64 *a4,
        _QWORD *a5)
{
  __int64 v9; // rax
  __int64 v10; // r10
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 *result; // rax
  __int64 *v16; // rdx
  __int64 *v17; // rdi
  __int64 v18; // rsi
  __int64 *v19; // rcx
  __int64 *v20; // rax
  __int64 v21; // r11
  __int64 *v22; // r9
  __int64 *v23; // r11
  __int64 *v24; // r9
  void *retaddr; // [rsp+28h] [rbp+0h]

  if ( a1[1] >= 0x666666666666665uLL )
    ModuleFailFastForHRESULT(2147483659LL, retaddr);
  v9 = std::_Allocate<std::_Default_allocate_traits<1>>(1LL, 40LL);
  v10 = v9;
  *(_QWORD *)v9 = *a1;
  *(_QWORD *)(v9 + 8) = *a1;
  *(_QWORD *)(v9 + 16) = *a1;
  *(_WORD *)(v9 + 24) = 0;
  *(_QWORD *)(v9 + 32) = *a5;
  ++a1[1];
  *(_QWORD *)(v9 + 8) = a4;
  if ( a4 == (__int64 *)*a1 )
  {
    *(_QWORD *)(*a1 + 8LL) = v9;
    *(_QWORD *)*a1 = v9;
    v11 = *a1;
LABEL_4:
    *(_QWORD *)(v11 + 16) = v10;
    goto LABEL_5;
  }
  if ( a3 )
  {
    *a4 = v9;
    if ( a4 == *(__int64 **)*a1 )
      *(_QWORD *)*a1 = v9;
    goto LABEL_5;
  }
  a4[2] = v9;
  v11 = *a1;
  if ( a4 == *(__int64 **)(*a1 + 16LL) )
    goto LABEL_4;
LABEL_5:
  v12 = *(_QWORD *)(v10 + 8);
  v13 = v10;
  while ( !*(_BYTE *)(v12 + 24) )
  {
    v16 = *(__int64 **)(v13 + 8);
    v17 = (__int64 *)v13;
    v18 = v13;
    v19 = (__int64 *)v16[1];
    v20 = (__int64 *)*v19;
    if ( v16 == (__int64 *)*v19 )
    {
      v20 = (__int64 *)v19[2];
      if ( !*((_BYTE *)v20 + 24) )
        goto LABEL_28;
      v21 = v16[2];
      if ( v13 == v21 )
        std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::_Lrotate(
          a1,
          v16);
      v22 = v16;
      if ( v18 != v21 )
        v22 = v17;
      *(_BYTE *)(v22[1] + 24) = 1;
      *(_BYTE *)(*(_QWORD *)(v22[1] + 8) + 24LL) = 0;
      std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::_Rrotate(a1);
    }
    else
    {
      if ( !*((_BYTE *)v20 + 24) )
      {
LABEL_28:
        *((_BYTE *)v16 + 24) = 1;
        *((_BYTE *)v20 + 24) = 1;
        *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) + 8LL) + 24LL) = 0;
        v13 = *(_QWORD *)(*(_QWORD *)(v13 + 8) + 8LL);
        goto LABEL_27;
      }
      v23 = (__int64 *)*v16;
      if ( v13 == *v16 )
        std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::_Rrotate(a1);
      v24 = v16;
      if ( v17 != v23 )
        v24 = v17;
      *(_BYTE *)(v24[1] + 24) = 1;
      *(_BYTE *)(*(_QWORD *)(v24[1] + 8) + 24LL) = 0;
      std::_Tree<std::_Tmap_traits<CD3DDeviceLevel1 const *,CGradientSource::Cache,std::less<CD3DDeviceLevel1 const *>,std::allocator<std::pair<CD3DDeviceLevel1 const * const,CGradientSource::Cache>>,0>>::_Lrotate(
        a1,
        *(_QWORD *)(v24[1] + 8));
    }
LABEL_27:
    v12 = *(_QWORD *)(v13 + 8);
  }
  v14 = *(_QWORD *)(*a1 + 8LL);
  result = a2;
  *a2 = v10;
  *(_BYTE *)(v14 + 24) = 1;
  return result;
}
