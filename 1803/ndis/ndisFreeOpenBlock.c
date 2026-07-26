/*
 * XREFs of ndisFreeOpenBlock @ 0x1C00B2688
 * Callers:
 *     ndisOpenAdapterLegacyProtocol @ 0x1C005CC08 (ndisOpenAdapterLegacyProtocol.c)
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C00B25B0 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 * Callees:
 *     NdisFreeRefCount @ 0x1C0011FA0 (NdisFreeRefCount.c)
 *     NdisNblTrackerDeregisterComponent @ 0x1C00120B0 (NdisNblTrackerDeregisterComponent.c)
 *     ndisFreePerProcessorSlot @ 0x1C0021C18 (ndisFreePerProcessorSlot.c)
 */

void __fastcall ndisFreeOpenBlock(PVOID P)
{
  void *v2; // rcx
  void *v3; // rcx
  ULONG_PTR v4; // rcx
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
  NdisFreeRefCount(*((struct NDIS_REFCOUNT_HANDLE__ **)P + 86));
  v4 = *((_QWORD *)P + 102);
  *((_QWORD *)P + 86) = 0LL;
  ndisFreePerProcessorSlot(v4, 0x6F6D444EuLL);
  v5 = (void *)*((_QWORD *)P + 60);
  *((_QWORD *)P + 102) = 0LL;
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0);
    *((_QWORD *)P + 60) = 0LL;
  }
  ExFreePoolWithTag(P, 0);
}
