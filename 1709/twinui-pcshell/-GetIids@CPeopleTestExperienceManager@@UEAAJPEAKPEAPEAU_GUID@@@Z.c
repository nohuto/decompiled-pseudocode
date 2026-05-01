/*
 * XREFs of ?GetIids@CPeopleTestExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800B2980
 * Callers:
 *     ?GetIids@CPeopleTestExperienceManager@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800B33A0 (-GetIids@CPeopleTestExperienceManager@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CPeopleTestExperienceManager::GetIids(
        CPeopleTestExperienceManager *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IPeopleTestExperienceManager,Windows::Foundation::IClosable,Microsoft::WRL::FtmBase>::GetIids(
           this,
           a2,
           a3);
}
