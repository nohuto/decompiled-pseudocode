/*
 * XREFs of NdisFreeRWLock @ 0x1C0021BE0
 * Callers:
 *     ?ndisVerifyNdisFreeRWLock@@YAXPEAU_NDIS_RW_LOCK_EX@@@Z @ 0x1C007A790 (-ndisVerifyNdisFreeRWLock@@YAXPEAU_NDIS_RW_LOCK_EX@@@Z.c)
 *     EthDeleteFilter @ 0x1C00B2B4C (EthDeleteFilter.c)
 *     nullCreateFilter @ 0x1C00ED830 (nullCreateFilter.c)
 *     nullDeleteFilter @ 0x1C00ED8C0 (nullDeleteFilter.c)
 *     ndisUnloadPeriodicReceives @ 0x1C011F894 (ndisUnloadPeriodicReceives.c)
 * Callees:
 *     ndisFreePerProcessorSlot @ 0x1C0021C18 (ndisFreePerProcessorSlot.c)
 */

void __stdcall NdisFreeRWLock(PNDIS_RW_LOCK_EX Lock)
{
  *(_DWORD *)Lock |= 0xFFFFFF7F;
  ndisFreePerProcessorSlot(*((_QWORD *)Lock + 4), 0x7772444EuLL);
  ExFreePoolWithTag(Lock, 0x7772444Eu);
}
