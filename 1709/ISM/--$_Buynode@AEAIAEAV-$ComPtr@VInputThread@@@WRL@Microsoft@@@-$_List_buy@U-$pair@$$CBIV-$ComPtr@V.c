/*
 * XREFs of ??$_Buynode@AEAIAEAV?$ComPtr@VInputThread@@@WRL@Microsoft@@@?$_List_buy@U?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@PEAX@1@PEAU21@0AEAIAEAV?$ComPtr@VInputThread@@@WRL@Microsoft@@@Z @ 0x180081488
 * Callers:
 *     ?OnAppThreadConnected@InputDeliveryServer@@QEAAJII@Z @ 0x18007F038 (-OnAppThreadConnected@InputDeliveryServer@@QEAAJII@Z.c)
 *     ?Deliver@InputDeliveryServer@@UEAAJPEBUKeyboardEvent@@PEAVInputAcknowledge@@@Z @ 0x18007F660 (-Deliver@InputDeliveryServer@@UEAAJPEBUKeyboardEvent@@PEAVInputAcknowledge@@@Z.c)
 * Callees:
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKPEAVControllerProcessor@@@std@@PEAX@2@PEAU32@0@Z @ 0x18003CDB8 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBKPEAVControllerProcessor@@@std@@V-$allo.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall std::_List_buy<std::pair<unsigned int const,Microsoft::WRL::ComPtr<InputThread>>>::_Buynode<unsigned int &,Microsoft::WRL::ComPtr<InputThread> &>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3,
        _DWORD *a4,
        __int64 *a5)
{
  _QWORD *v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  void *v10; // [rsp+40h] [rbp+8h]

  v6 = std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,ControllerProcessor *>>>::_Buynode0(
         a1,
         a2,
         a3);
  v8 = v6;
  v10 = v6;
  try
  {
    if ( v6 != (_QWORD *)-16LL )
    {
      *((_DWORD *)v6 + 4) = *a4;
      v7 = *a5;
      v6[3] = *a5;
      if ( v7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  catch ( ... )
  {
    std::_Wrap_alloc<std::allocator<std::_Tree_node<std::pair<SPATIAL_NODE_ID const,std::wstring>,void *>>>::deallocate(
      v7,
      v10);
    throw;
  }
  return v8;
}
