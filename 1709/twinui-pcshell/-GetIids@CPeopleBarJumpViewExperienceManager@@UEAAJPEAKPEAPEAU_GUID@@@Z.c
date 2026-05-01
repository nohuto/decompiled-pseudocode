/*
 * XREFs of ?GetIids@CPeopleBarJumpViewExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800B0DB0
 * Callers:
 *     ?GetIids@CPeopleBarJumpViewExperienceManager@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800B2940 (-GetIids@CPeopleBarJumpViewExperienceManager@@WBI@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CPeopleBarJumpViewExperienceManager::GetIids(
        CPeopleBarJumpViewExperienceManager *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IPeopleBarJumpViewExperienceManager,ILightDismissNotification,Windows::Foundation::IClosable>::GetIids(
           this,
           a2,
           a3);
}
