/*
 * XREFs of ?ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C000633C
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00B5960 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ndisQueryGuidData @ 0x1C00B6788 (ndisQueryGuidData.c)
 *     NdisOpenNDKAdapter @ 0x1C00EDB10 (NdisOpenNDKAdapter.c)
 *     ndisMHandleNDKPnPEvents @ 0x1C00EDBEC (ndisMHandleNDKPnPEvents.c)
 *     ndisMSetNDKAttributes @ 0x1C00EDD34 (ndisMSetNDKAttributes.c)
 *     ndisNDKCleanup @ 0x1C00EDEAC (ndisNDKCleanup.c)
 *     ndisNDKWmiGetAdapterCapabilities @ 0x1C00EE0F8 (ndisNDKWmiGetAdapterCapabilities.c)
 * Callees:
 *     <none>
 */

struct _NDIS_NDK_BLOCK *__fastcall ndisGetNDKBlock(struct _NDIS_MINIPORT_BLOCK *a1)
{
  return (struct _NDIS_NDK_BLOCK *)a1->NDKBlock;
}
