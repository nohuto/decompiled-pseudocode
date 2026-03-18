/*
 * XREFs of MiGetPageFileReservationOffset @ 0x14021A1C8
 * Callers:
 *     MiBuildForkPte @ 0x140001E68 (MiBuildForkPte.c)
 *     MiDeletePteList @ 0x1400C5000 (MiDeletePteList.c)
 *     MiDecommitPages @ 0x1400D2D20 (MiDecommitPages.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1401039D0 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MiConfirmPageIsZero @ 0x1401041F0 (MiConfirmPageIsZero.c)
 *     MiReservePageFileSpaceForPage @ 0x1401048E0 (MiReservePageFileSpaceForPage.c)
 *     MiBuildReservationCluster @ 0x140139AAC (MiBuildReservationCluster.c)
 *     MiGetPageForWriteCluster @ 0x14013A0CC (MiGetPageForWriteCluster.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetPageFileReservationOffset(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  return MiGetPteTimeStamp(*a1, a2, a3, a4);
}
