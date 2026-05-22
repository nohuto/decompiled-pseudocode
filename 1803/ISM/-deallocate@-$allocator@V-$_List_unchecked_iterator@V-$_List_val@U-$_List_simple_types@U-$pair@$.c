/*
 * XREFs of ?deallocate@?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@std@@@std@@QEAAXQEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUtagMsgRoutingInfo@@UtagInputRoutingInfo@@@std@@@std@@@std@@@2@_K@Z @ 0x18000A3B4
 * Callers:
 *     _std::vector_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_long_const__unsigned___int64________std::allocator_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_long_const__unsigned___int64___________::_Reallocate_exactly_::_1_::catch$53 @ 0x1800E3914 (_std--vector_std--_List_unchecked_iterator_std--_List_val_std--_List_simple_types_std--pair_unsi.c)
 *     _std::vector_Microsoft::WRL::ComPtr_BamoControllerNavigationOverrideProxy__std::allocator_Microsoft::WRL::ComPtr_BamoControllerNavigationOverrideProxy_____::emplace_back_Microsoft::WRL::ComPtr_BamoControllerNavigationOverrideProxy____::_1_::catch$103 @ 0x1800E3B7D (_std--vector_Microsoft--WRL--ComPtr_BamoControllerNavigationOverrideProxy__std--allocator_Micros.c)
 *     _std::vector_ISupportedInputUpdateObserver_____ptr64_std::allocator_ISupportedInputUpdateObserver_____ptr64___::emplace_back_ISupportedInputUpdateObserver_____ptr64_const_&___ptr64__::_1_::catch$102 @ 0x1800E3BC0 (_std--vector_ISupportedInputUpdateObserver_____ptr64_std--allocator_ISupportedInputUpdateObserve.c)
 *     _std::vector_Microsoft::WRL::ComPtr_IContextualProcessor__std::allocator_Microsoft::WRL::ComPtr_IContextualProcessor_____::emplace_back_Microsoft::WRL::ComPtr_IContextualProcessor____::_1_::catch$103 @ 0x1800E3BE4 (_std--vector_Microsoft--WRL--ComPtr_IContextualProcessor__std--allocator_Microsoft--WRL--ComPtr_.c)
 *     _std::vector_Microsoft::WRL::ComPtr_BamoInputAttemptedDeliveryClientProxy__std::allocator_Microsoft::WRL::ComPtr_BamoInputAttemptedDeliveryClientProxy_____::emplace_back_Microsoft::WRL::ComPtr_BamoInputAttemptedDeliveryClientProxy__const_&___ptr64__::_1_::catch$103 @ 0x1800E4544 (_std--vector_Microsoft--WRL--ComPtr_BamoInputAttemptedDeliveryClientProxy__std--allocator_Micros.c)
 *     _std::vector_Microsoft::WRL::ComPtr_Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal__std::allocator_Microsoft::WRL::ComPtr_Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal_____::emplace_back_Microsoft::WRL::ComPtr_Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal__const_&___ptr64__::_1_::catch$100 @ 0x1800E47E1 (_std--vector_Microsoft--WRL--ComPtr_Windows--Graphics--Holographic--Internal--IHolographicDispla.c)
 *     _std::vector_wil::com_ptr_t_IMPCInputProviderBase_wil::err_exception_policy__std::allocator_wil::com_ptr_t_IMPCInputProviderBase_wil::err_exception_policy_____::emplace_back_wil::com_ptr_t_IMPCInputProviderBase_wil::err_exception_policy__const_&___ptr64__::_1_::catch$103 @ 0x1800E66BC (_std--vector_wil--com_ptr_t_IMPCInputProviderBase_wil--err_exception_policy__std--allocator_wil-.c)
 *     _std::vector_Microsoft::WRL::ComPtr_WGIController__std::allocator_Microsoft::WRL::ComPtr_WGIController_____::emplace_back_Microsoft::WRL::ComPtr_WGIController____::_1_::catch$103 @ 0x1800E7537 (_std--vector_Microsoft--WRL--ComPtr_WGIController__std--allocator_Microsoft--WRL--ComPtr_WGICont.c)
 *     _std::vector_Microsoft::WRL::Wrappers::HString_std::allocator_Microsoft::WRL::Wrappers::HString___::emplace_back_Microsoft::WRL::Wrappers::HString__::_1_::catch$100 @ 0x1800E904A (_std--vector_Microsoft--WRL--Wrappers--HString_std--allocator_Microsoft--WRL--Wrappers--HString_.c)
 *     _std::vector_std::unique_ptr_Windows::Internal::Holographic::V2PropertyRequest_std::default_delete_Windows::Internal::Holographic::V2PropertyRequest____std::allocator_std::unique_ptr_Windows::Internal::Holographic::V2PropertyRequest_std::default_delete_Windows::Internal::Holographic::V2PropertyRequest_______::emplace_back_std::unique_ptr_Windows::Internal::Holographic::V2PropertyRequest_std::default_delete_Windows::Internal::Holographic::V2PropertyRequest______::_1_::catch$137 @ 0x1800E9C36 (_std--vector_std--unique_ptr_Windows--Internal--Holographic--V2PropertyRequest_std--default_dele.c)
 *     _std::vector_std::function_void___cdecl(void)__const_____ptr64_std::allocator_std::function_void___cdecl(void)__const_____ptr64___::emplace_back_std::function_void___cdecl(void)__const_____ptr64_const_&___ptr64__::_1_::catch$99 @ 0x1800E9CA0 (_std--vector_std--function_void___cdecl(void)__const_____ptr64_std--allocator_std--function_void.c)
 * Callees:
 *     <none>
 */

void __fastcall std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<tagMsgRoutingInfo const,tagInputRoutingInfo>>>>>::deallocate(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // rax

  if ( a3 > 0x1FFFFFFFFFFFFFFFLL )
    goto LABEL_8;
  if ( 8 * a3 >= 0x1000 )
  {
    if ( (a2 & 0x1F) == 0 )
    {
      v3 = *(_QWORD *)(a2 - 8);
      if ( v3 < a2 )
      {
        a2 = a2 - v3 - 8;
        if ( a2 <= 0x1F )
        {
          a2 = v3;
          goto LABEL_7;
        }
      }
    }
LABEL_8:
    _o__invalid_parameter_noinfo_noreturn(a1, a2);
    JUMPOUT(0x18000A406LL);
  }
LABEL_7:
  operator delete((void *)a2);
}
