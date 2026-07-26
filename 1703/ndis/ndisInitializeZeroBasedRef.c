/*
 * XREFs of ndisInitializeZeroBasedRef @ 0x1C00B736C
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00F821C (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     NdisAllocateRefCount @ 0x1C00B6E90 (NdisAllocateRefCount.c)
 */

struct _NDIS_REFCOUNT_BLOCK *__fastcall ndisInitializeZeroBasedRef(__int64 a1)
{
  struct _NDIS_REFCOUNT_BLOCK *result; // rax

  KeInitializeSpinLock((PKSPIN_LOCK)a1);
  *(_DWORD *)(a1 + 8) = 0x1000000;
  result = NdisAllocateRefCount(0x17u, 0);
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
