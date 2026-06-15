/*
 * XREFs of ??_G?$_Ref_count_obj@VCPowerReference@@@std@@UEAAPEAXI@Z @ 0x180027380
 * Callers:
 *     ?_Delete_this@?$_Ref_count_obj@VCPowerReference@@@std@@EEAAXXZ @ 0x180027340 (-_Delete_this@-$_Ref_count_obj@VCPowerReference@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180049338 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj<CPowerReference>::`scalar deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &std::_Ref_count_base::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x30);
  return a1;
}
