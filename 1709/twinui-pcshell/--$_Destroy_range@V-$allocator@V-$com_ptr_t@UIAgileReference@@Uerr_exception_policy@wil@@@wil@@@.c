/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@PEAV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@YAXPEAV?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@0AEAU?$_Wrap_alloc@V?$allocator@V?$com_ptr_t@UIAgileReference@@Uerr_exception_policy@wil@@@wil@@@std@@@0@@Z @ 0x1800250B0
 * Callers:
 *     _std::_Uninitialized_move_al_unchecked_wil::com_ptr_t_IAgileReference_wil::err_exception_policy______ptr64_wil::com_ptr_t_IAgileReference_wil::err_exception_policy______ptr64_std::allocator_wil::com_ptr_t_IAgileReference_wil::err_exception_policy______::_1_::catch$4 @ 0x1801E7597 (_std--_Uninitialized_move_al_unchecked_wil--com_ptr_t_IAgileReference_wil--err_exception_policy_.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<wil::com_ptr_t<IAgileReference,wil::err_exception_policy>>,wil::com_ptr_t<IAgileReference,wil::err_exception_policy> *>(
        _QWORD *a1,
        _QWORD *a2)
{
  _QWORD *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      if ( *v3 )
        result = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v3 + 16LL))(*v3);
      ++v3;
    }
    while ( v3 != a2 );
  }
  return result;
}
