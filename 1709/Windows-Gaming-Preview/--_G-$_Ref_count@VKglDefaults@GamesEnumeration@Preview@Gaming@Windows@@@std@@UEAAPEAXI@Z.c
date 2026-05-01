/*
 * XREFs of ??_G?$_Ref_count@VKglDefaults@GamesEnumeration@Preview@Gaming@Windows@@@std@@UEAAPEAXI@Z @ 0x18000EA00
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800415E4 (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Ref_count<Windows::Gaming::Preview::GamesEnumeration::KglDefaults>::`scalar deleting destructor'(
        _QWORD *a1,
        char a2)
{
  *a1 = &std::_Ref_count_base::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, 0x18uLL);
  return a1;
}
