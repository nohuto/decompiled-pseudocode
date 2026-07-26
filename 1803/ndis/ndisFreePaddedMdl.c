/*
 * XREFs of ndisFreePaddedMdl @ 0x1C0054F38
 * Callers:
 *     ndisMAbortPackets @ 0x1C0012510 (ndisMAbortPackets.c)
 *     ndisMAllocSGListS @ 0x1C004C540 (ndisMAllocSGListS.c)
 *     NdisMSendComplete @ 0x1C0054580 (NdisMSendComplete.c)
 *     ndisMDeferredSend @ 0x1C0055240 (ndisMDeferredSend.c)
 *     ndisMDeferredSendPackets @ 0x1C00554C0 (ndisMDeferredSendPackets.c)
 *     ndisMDeferredSendPacketsSG @ 0x1C0055930 (ndisMDeferredSendPacketsSG.c)
 *     ndisMDeferredSendSG @ 0x1C0055DD0 (ndisMDeferredSendSG.c)
 *     ndisMSendCompleteSG @ 0x1C0056A20 (ndisMSendCompleteSG.c)
 *     ndisMSendCompleteX @ 0x1C0056C00 (ndisMSendCompleteX.c)
 *     ndisMSendPacketsSGToMiniport @ 0x1C0057390 (ndisMSendPacketsSGToMiniport.c)
 *     ndisMSendPacketsToMiniport @ 0x1C0057580 (ndisMSendPacketsToMiniport.c)
 *     ndisMFakeSendPackets @ 0x1C0060160 (ndisMFakeSendPackets.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisFreePaddedMdl(__int64 a1)
{
  __int64 v1; // rax
  PMDL *v3; // rbx

  v1 = *(unsigned __int16 *)(a1 + 42);
  *(_DWORD *)(a1 + 36) &= ~0x10000u;
  v3 = *(PMDL **)(v1 + a1 + 128);
  *(_QWORD *)(v1 + a1 + 128) = 0LL;
  IoFreeMdl(*v3);
  *v3 = 0LL;
  *(_BYTE *)(a1 + 40) = 0;
}
