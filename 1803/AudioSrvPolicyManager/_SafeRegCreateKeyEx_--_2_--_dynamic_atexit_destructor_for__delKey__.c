/*
 * XREFs of _SafeRegCreateKeyEx_::_2_::_dynamic_atexit_destructor_for__delKey__ @ 0x180038670
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SafeRegCreateKeyEx_::_2_::_dynamic_atexit_destructor_for__delKey__()
{
  FreeLibrary(hLibModule);
  hLibModule = 0LL;
  qword_18004F300 = 0LL;
}
