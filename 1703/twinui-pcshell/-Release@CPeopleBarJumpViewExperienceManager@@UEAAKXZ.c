/*
 * XREFs of ?Release@CPeopleBarJumpViewExperienceManager@@UEAAKXZ @ 0x1800A44D0
 * Callers:
 *     ?Release@CPeopleBarJumpViewExperienceManager@@WBI@EAAKXZ @ 0x1800A6030 (-Release@CPeopleBarJumpViewExperienceManager@@WBI@EAAKXZ.c)
 *     ?Release@CPeopleBarJumpViewExperienceManager@@W7EAAKXZ @ 0x1800A60B0 (-Release@CPeopleBarJumpViewExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CPeopleBarJumpViewExperienceManager@@WBA@EAAKXZ @ 0x1800A6110 (-Release@CPeopleBarJumpViewExperienceManager@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CPeopleBarJumpViewExperienceManager::Release(CPeopleBarJumpViewExperienceManager *this)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IPeopleBarJumpViewExperienceManager,Microsoft::WRL::Details::InterfaceList<ILightDismissNotification,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(this);
}
