/*
 * XREFs of ?RemoveSourceEntry@DataProviderProxy@@QEAAJPEAVBamoDataSourceProxy@@@Z @ 0x180169E24
 * Callers:
 *     ?RemoveDataSource@DataProviderProxy@@MEAAJPEAVBamoDataSourceProxy@@@Z @ 0x180169DF0 (-RemoveDataSource@DataProviderProxy@@MEAAJPEAVBamoDataSourceProxy@@@Z.c)
 *     ?OnDisconnected@DataSourceProxy@@MEAAJXZ @ 0x18016B650 (-OnDisconnected@DataSourceProxy@@MEAAJXZ.c)
 * Callees:
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x1800C1BB0 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V?$_Uhash_compare@PEAVCResource@@U?$hash@PEAVCResource@@@std@@U?$equal_to@PEAVCResource@@@3@@std@@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@2@_K@Z @ 0x180140A3C (-_End@-$_Hash@V-$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V-$_Uh.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$GetUniqueId@VBamoDataSourceProxy@@@DataProviderHelper@@YA_KPEAVBamoDataSourceProxy@@@Z @ 0x180169498 (--$GetUniqueId@VBamoDataSourceProxy@@@DataProviderHelper@@YA_KPEAVBamoDataSourceProxy@@@Z.c)
 *     ?erase@?$list@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@2@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@2@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@Z @ 0x18016A1D8 (-erase@-$list@U-$pair@$$CB_KV-$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@V-$allocator@U-$.c)
 */

__int64 __fastcall DataProviderProxy::RemoveSourceEntry(DataProviderProxy *this, struct BamoDataSourceProxy *a2)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // r10
  _QWORD *v5; // rax
  __int64 v6; // r11
  __int64 v8; // rax
  _QWORD *v9; // r11
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  unsigned __int64 Unique; // [rsp+30h] [rbp+8h] BYREF

  Unique = DataProviderHelper::GetUniqueId<BamoDataSourceProxy>((__int64)a2);
  v3 = Unique;
  v4 = *((_QWORD *)this + 15) & std::_Hash_bytes((const unsigned __int8 *)&Unique, 8uLL);
  while ( 1 )
  {
    v5 = std::_Hash<std::_Umap_traits<CResource *,CAnimationLoggingManager::ResourceDebugInfo,std::_Uhash_compare<CResource *,std::hash<CResource *>,std::equal_to<CResource *>>,std::allocator<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>,0>>::_End(
           (__int64)this + 72,
           &Unique,
           v4);
    if ( v6 == *v5 )
      break;
    if ( *(_QWORD *)(v6 + 16) == v3 )
      goto LABEL_6;
  }
  v6 = *((_QWORD *)this + 10);
LABEL_6:
  if ( v6 == *((_QWORD *)this + 10) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7C,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataproviderproxy.cpp",
      (const char *)0x8000000BLL);
    return 2147483659LL;
  }
  else
  {
    *(_QWORD *)(*(_QWORD *)(v6 + 24) + 184LL) = 0LL;
    v8 = std::_Hash_bytes((const unsigned __int8 *)(v6 + 16), 8uLL);
    v10 = *((_QWORD *)this + 12);
    v11 = 2 * (*((_QWORD *)this + 15) & v8);
    if ( *(_QWORD **)(v10 + 16 * (*((_QWORD *)this + 15) & v8) + 8) == v9 )
    {
      if ( *(_QWORD **)(v10 + 16 * (*((_QWORD *)this + 15) & v8)) == v9 )
      {
        *(_QWORD *)(v10 + 16 * (*((_QWORD *)this + 15) & v8)) = *((_QWORD *)this + 10);
        v10 = *((_QWORD *)this + 12);
        v12 = *((_QWORD *)this + 10);
      }
      else
      {
        v12 = v9[1];
      }
      *(_QWORD *)(v10 + 8 * v11 + 8) = v12;
    }
    else if ( *(_QWORD **)(v10 + 16 * (*((_QWORD *)this + 15) & v8)) == v9 )
    {
      *(_QWORD *)(v10 + 16 * (*((_QWORD *)this + 15) & v8)) = *v9;
    }
    std::list<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>>::erase(
      (char *)this + 80,
      &Unique,
      v9);
    return 0LL;
  }
}
