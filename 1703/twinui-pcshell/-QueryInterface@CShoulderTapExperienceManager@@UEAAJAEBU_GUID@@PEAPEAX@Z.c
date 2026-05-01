/*
 * XREFs of ?QueryInterface@CShoulderTapExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A6D20
 * Callers:
 *     ?QueryInterface@CShoulderTapExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800A80F0 (-QueryInterface@CShoulderTapExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CShoulderTapExperienceManager::QueryInterface(
        CShoulderTapExperienceManager *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IShoulderTapExperienceManager,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
           this,
           a2,
           a3);
}
