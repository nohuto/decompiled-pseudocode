/*
 * XREFs of ndisInitializeNsi @ 0x1C00B5974
 * Callers:
 *     NdisIfRegisterProvider @ 0x1C0015140 (NdisIfRegisterProvider.c)
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C002209C (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     ndisIfCreatePersistedInterface @ 0x1C0042630 (ndisIfCreatePersistedInterface.c)
 *     ndisIfDeletePersistedInterface @ 0x1C0042820 (ndisIfDeletePersistedInterface.c)
 *     ndisMInitializeAdapter @ 0x1C0105A70 (ndisMInitializeAdapter.c)
 * Callees:
 *     <none>
 */

NTSTATUS ndisInitializeNsi()
{
  return RtlRunOnceExecuteOnce(&ndisNsiInitOnceBlock, ndisInitializeNsiInitFn, 0LL, 0LL);
}
