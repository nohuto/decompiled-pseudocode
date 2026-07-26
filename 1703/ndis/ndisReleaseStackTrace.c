/*
 * XREFs of ndisReleaseStackTrace @ 0x1C00115F8
 * Callers:
 *     ?ndisFillEventLogEntry@@YAXPEAU_NDIS_EVENT_LOG@@KGPEAX@Z @ 0x1C0015CD4 (-ndisFillEventLogEntry@@YAXPEAU_NDIS_EVENT_LOG@@KGPEAX@Z.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0066054 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006C7F8 (-ndisFreeRefCountStacksInBlock@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006C854 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ndisMDeleteMiniportBlockOnRemove @ 0x1C00BED60 (ndisMDeleteMiniportBlockOnRemove.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisReleaseStackTrace(ULONG_PTR Signature)
{
  unsigned int v1; // ebx
  KIRQL v2; // di
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v3; // rax
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v4; // rbx
  int v5; // r8d
  _RTL_DYNAMIC_HASH_TABLE_CONTEXT Context; // [rsp+20h] [rbp-28h] BYREF

  v1 = Signature;
  if ( byte_1C0092078 )
  {
    v2 = KeAcquireSpinLockRaiseToDpc(&ndisStackTraces);
    if ( v1 == 1 )
    {
      --dword_1C00920A8;
    }
    else
    {
      memset(&Context, 0, sizeof(Context));
      v3 = RtlLookupEntryHashTable(&HashTable, v1, &Context);
      v4 = v3;
      if ( v3 )
      {
        v5 = LODWORD(v3[1].Linkage.Flink) ^ (LODWORD(v3[1].Linkage.Flink) ^ (LODWORD(v3[1].Linkage.Flink) - 1)) & 0x3FFFFFFF;
        LODWORD(v3[1].Linkage.Flink) = v5;
        if ( (v5 & 0x3FFFFFFF) == 0 )
        {
          RtlRemoveEntryHashTable(&HashTable, v3, &Context);
          ExFreePoolWithTag(v4, 0);
        }
      }
    }
    KeReleaseSpinLock(&ndisStackTraces, v2);
  }
}
