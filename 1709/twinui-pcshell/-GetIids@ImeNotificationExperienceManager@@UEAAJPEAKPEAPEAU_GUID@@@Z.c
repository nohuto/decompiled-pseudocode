/*
 * XREFs of ?GetIids@ImeNotificationExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800A9E60
 * Callers:
 *     ?GetIids@ImeNotificationExperienceManager@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800AAD90 (-GetIids@ImeNotificationExperienceManager@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ImeNotificationExperienceManager::GetIids(
        ImeNotificationExperienceManager *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IImeStatusNotificationExperienceManager,Windows::Foundation::IClosable>::GetIids(
           this,
           a2,
           a3);
}
