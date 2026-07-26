/*
 * XREFs of ?ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C000D150
 * Callers:
 *     ndisMDeleteMiniportBlockOnRemove @ 0x1C00AAA48 (ndisMDeleteMiniportBlockOnRemove.c)
 *     ?ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z @ 0x1C00AB4D4 (-ndisWaitForEventThenDisarmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAU_KEVENT@@@Z.c)
 *     ?NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ @ 0x1C00B5310 (-NotifyBindComplete@_NDIS_PROTOCOL_BLOCK@@QEAAXXZ.c)
 *     ?ndisDrainWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00B98A8 (-ndisDrainWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ?ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z @ 0x1C00B98E0 (-ndisArmWatchdog@@YAXPEAUNDISWATCHDOG__@@PEAXK1K_K@Z.c)
 *     ndisMInvokeOidRequest @ 0x1C00B9A74 (ndisMInvokeOidRequest.c)
 *     ?ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z @ 0x1C00BA3CC (-ndisFreeWatchdog@@YAXPEAUNDISWATCHDOG__@@@Z.c)
 *     ndisDeliverNetPnPEventSynchronously @ 0x1C00BA65C (ndisDeliverNetPnPEventSynchronously.c)
 *     NdisAllocateRefCount @ 0x1C00BE070 (NdisAllocateRefCount.c)
 * Callees:
 *     <none>
 */

struct _NDIS_REFCOUNT_BLOCK *__fastcall ndisRefCountHandleFromRefCountBlock(struct _NDIS_REFCOUNT_BLOCK *a1)
{
  return a1;
}
