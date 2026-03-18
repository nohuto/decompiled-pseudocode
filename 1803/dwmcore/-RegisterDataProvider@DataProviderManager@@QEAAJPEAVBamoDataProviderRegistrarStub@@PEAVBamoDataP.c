/*
 * XREFs of ?RegisterDataProvider@DataProviderManager@@QEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataProviderProxy@@@Z @ 0x1801544F4
 * Callers:
 *     ?Register@DataProviderRegistrarPrincipal@@MEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataProviderProxy@@@Z @ 0x1801690B0 (-Register@DataProviderRegistrarPrincipal@@MEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataPr.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180142BFC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$_Insert@AEAU?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@1@@Z @ 0x180152BF8 (--$_Insert@AEAU-$pair@$$CB_KV-$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@V-$_List_uncheck.c)
 *     ??$_Insert@_KAEAPEAVDataProviderProxy@@@?$list@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@std@@@std@@U_Iterator_base0@2@@1@$$QEA_KAEAPEAVDataProviderProxy@@@Z @ 0x180152D20 (--$_Insert@_KAEAPEAVDataProviderProxy@@@-$list@U-$pair@$$CB_KV-$ComPtr@VDataProviderProxy@@@WRL@.c)
 *     ?GetPeerId@BamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x180153918 (-GetPeerId@BamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 */

__int64 __fastcall DataProviderManager::RegisterDataProvider(
        DataProviderManager *this,
        struct BamoDataProviderRegistrarStub *a2,
        struct BamoDataProviderProxy *a3)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  void (__fastcall ***v9)(_QWORD); // [rsp+40h] [rbp+8h] BYREF
  struct BamoDataProviderRegistrarStub *v10; // [rsp+48h] [rbp+10h] BYREF

  v10 = a2;
  *((_QWORD *)a3 + 8) = this;
  v4 = *((_QWORD *)a3 + 4);
  v5 = *((_DWORD *)a3 + 10);
  v9 = (void (__fastcall ***)(_QWORD))a3;
  v10 = (struct BamoDataProviderRegistrarStub *)__PAIR64__(
                                                  Microsoft::Bamo::BamoPeer::GetPeerId(*(Microsoft::Bamo::BamoPeer **)(v4 + 16)),
                                                  v5);
  std::list<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>>::_Insert<unsigned __int64,DataProviderProxy * &>(
    (__int64)this + 56,
    **((_QWORD ***)this + 7),
    &v10,
    &v9);
  std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<DataProviderProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>>,0>>::_Insert<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>>>>>(
    (_QWORD *)this + 6,
    (__int64)v7,
    (const unsigned __int8 *)(**((_QWORD **)this + 7) + 16LL),
    **((__int64 ***)this + 7));
  if ( v7[8] )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x11A,
    (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
    (const char *)0x80004005LL);
  return 2147500037LL;
}
