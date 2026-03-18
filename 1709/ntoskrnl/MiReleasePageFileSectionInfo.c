/*
 * XREFs of MiReleasePageFileSectionInfo @ 0x140226CE0
 * Callers:
 *     MiReservePageFileSpace @ 0x14005CBF4 (MiReservePageFileSpace.c)
 *     MiBuildReservationCluster @ 0x1402246F4 (MiBuildReservationCluster.c)
 *     MiGetPageFileSectionForReservation @ 0x140226494 (MiGetPageFileSectionForReservation.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x140030AF0 (MiUnlockProtoPoolPage.c)
 *     MiReleaseControlAreaWaiters @ 0x140067BC4 (MiReleaseControlAreaWaiters.c)
 *     MiDecrementModifiedWriteCount @ 0x1400EFE28 (MiDecrementModifiedWriteCount.c)
 */

__int64 *__fastcall MiReleasePageFileSectionInfo(__int64 a1)
{
  __int64 v2; // rcx
  __int64 *result; // rax

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    MiUnlockProtoPoolPage(v2, *(_BYTE *)(a1 + 32));
  result = MiDecrementModifiedWriteCount(*(_QWORD *)a1, 0);
  if ( result )
    return (__int64 *)MiReleaseControlAreaWaiters(result);
  return result;
}
