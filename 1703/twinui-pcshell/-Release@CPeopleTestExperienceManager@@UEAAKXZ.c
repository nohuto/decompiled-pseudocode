/*
 * XREFs of ?Release@CPeopleTestExperienceManager@@UEAAKXZ @ 0x1800A6170
 * Callers:
 *     ?Release@CPeopleTestExperienceManager@@WBI@EAAKXZ @ 0x1800A6BA0 (-Release@CPeopleTestExperienceManager@@WBI@EAAKXZ.c)
 *     ?Release@CPeopleTestExperienceManager@@W7EAAKXZ @ 0x1800A6C20 (-Release@CPeopleTestExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CPeopleTestExperienceManager@@WBA@EAAKXZ @ 0x1800A6C40 (-Release@CPeopleTestExperienceManager@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CPeopleTestExperienceManager::Release(CPeopleTestExperienceManager *this)
{
  return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(this);
}
