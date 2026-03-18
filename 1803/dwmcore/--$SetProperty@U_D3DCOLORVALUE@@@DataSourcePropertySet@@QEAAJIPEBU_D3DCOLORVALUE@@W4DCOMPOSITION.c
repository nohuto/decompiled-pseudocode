/*
 * XREFs of ??$SetProperty@U_D3DCOLORVALUE@@@DataSourcePropertySet@@QEAAJIPEBU_D3DCOLORVALUE@@W4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x18016AC6C
 * Callers:
 *     ?SetColorValue@DataSourceProxy@@MEAAJIMMMM@Z @ 0x18016B920 (-SetColorValue@DataSourceProxy@@MEAAJIMMMM@Z.c)
 * Callees:
 *     ??$AddProperty@U_D3DCOLORVALUE@@@?$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAllocator@@@@QEAAJW4DCOMPOSITION_EXPRESSION_TYPE@@PEBU_D3DCOLORVALUE@@PEAI@Z @ 0x1800380E4 (--$AddProperty@U_D3DCOLORVALUE@@@-$PropertySetStorage@VDynArrayNoZero@@VPropertySetUserModeAlloc.c)
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x1800C1BB0 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V?$_Uhash_compare@PEAVCResource@@U?$hash@PEAVCResource@@@std@@U?$equal_to@PEAVCResource@@@3@@std@@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@2@_K@Z @ 0x180140A3C (-_End@-$_Hash@V-$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V-$_Uh.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$emplace@AEAIAEAI@?$_Hash@V?$_Umap_traits@IIV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBII@std@@@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBII@std@@@std@@@std@@@std@@_N@1@AEAI0@Z @ 0x18016AFE0 (--$emplace@AEAIAEAI@-$_Hash@V-$_Umap_traits@IIV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@.c)
 */

__int64 __fastcall DataSourcePropertySet::SetProperty<_D3DCOLORVALUE>(_QWORD *a1, int a2, _OWORD *a3)
{
  __int64 v5; // rdi
  _QWORD *v6; // rax
  __int64 v7; // r10
  int v8; // r11d
  __int64 v9; // rax
  int v10; // eax
  unsigned int v11; // edi
  __int64 v13; // rcx
  __int64 v14; // rax
  _BYTE v15[40]; // [rsp+20h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF
  int v18; // [rsp+58h] [rbp+10h] BYREF
  int v19; // [rsp+68h] [rbp+20h] BYREF

  v18 = a2;
  v19 = 0;
  v5 = a1[6] & std::_Hash_bytes((const unsigned __int8 *)&v18, 4uLL);
  while ( 1 )
  {
    v6 = std::_Hash<std::_Umap_traits<CResource *,CAnimationLoggingManager::ResourceDebugInfo,std::_Uhash_compare<CResource *,std::hash<CResource *>,std::equal_to<CResource *>>,std::allocator<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>,0>>::_End(
           (__int64)a1,
           &v17,
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
  if ( v7 == v9 )
  {
    v10 = PropertySetStorage<DynArrayNoZero,PropertySetUserModeAllocator>::AddProperty<_D3DCOLORVALUE>(
            (__int64)(a1 + 8),
            70,
            a3,
            &v19);
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
      v15,
      &v18,
      &v19);
  }
  else
  {
    v13 = *(unsigned int *)(v7 + 20);
    v14 = a1[8];
    if ( *(_DWORD *)(v14 + 8 * v13) != 70 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x30,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\datasourcepropertyset.h",
        (const char *)0x80070057LL);
      return 2147942487LL;
    }
    *(_OWORD *)((*(_DWORD *)(v14 + 8 * v13 + 4) & 0x1FFFFFFF) + a1[12]) = *a3;
  }
  return 0LL;
}
