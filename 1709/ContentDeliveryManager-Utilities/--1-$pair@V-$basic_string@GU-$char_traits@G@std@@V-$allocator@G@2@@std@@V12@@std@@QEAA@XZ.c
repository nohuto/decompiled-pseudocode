/*
 * XREFs of ??1?$pair@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@QEAA@XZ @ 0x18003EECC
 * Callers:
 *     _CreativeFramework::SubscribedContentStore::GetSubscriptionContext_::_1_::dtor$12 @ 0x1800B6A6A (_CreativeFramework--SubscribedContentStore--GetSubscriptionContext_--_1_--dtor$12.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RegisterSubscription_::_1_::dtor$8 @ 0x1800B6C64 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--RegisterSub_ea_1800B6C64.c)
 *     _std::map_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::less_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short______std::allocator_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_________::operator[]_::_1_::dtor$1 @ 0x1800B7D59 (_std--map_std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--al_ea_1800B7D59.c)
 *     _CreativeFramework::Actions::ResolveTargetPackageFamilyNameForLaunch_::_1_::dtor$0 @ 0x1800BAC5C (_CreativeFramework--Actions--ResolveTargetPackageFamilyNameForLaunch_--_1_--dtor$0.c)
 *     _CreativeFramework::Actions::MakeLaunchUriService_::_1_::dtor$0 @ 0x1800BAC82 (_CreativeFramework--Actions--MakeLaunchUriService_--_1_--dtor$0.c)
 *     _std::map_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____std::less_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t______std::allocator_std::pair_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____const__std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t_________::operator[]_::_1_::dtor$1 @ 0x1800BBA19 (_std--map_std--basic_string_wchar_t_std--char_traits_wchar_t__std--allocator_wchar__ea_1800BBA19.c)
 * Callees:
 *     <none>
 */

void __fastcall std::pair<std::wstring,std::wstring>::~pair<std::wstring,std::wstring>(__int64 a1)
{
  if ( *(_QWORD *)(a1 + 56) >= 8uLL )
    operator delete(*(void **)(a1 + 32));
  *(_QWORD *)(a1 + 56) = 7LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_WORD *)(a1 + 32) = 0;
  if ( *(_QWORD *)(a1 + 24) >= 8uLL )
    operator delete(*(void **)a1);
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_WORD *)a1 = 0;
}
