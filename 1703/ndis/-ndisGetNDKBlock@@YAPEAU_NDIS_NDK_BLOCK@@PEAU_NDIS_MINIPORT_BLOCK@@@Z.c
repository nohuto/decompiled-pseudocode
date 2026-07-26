/*
 * XREFs of ?ndisGetNDKBlock@@YAPEAU_NDIS_NDK_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C001156C
 * Callers:
 *     ndisQueryGuidData @ 0x1C00A651C (ndisQueryGuidData.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00B5D68 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     NdisOpenNDKAdapter @ 0x1C00E3AF0 (NdisOpenNDKAdapter.c)
 *     ndisMHandleNDKPnPEvents @ 0x1C00E3BD0 (ndisMHandleNDKPnPEvents.c)
 *     ndisMSetNDKAttributes @ 0x1C00E3D18 (ndisMSetNDKAttributes.c)
 *     ndisNDKCleanup @ 0x1C00E3E90 (ndisNDKCleanup.c)
 *     ndisNDKWmiGetAdapterCapabilities @ 0x1C00E40DC (ndisNDKWmiGetAdapterCapabilities.c)
 * Callees:
 *     <none>
 */

struct _NDIS_NDK_BLOCK *__fastcall ndisGetNDKBlock(struct _NDIS_MINIPORT_BLOCK *a1)
{
  return (struct _NDIS_NDK_BLOCK *)a1->NDKBlock;
}
