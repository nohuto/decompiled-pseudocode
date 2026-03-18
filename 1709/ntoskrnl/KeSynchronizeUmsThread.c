/*
 * XREFs of KeSynchronizeUmsThread @ 0x1406D8BB0
 * Callers:
 *     PspRundownUmsThreadForApcDelivery @ 0x14071CD5C (PspRundownUmsThreadForApcDelivery.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140084130 (KiLeaveGuardedRegionUnsafe.c)
 *     KeInsertQueue @ 0x14012E710 (KeInsertQueue.c)
 *     KiSwapToUmsThreadContinue @ 0x14020E7F0 (KiSwapToUmsThreadContinue.c)
 *     KiCopyUchToStagingArea @ 0x1406DA3CC (KiCopyUchToStagingArea.c)
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
