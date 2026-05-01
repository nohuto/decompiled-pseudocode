/*
 * XREFs of _std::vector_wil::com_ptr_t_CRefCountedObject_ViewEventRegistration__wil::err_exception_policy__std::allocator_wil::com_ptr_t_CRefCountedObject_ViewEventRegistration__wil::err_exception_policy_____::emplace_back_wil::com_ptr_t_CRefCountedObject_ViewEventRegistration__wil::err_exception_policy____::_1_::catch$65 @ 0x1801D205E
 * Callers:
 *     <none>
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180092334 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     _CxxThrowException_0 @ 0x1800991D2 (_CxxThrowException_0.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 */

void __fastcall __noreturn std::vector_wil::com_ptr_t_CRefCountedObject_ViewEventRegistration__wil::err_exception_policy__std::allocator_wil::com_ptr_t_CRefCountedObject_ViewEventRegistration__wil::err_exception_policy_____::emplace_back_wil::com_ptr_t_CRefCountedObject_ViewEventRegistration__wil::err_exception_policy____::_1_::catch_65(
        __int64 a1,
        unsigned __int64 *a2)
{
  char *v3; // rbx

  v3 = (char *)a2[16];
  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)&v3[8 * a2[17]]);
  std::_Deallocate(v3, a2[14], 8uLL);
  throw;
}
