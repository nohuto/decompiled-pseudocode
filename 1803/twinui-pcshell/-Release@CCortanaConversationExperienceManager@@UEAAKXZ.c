/*
 * XREFs of ?Release@CCortanaConversationExperienceManager@@UEAAKXZ @ 0x180159A00
 * Callers:
 *     ?Release@CCortanaConversationExperienceManager@@W7EAAKXZ @ 0x1800A4DF0 (-Release@CCortanaConversationExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CCortanaConversationExperienceManager@@WBA@EAAKXZ @ 0x1800A4E00 (-Release@CCortanaConversationExperienceManager@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCortanaConversationExperienceManager::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs,Microsoft::WRL::FtmBase>::Release(this);
}
