/*
 * XREFs of MiReserveLowPrioritySystemPtes @ 0x14003CAA0
 * Callers:
 *     MiCopyToUserVa @ 0x14003C7F0 (MiCopyToUserVa.c)
 *     MiZeroLargePage @ 0x140138310 (MiZeroLargePage.c)
 *     MiZeroInParallelWorker @ 0x1401386E0 (MiZeroInParallelWorker.c)
 * Callees:
 *     MiReservePtes @ 0x14010E5B0 (MiReservePtes.c)
 */

__int64 __fastcall MiReserveLowPrioritySystemPtes(unsigned int a1)
{
  return MiReservePtes(&qword_1403CC5E0, a1);
}
