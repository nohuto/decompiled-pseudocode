/*
 * XREFs of ndisReferenceFilterDriver @ 0x1C001A8DC
 * Callers:
 *     ?ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00C5090 (-ndisAttachFilter@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAUNDIS_BIND_FILTER_LINK@@@Z.c)
 *     NdisPDStartup @ 0x1C00FAE80 (NdisPDStartup.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C01036D4 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ndisReferenceRefEx @ 0x1C0022014 (ndisReferenceRefEx.c)
 */

__int64 __fastcall ndisReferenceFilterDriver(__int64 a1)
{
  return ndisReferenceRefEx((PKSPIN_LOCK)(a1 + 72));
}
