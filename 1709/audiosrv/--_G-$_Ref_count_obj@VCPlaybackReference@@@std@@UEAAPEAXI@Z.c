/*
 * XREFs of ??_G?$_Ref_count_obj@VCPlaybackReference@@@std@@UEAAPEAXI@Z @ 0x18002A440
 * Callers:
 *     ?_Delete_this@?$_Ref_count_obj@VCPlaybackReference@@@std@@EEAAXXZ @ 0x18002A400 (-_Delete_this@-$_Ref_count_obj@VCPlaybackReference@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj<CPlaybackReference>::`scalar deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &std::_Ref_count_base::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x88);
  return a1;
}
