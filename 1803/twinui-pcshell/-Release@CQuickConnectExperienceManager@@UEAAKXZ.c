/*
 * XREFs of ?Release@CQuickConnectExperienceManager@@UEAAKXZ @ 0x18017D1F0
 * Callers:
 *     ?Release@CQuickConnectExperienceManager@@W7EAAKXZ @ 0x1800A59C0 (-Release@CQuickConnectExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CQuickConnectExperienceManager@@WBA@EAAKXZ @ 0x1800A59D0 (-Release@CQuickConnectExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@CQuickConnectExperienceManager@@WBI@EAAKXZ @ 0x1800A59E0 (-Release@CQuickConnectExperienceManager@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CQuickConnectExperienceManager::Release(CQuickConnectExperienceManager *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ILightDismissNotification,Windows::Internal::Shell::Experience::IQuickConnectExperienceManager>::Release(this);
}
