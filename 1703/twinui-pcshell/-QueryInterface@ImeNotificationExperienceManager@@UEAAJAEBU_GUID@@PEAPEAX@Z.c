/*
 * XREFs of ?QueryInterface@ImeNotificationExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x18009F5B0
 * Callers:
 *     ?QueryInterface@ImeNotificationExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A07B0 (-QueryInterface@ImeNotificationExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@ImeNotificationExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A07F0 (-QueryInterface@ImeNotificationExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ImeNotificationExperienceManager::QueryInterface(
        ImeNotificationExperienceManager *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IImeStatusNotificationExperienceManager,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
           this,
           a2,
           a3);
}
