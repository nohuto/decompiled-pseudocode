/*
 * XREFs of ?QueryInterface@CortanaSharedExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A0290
 * Callers:
 *     ?QueryInterface@CortanaSharedExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A9BC0 (-QueryInterface@CortanaSharedExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CortanaSharedExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A9C80 (-QueryInterface@CortanaSharedExperienceManager@@WBA@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?QueryInterface@CortanaSharedExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A9D30 (-QueryInterface@CortanaSharedExperienceManager@@WBI@EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CortanaSharedExperienceManager::QueryInterface(
        CortanaSharedExperienceManager *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::ICortanaExperienceManager,Windows::Foundation::IClosable,IInitializeTrustedComponentForegroundControl>::QueryInterface(
           this,
           a2,
           a3);
}
