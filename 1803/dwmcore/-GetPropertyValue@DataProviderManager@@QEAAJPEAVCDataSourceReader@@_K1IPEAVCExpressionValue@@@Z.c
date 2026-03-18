/*
 * XREFs of ?GetPropertyValue@DataProviderManager@@QEAAJPEAVCDataSourceReader@@_K1IPEAVCExpressionValue@@@Z @ 0x180153934
 * Callers:
 *     ?GetProperty@CDataSourceReader@@UEAAJIPEAVCExpressionValue@@@Z @ 0x180188860 (-GetProperty@CDataSourceReader@@UEAAJIPEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x1800C1BB0 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V?$_Uhash_compare@PEAVCResource@@U?$hash@PEAVCResource@@@std@@U?$equal_to@PEAVCResource@@@3@@std@@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@2@_K@Z @ 0x180140A3C (-_End@-$_Hash@V-$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V-$_Uh.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDataSource@DataProviderProxy@@QEAAPEAVBamoDataSourceProxy@@_K@Z @ 0x1801697A0 (-GetDataSource@DataProviderProxy@@QEAAPEAVBamoDataSourceProxy@@_K@Z.c)
 *     ?GetPropertyValue@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@IPEAVCExpressionValue@@@Z @ 0x18016B520 (-GetPropertyValue@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@IPEAVCExpressionValue@@@Z.c)
 */

int __fastcall DataProviderManager::GetPropertyValue(
        DataProviderManager *this,
        struct CDataSourceReader *a2,
        __int64 a3,
        unsigned __int64 a4,
        unsigned int a5,
        struct CExpressionValue *a6)
{
  __int64 v10; // rsi
  _QWORD *v11; // rax
  __int64 v12; // r10
  __int64 v13; // rdx
  DataSourceProxy *DataSource; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v17; // [rsp+50h] [rbp+8h] BYREF
  __int64 v18; // [rsp+60h] [rbp+18h] BYREF

  v18 = a3;
  v10 = *((_QWORD *)this + 12) & std::_Hash_bytes((const unsigned __int8 *)&v18, 8uLL);
  while ( 1 )
  {
    v11 = std::_Hash<std::_Umap_traits<CResource *,CAnimationLoggingManager::ResourceDebugInfo,std::_Uhash_compare<CResource *,std::hash<CResource *>,std::equal_to<CResource *>>,std::allocator<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>,0>>::_End(
            (__int64)this + 48,
            &v17,
            v10);
    if ( v12 == *v11 )
      break;
    if ( *(_QWORD *)(v12 + 16) == a3 )
      goto LABEL_6;
  }
  v12 = *((_QWORD *)this + 7);
LABEL_6:
  if ( v12 == *((_QWORD *)this + 7) )
  {
    v13 = 352LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
      (const char *)0x80004005LL);
    return -2147467259;
  }
  DataSource = DataProviderProxy::GetDataSource(*(DataProviderProxy **)(v12 + 24), a4);
  if ( !DataSource )
  {
    v13 = 355LL;
    goto LABEL_8;
  }
  return DataSourceProxy::GetPropertyValue(DataSource, a2, a5, a6);
}
