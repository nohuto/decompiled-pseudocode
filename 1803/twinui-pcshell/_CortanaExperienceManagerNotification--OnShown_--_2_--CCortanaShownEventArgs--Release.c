/*
 * XREFs of _CortanaExperienceManagerNotification::OnShown_::_2_::CCortanaShownEventArgs::Release @ 0x180085B00
 * Callers:
 *     ?OnShown@CortanaExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z @ 0x180085480 (-OnShown@CortanaExperienceManagerNotification@@UEAAXURect@Foundation@Windows@@@Z.c)
 *     sub_1800A5010 @ 0x1800A5010 (sub_1800A5010.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CortanaExperienceManagerNotification::OnShown_::_2_::CCortanaShownEventArgs::Release(void *a1)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::ICortanaShownEventArgs>::Release(a1);
}
