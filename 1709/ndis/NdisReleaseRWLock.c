/*
 * XREFs of NdisReleaseRWLock @ 0x1C000F620
 * Callers:
 *     XRemoveBindingFromLists @ 0x1C0002104 (XRemoveBindingFromLists.c)
 *     XNoteFilterOpenAdapter @ 0x1C000F5B0 (XNoteFilterOpenAdapter.c)
 *     ndisPostSetOpenPacketFilter @ 0x1C00102EC (ndisPostSetOpenPacketFilter.c)
 *     ndisConfigurePeriodicReceives @ 0x1C0010DD4 (ndisConfigurePeriodicReceives.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C00226A0 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ndisBindUnbindPeriodicReceives @ 0x1C004F040 (ndisBindUnbindPeriodicReceives.c)
 *     ?ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0052810 (-ndisCoSendPacketsToNdisPackets@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0052A60 (-ndisCoSendPacketsToNetBufferLists@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z @ 0x1C0052C30 (-ndisMCoIndicateReceiveNdisPacketToNdisPacket@@YAXPEAXPEAPEAU_NDIS_PACKET@@I@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C0053150 (-ndisMCoIndicateReceiveNetBufferListsToNdisPacket@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ?ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z @ 0x1C00534B0 (-ndisMCoIndicateReceiveNetBufferListsToNetBufferLists@@YAXPEAXPEAU_NET_BUFFER_LIST@@KK@Z.c)
 *     ndisMIsLoopbackNetBuffer @ 0x1C00556BC (ndisMIsLoopbackNetBuffer.c)
 *     ndisMIsLoopbackPacket @ 0x1C0055900 (ndisMIsLoopbackPacket.c)
 *     ndisFIsLoopbackNetBuffer @ 0x1C0059794 (ndisFIsLoopbackNetBuffer.c)
 *     EthFilterDprIndicateReceive @ 0x1C0062F20 (EthFilterDprIndicateReceive.c)
 *     EthFilterDprIndicateReceiveComplete @ 0x1C0063340 (EthFilterDprIndicateReceiveComplete.c)
 *     EthQueryGlobalFilterAddresses @ 0x1C0063420 (EthQueryGlobalFilterAddresses.c)
 *     EthQueryOpenFilterAddresses @ 0x1C00634B8 (EthQueryOpenFilterAddresses.c)
 *     ethFilterDprIndicateReceivePacket @ 0x1C0063580 (ethFilterDprIndicateReceivePacket.c)
 *     ndisMIndicatePacket @ 0x1C0064340 (ndisMIndicatePacket.c)
 *     ndisPeriodicReceivesWorker @ 0x1C006A950 (ndisPeriodicReceivesWorker.c)
 *     ndisPnPNotifyAllTransports @ 0x1C0104EDC (ndisPnPNotifyAllTransports.c)
 *     ndisCoIndicateStatusInternal @ 0x1C0112204 (ndisCoIndicateStatusInternal.c)
 *     NdisMCoReceiveComplete @ 0x1C0112AA0 (NdisMCoReceiveComplete.c)
 *     ndisUnloadPeriodicReceives @ 0x1C011DE44 (ndisUnloadPeriodicReceives.c)
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
