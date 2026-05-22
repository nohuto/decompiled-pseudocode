/*
 * XREFs of ??0InputAttemptedTarget@@QEAA@AEBV?$shared_ptr@VInputAttemptedTargetManager@@@std@@IAEBV?$ComPtr@VInputThread@@@WRL@Microsoft@@AEBUtagInputRoutingInfo@@@Z @ 0x180081C38
 * Callers:
 *     ?OnAppThreadMessage@InputDeliveryServer@@QEAAJPEBUInputDeliveryServerMessage@@@Z @ 0x18007EC0C (-OnAppThreadMessage@InputDeliveryServer@@QEAAJPEBUInputDeliveryServerMessage@@@Z.c)
 * Callees:
 *     ??$_Insert@AEAU?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@std@@@std@@@2@@?$_Hash@V?$_Umap_traits@W4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@V?$_Uhash_compare@W4TestCommandMessageType@@U?$hash@W4TestCommandMessageType@@@std@@U?$equal_to@W4TestCommandMessageType@@@3@@3@V?$allocator@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@std@@@std@@@std@@_N@1@AEAU?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@1@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4TestCommandMessageType@@U?$pair@PEAXP6A_NPEAXPEAUTestCommandMessageDataHeader@@@Z@std@@@std@@@std@@@std@@@1@@Z @ 0x18000AB88 (--$_Insert@AEAU-$pair@$$CBW4TestCommandMessageType@@U-$pair@PEAXP6A_NPEAXPEAUTestCommandMessageD.c)
 *     ??0InputTarget@@IEAA@AEBV?$ComPtr@VInputThread@@@WRL@Microsoft@@AEBUtagInputRoutingInfo@@@Z @ 0x180081AD4 (--0InputTarget@@IEAA@AEBV-$ComPtr@VInputThread@@@WRL@Microsoft@@AEBUtagInputRoutingInfo@@@Z.c)
 *     ??$_Buynode@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_List_buy@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@V?$allocator@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@@2@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBIUtagInputRoutingInfo@@@std@@PEAX@1@PEAU21@0AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x180082C48 (--$_Buynode@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_List__ea_180082C48.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InputAttemptedTarget::InputAttemptedTarget(__int64 a1, __int64 *a2, int a3, __int64 *a4, _OWORD *a5)
{
  _OWORD *v8; // r14
  unsigned __int64 v9; // rdi
  __int64 v10; // rbp
  __int64 v11; // r12
  volatile signed __int32 *v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 *v15; // rax
  __int64 v16; // r9
  __int64 *v17; // rcx
  __int64 *v18; // rdx
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rax
  _QWORD v23[10]; // [rsp+38h] [rbp-50h] BYREF
  int *v24; // [rsp+98h] [rbp+10h] BYREF
  int v25; // [rsp+A0h] [rbp+18h] BYREF

  v8 = a5;
  InputTarget::InputTarget(a1, a4, a5);
  *(_QWORD *)a1 = &InputAttemptedTarget::`vftable';
  v9 = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  v10 = a2[1];
  v11 = *a2;
  if ( v10 )
    _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
  v12 = *(volatile signed __int32 **)(a1 + 72);
  if ( v12 )
  {
    if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  *(_QWORD *)(a1 + 72) = v10;
  *(_QWORD *)(a1 + 64) = v11;
  *(_DWORD *)(a1 + 80) = a3;
  v25 = a3;
  v13 = 0xCBF29CE484222325uLL;
  do
    v13 = 0x100000001B3LL * (*((unsigned __int8 *)&v25 + v9++) ^ (unsigned __int64)v13);
  while ( v9 < 4 );
  v14 = *(_QWORD *)(v11 + 24);
  v15 = *(__int64 **)(v14 + 16 * (v13 & *(_QWORD *)(v11 + 48)));
  v16 = 2 * (v13 & *(_QWORD *)(v11 + 48));
  v17 = *(__int64 **)(v11 + 8);
  while ( 1 )
  {
    v18 = *(__int64 **)(v14 + 8 * v16) == v17 ? *(__int64 **)(v11 + 8) : **(__int64 ***)(v14 + 8 * v16 + 8);
    if ( v15 == v18 )
      break;
    if ( *((_DWORD *)v15 + 4) == a3 )
      goto LABEL_17;
    v15 = (__int64 *)*v15;
  }
  v15 = *(__int64 **)(v11 + 8);
LABEL_17:
  if ( v15 == v17 )
  {
    v24 = &v25;
    v19 = *v17;
    v20 = std::_List_buy<std::pair<unsigned int const,tagInputRoutingInfo>>::_Buynode<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
            (_DWORD)v17,
            *v17,
            *(_QWORD *)(*v17 + 8),
            v16,
            (__int64)&v24);
    v21 = *(_QWORD *)(v11 + 16);
    if ( v21 == 0x38E38E38E38E38DLL )
      std::_Xlength_error("list<T> too long");
    *(_QWORD *)(v11 + 16) = v21 + 1;
    *(_QWORD *)(v19 + 8) = v20;
    **(_QWORD **)(v20 + 8) = v20;
    std::_Hash<std::_Umap_traits<enum TestCommandMessageType,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>,std::_Uhash_compare<enum TestCommandMessageType,std::hash<enum TestCommandMessageType>,std::equal_to<enum TestCommandMessageType>>,std::allocator<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>,0>>::_Insert<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>> &,std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<enum TestCommandMessageType const,std::pair<void *,bool (*)(void *,TestCommandMessageDataHeader *)>>>>>>(
      (float *)v11,
      (__int64)v23,
      (unsigned int *)(**(_QWORD **)(v11 + 8) + 16LL),
      **(__int64 ***)(v11 + 8));
    v15 = (__int64 *)v23[0];
  }
  *(_OWORD *)(v15 + 3) = *v8;
  *(_OWORD *)(v15 + 5) = v8[1];
  *(_OWORD *)(v15 + 7) = v8[2];
  return a1;
}
