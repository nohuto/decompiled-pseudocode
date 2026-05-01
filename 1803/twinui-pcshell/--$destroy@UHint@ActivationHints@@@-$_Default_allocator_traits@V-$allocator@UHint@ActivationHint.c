/*
 * XREFs of ??$destroy@UHint@ActivationHints@@@?$_Default_allocator_traits@V?$allocator@UHint@ActivationHints@@@std@@@std@@SAXAEAV?$allocator@UHint@ActivationHints@@@1@QEAUHint@ActivationHints@@@Z @ 0x1802B0AB8
 * Callers:
 *     _std::vector_ActivationHints::Hint_std::allocator_ActivationHints::Hint___::emplace_back_ActivationHints::Hint__::_1_::catch$99 @ 0x1802B0C67 (_std--vector_ActivationHints--Hint_std--allocator_ActivationHints--Hint___--emplace_back_Activat.c)
 * Callees:
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 */

__int64 __fastcall std::_Default_allocator_traits<std::allocator<ActivationHints::Hint>>::destroy<ActivationHints::Hint>(
        __int64 a1,
        __int64 a2)
{
  wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)(a2 + 40));
  return std::wstring::_Tidy_deallocate(a2);
}
