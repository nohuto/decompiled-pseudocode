/*
 * XREFs of ?ndisCleanupPDQAWM@@YAXPEAUNDIS_PD_QUEUE_AWM_STATE@@@Z @ 0x1C00EDA5C
 * Callers:
 *     ?NdisPDPIFreeQueue@@YAXPEAU_NDIS_PD_QUEUE@@@Z @ 0x1C00ECCB0 (-NdisPDPIFreeQueue@@YAXPEAU_NDIS_PD_QUEUE@@@Z.c)
 *     ?ndisFreePDRSSObjects@@YAXPEAU_LIST_ENTRY@@0@Z @ 0x1C00EDCF8 (-ndisFreePDRSSObjects@@YAXPEAU_LIST_ENTRY@@0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisCleanupPDQAWM(struct NDIS_PD_QUEUE_AWM_STATE *a1)
{
  if ( *((_BYTE *)a1 + 4) )
  {
    if ( *((_BYTE *)a1 + 6) )
      KeFlushQueuedDpcs();
    *((_QWORD *)a1 + 1) = 0LL;
  }
}
