/*
 * XREFs of std::_Func_impl__lambda_7abacd01c797ad658b6751f75d627ba4__std::allocator_int__void_std::shared_ptr_SpatialInteractionDevices::SpatialInteractionController__const_&___ptr64_::_Do_call @ 0x1800993F0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800367C4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FinalizeControllerInitialization@SpatialInputControllerCollection@@AEAAJAEBV?$shared_ptr@VSpatialInteractionController@SpatialInteractionDevices@@@std@@@Z @ 0x1800933D0 (-FinalizeControllerInitialization@SpatialInputControllerCollection@@AEAAJAEBV-$shared_ptr@VSpati.c)
 */

void __fastcall std::_Func_impl__lambda_7abacd01c797ad658b6751f75d627ba4__std::allocator_int__void_std::shared_ptr_SpatialInteractionDevices::SpatialInteractionController__const_____ptr64_::_Do_call(
        __int64 a1,
        SpatialInteractionDevices::SpatialInteractionController **a2)
{
  int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = SpatialInputControllerCollection::FinalizeControllerInitialization(
         *(SpatialInputControllerCollection **)(a1 + 8),
         a2);
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x3EB,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\spatialinputcontrollercollection.cpp",
      (const char *)(unsigned int)v2);
}
