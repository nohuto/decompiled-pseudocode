/*
 * XREFs of ?QueryInterface@CortanaSharedExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800BA120
 * Callers:
 *     ?QueryInterface@CortanaSharedExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C0560 (-QueryInterface@CortanaSharedExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CortanaSharedExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C0600 (-QueryInterface@CortanaSharedExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CortanaSharedExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800C0680 (-QueryInterface@CortanaSharedExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CortanaSharedExperienceManager::QueryInterface(
        CortanaSharedExperienceManager *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::ICortanaExperienceManager,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::InterfaceList<IInitializeTrustedComponentForegroundControl,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
           this,
           a2,
           a3);
}
