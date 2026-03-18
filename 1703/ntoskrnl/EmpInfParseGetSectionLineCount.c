/*
 * XREFs of EmpInfParseGetSectionLineCount @ 0x140806488
 * Callers:
 *     EmpParseEntryTypes @ 0x1408055B4 (EmpParseEntryTypes.c)
 *     EmpParseCallbacks @ 0x14080571C (EmpParseCallbacks.c)
 *     EmpParseRules @ 0x140805F54 (EmpParseRules.c)
 *     EmpParseStrings @ 0x1408062B4 (EmpParseStrings.c)
 *     EmpParseTargetRules @ 0x1408064DC (EmpParseTargetRules.c)
 * Callees:
 *     CmpSearchLineInSectionByIndex @ 0x140806B30 (CmpSearchLineInSectionByIndex.c)
 *     CmpSearchSectionByName @ 0x140806B5C (CmpSearchSectionByName.c)
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
