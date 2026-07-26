/*
 * XREFs of NdisAllocateNetBufferListContext @ 0x1C0010B20
 * Callers:
 *     NdisAllocateNetBufferList @ 0x1C0004710 (NdisAllocateNetBufferList.c)
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C000E340 (NdisAllocateNetBufferAndNetBufferList.c)
 * Callees:
 *     ?ndisIsCurrentNblContextBlockPreallocated@@YAEPEAU_NET_BUFFER_LIST@@@Z @ 0x1C0010CB0 (-ndisIsCurrentNblContextBlockPreallocated@@YAEPEAU_NET_BUFFER_LIST@@@Z.c)
 */

NDIS_STATUS __stdcall NdisAllocateNetBufferListContext(
        PNET_BUFFER_LIST NetBufferList,
        USHORT ContextSize,
        USHORT ContextBackFill,
        ULONG PoolTag)
{
  NDIS_STATUS v4; // ebp
  __int64 v9; // rcx
  __int64 v10; // r8
  _NET_BUFFER_LIST_CONTEXT *v11; // r10
  int v12; // ecx
  unsigned __int16 v13; // ax
  unsigned __int16 v14; // di
  int v15; // r8d
  _NET_BUFFER_LIST_CONTEXT *PoolWithTag; // rax
  unsigned __int16 v18; // ax

  v4 = 0;
  if ( ContextSize )
  {
    if ( (((unsigned __int8)ContextBackFill | (unsigned __int8)ContextSize) & 7) != 0 )
    {
      return -1073676267;
    }
    else
    {
      if ( !ndisIsCurrentNblContextBlockPreallocated(NetBufferList) || *(_WORD *)(v10 + 10) < ContextSize )
      {
        *(_WORD *)(v9 + 56) += ContextSize;
        v12 = *(unsigned __int16 *)(v9 + 56);
        if ( v12 <= ndisMaxCachedNblContextSize )
        {
          v13 = WORD1(NetBufferList->NdisReserved[1]);
          if ( (unsigned __int16)v12 > v13 )
            v13 = v12;
          WORD1(NetBufferList->NdisReserved[1]) = v13;
        }
      }
      if ( v10 && (v18 = *(_WORD *)(v10 + 10), v18 >= ContextSize) )
      {
        *(_WORD *)(v10 + 10) = v18 - ContextSize;
      }
      else if ( v11 && v11->Size >= ContextSize )
      {
        v11->Offset -= ContextSize;
        v11->Next = NetBufferList->Context;
        NetBufferList->Context = v11;
        NetBufferList->NetBufferListInfo[27] = 0LL;
      }
      else
      {
        v14 = ContextBackFill + ContextSize;
        if ( LOWORD(NetBufferList->NdisReserved[1]) <= ndisMaxCachedNblContextSize )
        {
          if ( v11 )
          {
            NetBufferList->NetBufferListInfo[27] = 0LL;
            ExFreePoolWithTag(v11, 0);
          }
          v15 = LOWORD(NetBufferList->NdisReserved[1]);
          if ( v14 <= ContextSize + WORD1(NetBufferList->NdisReserved[1]) - v15 )
            v14 = ContextSize + WORD1(NetBufferList->NdisReserved[1]) - v15;
          if ( v14 > ContextSize + (unsigned int)ContextBackFill )
            PoolTag = 1668170830;
        }
        PoolWithTag = (_NET_BUFFER_LIST_CONTEXT *)ExAllocatePoolWithTag(NonPagedPoolNx, v14 + 16LL, PoolTag);
        if ( PoolWithTag )
        {
          PoolWithTag->Size = v14;
          PoolWithTag->Offset = v14 - ContextSize;
          PoolWithTag->Next = NetBufferList->Context;
          NetBufferList->Context = PoolWithTag;
        }
        else
        {
          LOWORD(NetBufferList->NdisReserved[1]) -= ContextSize;
          return -1073741670;
        }
      }
    }
  }
  return v4;
}
