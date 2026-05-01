/*
 * XREFs of ?Release@ImeNotificationExperienceManager@@UEAAKXZ @ 0x18009F5C0
 * Callers:
 *     ?Release@ImeNotificationExperienceManager@@W7EAAKXZ @ 0x1800A0820 (-Release@ImeNotificationExperienceManager@@W7EAAKXZ.c)
 *     ?Release@ImeNotificationExperienceManager@@WBA@EAAKXZ @ 0x1800A0840 (-Release@ImeNotificationExperienceManager@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall ImeNotificationExperienceManager::Release(ImeNotificationExperienceManager *this)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IImeStatusNotificationExperienceManager,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(this);
}
