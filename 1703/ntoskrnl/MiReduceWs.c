/*
 * XREFs of MiReduceWs @ 0x14007F54C
 * Callers:
 *     MiCountSharedPages @ 0x14009AE40 (MiCountSharedPages.c)
 *     MiSharePages @ 0x1400A3D30 (MiSharePages.c)
 *     MiProtectPool @ 0x1400A5D90 (MiProtectPool.c)
 *     MiCopyToUserVa @ 0x1400A6BD0 (MiCopyToUserVa.c)
 *     MiSystemFault @ 0x1400B04A0 (MiSystemFault.c)
 *     MiDeleteSystemPagableVm @ 0x1400C9480 (MiDeleteSystemPagableVm.c)
 *     MiMakeHyperRangeAccessible @ 0x1400D1310 (MiMakeHyperRangeAccessible.c)
 *     MiQueryAddressState @ 0x1400D1AC0 (MiQueryAddressState.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1400D6900 (MiPreUnlockWorkingSetExclusive.c)
 *     MiGetVadWakeList @ 0x1400DAF90 (MiGetVadWakeList.c)
 *     MmSetAddressRangeModifiedEx @ 0x140101470 (MmSetAddressRangeModifiedEx.c)
 * Callees:
 *     MiTrimWorkingSet @ 0x14007F5E8 (MiTrimWorkingSet.c)
 */

__int64 __fastcall MiReduceWs(__int64 a1, char a2, unsigned __int64 a3)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // rdx
  unsigned int v7; // ebx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rax
  bool v11; // cc

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
        v9 = *(_QWORD *)(a1 + 8LL * v7 + 40);
        v10 = v8;
        v11 = v9 <= v8;
        v8 = v9;
        if ( !v11 )
          v8 = v10;
      }
      if ( v8 )
      {
        LOBYTE(a3) = a2;
        MiTrimWorkingSet(a1, v8, a3, v7, 0);
        if ( !v7 )
          break;
      }
      v5 = *(_QWORD *)(a1 + 136);
      --v7;
    }
    while ( v5 > v4 );
  }
  return MiSimpleAging(a1, a2);
}
