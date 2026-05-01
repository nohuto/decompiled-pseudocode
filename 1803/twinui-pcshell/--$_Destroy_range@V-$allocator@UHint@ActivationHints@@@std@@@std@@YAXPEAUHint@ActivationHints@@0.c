/*
 * XREFs of ??$_Destroy_range@V?$allocator@UHint@ActivationHints@@@std@@@std@@YAXPEAUHint@ActivationHints@@0AEAV?$allocator@UHint@ActivationHints@@@0@@Z @ 0x1802B09CC
 * Callers:
 *     _std::_Uninitialized_move_al_unchecked_ActivationHints::Hint_____ptr64_ActivationHints::Hint_____ptr64_std::allocator_ActivationHints::Hint____::_1_::catch$19 @ 0x1802B0A91 (_std--_Uninitialized_move_al_unchecked_ActivationHints--Hint_____ptr64_ActivationHints--Hint____.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x18008C878 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ??1?$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800F81DC (--1-$com_ptr_t@VAppViewTitleChangeListener@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exce.c)
 */

__int64 __fastcall std::_Destroy_range<std::allocator<ActivationHints::Hint>>(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( a1 != a2 )
  {
    v3 = a1;
    do
    {
      wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>::~com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::AppViewTitleChangeListener,wil::err_exception_policy>((__int64 *)(v3 + 40));
      result = std::wstring::_Tidy_deallocate(v3);
      v3 += 48LL;
    }
    while ( v3 != a2 );
  }
  return result;
}
