/*
 * XREFs of PopFanEndCsFanPeriod @ 0x14070728C
 * Callers:
 *     PopFanUpdateCsState @ 0x140707340 (PopFanUpdateCsState.c)
 *     PopFanUpdateRunningState @ 0x1407073BC (PopFanUpdateRunningState.c)
 * Callees:
 *     PopDiagTraceCsFanPerfTrack @ 0x14024549C (PopDiagTraceCsFanPerfTrack.c)
 */

void PopFanEndCsFanPeriod()
{
  __int64 v0; // r10

  v0 = qword_140366488;
  if ( qword_140366488 < (unsigned __int64)qword_140366490 )
    v0 = qword_140366490;
  PopDiagTraceCsFanPerfTrack((MEMORY[0xFFFFF78000000008] - v0) / 0x989680uLL, (v0 - qword_140366490) / 0x989680uLL);
}
