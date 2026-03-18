/*
 * XREFs of MiGetPageFileReservationOffset @ 0x14022647C
 * Callers:
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14002D0C0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiDeletePteList @ 0x14004D590 (MiDeletePteList.c)
 *     MiDecommitPages @ 0x140053C40 (MiDecommitPages.c)
 *     MiReservePageFileSpaceForPage @ 0x14005CFD0 (MiReservePageFileSpaceForPage.c)
 *     MiBuildForkPte @ 0x1400E7530 (MiBuildForkPte.c)
 *     MiConfirmPageIsZero @ 0x1401026D0 (MiConfirmPageIsZero.c)
 *     MiBuildReservationCluster @ 0x1402246F4 (MiBuildReservationCluster.c)
 *     MiGetPageForWriteCluster @ 0x140226540 (MiGetPageForWriteCluster.c)
 * Callees:
 *     MiGetPteTimeStamp @ 0x14017C6B8 (MiGetPteTimeStamp.c)
 */

unsigned __int64 __fastcall MiGetPageFileReservationOffset(__int64 *a1, __int64 a2, __int64 a3)
{
  return MiGetPteTimeStamp(*a1, a2, a3);
}
