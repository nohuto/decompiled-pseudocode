/*
 * XREFs of ndisFreePaddedMdl @ 0x1C00545A8
 * Callers:
 *     ndisMAbortPackets @ 0x1C0001868 (ndisMAbortPackets.c)
 *     ndisMAllocSGListS @ 0x1C004B5A8 (ndisMAllocSGListS.c)
 *     NdisMSendComplete @ 0x1C0053BF0 (NdisMSendComplete.c)
 *     ndisMDeferredSend @ 0x1C00548A0 (ndisMDeferredSend.c)
 *     ndisMDeferredSendPackets @ 0x1C0054B20 (ndisMDeferredSendPackets.c)
 *     ndisMDeferredSendPacketsSG @ 0x1C0054F90 (ndisMDeferredSendPacketsSG.c)
 *     ndisMDeferredSendSG @ 0x1C0055440 (ndisMDeferredSendSG.c)
 *     ndisMSendCompleteSG @ 0x1C0056080 (ndisMSendCompleteSG.c)
 *     ndisMSendCompleteX @ 0x1C0056260 (ndisMSendCompleteX.c)
 *     ndisMSendPacketsSGToMiniport @ 0x1C00569F0 (ndisMSendPacketsSGToMiniport.c)
 *     ndisMSendPacketsToMiniport @ 0x1C0056BE0 (ndisMSendPacketsToMiniport.c)
 *     ndisMFakeSendPackets @ 0x1C005F600 (ndisMFakeSendPackets.c)
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
