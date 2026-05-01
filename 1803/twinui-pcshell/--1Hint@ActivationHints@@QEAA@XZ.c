/*
 * XREFs of ??1Hint@ActivationHints@@QEAA@XZ @ 0x1802B0E78
 * Callers:
 *     _ActivationHints::AddHint_::_1_::dtor$3 @ 0x1802B1068 (_ActivationHints--AddHint_--_1_--dtor$3.c)
 * Callees:
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 */

void __fastcall ActivationHints::Hint::~Hint(ActivationHints::Hint *this)
{
  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)this + 5);
  std::wstring::_Tidy_deallocate((__int64)this);
}
