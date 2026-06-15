/*
 * XREFs of ??_G?$_Ref_count_obj@VCPdcTimerActivation@@@std@@UEAAPEAXI@Z @ 0x18002A3B0
 * Callers:
 *     ?_Delete_this@?$_Ref_count_obj@VCPdcTimerActivation@@@std@@EEAAXXZ @ 0x18002A370 (-_Delete_this@-$_Ref_count_obj@VCPdcTimerActivation@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180033218 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj<CPdcTimerActivation>::`scalar deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &std::_Ref_count_base::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x28);
  return a1;
}
