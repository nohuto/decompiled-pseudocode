/*
 * XREFs of ?message@_Generic_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x180138710
 * Callers:
 *     ?message@_Iostream_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x1801386E0 (-message@_Iostream_error_category@std@@UEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800D50A8 (ModuleFailFastForHRESULT.c)
 */

void __fastcall __noreturn std::_Generic_error_category::message(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // eax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = a3;
  if ( a3 > 0 )
    v3 = (unsigned __int16)a3 | 0x80070000;
  ModuleFailFastForHRESULT(v3, retaddr);
  JUMPOUT(0x180138730LL);
}
