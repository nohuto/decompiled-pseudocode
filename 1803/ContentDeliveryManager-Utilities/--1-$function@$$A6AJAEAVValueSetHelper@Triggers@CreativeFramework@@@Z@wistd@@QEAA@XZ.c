/*
 * XREFs of ??1?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@QEAA@XZ @ 0x180016924
 * Callers:
 *     _wil::details_abi::RecordWnfUsageIndex_::_1_::dtor$7 @ 0x1800C1E9E (_wil--details_abi--RecordWnfUsageIndex_--_1_--dtor$7.c)
 *     _ContentManagement::ContentManagementService::SendAppServiceMessage_::_1_::dtor$0 @ 0x1800C2C10 (_ContentManagement--ContentManagementService--SendAppServiceMessage_--_1_--dtor$0.c)
 *     _ContentManagement::TargetedContent::Internal::SubscriptionManagerImpl::RuntimeClassInitialize_::_1_::dtor$0 @ 0x1800C36C8 (_ContentManagement--TargetedContent--Internal--SubscriptionManagerImpl--RuntimeClassInitialize_-.c)
 *     _wil::AdaptFixedSizeToAllocatedResult_std::basic_string_wchar_t_std::char_traits_wchar_t__std::allocator_wchar_t____260__::_1_::dtor$0 @ 0x1800C8A10 (_wil--AdaptFixedSizeToAllocatedResult_std--basic_string_wchar_t_std--char_traits_wchar_t__std--a.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wistd::function<long (CreativeFramework::Triggers::ValueSetHelper &)>::~function<long (CreativeFramework::Triggers::ValueSetHelper &)>(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a1 + 104);
  if ( v3 )
  {
    LOBYTE(a2) = v3 != a1;
    result = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 24LL))(v3, a2);
    *(_QWORD *)(a1 + 104) = 0LL;
  }
  return result;
}
