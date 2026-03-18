/*
 * XREFs of MiDecrementCombinedPte @ 0x140078BE8
 * Callers:
 *     MiDereferenceCombineBlock @ 0x140078BAC (MiDereferenceCombineBlock.c)
 *     MiDeletePteList @ 0x1400C5000 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x1400C5B70 (MiDeletePteRun.c)
 *     MiDeleteValidSystemPage @ 0x1400C90C0 (MiDeleteValidSystemPage.c)
 *     MiDeleteSystemPagableVm @ 0x1400C9480 (MiDeleteSystemPagableVm.c)
 *     MiDecommitPages @ 0x1400D2D20 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x1400D3840 (MiDeleteVirtualAddresses.c)
 *     MiCopyOnWriteEx @ 0x1400FB340 (MiCopyOnWriteEx.c)
 *     MiProcessCrcList @ 0x1404C89E0 (MiProcessCrcList.c)
 *     MiDereferenceCombineCrc @ 0x1406BF700 (MiDereferenceCombineCrc.c)
 * Callees:
 *     MiFreeCombineBlock @ 0x140079210 (MiFreeCombineBlock.c)
 *     MiDeleteMergedPte @ 0x140079374 (MiDeleteMergedPte.c)
 *     MiLogCombinedPteDelete @ 0x140223CE4 (MiLogCombinedPteDelete.c)
 */

__int64 __fastcall MiDecrementCombinedPte(__int64 a1)
{
  __int64 v2; // rcx
  unsigned int v4; // edi

  v2 = *(_QWORD *)(((a1 - 48) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 384), 0xFFFFFFFF);
  if ( _InterlockedDecrement64((volatile signed __int64 *)(a1 - 16)) )
    return 2LL;
  v4 = 0;
  if ( *(_QWORD *)(a1 - 24) )
  {
    v4 = MiDeleteMergedPte(*(_QWORD *)v2);
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      MiLogCombinedPteDelete(a1);
  }
  MiFreeCombineBlock(a1 - 48);
  return v4;
}
