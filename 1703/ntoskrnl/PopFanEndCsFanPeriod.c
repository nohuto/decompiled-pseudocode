/*
 * XREFs of PopFanEndCsFanPeriod @ 0x1406CF67C
 * Callers:
 *     PopFanUpdateCsState @ 0x1406CF720 (PopFanUpdateCsState.c)
 *     PopFanUpdateRunningState @ 0x1406CF79C (PopFanUpdateRunningState.c)
 * Callees:
 *     <none>
 */

void PopFanEndCsFanPeriod()
{
  __int64 v0; // r10

  v0 = qword_14034AE88;
  if ( qword_14034AE88 < (unsigned __int64)qword_14034AE90 )
    v0 = qword_14034AE90;
  PopDiagTraceCsFanPerfTrack((MEMORY[0xFFFFF78000000008] - v0) / 0x989680uLL, (v0 - qword_14034AE90) / 0x989680uLL);
}
