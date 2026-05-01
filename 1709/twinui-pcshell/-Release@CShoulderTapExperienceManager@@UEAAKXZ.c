/*
 * XREFs of ?Release@CShoulderTapExperienceManager@@UEAAKXZ @ 0x1800B3D10
 * Callers:
 *     ?Release@CShoulderTapExperienceManager@@W7EAAKXZ @ 0x1800B58A0 (-Release@CShoulderTapExperienceManager@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CShoulderTapExperienceManager::Release(CShoulderTapExperienceManager *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::Internal::Shell::Experience::IShellExperienceViewEventArg>::Release(this);
}
