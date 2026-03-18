/*
 * XREFs of sub_14083D98C @ 0x14083D98C
 * Callers:
 *     ExInitLicenseData @ 0x14083D688 (ExInitLicenseData.c)
 * Callees:
 *     KiInitializeMutant @ 0x1400B4748 (KiInitializeMutant.c)
 *     KeQueryTimeIncrement @ 0x1400B5AF0 (KeQueryTimeIncrement.c)
 */

unsigned __int64 sub_14083D98C()
{
  __int64 v0; // rbx
  __int64 v1; // rcx
  unsigned __int64 result; // rax

  KiInitializeMutant((__int64)&stru_14035AB40, 0, 0);
  stru_14035AB20.Header.Size = 6;
  LOWORD(stru_14035AB20.Header.Lock) = 0;
  stru_14035AB20.Header.SignalState = 0;
  stru_14035AB20.Header.WaitListHead.Blink = &stru_14035AB20.Header.WaitListHead;
  stru_14035AB20.Header.WaitListHead.Flink = &stru_14035AB20.Header.WaitListHead;
  v0 = MEMORY[0xFFFFF78000000320];
  v1 = v0 * KeQueryTimeIncrement();
  result = (unsigned __int64)((unsigned __int128)(v1 * (__int128)0x346DC5D63886594BLL) >> 64) >> 63;
  qword_1407F3130 = v1 / 10000;
  g_qwSystemInitTime = v1 / 10000;
  return result;
}
