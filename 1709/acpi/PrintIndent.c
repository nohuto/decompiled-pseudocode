/*
 * XREFs of PrintIndent @ 0x1C005E7C0
 * Callers:
 *     ParseTerm @ 0x1C0009B50 (ParseTerm.c)
 *     ParseScope @ 0x1C000AE20 (ParseScope.c)
 *     ParsePackage @ 0x1C0019240 (ParsePackage.c)
 *     ParseFieldList @ 0x1C001BFC8 (ParseFieldList.c)
 *     ParseField @ 0x1C001C0C0 (ParseField.c)
 * Callees:
 *     ConPrintf @ 0x1C005DD10 (ConPrintf.c)
 */

ULONG __fastcall PrintIndent(__int64 a1)
{
  ULONG result; // eax
  int i; // ebx

  result = ConPrintf("\n%I64x: ", *(_QWORD *)(a1 + 120));
  for ( i = 0; i < dword_1C00796B4; ++i )
    result = ConPrintf("| ");
  return result;
}
