/*
 * XREFs of ndisPeriodicReceivesGetMaxNblCount @ 0x1C006A8EC
 * Callers:
 *     ?ndisGetMiniportIndicateList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0068BC4 (-ndisGetMiniportIndicateList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisMIndicateReceiveNblsWithThrottling @ 0x1C006A120 (ndisMIndicateReceiveNblsWithThrottling.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisPeriodicReceivesGetMaxNblCount(__int64 a1)
{
  __int64 result; // rax

  if ( !byte_1C0097F01 )
    return 0xFFFFFFFFLL;
  if ( dword_1C0097F0C )
    return (unsigned int)dword_1C0097F04;
  result = (unsigned int)ndisPeriodicReceivesNblCounts[*(unsigned int *)((KeGetPcr()->Prcb.Number << 12)
                                                                       + *(_QWORD *)(a1 + 3312))];
  if ( dword_1C0097F04 < (unsigned int)result )
    return (unsigned int)dword_1C0097F04;
  return result;
}
