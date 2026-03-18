/*
 * XREFs of sub_1408AFF10 @ 0x1408AFF10
 * Callers:
 *     ExInitLicenseData @ 0x1408AFFA0 (ExInitLicenseData.c)
 * Callees:
 *     KeQueryTimeIncrement @ 0x1400A18E0 (KeQueryTimeIncrement.c)
 *     KiInitializeMutant @ 0x1400D3988 (KiInitializeMutant.c)
 */

unsigned __int64 sub_1408AFF10()
{
  __int64 v0; // rbx
  __int64 v1; // rcx
  unsigned __int64 result; // rax

  KiInitializeMutant((__int64)&Mutex, 0LL, 0);
  stru_14039E160.Header.Size = 6;
  LOWORD(stru_14039E160.Header.Lock) = 0;
  stru_14039E160.Header.SignalState = 0;
  stru_14039E160.Header.WaitListHead.Blink = &stru_14039E160.Header.WaitListHead;
  stru_14039E160.Header.WaitListHead.Flink = &stru_14039E160.Header.WaitListHead;
  v0 = MEMORY[0xFFFFF78000000320];
  v1 = v0 * KeQueryTimeIncrement();
  result = (unsigned __int64)((unsigned __int128)(v1 * (__int128)0x346DC5D63886594BLL) >> 64) >> 63;
  qword_140861130 = v1 / 10000;
  g_qwSystemInitTime = v1 / 10000;
  return result;
}
