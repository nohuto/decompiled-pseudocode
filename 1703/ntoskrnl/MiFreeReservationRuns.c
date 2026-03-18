/*
 * XREFs of MiFreeReservationRuns @ 0x1404CA080
 * Callers:
 *     MmOutSwapVirtualAddresses @ 0x140004100 (MmOutSwapVirtualAddresses.c)
 *     MmOutSwapWorkingSet @ 0x1400793EC (MmOutSwapWorkingSet.c)
 *     MiReserveWorkingSetSwapSpace @ 0x14041F274 (MiReserveWorkingSetSwapSpace.c)
 * Callees:
 *     MiFreeReservationRun @ 0x1404CA0C8 (MiFreeReservationRun.c)
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
