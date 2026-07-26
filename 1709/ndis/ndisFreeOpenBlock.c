/*
 * XREFs of ndisFreeOpenBlock @ 0x1C00AAED8
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005C364 (ndisOpenAdapterLegacyProtocol.c)
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C00AAE00 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 * Callees:
 *     NdisFreeRefCount @ 0x1C00013F0 (NdisFreeRefCount.c)
 *     NdisNblTrackerDeregisterComponent @ 0x1C000F1B0 (NdisNblTrackerDeregisterComponent.c)
 *     ndisFreePerProcessorSlot @ 0x1C001E500 (ndisFreePerProcessorSlot.c)
 */

void __fastcall ndisFreeOpenBlock(PVOID P)
{
  void *v2; // rcx
  void *v3; // rcx
  __int64 v4; // rcx
  void *v5; // rcx

  v2 = (void *)*((_QWORD *)P + 99);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *((_QWORD *)P + 99) = 0LL;
  }
  v3 = (void *)*((_QWORD *)P + 100);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    *((_QWORD *)P + 100) = 0LL;
  }
  NdisNblTrackerDeregisterComponent(*((_QWORD *)P + 85));
  NdisFreeRefCount(*((struct _NDIS_REFCOUNT_BLOCK **)P + 86));
  v4 = *((_QWORD *)P + 102);
  *((_QWORD *)P + 86) = 0LL;
  ndisFreePerProcessorSlot(v4, 1869431886);
  v5 = (void *)*((_QWORD *)P + 60);
  *((_QWORD *)P + 102) = 0LL;
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0);
    *((_QWORD *)P + 60) = 0LL;
  }
  ExFreePoolWithTag(P, 0);
}
