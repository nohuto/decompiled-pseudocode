/*
 * XREFs of ?Release@CortanaSharedExperienceManager@@UEAAKXZ @ 0x1800BA130
 * Callers:
 *     ?Release@CortanaSharedExperienceManager@@W7EAAKXZ @ 0x1800C0550 (-Release@CortanaSharedExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CortanaSharedExperienceManager@@WBA@EAAKXZ @ 0x1800C05F0 (-Release@CortanaSharedExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@CortanaSharedExperienceManager@@WBI@EAAKXZ @ 0x1800C0670 (-Release@CortanaSharedExperienceManager@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CortanaSharedExperienceManager::Release(CortanaSharedExperienceManager *this)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::ICortanaExperienceManager,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::InterfaceList<IInitializeTrustedComponentForegroundControl,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(this);
}
