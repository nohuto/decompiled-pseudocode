/*
 * XREFs of NdisAcquireRWLockRead @ 0x1C000E720
 * Callers:
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C001E2C0 (ndisMDispatchReceiveNetBufferListsWithLock.c)
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
 * Callees:
 *     <none>
 */

void __stdcall NdisAcquireRWLockRead(PNDIS_RW_LOCK_EX Lock, PLOCK_STATE_EX LockState, UCHAR Flags)
{
  __int64 v3; // rax
  unsigned int *v6; // rsi
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF

  LockState->LockState = 0;
  LockState->Flags = Flags;
  if ( (Flags & 1) == 0 )
    LockState->OldIrql = KfRaiseIrql(2u);
  LODWORD(v3) = KeGetPcr()->Prcb.Number;
  v6 = Lock->RefCount[v3];
  ++*v6;
  _InterlockedOr(v7, 0);
  if ( !KeTestSpinLock(&Lock->WriteLock) && *v6 == 1 && Lock->Owner != KeGetCurrentThread() )
  {
    *v6 = 0;
    KeAcquireSpinLockAtDpcLevel(&Lock->WriteLock);
    ++*v6;
    KeReleaseSpinLockFromDpcLevel(&Lock->WriteLock);
  }
  LockState->LockState = 3;
}
