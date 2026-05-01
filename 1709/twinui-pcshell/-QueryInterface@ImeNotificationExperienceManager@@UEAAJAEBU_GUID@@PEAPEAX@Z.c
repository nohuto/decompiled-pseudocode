/*
 * XREFs of ?QueryInterface@ImeNotificationExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A9E70
 * Callers:
 *     ?QueryInterface@ImeNotificationExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AACF0 (-QueryInterface@ImeNotificationExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ImeNotificationExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800AAD10 (-QueryInterface@ImeNotificationExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ImeNotificationExperienceManager::QueryInterface(
        ImeNotificationExperienceManager *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IImeStatusNotificationExperienceManager,Windows::Foundation::IClosable>::QueryInterface(
           this,
           a2,
           a3);
}
