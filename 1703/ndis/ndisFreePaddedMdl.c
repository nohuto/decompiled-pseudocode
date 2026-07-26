/*
 * XREFs of ndisFreePaddedMdl @ 0x1C0055460
 * Callers:
 *     ndisMAbortPackets @ 0x1C00258E0 (ndisMAbortPackets.c)
 *     ndisMAllocSGListS @ 0x1C004DA7C (ndisMAllocSGListS.c)
 *     NdisMSendComplete @ 0x1C0054A70 (NdisMSendComplete.c)
 *     ndisMDeferredSend @ 0x1C0055750 (ndisMDeferredSend.c)
 *     ndisMDeferredSendPackets @ 0x1C00559D0 (ndisMDeferredSendPackets.c)
 *     ndisMDeferredSendPacketsSG @ 0x1C0055E40 (ndisMDeferredSendPacketsSG.c)
 *     ndisMDeferredSendSG @ 0x1C00562F0 (ndisMDeferredSendSG.c)
 *     ndisMSendCompleteSG @ 0x1C0056F30 (ndisMSendCompleteSG.c)
 *     ndisMSendCompleteX @ 0x1C0057110 (ndisMSendCompleteX.c)
 *     ndisMSendPacketsSGToMiniport @ 0x1C00578A0 (ndisMSendPacketsSGToMiniport.c)
 *     ndisMSendPacketsToMiniport @ 0x1C0057A90 (ndisMSendPacketsToMiniport.c)
 *     ndisMFakeSendPackets @ 0x1C005F850 (ndisMFakeSendPackets.c)
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
