/*
 * XREFs of ?QueryInterface@CShoulderTapExperienceManager@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B3D00
 * Callers:
 *     ?QueryInterface@CShoulderTapExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800B5890 (-QueryInterface@CShoulderTapExperienceManager@@W7EAAJAEBU_GUID@@PEAPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CShoulderTapExperienceManager::QueryInterface(
        CShoulderTapExperienceManager *this,
        const struct _GUID *a2,
        void **a3)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IShoulderTapExperienceManager>::QueryInterface(
           this,
           a2,
           a3);
}
