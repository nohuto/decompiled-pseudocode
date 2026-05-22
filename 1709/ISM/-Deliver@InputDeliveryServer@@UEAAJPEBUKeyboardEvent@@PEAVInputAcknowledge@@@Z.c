/*
 * XREFs of ?Deliver@InputDeliveryServer@@UEAAJPEBUKeyboardEvent@@PEAVInputAcknowledge@@@Z @ 0x18007F660
 * Callers:
 *     <none>
 * Callees:
 *     ?DeliverEventToInputService@InputDeliveryServer@@AEAAXPEBUKeyboardEvent@@I@Z @ 0x18007F75C (-DeliverEventToInputService@InputDeliveryServer@@AEAAXPEBUKeyboardEvent@@I@Z.c)
 *     ??$_Insert@AEAU?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@IUViewHierarchyEntry@ViewHierarchy@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@@std@@@std@@@1@@Z @ 0x180080EA8 (--$_Insert@AEAU-$pair@$$CBIUViewHierarchyEntry@ViewHierarchy@@@std@@V-$_List_unchecked_iterator@.c)
 *     ??$_Buynode@AEAIAEAV?$ComPtr@VInputThread@@@WRL@Microsoft@@@?$_List_buy@U?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@V?$allocator@U?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBIV?$ComPtr@VInputThread@@@WRL@Microsoft@@@std@@PEAX@1@PEAU21@0AEAIAEAV?$ComPtr@VInputThread@@@WRL@Microsoft@@@Z @ 0x180081488 (--$_Buynode@AEAIAEAV-$ComPtr@VInputThread@@@WRL@Microsoft@@@-$_List_buy@U-$pair@$$CBIV-$ComPtr@V.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall InputDeliveryServer::Deliver(
        InputDeliveryServer *this,
        const struct KeyboardEvent *a2,
        struct InputAcknowledge *a3)
{
  struct InputAcknowledge *v3; // rbx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rax
  _BYTE v10[40]; // [rsp+30h] [rbp-28h] BYREF
  int v11; // [rsp+60h] [rbp+8h] BYREF
  struct InputAcknowledge *v12; // [rsp+70h] [rbp+18h] BYREF

  v3 = a3;
  v12 = a3;
  if ( a3 )
    (*(void (__fastcall **)(struct InputAcknowledge *))(*(_QWORD *)a3 + 8LL))(a3);
  if ( *((_BYTE *)this + 376) )
  {
    v11 = *((_DWORD *)v3 + 5);
    v6 = **((_QWORD **)this + 50);
    v7 = std::_List_buy<std::pair<unsigned int const,Microsoft::WRL::ComPtr<InputThread>>>::_Buynode<unsigned int &,Microsoft::WRL::ComPtr<InputThread> &>(
           (_DWORD)this,
           v6,
           *(_QWORD *)(v6 + 8),
           (unsigned int)&v11,
           (__int64)&v12);
    v8 = *((_QWORD *)this + 51);
    if ( v8 == 0x7FFFFFFFFFFFFFELL )
      std::_Xlength_error("list<T> too long");
    *((_QWORD *)this + 51) = v8 + 1;
    *(_QWORD *)(v6 + 8) = v7;
    **(_QWORD **)(v7 + 8) = v7;
    std::_Hash<std::_Umap_traits<unsigned int,ViewHierarchy::ViewHierarchyEntry,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry>>,0>>::_Insert<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned int const,ViewHierarchy::ViewHierarchyEntry>>>>>(
      (char *)this + 392,
      v10,
      **((_QWORD **)this + 50) + 16LL);
    v3 = v12;
    InputDeliveryServer::DeliverEventToInputService((InputDeliveryServer *)((char *)this - 8), a2, *((_DWORD *)v12 + 5));
    goto LABEL_9;
  }
  if ( v3 )
LABEL_9:
    (*(void (__fastcall **)(struct InputAcknowledge *))(*(_QWORD *)v3 + 16LL))(v3);
  return 0LL;
}
