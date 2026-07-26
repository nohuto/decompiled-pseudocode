/*
 * XREFs of ndisGenerateNetBufferListCorrelationIds @ 0x1C004D4BC
 * Callers:
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C0014510 (NdisMIndicateReceiveNetBufferLists.c)
 *     NdisAllocateNetBufferList @ 0x1C0015EA0 (NdisAllocateNetBufferList.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x1C0017D10 (NdisFIndicateReceiveNetBufferLists.c)
 *     NdisAllocateCloneNetBufferList @ 0x1C0018230 (NdisAllocateCloneNetBufferList.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C0019050 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisCopyReceiveNetBufferListInfo @ 0x1C004CA10 (NdisCopyReceiveNetBufferListInfo.c)
 *     NdisCopySendNetBufferListInfo @ 0x1C004CC10 (NdisCopySendNetBufferListInfo.c)
 *     ndisXlateRecvPacketArrayToNetBufferLists @ 0x1C004D89C (ndisXlateRecvPacketArrayToNetBufferLists.c)
 * Callees:
 *     ndisGenerateCorrelationIds @ 0x1C004D498 (ndisGenerateCorrelationIds.c)
 */

__int64 __fastcall ndisGenerateNetBufferListCorrelationIds(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  _QWORD *i; // r8
  _QWORD *v4; // r8
  __int64 v5; // rcx

  result = *(_QWORD *)(a1 + 248);
  if ( result <= 0 )
  {
    result = ndisGenerateCorrelationIds(a2);
    do
    {
      if ( (__int64)v4[31] <= 0 )
      {
        v5 = (unsigned int)result;
        result = (unsigned int)(result + 1);
        v4[31] = v5;
      }
      v4 = (_QWORD *)*v4;
    }
    while ( v4 );
  }
  else
  {
    for ( i = *(_QWORD **)a1; i; i = (_QWORD *)*i )
    {
      result = i[31];
      if ( result <= 0 )
      {
        result = ndisGenerateCorrelationIds(1u);
        i[31] = (unsigned int)result;
      }
    }
  }
  return result;
}
