/*
 * XREFs of ndisMQueueWorkItem @ 0x1C0060588
 * Callers:
 *     ndisMProcessSGListS @ 0x1C004E170 (ndisMProcessSGListS.c)
 *     NdisMSendComplete @ 0x1C0054A70 (NdisMSendComplete.c)
 *     NdisMSendResourcesAvailable @ 0x1C0054C40 (NdisMSendResourcesAvailable.c)
 *     ndisMSendCompleteSG @ 0x1C0056F30 (ndisMSendCompleteSG.c)
 *     ndisMSendPacketsToMiniport @ 0x1C0057A90 (ndisMSendPacketsToMiniport.c)
 *     ndisMWanSend @ 0x1C00581C0 (ndisMWanSend.c)
 *     ndisMReset @ 0x1C0060660 (ndisMReset.c)
 *     ndisMWakeUpDpc @ 0x1C0062680 (ndisMWakeUpDpc.c)
 *     ndisReturnPacketToMiniport @ 0x1C006955C (ndisReturnPacketToMiniport.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C9C8 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003C9FC (WPP_SF_qD.c)
 */

__int64 __fastcall ndisMQueueWorkItem(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rdi
  __int64 v6; // rcx
  unsigned int v7; // edi

  v4 = a2;
  if ( (unsigned __int8)byte_1C0092613 >= 4u )
    WPP_SF_q(0x28u, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1);
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
  if ( (unsigned __int8)byte_1C0092613 >= 4u )
    WPP_SF_qD(0x29u, &WPP_ce03a118a6ed3e1c1740a62e9d2221ee_Traceguids, a1, v7);
  return v7;
}
