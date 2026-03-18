/*
 * XREFs of EmpInfParseGetSectionLineCount @ 0x1408AAA04
 * Callers:
 *     EmpParseEntryTypes @ 0x1408A9B4C (EmpParseEntryTypes.c)
 *     EmpParseCallbacks @ 0x1408A9CB4 (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x1408AA4CC (EmpParseRules.c)
 *     EmpParseStrings @ 0x1408AA82C (EmpParseStrings.c)
 *     EmpParseTargetRules @ 0x1408AAA58 (EmpParseTargetRules.c)
 * Callees:
 *     CmpSearchLineInSectionByIndex @ 0x1408AB0C0 (CmpSearchLineInSectionByIndex.c)
 *     CmpSearchSectionByName @ 0x1408AB0EC (CmpSearchSectionByName.c)
 */

__int64 __fastcall EmpInfParseGetSectionLineCount(__int64 a1, __int64 a2)
{
  unsigned int i; // ebx
  __int64 v5; // rax

  for ( i = 0; ; ++i )
  {
    v5 = CmpSearchSectionByName(a1, a2);
    if ( !v5 || !CmpSearchLineInSectionByIndex(v5, i) )
      break;
  }
  return i;
}
