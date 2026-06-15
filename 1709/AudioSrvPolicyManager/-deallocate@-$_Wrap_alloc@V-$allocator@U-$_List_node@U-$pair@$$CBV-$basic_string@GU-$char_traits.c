/*
 * XREFs of ?deallocate@?$_Wrap_alloc@V?$allocator@U?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@PEAX@std@@@std@@@std@@QEAAXPEAU?$_List_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$unique_ptr@VCEndpointVolumeState@@U?$default_delete@VCEndpointVolumeState@@@std@@@2@@std@@PEAX@2@_K@Z @ 0x180025FC0
 * Callers:
 *     _std::_List_alloc_std::_List_base_types_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::unique_ptr_CEndpointVolumeState_std::default_delete_CEndpointVolumeState______std::allocator_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::unique_ptr_CEndpointVolumeState_std::default_delete_CEndpointVolumeState___________::_Buynode0_::_1_::catch$14 @ 0x180029263 (_std--_List_alloc_std--_List_base_types_std--pair_std--basic_string_unsigned_short_std--char_tra.c)
 *     _std::_List_buy_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::unique_ptr_CEndpointVolumeState_std::default_delete_CEndpointVolumeState______std::allocator_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::unique_ptr_CEndpointVolumeState_std::default_delete_CEndpointVolumeState_________::_Buynode_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::unique_ptr_CEndpointVolumeState_std::default_delete_CEndpointVolumeState________::_1_::catch$42 @ 0x180029283 (_std--_List_buy_std--pair_std--basic_string_unsigned_short_std--char_traits_unsigned_short__std-.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall std::_Wrap_alloc<std::allocator<std::_List_node<std::pair<std::wstring const,std::unique_ptr<CEndpointVolumeState>>,void *>>>::deallocate(
        __int64 a1,
        void *a2)
{
  HANDLE ProcessHeap; // rax

  ProcessHeap = GetProcessHeap();
  return HeapFree(ProcessHeap, 0, a2);
}
