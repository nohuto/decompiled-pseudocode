/*
 * XREFs of ?AddRef@CActionCenterExperienceManager@@WEA@EAAKXZ @ 0x18009D530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CActionCenterExperienceManager::AddRef(__int64 a1)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,ViewEventArgsBase,Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForShowAsStandalone>::AddRef(a1 - 64);
}
