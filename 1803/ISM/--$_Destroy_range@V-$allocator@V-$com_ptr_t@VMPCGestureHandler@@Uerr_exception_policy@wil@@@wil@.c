/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@VMPCGestureHandler@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x18005685C
 * Callers:
 *     _std::_Uninitialized_move_al_unchecked_wil::com_ptr_t_IMPCInputProviderBase_wil::err_exception_policy______ptr64_wil::com_ptr_t_IMPCInputProviderBase_wil::err_exception_policy______ptr64_std::allocator_wil::com_ptr_t_IMPCInputProviderBase_wil::err_exception_policy______::_1_::catch$2 @ 0x1800E6782 (_std--_Uninitialized_move_al_unchecked_wil--com_ptr_t_IMPCInputProviderBase_wil--err_exception_p.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<wil::com_ptr_t<MPCGestureHandler,wil::err_exception_policy>>>(
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
