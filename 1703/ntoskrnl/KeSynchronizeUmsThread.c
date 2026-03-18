/*
 * XREFs of KeSynchronizeUmsThread @ 0x1406AD76C
 * Callers:
 *     PspRundownUmsThreadForApcDelivery @ 0x1406E496C (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     KeInsertQueue @ 0x140010DA0 (KeInsertQueue.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400F0C00 (KiLeaveGuardedRegionUnsafe.c)
 *     KiSwapToUmsThreadContinue @ 0x140207E40 (KiSwapToUmsThreadContinue.c)
 *     KiCopyUchToStagingArea @ 0x1406AEF7C (KiCopyUchToStagingArea.c)
 */

__int64 __fastcall KeSynchronizeUmsThread(__int64 a1, char a2)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)(a1 + 496);
  if ( a2 )
  {
    KeInsertQueue(*(PRKQUEUE *)(v2 + 32), *(PLIST_ENTRY *)(v2 + 40));
    *(_DWORD *)(v2 + 80) |= 2u;
    *(_QWORD *)(v2 + 72) = 0LL;
    return KiLeaveGuardedRegionUnsafe(a1);
  }
  else
  {
    KiCopyUchToStagingArea(a1, *(_QWORD *)(v2 + 72));
    *(_QWORD *)(v2 + 72) = 0LL;
    return KiSwapToUmsThreadContinue();
  }
}
