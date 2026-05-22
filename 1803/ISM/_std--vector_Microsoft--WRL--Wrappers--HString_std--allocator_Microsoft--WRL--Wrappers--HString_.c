/*
 * XREFs of _std::vector_Microsoft::WRL::Wrappers::HString_std::allocator_Microsoft::WRL::Wrappers::HString___::emplace_back_Microsoft::WRL::Wrappers::HString__::_1_::catch$100 @ 0x1800E904A
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Unfancy@V?$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@YAPEAV?$ComPtr@VWGIController@@@WRL@Microsoft@@PEAV123@@Z @ 0x1800051B0 (--$_Unfancy@V-$ComPtr@VWGIController@@@WRL@Microsoft@@@std@@YAPEAV-$ComPtr@VWGIController@@@WRL@.c)
 *     ?deallocate@?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@std@@@std@@QEAAXQEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@2@_K@Z @ 0x18000A3B4 (-deallocate@-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$.c)
 *     ??$destroy@VHString@Wrappers@WRL@Microsoft@@@?$_Default_allocator_traits@V?$allocator@VHString@Wrappers@WRL@Microsoft@@@std@@@std@@SAXAEAV?$allocator@VHString@Wrappers@WRL@Microsoft@@@1@QEAVHString@Wrappers@WRL@Microsoft@@@Z @ 0x1800AA750 (--$destroy@VHString@Wrappers@WRL@Microsoft@@@-$_Default_allocator_traits@V-$allocator@VHString@W.c)
 *     _CxxThrowException_0 @ 0x1800E22F0 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::vector_Microsoft::WRL::Wrappers::HString_std::allocator_Microsoft::WRL::Wrappers::HString___::emplace_back_Microsoft::WRL::Wrappers::HString__::_1_::catch_100(
        __int64 a1,
        _QWORD *a2)
{
  unsigned __int64 v3; // rbx
  HSTRING *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rcx

  v3 = a2[16];
  v4 = (HSTRING *)std::_Unfancy<Microsoft::WRL::ComPtr<WGIController>>(v3 + 8LL * a2[19]);
  std::_Default_allocator_traits<std::allocator<Microsoft::WRL::Wrappers::HString>>::destroy<Microsoft::WRL::Wrappers::HString>(
    v5,
    v4);
  std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>>>>::deallocate(
    v6,
    v3,
    a2[18]);
  throw;
}
