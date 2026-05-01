/*
 * XREFs of ?AddRef@CVirtualTouchpadExperienceManager@@UEAAKXZ @ 0x1800A44E0
 * Callers:
 *     ?AddRef@CPeopleBarJumpViewExperienceManager@@W7EAAKXZ @ 0x1800A6040 (-AddRef@CPeopleBarJumpViewExperienceManager@@W7EAAKXZ.c)
 *     ?AddRef@CVirtualTouchpadExperienceManager@@WBA@EAAKXZ @ 0x1800A6060 (-AddRef@CVirtualTouchpadExperienceManager@@WBA@EAAKXZ.c)
 *     ?AddRef@CPeopleBarJumpViewExperienceManager@@WBI@EAAKXZ @ 0x1800A60C0 (-AddRef@CPeopleBarJumpViewExperienceManager@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CVirtualTouchpadExperienceManager::AddRef(CVirtualTouchpadExperienceManager *this)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ILightDismissNotification,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IQuickConnectExperienceManager,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::AddRef(this);
}
