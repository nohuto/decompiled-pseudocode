/*
 * XREFs of ?GetIids@CPeopleBarFlyoutExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800A1780
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CPeopleBarFlyoutExperienceManager::GetIids(
        CPeopleBarFlyoutExperienceManager *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IPeopleBarFlyoutExperienceManager,Microsoft::WRL::Details::InterfaceList<ILightDismissNotification,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::GetIids(
           this,
           a2,
           a3);
}
