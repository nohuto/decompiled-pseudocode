/*
 * XREFs of ?message@_Generic_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x180120270
 * Callers:
 *     ?message@_Iostream_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x1801202A0 (-message@_Iostream_error_category@std@@UEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x1800C584C (ModuleFailFastForHRESULT.c)
 */

void __fastcall __noreturn std::_Generic_error_category::message(__int64 a1, __int64 a2, int a3)
{
  unsigned int v3; // eax
  const void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = a3;
  if ( a3 > 0 )
    v3 = (unsigned __int16)a3 | 0x80070000;
  ModuleFailFastForHRESULT(v3, retaddr);
}
