/*
 * XREFs of ?ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C000C190
 * Callers:
 *     ndisMInvokeOidRequest @ 0x1C00A5080 (ndisMInvokeOidRequest.c)
 *     ?ndisDrainWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00A5300 (-ndisDrainWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXKK_K@Z @ 0x1C00A5338 (-ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXKK_K@Z.c)
 *     ndisDeliverNetPnPEventSynchronously @ 0x1C00B54E4 (ndisDeliverNetPnPEventSynchronously.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00B5704 (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     NdisAllocateRefCount @ 0x1C00B6E90 (NdisAllocateRefCount.c)
 *     ndisMDeleteMiniportBlockOnRemove @ 0x1C00BED60 (ndisMDeleteMiniportBlockOnRemove.c)
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x1C00BF788 (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
 * Callees:
 *     <none>
 */

struct _NDIS_REFCOUNT_BLOCK *__fastcall ndisRefCountHandleFromRefCountBlock(struct _NDIS_REFCOUNT_BLOCK *a1)
{
  return a1;
}
