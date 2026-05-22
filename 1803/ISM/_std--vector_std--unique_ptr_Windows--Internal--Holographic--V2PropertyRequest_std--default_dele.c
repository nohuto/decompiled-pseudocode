/*
 * XREFs of _std::vector_std::unique_ptr_Windows::Internal::Holographic::V2PropertyRequest_std::default_delete_Windows::Internal::Holographic::V2PropertyRequest____std::allocator_std::unique_ptr_Windows::Internal::Holographic::V2PropertyRequest_std::default_delete_Windows::Internal::Holographic::V2PropertyRequest_______::emplace_back_std::unique_ptr_Windows::Internal::Holographic::V2PropertyRequest_std::default_delete_Windows::Internal::Holographic::V2PropertyRequest______::_1_::catch$137 @ 0x1800E9C36
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Unfancy@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@YAPEAV?$ComPtr@VWGIController@@@WRL@Microsoft@@PEAV123@@Z @ 0x1800051B0 (--$_Unfancy@V-$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@YAPEAV-$ComPtr@VWGIController@@@WRL@.c)
 *     ?deallocate@?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@std@@@std@@QEAAXQEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@2@_K@Z @ 0x18000A3B4 (-deallocate@-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$.c)
 *     ??$destroy@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@?$_Default_allocator_traits@V?$allocator@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@std@@@std@@SAXAEAV?$allocator@V?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@std@@@1@QEAV?$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U?$default_delete@VV2PropertyRequest@Holographic@Internal@Windows@@@std@@@1@@Z @ 0x1800CD300 (--$destroy@V-$unique_ptr@VV2PropertyRequest@Holographic@Internal@Windows@@U-$default_delete@VV2P.c)
 *     _CxxThrowException_0 @ 0x1800E22F0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_std::unique_ptr_Windows::Internal::Holographic::V2PropertyRequest_std::default_delete_Windows::Internal::Holographic::V2PropertyRequest____std::allocator_std::unique_ptr_Windows::Internal::Holographic::V2PropertyRequest_std::default_delete_Windows::Internal::Holographic::V2PropertyRequest_______::emplace_back_std::unique_ptr_Windows::Internal::Holographic::V2PropertyRequest_std::default_delete_Windows::Internal::Holographic::V2PropertyRequest______::_1_::catch_137(
        __int64 a1,
        _QWORD *a2)
{
  unsigned __int64 v3; // rbx
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx

  v3 = a2[16];
  v4 = (_QWORD *)std::_Unfancy<Microsoft::WRL::ComPtr<WGIController>>(v3 + 8LL * a2[19]);
  std::_Default_allocator_traits<std::allocator<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>>::destroy<std::unique_ptr<Windows::Internal::Holographic::V2PropertyRequest>>(
    v5,
    v4);
  std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>>>>::deallocate(
    v6,
    v3,
    a2[18]);
  throw;
}
