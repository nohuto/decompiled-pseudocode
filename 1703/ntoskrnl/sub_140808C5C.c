/*
 * XREFs of sub_140808C5C @ 0x140808C5C
 * Callers:
 *     ExInitLicenseData @ 0x140808950 (ExInitLicenseData.c)
 * Callees:
 *     KeQueryTimeIncrement @ 0x14006B3C0 (KeQueryTimeIncrement.c)
 *     KiInitializeMutant @ 0x140121F00 (KiInitializeMutant.c)
 */

unsigned __int64 sub_140808C5C()
{
  __int64 v0; // rbx
  __int64 v1; // rcx
  unsigned __int64 result; // rax

  KiInitializeMutant((__int64)&stru_1403423C0, 0, 0);
  stru_1403423A0.Header.Size = 6;
  LOWORD(stru_1403423A0.Header.Lock) = 0;
  stru_1403423A0.Header.SignalState = 0;
  stru_1403423A0.Header.WaitListHead.Blink = &stru_1403423A0.Header.WaitListHead;
  stru_1403423A0.Header.WaitListHead.Flink = &stru_1403423A0.Header.WaitListHead;
  v0 = MEMORY[0xFFFFF78000000320];
  v1 = v0 * KeQueryTimeIncrement();
  result = (unsigned __int64)((unsigned __int128)(v1 * (__int128)0x346DC5D63886594BLL) >> 64) >> 63;
  qword_1407AC148 = v1 / 10000;
  g_qwSystemInitTime = v1 / 10000;
  return result;
}
