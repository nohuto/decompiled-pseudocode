/*
 * XREFs of ??$_Insert@_KAEAPEAVDataProviderProxy@@@?$list@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@2@@std@@QEAAXV?$_List_unchecked_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@@std@@@std@@U_Iterator_base0@2@@1@$$QEA_KAEAPEAVDataProviderProxy@@@Z @ 0x180152D20
 * Callers:
 *     ?RegisterDataProvider@DataProviderManager@@QEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataProviderProxy@@@Z @ 0x1801544F4 (-RegisterDataProvider@DataProviderManager@@QEAAJPEAVBamoDataProviderRegistrarStub@@PEAVBamoDataP.c)
 *     ?AddDataSource@DataProviderProxy@@MEAAJPEAVBamoDataSourceProxy@@@Z @ 0x180169710 (-AddDataSource@DataProviderProxy@@MEAAJPEAVBamoDataSourceProxy@@@Z.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@V?$allocator@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$unique_ptr@VCChainingHelper@@U?$default_delete@VCChainingHelper@@@std@@@std@@@std@@PEAX@2@PEAU32@0@Z @ 0x1800BC864 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBV-$com_ptr_t@VCManipulation@@Uerr_retur.c)
 *     ModuleFailFastForHRESULT @ 0x1800DD014 (ModuleFailFastForHRESULT.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::list<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>>::_Insert<unsigned __int64,DataProviderProxy * &>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        void (__fastcall ****a4)(_QWORD))
{
  _QWORD *v4; // r15
  _QWORD *v9; // rbp
  void (__fastcall ***v10)(_QWORD); // rcx
  __int64 v11; // rcx
  __int64 result; // rax
  const void *retaddr; // [rsp+38h] [rbp+0h]

  v4 = (_QWORD *)a2[1];
  v9 = std::_List_alloc<std::_List_base_types<std::pair<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const,std::unique_ptr<CChainingHelper>>>>::_Buynode0(
         a1,
         a2,
         v4);
  v9[2] = *a3;
  v10 = *a4;
  v9[3] = *a4;
  if ( v10 )
    (**v10)(v10);
  v11 = *(_QWORD *)(a1 + 8);
  if ( v11 == 0x7FFFFFFFFFFFFFELL )
    ModuleFailFastForHRESULT(-2147483637, retaddr);
  result = v11 + 1;
  *(_QWORD *)(a1 + 8) = v11 + 1;
  a2[1] = v9;
  *v4 = v9;
  return result;
}
