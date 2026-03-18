/*
 * XREFs of CmpSearchLineInSectionByIndex @ 0x1408AB0C0
 * Callers:
 *     CmpGetSectionLineIndexValueCount @ 0x1408AA7E0 (CmpGetSectionLineIndexValueCount.c)
 *     EmpInfParseGetSectionLineCount @ 0x1408AAA04 (EmpInfParseGetSectionLineCount.c)
 *     CmpGetSectionLineIndex @ 0x1408AAF6C (CmpGetSectionLineIndex.c)
 *     CmpGetKeyName @ 0x1408AB088 (CmpGetKeyName.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CmpSearchLineInSectionByIndex(__int64 a1, unsigned int a2)
{
  _QWORD *result; // rax
  unsigned int i; // r8d

  result = 0LL;
  if ( a1 )
  {
    result = *(_QWORD **)(a1 + 16);
    for ( i = 0; i < a2; ++i )
    {
      if ( !result )
        break;
      result = (_QWORD *)*result;
    }
  }
  return result;
}
