/*
 * XREFs of ?_Destroy_if_node@?$_Tree@V?$_Tmap_traits@KV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@PEAX@2@@Z @ 0x1800A0BE0
 * Callers:
 *     ??$_Insert_at@AEAU?$pair@$$CBKV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@KV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@U?$less@K@2@V?$allocator@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@@2@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBKV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@std@@PEAX@1@AEAU?$pair@$$CBKV?$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@Internal@Windows@@@std@@@1@1@Z @ 0x1800A0CE4 (--$_Insert_at@AEAU-$pair@$$CBKV-$shared_ptr@VSpatialInteractionSourceDevice@SpatialInteractions@.c)
 *     _std::_Tree_std::_Tmap_traits_unsigned_char_std::shared_ptr_SpatialInteractionDevices::SpatialInputReportCaps__std::less_unsigned_char__std::allocator_std::pair_unsigned_char_const__std::shared_ptr_SpatialInteractionDevices::SpatialInputReportCaps______0___::_Insert_hint_std::pair_unsigned_char_const__std::shared_ptr_SpatialInteractionDevices::SpatialInputReportCaps____&___ptr64_std::_Tree_node_std::pair_unsigned_char_const__std::shared_ptr_SpatialInteractionDevices::SpatialInputReportCaps____void_____ptr64______ptr64__::_1_::catch$123 @ 0x1800E8D26 (_std--_Tree_std--_Tmap_traits_unsigned_char_std--shared_ptr_SpatialInteractionDevices--SpatialIn.c)
 *     _std::_Tree_std::_Tmap_traits_unsigned_char_std::shared_ptr_SpatialInteractionDevices::SpatialInputReportCaps__std::less_unsigned_char__std::allocator_std::pair_unsigned_char_const__std::shared_ptr_SpatialInteractionDevices::SpatialInputReportCaps______0___::_Insert_nohint_std::pair_unsigned_char_const__std::shared_ptr_SpatialInteractionDevices::SpatialInputReportCaps____&___ptr64_std::_Tree_node_std::pair_unsigned_char_const__std::shared_ptr_SpatialInteractionDevices::SpatialInputReportCaps____void_____ptr64______ptr64__::_1_::catch$51 @ 0x1800E8D49 (_std--_Tree_std--_Tmap_traits_unsigned_char_std--shared_ptr_SpatialInteractionDevic_ea_1800E8D49.c)
 *     _std::_Tree_std::_Tmap_traits_unsigned_long_std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice__std::less_unsigned_long__std::allocator_std::pair_unsigned_long_const__std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice______0___::_Insert_nohint_std::pair_unsigned_long_const__std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice____&___ptr64_std::_Tree_node_std::pair_unsigned_long_const__std::shared_ptr_Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice____void_____ptr64______ptr64__::_1_::catch$51 @ 0x1800E9211 (_std--_Tree_std--_Tmap_traits_unsigned_long_std--shared_ptr_Windows--Internal--SpatialInteractio.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::_Tree<std::_Tmap_traits<unsigned long,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,std::shared_ptr<Windows::Internal::SpatialInteractions::SpatialInteractionSourceDevice>>>,0>>::_Destroy_if_node(
        __int64 a1,
        _QWORD *a2)
{
  volatile signed __int32 *v2; // rbx

  v2 = (volatile signed __int32 *)a2[6];
  if ( v2 )
  {
    if ( _InterlockedExchangeAdd(v2 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v2)(v2);
      if ( _InterlockedExchangeAdd(v2 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v2 + 8LL))(v2);
    }
  }
  operator delete(a2);
}
