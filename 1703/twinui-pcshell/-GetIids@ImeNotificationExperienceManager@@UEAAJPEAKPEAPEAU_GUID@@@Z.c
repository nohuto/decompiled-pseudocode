/*
 * XREFs of ?GetIids@ImeNotificationExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x18009F5A0
 * Callers:
 *     ?GetIids@ImeNotificationExperienceManager@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800A0870 (-GetIids@ImeNotificationExperienceManager@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ImeNotificationExperienceManager::GetIids(
        ImeNotificationExperienceManager *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IImeStatusNotificationExperienceManager,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::GetIids(
           this,
           a2,
           a3);
}
