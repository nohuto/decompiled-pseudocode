/*
 * XREFs of PrintIndent @ 0x1C004917C
 * Callers:
 *     ParsePackage @ 0x1C0052430 (ParsePackage.c)
 *     ParseField @ 0x1C0054C68 (ParseField.c)
 *     ParseFieldList @ 0x1C0055330 (ParseFieldList.c)
 *     ParseScope @ 0x1C0056300 (ParseScope.c)
 *     ParseTerm @ 0x1C0056890 (ParseTerm.c)
 * Callees:
 *     ConPrintf @ 0x1C0048620 (ConPrintf.c)
 */

ULONG __fastcall PrintIndent(__int64 a1)
{
  ULONG result; // eax
  int i; // ebx

  result = ConPrintf("\n%I64x: ", *(_QWORD *)(a1 + 120));
  for ( i = 0; i < dword_1C00676B4; ++i )
    result = ConPrintf("| ");
  return result;
}
