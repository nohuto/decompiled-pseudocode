/*
 * XREFs of MiReleasePageFileSectionInfo @ 0x140150C04
 * Callers:
 *     MiReservePageFileSpace @ 0x140053430 (MiReservePageFileSpace.c)
 *     MiBuildReservationCluster @ 0x14015020C (MiBuildReservationCluster.c)
 *     MiGetPageFileSectionForReservation @ 0x140150C40 (MiGetPageFileSectionForReservation.c)
 * Callees:
 *     MiUnlockProtoPoolPage @ 0x140030A70 (MiUnlockProtoPoolPage.c)
 *     MiReleaseControlAreaWaiters @ 0x1400E3F24 (MiReleaseControlAreaWaiters.c)
 *     MiDecrementModifiedWriteCount @ 0x1401351A4 (MiDecrementModifiedWriteCount.c)
 */

__int64 *__fastcall MiReleasePageFileSectionInfo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v5; // rcx
  __int64 *result; // rax

  v5 = *(_QWORD *)(a1 + 8);
  if ( v5 )
  {
    LOBYTE(a2) = *(_BYTE *)(a1 + 32);
    MiUnlockProtoPoolPage(v5, a2, a3, a4);
  }
  result = MiDecrementModifiedWriteCount(*(_QWORD *)a1, 0);
  if ( result )
    return (__int64 *)MiReleaseControlAreaWaiters(result);
  return result;
}
