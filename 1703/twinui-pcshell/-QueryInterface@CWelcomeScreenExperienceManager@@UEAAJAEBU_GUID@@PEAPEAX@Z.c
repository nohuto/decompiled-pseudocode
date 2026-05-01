/*
 * XREFs of ?QueryInterface@CWelcomeScreenExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B28C0
 * Callers:
 *     ?QueryInterface@CWelcomeScreenExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B51B0 (-QueryInterface@CWelcomeScreenExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWelcomeScreenExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B5200 (-QueryInterface@CWelcomeScreenExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CWelcomeScreenExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B5240 (-QueryInterface@CWelcomeScreenExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CWelcomeScreenExperienceManager::QueryInterface(
        CWelcomeScreenExperienceManager *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IWelcomeScreenExperienceManager,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
           this,
           a2,
           a3);
}
