/*
 * XREFs of PopFanEndCsFanPeriod @ 0x14076B28C
 * Callers:
 *     PopFanUpdateRunningState @ 0x140643DF0 (PopFanUpdateRunningState.c)
 *     PopFanUpdateCsState @ 0x14076B340 (PopFanUpdateCsState.c)
 * Callees:
 *     PopDiagTraceCsFanPerfTrack @ 0x14027BC94 (PopDiagTraceCsFanPerfTrack.c)
 */

void PopFanEndCsFanPeriod()
{
  __int64 v0; // r10

  v0 = qword_1403A9D48;
  if ( qword_1403A9D48 < (unsigned __int64)qword_1403A9D50 )
    v0 = qword_1403A9D50;
  PopDiagTraceCsFanPerfTrack((MEMORY[0xFFFFF78000000008] - v0) / 0x989680uLL, (v0 - qword_1403A9D50) / 0x989680uLL);
}
