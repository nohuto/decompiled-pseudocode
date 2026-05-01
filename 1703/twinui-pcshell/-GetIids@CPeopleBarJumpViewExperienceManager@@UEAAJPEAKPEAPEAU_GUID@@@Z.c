/*
 * XREFs of ?GetIids@CPeopleBarJumpViewExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800A44B0
 * Callers:
 *     ?GetIids@CPeopleBarJumpViewExperienceManager@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800A6100 (-GetIids@CPeopleBarJumpViewExperienceManager@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CPeopleBarJumpViewExperienceManager::GetIids(
        CPeopleBarJumpViewExperienceManager *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IPeopleBarJumpViewExperienceManager,Microsoft::WRL::Details::InterfaceList<ILightDismissNotification,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::GetIids(
           this,
           a2,
           a3);
}
