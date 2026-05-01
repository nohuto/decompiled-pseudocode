/*
 * XREFs of ?Release@CPeopleBarFlyoutExperienceManager@@UEAAKXZ @ 0x1800A17A0
 * Callers:
 *     ?Release@CPeopleBarFlyoutExperienceManager@@W7EAAKXZ @ 0x1800A4350 (-Release@CPeopleBarFlyoutExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CPeopleBarFlyoutExperienceManager@@WBA@EAAKXZ @ 0x1800A4380 (-Release@CPeopleBarFlyoutExperienceManager@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CPeopleBarFlyoutExperienceManager::Release(CPeopleBarFlyoutExperienceManager *this)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IPeopleBarFlyoutExperienceManager,Microsoft::WRL::Details::InterfaceList<ILightDismissNotification,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(this);
}
