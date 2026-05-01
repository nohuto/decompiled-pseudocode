/*
 * XREFs of ?GetIids@CPeopleTestExperienceManager@@UEAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800A6150
 * Callers:
 *     ?GetIids@CPeopleTestExperienceManager@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z @ 0x1800A6BB0 (-GetIids@CPeopleTestExperienceManager@@WBA@EAAJPEAKPEAPEAU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CPeopleTestExperienceManager::GetIids(
        CPeopleTestExperienceManager *this,
        unsigned int *a2,
        struct _GUID **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IPeopleTestExperienceManager,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::GetIids(
           this,
           a2,
           a3);
}
