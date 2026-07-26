/*
 * XREFs of ndisMSendNetBufferListsCompleteInternal @ 0x1C0056D2C
 * Callers:
 *     ndisXlateSendNetBufferListsToPacketArray @ 0x1C004E77C (ndisXlateSendNetBufferListsToPacketArray.c)
 *     ndisMLoopbackNetBufferLists @ 0x1C005661C (ndisMLoopbackNetBufferLists.c)
 *     ndisMSendNetBufferListsToPackets @ 0x1C0056F30 (ndisMSendNetBufferListsToPackets.c)
 *     ?ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z @ 0x1C006F340 (-ndisWdfSelectiveSuspendResumeOperations@@YAXPEAU_NDIS_MINIPORT_BLOCK@@EE@Z.c)
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C006F4C0 (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C006F840 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ndisRequestPowerResume @ 0x1C0071150 (ndisRequestPowerResume.c)
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0002064 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0025BD0 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0025C24 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ndisInvokeNextSendCompleteHandler @ 0x1C005A7D4 (ndisInvokeNextSendCompleteHandler.c)
 */

void __fastcall ndisMSendNetBufferListsCompleteInternal(__int64 a1, struct _NET_BUFFER_LIST *a2, char a3, char a4)
{
  unsigned int v4; // ebp
  unsigned int v5; // edi
  KIRQL v8; // si
  struct NDIS_NBL_TRACKER_HANDLE__ *v9; // rdx
  struct NDIS_PCW_CONTEXT v10; // [rsp+30h] [rbp-38h] BYREF

  v4 = *(_DWORD *)(a1 + 80);
  v5 = a3 & 1;
  v10.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(a1 + 40);
  v10.CurrentCpu = -1;
  v8 = 2;
  v10.DatapathEventsMask = *(_DWORD *)(a1 + 48);
  v10.DatapathCyclesMask = v4;
  if ( ndisNblTrackerMode )
  {
    if ( a4 )
      v9 = *(struct NDIS_NBL_TRACKER_HANDLE__ **)(a1 + 4104);
    else
      v9 = 0LL;
    ndisNblTrackerTransferOwnershipInternal(a2, v9, *(_QWORD *)(a1 + 2592), 147LL, v5);
  }
  if ( (v4 & 0x100) != 0 )
  {
    if ( !v5 )
      v8 = KfRaiseIrql(2u);
    ndisPcwStartCycleCounter(&v10, 8);
    LOWORD(v4) = v10.DatapathCyclesMask;
  }
  ndisInvokeNextSendCompleteHandler(a2, *(void **)(a1 + 2584), *(void (**)(void))(a1 + 2624));
  if ( (v4 & 0x100) != 0 )
  {
    ndisPcwEndCycleCounter(&v10, 8, 21LL);
    if ( v8 != 2 )
      KeLowerIrql(v8);
  }
}
