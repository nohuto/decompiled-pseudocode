/*
 * XREFs of ??$SetProperty@UD2D_MATRIX_3X2_F@@@DataSourcePropertySet@@QEAAJIPEBUD2D_MATRIX_3X2_F@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18016AB3C
 * Callers:
 *     ?SetMatrix3x2Value@DataSourceProxy@@MEAAJIAEBUD2D_MATRIX_3X2_F@@@Z @ 0x18016B990 (-SetMatrix3x2Value@DataSourceProxy@@MEAAJIAEBUD2D_MATRIX_3X2_F@@@Z.c)
 * Callees:
 *     ??$AddProperty@UD2D_MATRIX_3X2_F@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2D_MATRIX_3X2_F@@PEAI@Z @ 0x180037FF4 (--$AddProperty@UD2D_MATRIX_3X2_F@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAll.c)
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x1800C1BB0 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V?$_Uhash_compare@PEAVCResource@@U?$hash@PEAVCResource@@@std@@U?$equal_to@PEAVCResource@@@3@@std@@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@2@_K@Z @ 0x180140A3C (-_End@-$_Hash@V-$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V-$_Uh.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace@AEAIAEAI@?$_Hash@V?$_Umap_traits@IIV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@std@@_N@1@AEAI0@Z @ 0x18016AFE0 (--$emplace@AEAIAEAI@-$_Hash@V-$_Umap_traits@IIV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@.c)
 */

__int64 __fastcall DataSourcePropertySet::SetProperty<D2D_MATRIX_3X2_F>(_QWORD *a1, int a2, __int64 a3)
{
  __int64 v5; // rsi
  _QWORD *v6; // rax
  __int64 v7; // r10
  int v8; // r11d
  __int64 v9; // rax
  __int64 *v10; // rcx
  int v11; // eax
  unsigned int v12; // edi
  __int64 v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // ecx
  __int64 v17; // rax
  _BYTE v18[40]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v20; // [rsp+50h] [rbp+8h] BYREF
  int v21; // [rsp+58h] [rbp+10h] BYREF
  int v22; // [rsp+68h] [rbp+20h] BYREF

  v21 = a2;
  v22 = 0;
  v5 = a1[6] & std::_Hash_bytes((const unsigned __int8 *)&v21, 4uLL);
  while ( 1 )
  {
    v6 = std::_Hash<std::_Umap_traits<CResource *,CAnimationLoggingManager::ResourceDebugInfo,std::_Uhash_compare<CResource *,std::hash<CResource *>,std::equal_to<CResource *>>,std::allocator<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>,0>>::_End(
           (__int64)a1,
           &v20,
           v5);
    if ( v7 == *v6 )
      break;
    if ( *(_DWORD *)(v7 + 16) == v8 )
    {
      v9 = a1[1];
      goto LABEL_6;
    }
  }
  v7 = a1[1];
  v9 = v7;
LABEL_6:
  v10 = a1 + 8;
  if ( v7 == v9 )
  {
    v11 = PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<D2D_MATRIX_3X2_F>(
            (__int64)v10,
            104,
            a3,
            &v22);
    v12 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x25,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\datasourcepropertyset.h",
        (const char *)(unsigned int)v11);
      return v12;
    }
    std::_Hash<std::_Umap_traits<unsigned int,unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::emplace<unsigned int &,unsigned int &>(
      a1,
      v18,
      &v21,
      &v22);
  }
  else
  {
    v14 = *(unsigned int *)(v7 + 20);
    v15 = *v10;
    if ( *(_DWORD *)(v15 + 8 * v14) != 104 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x30,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\datasourcepropertyset.h",
        (const char *)0x80070057LL);
      return 2147942487LL;
    }
    v16 = *(_DWORD *)(v15 + 8 * v14 + 4);
    v17 = a1[12];
    v16 &= 0x1FFFFFFFu;
    *(_OWORD *)(v16 + v17) = *(_OWORD *)a3;
    *(_QWORD *)(v16 + v17 + 16) = *(_QWORD *)(a3 + 16);
  }
  return 0LL;
}
