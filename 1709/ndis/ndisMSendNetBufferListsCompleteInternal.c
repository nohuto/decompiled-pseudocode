/*
 * XREFs of ndisMSendNetBufferListsCompleteInternal @ 0x1C005638C
 * Callers:
 *     ndisXlateSendNetBufferListsToPacketArray @ 0x1C004DE14 (ndisXlateSendNetBufferListsToPacketArray.c)
 *     ndisMLoopbackNetBufferLists @ 0x1C0055C7C (ndisMLoopbackNetBufferLists.c)
 *     ndisMSendNetBufferListsToPackets @ 0x1C0056590 (ndisMSendNetBufferListsToPackets.c)
 *     ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C006EAAC (-ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C006EC2C (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C006EFAC (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ndisRequestPowerResume @ 0x1C00708F4 (ndisRequestPowerResume.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0013E30 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0024CC8 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0024D1C (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ndisInvokeNextSendCompleteHandler @ 0x1C0059E78 (ndisInvokeNextSendCompleteHandler.c)
 */

void __fastcall ndisMSendNetBufferListsCompleteInternal(__int64 a1, struct _NET_BUFFER_LIST *a2, char a3, char a4)
{
  unsigned int v5; // esi
  struct NDIS_NBL_TRACKER_HANDLE__ *v6; // rdx
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
      v6 = *(struct NDIS_NBL_TRACKER_HANDLE__ **)(a1 + 4104);
    ndisNblTrackerTransferOwnershipInternal(a2, v6, *(_QWORD *)(a1 + 2592), 0x93u, a3 & 1);
  }
  if ( (v5 & 0x100) != 0 )
  {
    if ( (a3 & 1) == 0 )
      v9 = KfRaiseIrql(2u);
    ndisPcwStartCycleCounter(&v10, 8);
    LOWORD(v5) = v10.DatapathCyclesMask;
  }
  ndisInvokeNextSendCompleteHandler(a2, *(_QWORD *)(a1 + 2584), *(void (**)(void))(a1 + 2624));
  if ( (v5 & 0x100) != 0 )
  {
    ndisPcwEndCycleCounter(&v10, 8, 21LL);
    if ( v9 != 2 )
      KeLowerIrql(v9);
  }
}
