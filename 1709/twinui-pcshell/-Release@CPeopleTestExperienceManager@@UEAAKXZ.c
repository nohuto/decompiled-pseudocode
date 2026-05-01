/*
 * XREFs of ?Release@CPeopleTestExperienceManager@@UEAAKXZ @ 0x1800B29A0
 * Callers:
 *     ?Release@CPeopleTestExperienceManager@@WBI@EAAKXZ @ 0x1800B3390 (-Release@CPeopleTestExperienceManager@@WBI@EAAKXZ.c)
 *     ?Release@CPeopleTestExperienceManager@@W7EAAKXZ @ 0x1800B3420 (-Release@CPeopleTestExperienceManager@@W7EAAKXZ.c)
 *     ?Release@CPeopleTestExperienceManager@@WBA@EAAKXZ @ 0x1800B3450 (-Release@CPeopleTestExperienceManager@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall CPeopleTestExperienceManager::Release(CPeopleTestExperienceManager *this)
{
  return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::FtmBase,Windows::Internal::Shell::Holographic::IPresentationReadyChangedEventArgs>::Release(this);
}
