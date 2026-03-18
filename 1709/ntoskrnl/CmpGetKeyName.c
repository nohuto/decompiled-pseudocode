/*
 * XREFs of CmpGetKeyName @ 0x140834E6C
 * Callers:
 *     EmpParseCallbacks @ 0x140833A88 (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x1408342C0 (EmpParseRules.c)
 *     EmpParseTargetRules @ 0x14083484C (EmpParseTargetRules.c)
 *     EmpInfParseGetValueFromSectionAndKeyName @ 0x140834DC8 (EmpInfParseGetValueFromSectionAndKeyName.c)
 * Callees:
 *     CmpSearchLineInSectionByIndex @ 0x140834EB0 (CmpSearchLineInSectionByIndex.c)
 *     CmpSearchSectionByName @ 0x140834EDC (CmpSearchSectionByName.c)
 */

__int64 __fastcall CmpGetKeyName(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v4; // rax
  __int64 v5; // rax

  v4 = CmpSearchSectionByName(a1, a2);
  if ( v4 && (v5 = CmpSearchLineInSectionByIndex(v4, a3)) != 0 )
    return *(_QWORD *)(v5 + 8);
  else
    return 0LL;
}
