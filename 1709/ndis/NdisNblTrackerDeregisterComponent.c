/*
 * XREFs of NdisNblTrackerDeregisterComponent @ 0x1C000F1B0
 * Callers:
 *     ndisDereferenceFilter @ 0x1C0001278 (ndisDereferenceFilter.c)
 *     ndisFreeOpenBlock @ 0x1C00AAED8 (ndisFreeOpenBlock.c)
 *     ndisMCleanupMiniportBlockOnStop @ 0x1C00AB714 (ndisMCleanupMiniportBlockOnStop.c)
 *     ndisUpdateNoPauseOnSuspend @ 0x1C00BDD30 (ndisUpdateNoPauseOnSuspend.c)
 *     ndisSelectiveSuspendFree @ 0x1C00F2BF0 (ndisSelectiveSuspendFree.c)
 * Callees:
 *     ?ndisNblTrackerVerifyNoNblsHeld@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C0001CC4 (-ndisNblTrackerVerifyNoNblsHeld@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 *     ?ndisNblTrackerDeleteTracker@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C0002374 (-ndisNblTrackerDeleteTracker@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 */

void __fastcall NdisNblTrackerDeregisterComponent(__int64 a1)
{
  char *v1; // rbx
  KIRQL v2; // al
  __int64 v3; // r8
  KIRQL v4; // di
  char **v5; // rdx

  if ( (a1 & 1) != 0 )
  {
    v1 = (char *)(a1 & 0xFFFFFFFFFFFFFFF8uLL);
    v2 = KeAcquireSpinLockRaiseToDpc(&ndisNblTrackerListLock);
    v3 = *(_QWORD *)v1;
    v4 = v2;
    if ( *(char **)(*(_QWORD *)v1 + 8LL) != v1 || (v5 = (char **)*((_QWORD *)v1 + 1), *v5 != v1) )
      __fastfail(3u);
    *v5 = (char *)v3;
    *(_QWORD *)(v3 + 8) = v5;
    ndisNblTrackerVerifyNoNblsHeld((ULONG_PTR)v1);
    KeReleaseSpinLock(&ndisNblTrackerListLock, v4);
    ndisNblTrackerDeleteTracker(v1);
  }
}
