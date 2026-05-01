/*
 * XREFs of ?QueryInterface@CPeopleTestExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B2990
 * Callers:
 *     ?QueryInterface@CPeopleTestExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B33E0 (-QueryInterface@CPeopleTestExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPeopleTestExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B3410 (-QueryInterface@CPeopleTestExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CPeopleTestExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B3440 (-QueryInterface@CPeopleTestExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CPeopleTestExperienceManager::QueryInterface(
        CPeopleTestExperienceManager *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IPeopleTestExperienceManager,Windows::Foundation::IClosable,Microsoft::WRL::FtmBase>::QueryInterface(
           this,
           a2,
           a3);
}
