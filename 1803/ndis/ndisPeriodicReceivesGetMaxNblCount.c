/*
 * XREFs of ndisPeriodicReceivesGetMaxNblCount @ 0x1C006B1EC
 * Callers:
 *     ?ndisGetMiniportIndicateList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006953C (-ndisGetMiniportIndicateList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisMIndicateReceiveNblsWithThrottling @ 0x1C006AA60 (ndisMIndicateReceiveNblsWithThrottling.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisPeriodicReceivesGetMaxNblCount(__int64 a1)
{
  __int64 result; // rax

  if ( !byte_1C0098DC1 )
    return 0xFFFFFFFFLL;
  if ( dword_1C0098DCC )
    return (unsigned int)dword_1C0098DC4;
  result = (unsigned int)ndisPeriodicReceivesNblCounts[*(unsigned int *)((KeGetPcr()->Prcb.Number << 12)
                                                                       + *(_QWORD *)(a1 + 3312))];
  if ( dword_1C0098DC4 < (unsigned int)result )
    return (unsigned int)dword_1C0098DC4;
  return result;
}
