/*
 * XREFs of ndisMQueueWorkItem @ 0x1C00605C4
 * Callers:
 *     ndisMProcessSGListS @ 0x1C004BCC0 (ndisMProcessSGListS.c)
 *     NdisMSendComplete @ 0x1C0053BF0 (NdisMSendComplete.c)
 *     NdisMSendResourcesAvailable @ 0x1C0053DC0 (NdisMSendResourcesAvailable.c)
 *     ndisMSendCompleteSG @ 0x1C0056080 (ndisMSendCompleteSG.c)
 *     ndisMSendPacketsToMiniport @ 0x1C0056BE0 (ndisMSendPacketsToMiniport.c)
 *     ndisMWanSend @ 0x1C00574E0 (ndisMWanSend.c)
 *     ndisMReset @ 0x1C00606A0 (ndisMReset.c)
 *     ndisMWakeUpDpc @ 0x1C0062B70 (ndisMWakeUpDpc.c)
 *     ndisReturnPacketToMiniport @ 0x1C006ACDC (ndisReturnPacketToMiniport.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0039450 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0039484 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisMQueueWorkItem(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v6; // rcx
  unsigned int v7; // edi

  v4 = a2;
  if ( (unsigned __int8)byte_1C0098753 >= 4u )
    WPP_SF_q(0x29u, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1);
  v6 = *(_QWORD *)(a1 + 8 * v4 + 880);
  if ( v6 )
  {
    *(_QWORD *)(a1 + 8 * v4 + 880) = *(_QWORD *)v6;
    *(_DWORD *)(v6 + 8) = v4;
    *(_QWORD *)(v6 + 16) = a3;
    *(_QWORD *)v6 = *(_QWORD *)(a1 + 8 * v4 + 824);
    *(_QWORD *)(a1 + 8 * v4 + 824) = v6;
    v7 = 0;
  }
  else
  {
    v7 = 65539;
  }
  if ( (*(_DWORD *)(a1 + 120) & 0x48000) == 0x8000 && !v7 )
    KeInsertQueueDpc((PRKDPC)(a1 + 1528), 0LL, 0LL);
  if ( (unsigned __int8)byte_1C0098753 >= 4u )
    WPP_SF_qD(0x2Au, &WPP_89f39f5878d93d725c4978a535989123_Traceguids, a1, v7);
  return v7;
}
