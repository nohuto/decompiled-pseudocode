/*
 * XREFs of ?ndisNblTrackerWatchdogTimer@@YAXPEAU_KDPC@@PEAX11@Z @ 0x1C0010700
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerDebugBreak@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C0065E7C (-ndisNblTrackerDebugBreak@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 *     ?ndisNblTrackerReportStuckNbl@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C00663A8 (-ndisNblTrackerReportStuckNbl@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 *     ?ndisNblTrackerSetSqmFlag@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C0066440 (-ndisNblTrackerSetSqmFlag@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 *     ?NdisTraceLoggingStuckNbl@@YAXPEAU_NDIS_NBL_TRACKER@@@Z @ 0x1C00777B8 (-NdisTraceLoggingStuckNbl@@YAXPEAU_NDIS_NBL_TRACKER@@@Z.c)
 */

void __fastcall ndisNblTrackerWatchdogTimer(
        struct _KDPC *Dpc,
        PVOID DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  unsigned int v4; // ebp
  struct _NDIS_NBL_TRACKER *i; // rbx
  ULONG ActiveProcessorCount; // eax
  __int64 PassiveCounter; // rdx
  ULONG j; // r8d
  ULONG v9; // ecx
  int v10; // edi
  int v11; // edi

  v4 = (ndisNblTrackerEpoch - 1) & 1;
  KeAcquireSpinLockAtDpcLevel(&ndisNblTrackerListLock);
  for ( i = ndisNblTrackerList;
        i != (struct _NDIS_NBL_TRACKER *)&ndisNblTrackerList;
        i = (struct _NDIS_NBL_TRACKER *)i->Linkage.Flink )
  {
    ActiveProcessorCount = KeQueryActiveProcessorCountEx(0xFFFFu);
    PassiveCounter = i->Buckets[v4].PassiveCounter;
    for ( j = 0; j < ActiveProcessorCount; PassiveCounter += *((_QWORD *)i->Buckets[v4].Slot + 512 * v9) )
      v9 = j++;
    if ( PassiveCounter )
    {
      v10 = ndisNblTrackerStuckNblDisposition;
      if ( (*((_DWORD *)i + 4) & 0x10000) == 0 )
      {
        *((_WORD *)i + 9) |= 1u;
        NdisTraceLoggingStuckNbl(i);
        ndisNblTrackerReportStuckNbl(i);
        ndisLastFailedNblTracker = i;
        v11 = v10 - 1;
        if ( v11 )
        {
          if ( v11 == 1 )
            ndisNblTrackerSetSqmFlag(i);
        }
        else
        {
          ndisNblTrackerDebugBreak(i);
        }
      }
    }
  }
  KeReleaseSpinLockFromDpcLevel(&ndisNblTrackerListLock);
  ndisNblTrackerEpoch = v4;
}
