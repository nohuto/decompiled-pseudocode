/*
 * XREFs of MiFreeReservationRuns @ 0x14053AF80
 * Callers:
 *     MmOutSwapWorkingSet @ 0x140062868 (MmOutSwapWorkingSet.c)
 *     MmOutSwapVirtualAddresses @ 0x14009C194 (MmOutSwapVirtualAddresses.c)
 *     MiReserveWorkingSetSwapSpace @ 0x14053AFC8 (MiReserveWorkingSetSwapSpace.c)
 * Callees:
 *     MiFreeReservationRun @ 0x1405927B8 (MiFreeReservationRun.c)
 */

__int64 __fastcall MiFreeReservationRuns(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rdi
  unsigned __int64 i; // rbx
  __int64 result; // rax

  v2 = a2 + 80;
  for ( i = a2; i < v2; i += 16LL )
    result = MiFreeReservationRun(a1, i);
  return result;
}
