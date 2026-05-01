/*
 * XREFs of ?Release@CWelcomeScreenExperienceManager@@UEAAKXZ @ 0x1800B28D0
 * Callers:
 *     ?Release@CWelcomeScreenExperienceManager@@WBA@EAAKXZ @ 0x1800B51D0 (-Release@CWelcomeScreenExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@CWelcomeScreenExperienceManager@@WBI@EAAKXZ @ 0x1800B5210 (-Release@CWelcomeScreenExperienceManager@@WBI@EAAKXZ.c)
 *     ?Release@CWelcomeScreenExperienceManager@@W7EAAKXZ @ 0x1800B5270 (-Release@CWelcomeScreenExperienceManager@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CWelcomeScreenExperienceManager::Release(CWelcomeScreenExperienceManager *this)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IWelcomeScreenExperienceManager,Microsoft::WRL::Details::InterfaceList<Windows::Foundation::IClosable,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(this);
}
