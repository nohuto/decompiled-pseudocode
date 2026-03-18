/*
 * XREFs of ?GetDataSourceProxy@DataProviderManager@@QEAAPEAVBamoDataSourceProxy@@_K0@Z @ 0x18015381C
 * Callers:
 *     ?UnregisterReaderForDataSource@DataProviderManager@@QEAAJ_K0PEAVCDataSourceReader@@@Z @ 0x180154D74 (-UnregisterReaderForDataSource@DataProviderManager@@QEAAJ_K0PEAVCDataSourceReader@@@Z.c)
 *     ?ProcessSetLookupId@CDataSourceReader@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DATASOURCEREADER_SETLOOKUPID@@@Z @ 0x1801888C8 (-ProcessSetLookupId@CDataSourceReader@@QEAAJPEAVCResourceTable@@PEBUMILCMD_DATASOURCEREADER_SETL.c)
 * Callees:
 *     ?_Hash_bytes@std@@YA_KPEBE_K@Z @ 0x1800C1BB0 (-_Hash_bytes@std@@YA_KPEBE_K@Z.c)
 *     ?_End@?$_Hash@V?$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V?$_Uhash_compare@PEAVCResource@@U?$hash@PEAVCResource@@@std@@U?$equal_to@PEAVCResource@@@3@@std@@V?$allocator@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@5@$0A@@std@@@std@@IEAA?AV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@@std@@@std@@@std@@@2@_K@Z @ 0x180140A3C (-_End@-$_Hash@V-$_Umap_traits@PEAVCResource@@UResourceDebugInfo@CAnimationLoggingManager@@V-$_Uh.c)
 *     ?GetDataSource@DataProviderProxy@@QEAAPEAVBamoDataSourceProxy@@_K@Z @ 0x1801697A0 (-GetDataSource@DataProviderProxy@@QEAAPEAVBamoDataSourceProxy@@_K@Z.c)
 */

struct BamoDataSourceProxy *__fastcall DataProviderManager::GetDataSourceProxy(
        DataProviderManager *this,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v6; // rsi
  _QWORD *v7; // rax
  __int64 v8; // r10
  __int64 v9; // r11
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  __int64 v12; // [rsp+48h] [rbp+10h] BYREF

  v12 = a2;
  v6 = *((_QWORD *)this + 12) & std::_Hash_bytes((const unsigned __int8 *)&v12, 8uLL);
  while ( 1 )
  {
    v7 = std::_Hash<std::_Umap_traits<CResource *,CAnimationLoggingManager::ResourceDebugInfo,std::_Uhash_compare<CResource *,std::hash<CResource *>,std::equal_to<CResource *>>,std::allocator<std::pair<CResource * const,CAnimationLoggingManager::ResourceDebugInfo>>,0>>::_End(
           (__int64)this + 48,
           &v11,
           v6);
    if ( v8 == *v7 )
      break;
    if ( *(_QWORD *)(v8 + 16) == a2 )
      goto LABEL_6;
  }
  v8 = *((_QWORD *)this + 7);
LABEL_6:
  if ( v8 != *((_QWORD *)this + 7) )
    return DataProviderProxy::GetDataSource(*(DataProviderProxy **)(v8 + 24), a3);
  return (struct BamoDataSourceProxy *)v9;
}
