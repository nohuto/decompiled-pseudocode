/*
 * XREFs of ndisIndicateToPmodeOpens @ 0x1C00258A4
 * Callers:
 *     NdisMIndicateReceiveNetBufferLists @ 0x1C00022E0 (NdisMIndicateReceiveNetBufferLists.c)
 *     ndisMTopReceiveNetBufferLists @ 0x1C0002D60 (ndisMTopReceiveNetBufferLists.c)
 *     ndisMDispatchReceiveNetBufferListsWithLock @ 0x1C001FCF0 (ndisMDispatchReceiveNetBufferListsWithLock.c)
 *     ?ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z @ 0x1C0068E48 (-ndisDoPeriodicReceivesIndication@@YAKPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@@Z.c)
 *     ndisMDispatchReceiveNetBufferLists @ 0x1C006A0F0 (ndisMDispatchReceiveNetBufferLists.c)
 *     ndisMIndicateSplitNblChain @ 0x1C006AAB0 (ndisMIndicateSplitNblChain.c)
 * Callees:
 *     ndisMIndicateNetBufferListsToOpen @ 0x1C0003180 (ndisMIndicateNetBufferListsToOpen.c)
 */

void __fastcall ndisIndicateToPmodeOpens(__int64 a1)
{
  unsigned int v2; // r12d
  int v3; // r14d
  unsigned int v4; // r15d
  __int64 v5; // rbx
  int v6; // ebp
  __int64 v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rax
  struct _NET_BUFFER_LIST *v10; // rdx

  v2 = *(_DWORD *)(a1 + 40);
  v3 = *(_DWORD *)(a1 + 16) | 2;
  v4 = *(_DWORD *)(a1 + 688);
  v5 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
  v6 = *(_DWORD *)(*(_QWORD *)a1 + 2252LL);
  while ( v5 )
  {
    if ( (*(_DWORD *)(v5 + 224) & 4) != 0 )
    {
      v7 = 0LL;
      do
      {
        v8 = 5 * v7;
        v9 = (unsigned int)v7;
        v10 = *(struct _NET_BUFFER_LIST **)(a1 + 40 * v7 + 64);
        v7 = (unsigned int)(v7 + 1);
        if ( v10 )
        {
          if ( *(_QWORD *)(a1 + 8 * v8 + 56) != v5 )
            ndisMIndicateNetBufferListsToOpen(v5, v10, v2, *(unsigned int *)(a1 + 40 * v9 + 80), v3);
        }
      }
      while ( (unsigned int)v7 <= v4 );
      if ( !--v6 )
        break;
    }
    v5 = *(_QWORD *)(v5 + 424);
  }
}
