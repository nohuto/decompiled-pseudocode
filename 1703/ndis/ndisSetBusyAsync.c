/*
 * XREFs of ndisSetBusyAsync @ 0x1C0011810
 * Callers:
 *     ndisMSendNBLToMiniportInternal @ 0x1C0004D20 (ndisMSendNBLToMiniportInternal.c)
 *     ndisReturnNblWithPowerQueue @ 0x1C00058E0 (ndisReturnNblWithPowerQueue.c)
 *     ndisQueuedCheckForHang @ 0x1C000FBD0 (ndisQueuedCheckForHang.c)
 *     ndisDoCancelDirectOidRequest @ 0x1C0046520 (ndisDoCancelDirectOidRequest.c)
 *     ndisMDoDirectOidRequest @ 0x1C004751C (ndisMDoDirectOidRequest.c)
 *     ndisMCancelSendNetBufferListsOnMiniport @ 0x1C00554B0 (ndisMCancelSendNetBufferListsOnMiniport.c)
 * Callees:
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C006D594 (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C006D914 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 */

unsigned __int8 __fastcall ndisSetBusyAsync(
        struct _NDIS_MINIPORT_BLOCK *a1,
        unsigned int a2,
        enum _NDIS_SS_BUSY_REASON a3,
        void *a4,
        unsigned int a5)
{
  if ( (a1->Flags & 0x80u) == 0 )
    return ndisWdmSetBusyAsync(a1, a2, a3, a4, a5);
  else
    return ndisWdfSetBusyAsync(a1, a2, a3, a4, a5);
}
