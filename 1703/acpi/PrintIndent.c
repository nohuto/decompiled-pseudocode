/*
 * XREFs of PrintIndent @ 0x1C005CA0C
 * Callers:
 *     ParseScope @ 0x1C0012A00 (ParseScope.c)
 *     ParsePackage @ 0x1C00148B0 (ParsePackage.c)
 *     ParseFieldList @ 0x1C0017F88 (ParseFieldList.c)
 *     ParseField @ 0x1C0018080 (ParseField.c)
 *     ParseTerm @ 0x1C0018340 (ParseTerm.c)
 * Callees:
 *     ConPrintf @ 0x1C002C03C (ConPrintf.c)
 */

ULONG __fastcall PrintIndent(__int64 a1)
{
  ULONG result; // eax
  int i; // ebx

  result = ConPrintf("\n%I64x: ", *(_QWORD *)(a1 + 120));
  for ( i = 0; i < dword_1C00775F4; ++i )
    result = ConPrintf("| ");
  return result;
}
