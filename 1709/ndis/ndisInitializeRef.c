/*
 * XREFs of ndisInitializeRef @ 0x1C00BE130
 * Callers:
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C001BCB0 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     NdisFRegisterFilterDriver @ 0x1C00206B0 (NdisFRegisterFilterDriver.c)
 *     NdisRegisterProtocol @ 0x1C00E6190 (NdisRegisterProtocol.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C01021E4 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ndisRegisterMiniportDriver @ 0x1C010D638 (ndisRegisterMiniportDriver.c)
 * Callees:
 *     NdisAllocateRefCount @ 0x1C00BE070 (NdisAllocateRefCount.c)
 */

struct _NDIS_REFCOUNT_BLOCK *__fastcall ndisInitializeRef(__int64 a1, unsigned __int8 a2)
{
  struct _NDIS_REFCOUNT_BLOCK *result; // rax

  KeInitializeSpinLock((PKSPIN_LOCK)a1);
  *(_DWORD *)(a1 + 8) = 1;
  result = NdisAllocateRefCount(a2, 2u);
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
