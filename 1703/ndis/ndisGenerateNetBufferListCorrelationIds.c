/*
 * XREFs of ndisGenerateNetBufferListCorrelationIds @ 0x1C001157C
 * Callers:
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C0002030 (NdisMIndicateReceiveNetBufferLists.c)
 *     NdisAllocateNetBufferList @ 0x1C0004710 (NdisAllocateNetBufferList.c)
 *     NdisAllocateCloneNetBufferList @ 0x1C000DBB0 (NdisAllocateCloneNetBufferList.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C000E340 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisFIndicateReceiveNetBufferLists @ 0x1C000F200 (NdisFIndicateReceiveNetBufferLists.c)
 *     NdisAllocateFragmentNetBufferList @ 0x1C0023D80 (NdisAllocateFragmentNetBufferList.c)
 *     NdisCopyReceiveNetBufferListInfo @ 0x1C0027A40 (NdisCopyReceiveNetBufferListInfo.c)
 *     NdisCopySendNetBufferListInfo @ 0x1C0027C30 (NdisCopySendNetBufferListInfo.c)
 *     ndisXlateRecvPacketArrayToNetBufferLists @ 0x1C004ED90 (ndisXlateRecvPacketArrayToNetBufferLists.c)
 * Callees:
 *     ndisGenerateCorrelationIds @ 0x1C004EA74 (ndisGenerateCorrelationIds.c)
 */

__int64 __fastcall ndisGenerateNetBufferListCorrelationIds(__int64 a1, unsigned int a2)
{
  __int64 result; // rax
  _QWORD *v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rcx
  _QWORD *i; // r8

  result = *(_QWORD *)(a1 + 248);
  if ( result > 0 )
  {
    for ( i = *(_QWORD **)a1; i; i = (_QWORD *)*i )
    {
      result = i[31];
      if ( result <= 0 )
      {
        result = ndisGenerateCorrelationIds(1LL);
        i[31] = (unsigned int)result;
      }
    }
  }
  else
  {
    result = ndisGenerateCorrelationIds(a2);
    do
    {
      v4 = v3[31];
      if ( !v4 || v4 < 0 )
      {
        v5 = (unsigned int)result;
        result = (unsigned int)(result + 1);
        v3[31] = v5;
      }
      v3 = (_QWORD *)*v3;
    }
    while ( v3 );
  }
  return result;
}
