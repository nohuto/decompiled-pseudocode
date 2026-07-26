/*
 * XREFs of ndisMSendNetBufferListsCompleteInternal @ 0x1C005723C
 * Callers:
 *     ndisXlateSendNetBufferListsToPacketArray @ 0x1C004F310 (ndisXlateSendNetBufferListsToPacketArray.c)
 *     ndisMLoopbackNetBufferLists @ 0x1C0056B2C (ndisMLoopbackNetBufferLists.c)
 *     ndisMSendNetBufferListsToPackets @ 0x1C0057440 (ndisMSendNetBufferListsToPackets.c)
 *     ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C006D414 (-ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C006D594 (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C006D914 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ndisRequestPowerResume @ 0x1C006F184 (ndisRequestPowerResume.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0003618 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ndisInvokeNextSendCompleteHandler @ 0x1C0010F3C (ndisInvokeNextSendCompleteHandler.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0011764 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C001177C (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 */

void __fastcall ndisMSendNetBufferListsCompleteInternal(
        __int64 a1,
        struct _NET_BUFFER_LIST *a2,
        unsigned int a3,
        char a4)
{
  unsigned int v5; // esi
  __int64 v6; // rdx
  KIRQL v9; // di
  struct NDIS_PCW_CONTEXT v10; // [rsp+30h] [rbp-28h] BYREF

  v5 = *(_DWORD *)(a1 + 80);
  v6 = 0LL;
  v10.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(a1 + 40);
  v10.CurrentCpu = -1;
  v9 = 2;
  v10.DatapathEventsMask = *(_DWORD *)(a1 + 48);
  v10.DatapathCyclesMask = v5;
  if ( ndisNblTrackerMode )
  {
    if ( a4 )
      v6 = *(_QWORD *)(a1 + 4104);
    ndisNblTrackerTransferOwnershipInternal(a2, v6, *(_QWORD *)(a1 + 2592), 0x93u, a3 & 1);
  }
  if ( (v5 & 0x100) != 0 )
  {
    if ( (a3 & 1) == 0 )
      v9 = KfRaiseIrql(2u);
    ndisPcwStartCycleCounter(&v10, 8);
    LOWORD(v5) = v10.DatapathCyclesMask;
  }
  ndisInvokeNextSendCompleteHandler(
    a2,
    a3,
    (struct _NDIS_FILTER_BLOCK *)a1,
    *(_BYTE **)(a1 + 2600),
    *(void **)(a1 + 2584),
    *(void (**)(void))(a1 + 2624));
  if ( (v5 & 0x100) != 0 )
  {
    ndisPcwEndCycleCounter(&v10, 8, 21LL);
    if ( v9 != 2 )
      KeLowerIrql(v9);
  }
}
