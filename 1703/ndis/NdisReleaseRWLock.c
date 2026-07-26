/*
 * XREFs of NdisReleaseRWLock @ 0x1C000E7D0
 * Callers:
 *     ndisConfigurePeriodicReceives @ 0x1C00142C8 (ndisConfigurePeriodicReceives.c)
 *     XNoteFilterOpenAdapter @ 0x1C001A438 (XNoteFilterOpenAdapter.c)
 *     ndisPostSetOpenPacketFilter @ 0x1C001BC64 (ndisPostSetOpenPacketFilter.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C001E2C0 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     XRemoveBindingFromLists @ 0x1C0026618 (XRemoveBindingFromLists.c)
 *     ndisBindUnbindPeriodicReceives @ 0x1C0050474 (ndisBindUnbindPeriodicReceives.c)
 *     ?ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0053750 (-ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C00539A0 (-ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0053B70 (-ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0054090 (-ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C00543F0 (-ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ndisMIsLoopbackNetBuffer @ 0x1C005656C (ndisMIsLoopbackNetBuffer.c)
 *     ndisMIsLoopbackPacket @ 0x1C00567B0 (ndisMIsLoopbackPacket.c)
 *     ndisFIsLoopbackNetBuffer @ 0x1C005A34C (ndisFIsLoopbackNetBuffer.c)
 *     EthFilterDprIndicateReceive @ 0x1C00628F0 (EthFilterDprIndicateReceive.c)
 *     EthFilterDprIndicateReceiveComplete @ 0x1C0062D10 (EthFilterDprIndicateReceiveComplete.c)
 *     EthQueryGlobalFilterAddresses @ 0x1C0062DF0 (EthQueryGlobalFilterAddresses.c)
 *     EthQueryOpenFilterAddresses @ 0x1C0062E88 (EthQueryOpenFilterAddresses.c)
 *     ethFilterDprIndicateReceivePacket @ 0x1C0062F50 (ethFilterDprIndicateReceivePacket.c)
 *     ndisMIndicatePacket @ 0x1C0063D10 (ndisMIndicatePacket.c)
 *     ndisPeriodicReceivesWorker @ 0x1C00691D0 (ndisPeriodicReceivesWorker.c)
 *     ndisPnPNotifyAllTransports @ 0x1C00FA564 (ndisPnPNotifyAllTransports.c)
 *     ndisCoIndicateStatusInternal @ 0x1C01091F4 (ndisCoIndicateStatusInternal.c)
 *     NdisMCoReceiveComplete @ 0x1C0109A90 (NdisMCoReceiveComplete.c)
 *     ndisUnloadPeriodicReceives @ 0x1C0114DC4 (ndisUnloadPeriodicReceives.c)
 * Callees:
 *     <none>
 */

void __stdcall NdisReleaseRWLock(PNDIS_RW_LOCK_EX Lock, PLOCK_STATE_EX LockState)
{
  __int64 v2; // rax
  bool v3; // zf
  unsigned __int64 *p_WriteLock; // rcx

  v2 = LockState->LockState;
  if ( (_BYTE)v2 == 3 )
  {
    LODWORD(v2) = KeGetPcr()->Prcb.Number;
    --*Lock->RefCount[v2];
    v3 = (LockState->Flags & 1) == 0;
    LockState->LockState = -1;
    if ( v3 && LockState->OldIrql != 2 )
      KeLowerIrql(LockState->OldIrql);
  }
  else if ( (_BYTE)v2 == 4 )
  {
    LockState->LockState = -1;
    Lock->Owner = 0LL;
    p_WriteLock = &Lock->WriteLock;
    if ( (LockState->Flags & 1) != 0 )
      KeReleaseSpinLockFromDpcLevel(p_WriteLock);
    else
      KeReleaseSpinLock(p_WriteLock, LockState->OldIrql);
  }
}
