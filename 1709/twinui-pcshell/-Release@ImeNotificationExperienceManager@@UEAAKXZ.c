/*
 * XREFs of ?Release@ImeNotificationExperienceManager@@UEAAKXZ @ 0x1800A9E80
 * Callers:
 *     ?Release@ImeNotificationExperienceManager@@W7EAAKXZ @ 0x1800AAD50 (-Release@ImeNotificationExperienceManager@@W7EAAKXZ.c)
 *     ?Release@ImeNotificationExperienceManager@@WBA@EAAKXZ @ 0x1800AAD70 (-Release@ImeNotificationExperienceManager@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall ImeNotificationExperienceManager::Release(ImeNotificationExperienceManager *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IImeStatusNotificationExperienceManager,Windows::Foundation::IClosable>::Release(this);
}
