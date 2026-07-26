/*
 * XREFs of ndisMQueueWorkItem @ 0x1C0060FD4
 * Callers:
 *     ndisMProcessSGListS @ 0x1C004CC50 (ndisMProcessSGListS.c)
 *     NdisMSendComplete @ 0x1C0054580 (NdisMSendComplete.c)
 *     NdisMSendResourcesAvailable @ 0x1C0054750 (NdisMSendResourcesAvailable.c)
 *     ndisMSendCompleteSG @ 0x1C0056A20 (ndisMSendCompleteSG.c)
 *     ndisMSendPacketsToMiniport @ 0x1C0057580 (ndisMSendPacketsToMiniport.c)
 *     ndisMWanSend @ 0x1C0057E90 (ndisMWanSend.c)
 *     ndisMReset @ 0x1C00610B0 (ndisMReset.c)
 *     ndisMWakeUpDpc @ 0x1C0063690 (ndisMWakeUpDpc.c)
 *     ndisReturnPacketToMiniport @ 0x1C006B5E0 (ndisReturnPacketToMiniport.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003A83C (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003A870 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisMQueueWorkItem(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v6; // rcx
  unsigned int v7; // edi

  v4 = a2;
  if ( (unsigned __int8)byte_1C0099613 >= 4u )
    WPP_SF_q(0x2Cu, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1);
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
  if ( (unsigned __int8)byte_1C0099613 >= 4u )
    WPP_SF_qD(0x2Du, &WPP_3541b357d8fa39ee5aefec47eeb5df8d_Traceguids, a1, v7);
  return v7;
}
