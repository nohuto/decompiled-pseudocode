/*
 * XREFs of ?AddDataSource@DataProviderProxy@@MEAAJPEAVBamoDataSourceProxy@@@Z @ 0x180169710
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ??$_Insert@_KAEAPEAVDataProviderProxy@@@?$list@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@std@@@std@@U_Iterator_base0@2@@1@$$QEA_KAEAPEAVDataProviderProxy@@@Z @ 0x180152D20 (--$_Insert@_KAEAPEAVDataProviderProxy@@@-$list@U-$pair@$$CB_KV-$ComPtr@VDataProviderProxy@@@WRL@.c)
 *     ??$GetUniqueId@VBamoDataSourceProxy@@@DataProviderHelper@@YA_KPEAVBamoDataSourceProxy@@@Z @ 0x180169498 (--$GetUniqueId@VBamoDataSourceProxy@@@DataProviderHelper@@YA_KPEAVBamoDataSourceProxy@@@Z.c)
 *     ??$_Insert@AEAU?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@1@@Z @ 0x1801694C4 (--$_Insert@AEAU-$pair@$$CB_KV-$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@V-$_List_unche.c)
 */

__int64 __fastcall DataProviderProxy::AddDataSource(DataProviderProxy *this, struct BamoDataSourceProxy *a2)
{
  _BYTE v4[24]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int64 Unique; // [rsp+40h] [rbp+8h] BYREF
  void (__fastcall ***v6)(_QWORD); // [rsp+48h] [rbp+10h] BYREF

  v6 = (void (__fastcall ***)(_QWORD))a2;
  *((_QWORD *)a2 + 23) = this;
  Unique = DataProviderHelper::GetUniqueId<BamoDataSourceProxy>((__int64)a2);
  std::list<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>>::_Insert<unsigned __int64,DataProviderProxy * &>(
    (__int64)this + 80,
    **((_QWORD ***)this + 10),
    &Unique,
    &v6);
  std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::_Insert<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>>>>(
    (_QWORD *)this + 9,
    (__int64)v4,
    (const unsigned __int8 *)(**((_QWORD **)this + 10) + 16LL),
    **((__int64 ***)this + 10));
  if ( !v4[8] )
    (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 1) + 40LL))((char *)this + 8, 2147500037LL);
  return 0LL;
}
