/*
 * XREFs of std::_Func_impl__lambda_c8f651e38185f834b11d436f20cb123b__std::allocator_int__void_std::shared_ptr_SpatialInteractionDevices::SpatialInteractionController__const_&___ptr64_::_Do_call @ 0x1800991C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800367C4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryUpdateControllerNodeReference@SpatialInputControllerCollection@@AEAAJAEBV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@W4SPATIAL_TRACKING_STATE@@@Z @ 0x180095644 (-TryUpdateControllerNodeReference@SpatialInputControllerCollection@@AEAAJAEBV-$shared_ptr@VSpati.c)
 */

void __fastcall std::_Func_impl__lambda_c8f651e38185f834b11d436f20cb123b__std::allocator_int__void_std::shared_ptr_SpatialInteractionDevices::SpatialInteractionController__const_____ptr64_::_Do_call(
        __int64 a1,
        _QWORD *a2)
{
  int updated; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  updated = SpatialInputControllerCollection::TryUpdateControllerNodeReference(*(HSTRING **)(a1 + 8), a2);
  if ( updated < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x671,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)(unsigned int)updated);
}
