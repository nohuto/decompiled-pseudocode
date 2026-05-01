/*
 * XREFs of ?Release@CShoulderTapExperienceManager@@UEAAKXZ @ 0x180171FF0
 * Callers:
 *     ?Release@CShoulderTapExperienceManager@@W7EAAKXZ @ 0x1800A5610 (-Release@CShoulderTapExperienceManager@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CShoulderTapExperienceManager::Release(__int64 this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IShoulderTapExperienceManager>::Release(this);
}
