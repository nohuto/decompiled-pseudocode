/*
 * XREFs of MiReduceWs @ 0x14000B908
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x14002B250 (MiTrimSharedPageFromViews.c)
 *     MmSetAddressRangeModifiedEx @ 0x14002F6E0 (MmSetAddressRangeModifiedEx.c)
 *     MiSystemFault @ 0x140032BA0 (MiSystemFault.c)
 *     MiCopyToUserVa @ 0x140034630 (MiCopyToUserVa.c)
 *     MiGetVadWakeList @ 0x140038190 (MiGetVadWakeList.c)
 *     MiQueryAddressState @ 0x14003F110 (MiQueryAddressState.c)
 *     MiDeleteSystemPagableVm @ 0x140056870 (MiDeleteSystemPagableVm.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x140057900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiCountSharedPages @ 0x1400592B0 (MiCountSharedPages.c)
 *     MiSharePages @ 0x1400E83E0 (MiSharePages.c)
 *     MiSetReadOnlyOnSectionView @ 0x1400E9820 (MiSetReadOnlyOnSectionView.c)
 * Callees:
 *     MiTrimWorkingSet @ 0x14000B9A4 (MiTrimWorkingSet.c)
 *     MiSimpleAging @ 0x14000BC74 (MiSimpleAging.c)
 */

__int64 __fastcall MiReduceWs(__int64 a1, char a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rdx
  unsigned int v7; // ebx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rax
  bool v10; // cc

  v4 = a3;
  v5 = *(_QWORD *)(a1 + 136);
  v7 = 7;
  if ( v5 > a3 )
  {
    do
    {
      v8 = v5 - v4;
      if ( v7 )
      {
        v9 = v8;
        v10 = *(_QWORD *)(a1 + 8LL * v7 + 40) <= v8;
        v8 = *(_QWORD *)(a1 + 8LL * v7 + 40);
        if ( !v10 )
          v8 = v9;
      }
      if ( v8 )
      {
        LOBYTE(a3) = a2;
        MiTrimWorkingSet(a1, v8, a3, v7, 16);
        if ( !v7 )
          break;
      }
      v5 = *(_QWORD *)(a1 + 136);
      --v7;
    }
    while ( v5 > v4 );
  }
  LOBYTE(v5) = a2;
  return MiSimpleAging(a1, v5);
}
