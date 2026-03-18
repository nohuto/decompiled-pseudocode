/*
 * XREFs of ??0CExpressionManager@@AEAA@XZ @ 0x18003ACA4
 * Callers:
 *     ?Create@CExpressionManager@@SAJPEAPEAV1@@Z @ 0x1800C96FC (-Create@CExpressionManager@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@IPEAX@2@XZ @ 0x180023FDC (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std.c)
 *     ??0CExpressionValueStack@@QEAA@PEAVCExpressionManager@@@Z @ 0x180051B3C (--0CExpressionValueStack@@QEAA@PEAVCExpressionManager@@@Z.c)
 *     ?_Init@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800BC700 (-_Init@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@V-$_Uhash_compare.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@PEAX@2@PEAU32@0@Z @ 0x1800BC864 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBV-$com_ptr_t@VCManipulation@@Uerr_retur.c)
 *     ??0?$DynArray@PEAVCBaseExpression@@$00@@QEAA@XZ @ 0x1800CCA50 (--0-$DynArray@PEAVCBaseExpression@@$00@@QEAA@XZ.c)
 *     ??0?$DynArrayImpl@$00@@IEAA@PEAXIII@Z @ 0x1800CD200 (--0-$DynArrayImpl@$00@@IEAA@PEAXIII@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800CD620 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 */

CExpressionManager *__fastcall CExpressionManager::CExpressionManager(CExpressionManager *this)
{
  __int64 v2; // rcx

  *((_QWORD *)this + 4) = -1LL;
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 2) = 0;
  *((_DWORD *)this + 4) = 0;
  *(_QWORD *)this = &CExpressionManager::`vftable';
  *((_QWORD *)this + 3) = 0LL;
  CExpressionValueStack::CExpressionValueStack((CExpressionManager *)((char *)this + 40), this);
  *((_DWORD *)this + 43) = 0;
  `vector constructor iterator'(
    (CExpressionManager *)((char *)this + 176),
    0x20uLL,
    2uLL,
    DynArray<CBaseExpression *,1>::DynArray<CBaseExpression *,1>);
  DynArrayImpl<1>::DynArrayImpl<1>((char *)this + 240, 0LL, 0LL);
  DynArrayImpl<1>::DynArrayImpl<1>((char *)this + 272, 0LL, 0LL);
  DynArray<CBaseExpression *,1>::DynArray<CBaseExpression *,1>((char *)this + 304);
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 336),
    CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::CompareTableData,
    CGenericTableMap<CResource *,CWeakReferenceMappingEntry>::AllocTableData,
    CGenericTableMap<void *,CLogicalSurfaceHandleMap::LSEENTRY>::FreeTableData,
    0LL);
  *((_QWORD *)this + 51) = 0LL;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 51) = std::_Tree_comp_alloc<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Buyheadnode();
  *((_DWORD *)this + 110) = 0;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 56) = std::_List_alloc<std::_List_base_types<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>>>::_Buynode0(
                             v2,
                             0LL,
                             0LL);
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_DWORD *)this + 110) = 1065353216;
  std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<DataProviderProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>>,0>>::_Init(
    (char *)this + 440,
    8LL);
  return this;
}
