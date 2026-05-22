/*
 * XREFs of ?deallocate@?$_Wrap_alloc@U?$_Wrap_alloc@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAXPEAV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKPEAVControllerProcessor@@@std@@@std@@@std@@@2@_K@Z @ 0x18000A764
 * Callers:
 *     _std::vector_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_int_const__ViewHierarchy::ViewHierarchyEntry________std::_Wrap_alloc_std::allocator_std::_List_unchecked_iterator_std::_List_val_std::_List_simple_types_std::pair_unsigned_int_const__ViewHierarchy::ViewHierarchyEntry_____________::_Reallocate_exactly_::_1_::catch$52 @ 0x1800CCAD1 (_std--vector_std--_List_unchecked_iterator_std--_List_val_std--_List_simple_types_std--pair_unsi.c)
 *     _std::vector_IDisplayBindingObserver_____ptr64_std::allocator_IDisplayBindingObserver_____ptr64___::emplace_back_IDisplayBindingObserver_____ptr64_const_&___ptr64__::_1_::catch$106 @ 0x1800CD67F (_std--vector_IDisplayBindingObserver_____ptr64_std--allocator_IDisplayBindingObserver_____ptr64_.c)
 *     _std::vector_Microsoft::WRL::ComPtr_Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal__std::allocator_Microsoft::WRL::ComPtr_Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal_____::emplace_back_Microsoft::WRL::ComPtr_Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal__const_&___ptr64__::_1_::catch$107 @ 0x1800CD6FA (_std--vector_Microsoft--WRL--ComPtr_Windows--Graphics--Holographic--Internal--IHolographicDispla.c)
 *     _std::vector_Input::PropertyNode_____ptr64_std::allocator_Input::PropertyNode_____ptr64___::emplace_Input::PropertyNode_____ptr64_const_&___ptr64__::_1_::catch$109 @ 0x1800CE13C (_std--vector_Input--PropertyNode_____ptr64_std--allocator_Input--PropertyNode_____ptr64___--empl.c)
 *     _std::vector_Input::PropertyNode_____ptr64_std::allocator_Input::PropertyNode_____ptr64___::emplace_back_Input::PropertyNode_____ptr64_const_&___ptr64__::_1_::catch$72 @ 0x1800CE163 (_std--vector_Input--PropertyNode_____ptr64_std--allocator_Input--PropertyNode_____p_ea_1800CE163.c)
 *     _std::vector_Microsoft::WRL::ComPtr_IMPCInputProviderBase__std::allocator_Microsoft::WRL::ComPtr_IMPCInputProviderBase_____::emplace_back_Microsoft::WRL::ComPtr_IMPCInputProviderBase____::_1_::catch$107 @ 0x1800CF08F (_std--vector_Microsoft--WRL--ComPtr_IMPCInputProviderBase__std--allocator_Microsoft--WRL--ComPtr.c)
 *     _std::vector_wil::com_ptr_t_IMPCInputProviderBase_wil::err_exception_policy__std::allocator_wil::com_ptr_t_IMPCInputProviderBase_wil::err_exception_policy_____::emplace_back_wil::com_ptr_t_IMPCInputProviderBase_wil::err_exception_policy__const_&___ptr64__::_1_::catch$107 @ 0x1800CF240 (_std--vector_wil--com_ptr_t_IMPCInputProviderBase_wil--err_exception_policy__std--allocator_wil-.c)
 *     _std::vector_Microsoft::WRL::Wrappers::HString_std::allocator_Microsoft::WRL::Wrappers::HString___::emplace_back_Microsoft::WRL::Wrappers::HString__::_1_::catch$107 @ 0x1800D1160 (_std--vector_Microsoft--WRL--Wrappers--HString_std--allocator_Microsoft--WRL--Wrappers--HString_.c)
 *     _std::vector_Microsoft::WRL::ComPtr_WGIController__std::allocator_Microsoft::WRL::ComPtr_WGIController_____::emplace_back_Microsoft::WRL::ComPtr_WGIController____::_1_::catch$107 @ 0x1800D1452 (_std--vector_Microsoft--WRL--ComPtr_WGIController__std--allocator_Microsoft--WRL--ComPtr_WGICont.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Wrap_alloc<std::_Wrap_alloc<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ControllerProcessor *>>>>>>>::deallocate(
        __int64 a1,
        _QWORD *a2,
        unsigned __int64 a3)
{
  unsigned __int64 v3; // rax

  if ( a3 > 0x1FFFFFFFFFFFFFFFLL )
    goto LABEL_8;
  if ( 8 * a3 >= 0x1000 )
  {
    if ( ((unsigned __int8)a2 & 0x1F) == 0 )
    {
      v3 = *(a2 - 1);
      if ( v3 < (unsigned __int64)a2 && (unsigned __int64)a2 - v3 - 8 <= 0x1F )
      {
        a2 = (_QWORD *)*(a2 - 1);
        goto LABEL_7;
      }
    }
LABEL_8:
    _o__invalid_parameter_noinfo_noreturn(a1);
    JUMPOUT(0x18000A7B6LL);
  }
LABEL_7:
  operator delete(a2);
}
