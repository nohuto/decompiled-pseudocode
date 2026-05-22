/*
 * XREFs of ??0DragNDropProcessorLegacy@@AEAA@AEBV?$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@@Z @ 0x1800B1C1C
 * Callers:
 *     ?Create@DragNDropProcessorLegacy@@SAJAEBV?$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@PEAPEAV1@@Z @ 0x1800B2144 (-Create@DragNDropProcessorLegacy@@SAJAEBV-$ComPtr@UISystemInputRouterHitTest@@@WRL@Microsoft@@PE.c)
 * Callees:
 *     ?_Init@?$_Hash@V?$_Umap_traits@K_KV?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBK_K@std@@@2@$0A@@std@@@std@@IEAAX_K@Z @ 0x18000A408 (-_Init@-$_Hash@V-$_Umap_traits@K_KV-$_Uhash_compare@KU-$hash@K@std@@U-$equal_to@K@2@@std@@V-$all.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@V?$allocator@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKUPointerCache@DragNDropProcessor@@@std@@PEAX@2@PEAU32@0@Z @ 0x18000A940 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBKUPointerCache@DragNDropProcessor@@@std.c)
 *     ?_Buynode0@?$_List_alloc@U?$_List_base_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@V?$allocator@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@2@@std@@@std@@QEAAPEAU?$_List_node@U?$pair@$$CBKPEAVControllerProcessor@@@std@@PEAX@2@PEAU32@0@Z @ 0x180016C94 (-_Buynode0@-$_List_alloc@U-$_List_base_types@U-$pair@$$CBKPEAVControllerProcessor@@@std@@V-$allo.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=12
__int64 __fastcall DragNDropProcessorLegacy::DragNDropProcessorLegacy(__int64 a1, __int64 *a2)
{
  __int64 v3; // rcx
  __int64 v4; // rcx

  *(_QWORD *)(a1 + 8) = &RefCountedObject::`vftable';
  *(_DWORD *)(a1 + 16) = 1;
  *(_QWORD *)a1 = &DragNDropProcessorLegacy::`vftable'{for `IContextualProcessor'};
  *(_QWORD *)(a1 + 8) = &DragNDropProcessorLegacy::`vftable'{for `RefCountedObject'};
  v3 = *a2;
  *(_QWORD *)(a1 + 24) = *a2;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 56) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  *(_DWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(_QWORD *)(a1 + 96) = 0LL;
  *(_QWORD *)(a1 + 88) = std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,DragNDropProcessor::PointerCache>>>::_Buynode0(
                           v3,
                           0LL,
                           0LL);
  *(_QWORD *)(a1 + 104) = 0LL;
  *(_QWORD *)(a1 + 112) = 0LL;
  *(_QWORD *)(a1 + 120) = 0LL;
  *(_DWORD *)(a1 + 80) = 1065353216;
  std::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>::_Init(
    (_QWORD *)(a1 + 80),
    8LL);
  *(_DWORD *)(a1 + 144) = 0;
  *(_QWORD *)(a1 + 152) = 0LL;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 152) = std::_List_alloc<std::_List_base_types<std::pair<unsigned long const,ControllerProcessor *>>>::_Buynode0(
                            v4,
                            0LL,
                            0LL);
  *(_QWORD *)(a1 + 168) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_DWORD *)(a1 + 144) = 1065353216;
  std::_Hash<std::_Umap_traits<unsigned long,unsigned __int64,std::_Uhash_compare<unsigned long,std::hash<unsigned long>,std::equal_to<unsigned long>>,std::allocator<std::pair<unsigned long const,unsigned __int64>>,0>>::_Init(
    (_QWORD *)(a1 + 144),
    8LL);
  return a1;
}
