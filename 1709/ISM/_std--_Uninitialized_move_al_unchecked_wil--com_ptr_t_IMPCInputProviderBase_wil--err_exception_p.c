/*
 * XREFs of _std::_Uninitialized_move_al_unchecked_wil::com_ptr_t_IMPCInputProviderBase_wil::err_exception_policy______ptr64_wil::com_ptr_t_IMPCInputProviderBase_wil::err_exception_policy______ptr64_std::allocator_wil::com_ptr_t_IMPCInputProviderBase_wil::err_exception_policy______::_1_::catch$4 @ 0x1800CF303
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@PEAV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@YAXPEAV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@0AEAU?$_Wrap_alloc@V?$allocator@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@0@@Z @ 0x18005BDF4 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@.c)
 *     _CxxThrowException_0 @ 0x1800CB710 (_CxxThrowException_0.c)
 */

void __fastcall __noreturn std::_Uninitialized_move_al_unchecked_wil::com_ptr_t_IMPCInputProviderBase_wil::err_exception_policy______ptr64_wil::com_ptr_t_IMPCInputProviderBase_wil::err_exception_policy______ptr64_std::allocator_wil::com_ptr_t_IMPCInputProviderBase_wil::err_exception_policy______::_1_::catch_4(
        __int64 a1,
        __int64 a2)
{
  std::_Destroy_range<std::allocator<wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>,wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy> *>(
    *(_QWORD **)(a2 + 88),
    *(_QWORD **)(a2 + 80));
  throw;
}
