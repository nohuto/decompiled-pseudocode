/*
 * XREFs of ??$_Destroy_range@V?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@UIWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@@0@@Z @ 0x1801D1D80
 * Callers:
 *     _std::_Uninitialized_move_al_unchecked_wil::com_ptr_t_CRefCountedObject_ViewEventRegistration__wil::err_exception_policy______ptr64_wil::com_ptr_t_CRefCountedObject_ViewEventRegistration__wil::err_exception_policy______ptr64_std::allocator_wil::com_ptr_t_CRefCountedObject_ViewEventRegistration__wil::err_exception_policy______::_1_::catch$2 @ 0x1801D1DF6 (_std--_Uninitialized_move_al_unchecked_wil--com_ptr_t_CRefCountedObject_ViewEventRegistration__w.c)
 * Callees:
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<wil::com_ptr_t<IWindowWrapperInternal,wil::err_exception_policy>>>(
        __int64 *a1,
        __int64 *a2)
{
  __int64 *v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
      result = wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>(v3++);
    while ( v3 != a2 );
  }
  return result;
}
