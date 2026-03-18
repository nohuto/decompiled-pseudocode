/*
 * XREFs of MiGetPageFileReservationOffset @ 0x14025F90C
 * Callers:
 *     MiDecommitPages @ 0x14000C050 (MiDecommitPages.c)
 *     MiDeletePteList @ 0x140028C70 (MiDeletePteList.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x140052D00 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiReservePageFileSpaceForPage @ 0x140053840 (MiReservePageFileSpaceForPage.c)
 *     MiBuildForkPte @ 0x140141270 (MiBuildForkPte.c)
 *     MiBuildReservationCluster @ 0x14015020C (MiBuildReservationCluster.c)
 *     MiGetPageForWriteCluster @ 0x140150850 (MiGetPageForWriteCluster.c)
 * Callees:
 *     MiGetPteTimeStamp @ 0x1401A650C (MiGetPteTimeStamp.c)
 */

unsigned __int64 __fastcall MiGetPageFileReservationOffset(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  return MiGetPteTimeStamp(*a1, a2, a3, a4);
}
