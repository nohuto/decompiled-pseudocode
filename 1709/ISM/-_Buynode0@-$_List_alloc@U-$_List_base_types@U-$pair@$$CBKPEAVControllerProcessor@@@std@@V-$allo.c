/*
 * XREFs of ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKPEAVControllerProcessor@@@std@@PEAX@2@PEAU32@0@Z @ 0x18003CDB8
 * Callers:
 *     ??0ControllerNavigationManager@@AEAA@XZ @ 0x18003BE08 (--0ControllerNavigationManager@@AEAA@XZ.c)
 *     ??$_Buynode@AEAKAEAPEAVControllerProcessor@@@?$_List_buy@U?$pair@$$CBKPEAVControllerProcessor@@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKPEAVControllerProcessor@@@std@@PEAX@1@PEAU21@0AEAKAEAPEAVControllerProcessor@@@Z @ 0x18003CFAC (--$_Buynode@AEAKAEAPEAVControllerProcessor@@@-$_List_buy@U-$pair@$$CBKPEAVControllerProcessor@@@.c)
 *     ??0InputDeliveryServer@@QEAA@XZ @ 0x180080A1C (--0InputDeliveryServer@@QEAA@XZ.c)
 *     ??$_Buynode@AEAIAEAV?$ComPtr@VInputThread@@@WRL@Microsoft@@@?$_List_buy@U?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@PEAX@1@PEAU21@0AEAIAEAV?$ComPtr@VInputThread@@@WRL@Microsoft@@@Z @ 0x180081488 (--$_Buynode@AEAIAEAV-$ComPtr@VInputThread@@@WRL@Microsoft@@@-$_List_buy@U-$pair@$$CBIV-$ComPtr@V.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_List_buy@U?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@PEAX@1@PEAU21@0AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800814EC (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_List_buy@U-$pair@$.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x1800CB4F0 (--2@YAPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,ControllerProcessor *>>>::_Buynode0(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *result; // rax
  _QWORD *v6; // rcx

  result = operator new(0x20uLL);
  if ( !a2 )
  {
    a2 = result;
    a3 = result;
  }
  try
  {
    if ( result )
      *result = a2;
    v6 = result + 1;
    if ( result != (_QWORD *)-8LL )
      *v6 = a3;
  }
  catch ( ... )
  {
    std::_Wrap_alloc<std::allocator<std::_Tree_node<std::pair<SPATIAL_NODE_ID const,std::wstring>,void *>>>::deallocate(
      (__int64)v6,
      result);
    throw;
  }
  return result;
}
