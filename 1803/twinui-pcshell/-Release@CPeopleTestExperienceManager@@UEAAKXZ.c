/*
 * XREFs of ?Release@CPeopleTestExperienceManager@@UEAAKXZ @ 0x180170060
 * Callers:
 *     ?Release@CPeopleTestExperienceManager@@W7EAAKXZ @ 0x1800A55B0 (-Release@CPeopleTestExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CPeopleTestExperienceManager@@WBA@EAAKXZ @ 0x1800A55C0 (-Release@CPeopleTestExperienceManager@@WBA@EAAKXZ.c)
 *     ?Release@CPeopleTestExperienceManager@@WBI@EAAKXZ @ 0x1800A55D0 (-Release@CPeopleTestExperienceManager@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CPeopleTestExperienceManager::Release(CPeopleTestExperienceManager *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::FtmBase,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs>::Release(this);
}
