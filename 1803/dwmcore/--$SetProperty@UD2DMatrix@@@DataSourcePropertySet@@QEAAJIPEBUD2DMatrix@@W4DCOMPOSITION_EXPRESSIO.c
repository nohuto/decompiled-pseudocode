/*
 * XREFs of ??$SetProperty@UD2DMatrix@@@DataSourcePropertySet@@QEAAJIPEBUD2DMatrix@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18016A550
 * Callers:
 *     ?SetMatrix4x4Value@DataSourceProxy@@MEAAJIAEBU_D3DMATRIX@@@Z @ 0x18016B9D0 (-SetMatrix4x4Value@DataSourceProxy@@MEAAJIAEBU_D3DMATRIX@@@Z.c)
 * Callees:
 *     ??$AddProperty@UD2DMatrix@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBUD2DMatrix@@PEAI@Z @ 0x180037EE0 (--$AddProperty@UD2DMatrix@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@.c)
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x1800C1BB0 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V?$_Uhash_compare@PEAVCResource@@U?$hash@PEAVCResource@@@std@@U?$equal_to@PEAVCResource@@@3@@std@@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@2@_K@Z @ 0x180140A3C (-_End@-$_Hash@V-$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V-$_Uh.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace@AEAIAEAI@?$_Hash@V?$_Umap_traits@IIV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@std@@_N@1@AEAI0@Z @ 0x18016AFE0 (--$emplace@AEAIAEAI@-$_Hash@V-$_Umap_traits@IIV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@.c)
 */

__int64 __fastcall DataSourcePropertySet::SetProperty<D2DMatrix>(_QWORD *a1, int a2)
{
  __int64 v4; // rsi
  _QWORD *v5; // rax
  __int64 v6; // r10
  _OWORD *v7; // r11
  __int64 v8; // rax
  __int64 *v9; // rcx
  int v10; // eax
  unsigned int v11; // edi
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned int v15; // ecx
  __int64 v16; // rax
  _BYTE v17[40]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v19; // [rsp+50h] [rbp+8h] BYREF
  int v20; // [rsp+58h] [rbp+10h] BYREF
  int v21; // [rsp+68h] [rbp+20h] BYREF

  v20 = a2;
  v21 = 0;
  v4 = a1[6] & std::_Hash_bytes((const unsigned __int8 *)&v20, 4uLL);
  while ( 1 )
  {
    v5 = std::_Hash<std::_Umap_traits<CResource *,CAnimationLoggingManager::ResourceDebugInfo,std::_Uhash_compare<CResource *,std::hash<CResource *>,std::equal_to<CResource *>>,std::allocator<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>,0>>::_End(
           (__int64)a1,
           &v19,
           v4);
    if ( v6 == *v5 )
      break;
    if ( *(_DWORD *)(v6 + 16) == a2 )
    {
      v8 = a1[1];
      goto LABEL_6;
    }
  }
  v6 = a1[1];
  v8 = v6;
LABEL_6:
  v9 = a1 + 8;
  if ( v6 == v8 )
  {
    v10 = PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<D2DMatrix>(
            (__int64)v9,
            265,
            v7,
            &v21);
    v11 = v10;
    if ( v10 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x25,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\datasourcepropertyset.h",
        (const char *)(unsigned int)v10);
      return v11;
    }
    std::_Hash<std::_Umap_traits<unsigned int,unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,unsigned int>>,0>>::emplace<unsigned int &,unsigned int &>(
      a1,
      v17,
      &v20,
      &v21);
  }
  else
  {
    v13 = *(unsigned int *)(v6 + 20);
    v14 = *v9;
    if ( *(_DWORD *)(v14 + 8 * v13) != 265 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x30,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\datasourcepropertyset.h",
        (const char *)0x80070057LL);
      return 2147942487LL;
    }
    v15 = *(_DWORD *)(v14 + 8 * v13 + 4) & 0x1FFFFFFF;
    v16 = a1[12];
    *(_OWORD *)(v15 + v16) = *v7;
    *(_OWORD *)(v15 + v16 + 16) = v7[1];
    *(_OWORD *)(v15 + v16 + 32) = v7[2];
    *(_OWORD *)(v15 + v16 + 48) = v7[3];
  }
  return 0LL;
}
