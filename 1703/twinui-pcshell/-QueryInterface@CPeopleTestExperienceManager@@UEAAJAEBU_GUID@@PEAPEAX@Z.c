/*
 * XREFs of ?QueryInterface@CPeopleTestExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A6160
 * Callers:
 *     ?QueryInterface@CPeopleTestExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A6BE0 (-QueryInterface@CPeopleTestExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPeopleTestExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A6C10 (-QueryInterface@CPeopleTestExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPeopleTestExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A6C30 (-QueryInterface@CPeopleTestExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CPeopleTestExperienceManager::QueryInterface(
        CPeopleTestExperienceManager *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IPeopleTestExperienceManager,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
           this,
           a2,
           a3);
}
