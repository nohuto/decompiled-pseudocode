/*
 * XREFs of ??0DataProviderManager@@AEAA@PEAUIMessageSession@@@Z @ 0x1800C49DC
 * Callers:
 *     ?Create@DataProviderManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z @ 0x1800C494C (-Create@DataProviderManager@@SAJPEAUIMessageSession@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@IEAAX_K@Z @ 0x1800BC700 (-_Init@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@V-$_Uhash_compare.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@PEAX@2@PEAU32@0@Z @ 0x1800BC864 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBV-$com_ptr_t@VCManipulation@@Uerr_retur.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

DataProviderManager *__fastcall DataProviderManager::DataProviderManager(
        DataProviderManager *this,
        struct IMessageSession *a2)
{
  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &DataProviderManager::`vftable';
  *((_QWORD *)this + 2) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IMessageSession *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 7) = std::_List_alloc<std::_List_base_types<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>>>::_Buynode0(
                            (__int64)this,
                            0LL,
                            0LL);
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 12) = 1065353216;
  std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<DataProviderProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>>,0>>::_Init(
    (_QWORD *)this + 6,
    8LL);
  return this;
}
