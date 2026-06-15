/*
 * XREFs of ??_G?$_Ref_count_obj@V?$function@$$A6AXXZ@std@@@std@@UEAAPEAXI@Z @ 0x18001C850
 * Callers:
 *     ?_Delete_this@?$_Ref_count_obj@V?$function@$$A6AXXZ@std@@@std@@EEAAXXZ @ 0x18001C790 (-_Delete_this@-$_Ref_count_obj@V-$function@$$A6AXXZ@std@@@std@@EEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180061038 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj<std::function<void (void)>>::`scalar deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &std::_Ref_count_base::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1, (const struct std::nothrow_t *)0x50);
  return a1;
}
