/*
 * XREFs of NdisNblTrackerDeregisterComponent @ 0x1C0025590
 * Callers:
 *     ndisDereferenceFilter @ 0x1C00252A0 (ndisDereferenceFilter.c)
 *     ndisUpdateNoPauseOnSuspend @ 0x1C00B510C (ndisUpdateNoPauseOnSuspend.c)
 *     ndisMCleanupMiniportBlockOnStop @ 0x1C00BEB48 (ndisMCleanupMiniportBlockOnStop.c)
 *     ndisFreeOpenBlock @ 0x1C00BF1E8 (ndisFreeOpenBlock.c)
 *     ndisSelectiveSuspendFree @ 0x1C00E9684 (ndisSelectiveSuspendFree.c)
 * Callees:
 *     ?ndisNblTrackerDeleteTracker@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C0065EA8 (-ndisNblTrackerDeleteTracker@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 */

void __fastcall NdisNblTrackerDeregisterComponent(__int64 a1)
{
  struct _NDIS_NBL_TRACKER *v1; // rbx
  KIRQL v2; // al
  _LIST_ENTRY *Flink; // r8
  _LIST_ENTRY *Blink; // rdx

  if ( (a1 & 1) != 0 )
  {
    v1 = (struct _NDIS_NBL_TRACKER *)(a1 & 0xFFFFFFFFFFFFFFF8uLL);
    v2 = KeAcquireSpinLockRaiseToDpc(&ndisNblTrackerListLock);
    Flink = v1->Linkage.Flink;
    Blink = v1->Linkage.Blink;
    if ( (struct _NDIS_NBL_TRACKER *)v1->Linkage.Flink->Blink != v1 || (struct _NDIS_NBL_TRACKER *)Blink->Flink != v1 )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    KeReleaseSpinLock(&ndisNblTrackerListLock, v2);
    ndisNblTrackerDeleteTracker(v1);
  }
}
