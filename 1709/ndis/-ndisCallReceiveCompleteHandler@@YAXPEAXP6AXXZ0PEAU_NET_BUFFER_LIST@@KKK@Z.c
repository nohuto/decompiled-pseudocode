/*
 * XREFs of ?ndisCallReceiveCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0017140
 * Callers:
 *     ndisMTopReceiveNetBufferLists @ 0x1C0014B80 (ndisMTopReceiveNetBufferLists.c)
 *     ndisInvokeNextReceiveCompleteHandler @ 0x1C0016B0C (ndisInvokeNextReceiveCompleteHandler.c)
 *     NdisReturnNetBufferLists @ 0x1C0016B80 (NdisReturnNetBufferLists.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C00226A0 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0068490 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C0069780 (ndisMDispatchReceiveNetBufferLists.c)
 *     ndisMIndicateSplitNblChain @ 0x1C006A170 (ndisMIndicateSplitNblChain.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0024F10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ndisCallReceiveCompleteHandler(
        _QWORD *a1,
        void (*a2)(void),
        void *a3,
        struct _NET_BUFFER_LIST *a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  if ( ndisVerifierNdisDispatch && *(_BYTE *)a1 == 5 && a1[114] )
    ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, _QWORD))ndisVerifierNdisDispatch->NdisFilterReturnNetBufferListsHandler)(
      a3,
      a4,
      a7);
  else
    ((void (__fastcall *)(void *, struct _NET_BUFFER_LIST *, _QWORD))a2)(a3, a4, a7);
}
