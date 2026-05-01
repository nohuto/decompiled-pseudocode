/*
 * XREFs of ?Release@CCortanaConversationExperienceManager@@UEAAKXZ @ 0x18009D9E0
 * Callers:
 *     ?Release@CCortanaConversationExperienceManager@@W7EAAKXZ @ 0x18009E250 (-Release@CCortanaConversationExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CCortanaConversationExperienceManager@@WBA@EAAKXZ @ 0x18009E260 (-Release@CCortanaConversationExperienceManager@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CCortanaConversationExperienceManager::Release(CCortanaConversationExperienceManager *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ICortanaConversationExperienceManager,Microsoft::WRL::FtmBase>::Release(this);
}
