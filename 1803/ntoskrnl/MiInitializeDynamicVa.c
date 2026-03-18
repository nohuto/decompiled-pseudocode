/*
 * XREFs of MiInitializeDynamicVa @ 0x1408C2DDC
 * Callers:
 *     MiInitNucleus @ 0x140898D68 (MiInitNucleus.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x1400493AC (MiGetAnyMultiplexedVm.c)
 *     MiAssignSessionRanges @ 0x1408C2E40 (MiAssignSessionRanges.c)
 */

char *MiInitializeDynamicVa()
{
  char *result; // rax

  stru_1403CBB78.Header.Size = 6;
  qword_1403CBB90 = 0LL;
  LOWORD(stru_1403CBB78.Header.Lock) = 0;
  stru_1403CBB78.Header.SignalState = 0;
  stru_1403CBB78.Header.WaitListHead.Blink = &stru_1403CBB78.Header.WaitListHead;
  stru_1403CBB78.Header.WaitListHead.Flink = &stru_1403CBB78.Header.WaitListHead;
  MiAssignSessionRanges();
  result = MiGetAnyMultiplexedVm(1);
  result[184] = result[184] & 0xF8 | 4;
  return result;
}
