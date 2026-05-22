/*
 * XREFs of std::_Func_impl__lambda_cb1880b0b6d135697f69bd79e9e60569__std::allocator_int__void_std::shared_ptr_SpatialInteractionDevices::SpatialInteractionController__const_&___ptr64_::_Do_call @ 0x1800990C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800367C4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryUpdateControllerNodeReference@SpatialInputControllerCollection@@AEAAJAEBV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x180095644 (-TryUpdateControllerNodeReference@SpatialInputControllerCollection@@AEAAJAEBV-$shared_ptr@VSpati.c)
 *     ?HasDynamicNode@SpatialInteractionController@SpatialInteractionDevices@@QEBA_NXZ @ 0x1800C43BC (-HasDynamicNode@SpatialInteractionController@SpatialInteractionDevices@@QEBA_NXZ.c)
 */

void __fastcall std::_Func_impl__lambda_cb1880b0b6d135697f69bd79e9e60569__std::allocator_int__void_std::shared_ptr_SpatialInteractionDevices::SpatialInteractionController__const_____ptr64_::_Do_call(
        __int64 a1,
        SpatialInteractionDevices::SpatialInteractionController **a2)
{
  int updated; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !SpatialInteractionDevices::SpatialInteractionController::HasDynamicNode(*a2) )
  {
    updated = SpatialInputControllerCollection::TryUpdateControllerNodeReference(*(HSTRING **)(a1 + 8), a2);
    if ( updated < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x72F,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
        (const char *)(unsigned int)updated);
  }
}
