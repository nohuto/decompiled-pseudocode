/*
 * XREFs of MiInitializeDynamicVa @ 0x14085227C
 * Callers:
 *     MmInitNucleus @ 0x14082CC5C (MmInitNucleus.c)
 * Callees:
 *     MiAssignSessionRanges @ 0x1408522C4 (MiAssignSessionRanges.c)
 */

__int64 MiInitializeDynamicVa()
{
  stru_140388960.Header.Size = 6;
  qword_140388978 = 0LL;
  LOWORD(stru_140388960.Header.Lock) = 0;
  stru_140388960.Header.SignalState = 0;
  stru_140388960.Header.WaitListHead.Blink = &stru_140388960.Header.WaitListHead;
  stru_140388960.Header.WaitListHead.Flink = &stru_140388960.Header.WaitListHead;
  return MiAssignSessionRanges();
}
