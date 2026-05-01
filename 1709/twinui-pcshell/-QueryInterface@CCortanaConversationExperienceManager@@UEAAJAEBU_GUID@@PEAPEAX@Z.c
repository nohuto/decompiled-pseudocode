/*
 * XREFs of ?QueryInterface@CCortanaConversationExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009D9D0
 * Callers:
 *     ?QueryInterface@CCortanaConversationExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009E200 (-QueryInterface@CCortanaConversationExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CCortanaConversationExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009E230 (-QueryInterface@CCortanaConversationExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCortanaConversationExperienceManager::QueryInterface(
        CCortanaConversationExperienceManager *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ICortanaConversationExperienceManager,Microsoft::WRL::FtmBase>::QueryInterface(
           this,
           a2,
           a3);
}
