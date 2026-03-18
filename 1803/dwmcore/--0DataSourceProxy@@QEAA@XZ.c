/*
 * XREFs of ??0DataSourceProxy@@QEAA@XZ @ 0x18016C190
 * Callers:
 *     ?CreateDataSourceProxy@BamoImpl@@YAXPEAVBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@Bamo@3@PEAPEAVBamoProxy@53@@Z @ 0x180153574 (-CreateDataSourceProxy@BamoImpl@@YAXPEAVBamoConnectionImpl@1Microsoft@@PEAVBamoPeer@Bamo@3@PEAPE.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBII@std@@V?$allocator@U?$pair@$$CBII@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBII@std@@PEAX@2@PEAU32@0@Z @ 0x18016BD30 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBII@std@@V-$allocator@U-$pair@$$CBII@std.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@PEAVCVisual@@UShadowIntermediates@CDropShadow@@V?$_Uhash_compare@PEAVCVisual@@U?$hash@PEAVCVisual@@@std@@U?$equal_to@PEAVCVisual@@@3@@std@@V?$allocator@U?$pair@QEAVCVisual@@UShadowIntermediates@CDropShadow@@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x18016BDE4 (-_Init@-$_Hash@V-$_Umap_traits@PEAVCVisual@@UShadowIntermediates@CDropShadow@@V-$_Uhash_compare@.c)
 */

DataSourceProxy *__fastcall DataSourceProxy::DataSourceProxy(DataSourceProxy *this)
{
  char *v1; // rbx
  DataSourceProxy *result; // rax

  v1 = (char *)this + 56;
  *((_DWORD *)this + 6) = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 2) = &BamoImpl::BamoDataSourceProxyImpl::`vftable';
  *((_DWORD *)this + 10) = 0;
  *((_WORD *)this + 22) = 0;
  *((_DWORD *)this + 12) = 0;
  *(_QWORD *)this = &DataSourceProxy::`vftable'{for `Microsoft::Bamo::BamoProxy'};
  *((_QWORD *)this + 1) = &DataSourceProxy::`vftable'{for `IDataSourceProxy'};
  *((_DWORD *)this + 14) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 8) = std::_List_alloc<std::_List_base_types<std::pair<unsigned int const,unsigned int>>>::_Buynode0(
                            (__int64)this,
                            0LL,
                            0LL);
  *((_QWORD *)v1 + 3) = 0LL;
  *((_QWORD *)v1 + 4) = 0LL;
  *((_QWORD *)v1 + 5) = 0LL;
  *(_DWORD *)v1 = 1065353216;
  std::_Hash<std::_Umap_traits<CVisual *,CDropShadow::ShadowIntermediates,std::_Uhash_compare<CVisual *,std::hash<CVisual *>,std::equal_to<CVisual *>>,std::allocator<std::pair<CVisual * const,CDropShadow::ShadowIntermediates>>,0>>::_Init(
    (__int64)v1,
    8LL);
  *((_QWORD *)v1 + 8) = 0LL;
  result = this;
  *((_QWORD *)v1 + 9) = 0LL;
  *((_QWORD *)v1 + 10) = 0LL;
  *((_DWORD *)v1 + 22) = 0;
  *((_QWORD *)v1 + 12) = 0LL;
  *((_QWORD *)v1 + 13) = 0LL;
  *((_QWORD *)v1 + 14) = 0LL;
  *((_DWORD *)v1 + 30) = 0;
  *((_QWORD *)this + 24) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  return result;
}
