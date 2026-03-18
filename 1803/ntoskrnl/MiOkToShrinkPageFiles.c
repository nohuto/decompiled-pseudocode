/*
 * XREFs of MiOkToShrinkPageFiles @ 0x1400704CC
 * Callers:
 *     MiContractPagingFiles @ 0x140070440 (MiContractPagingFiles.c)
 *     MiAttemptPageFileReduction @ 0x14025EC74 (MiAttemptPageFileReduction.c)
 *     MiAttemptPageFileReductionApc @ 0x14025EDD0 (MiAttemptPageFileReductionApc.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiOkToShrinkPageFiles(unsigned __int64 a1, unsigned __int64 a2)
{
  bool result; // al

  result = 0;
  if ( a1 + 0x8000 < (((a2 * (unsigned __int128)0xCCCCCCCCCCCCCCCDuLL) >> 64) & 0xFFFFFFFFFFFFFFF8uLL) )
    return a1 + 0x8000 > a1;
  return result;
}
