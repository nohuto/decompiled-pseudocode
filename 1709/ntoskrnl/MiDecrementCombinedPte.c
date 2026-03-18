/*
 * XREFs of MiDecrementCombinedPte @ 0x1400E5700
 * Callers:
 *     MiDeleteValidSystemPage @ 0x14004D040 (MiDeleteValidSystemPage.c)
 *     MiDeletePteList @ 0x14004D590 (MiDeletePteList.c)
 *     MiDeletePteRun @ 0x14004E1C0 (MiDeletePteRun.c)
 *     MiDecommitPages @ 0x140053C40 (MiDecommitPages.c)
 *     MiDeleteVirtualAddresses @ 0x140054A70 (MiDeleteVirtualAddresses.c)
 *     MiDeleteSystemPagableVm @ 0x140056870 (MiDeleteSystemPagableVm.c)
 *     MiCopyOnWriteEx @ 0x140059760 (MiCopyOnWriteEx.c)
 *     MiDereferenceCombineBlock @ 0x1400E620C (MiDereferenceCombineBlock.c)
 *     MiProcessCrcList @ 0x14053FBA0 (MiProcessCrcList.c)
 *     MiDereferenceCombineCrc @ 0x1406ED1A8 (MiDereferenceCombineCrc.c)
 * Callees:
 *     MiDeleteMergedPte @ 0x1400E4F14 (MiDeleteMergedPte.c)
 *     MiFreeCombineBlock @ 0x1400E55B0 (MiFreeCombineBlock.c)
 *     MiLogCombinedPteDelete @ 0x1402319EC (MiLogCombinedPteDelete.c)
 *     MiReturnCrossPartitionCombineCharges @ 0x140231B2C (MiReturnCrossPartitionCombineCharges.c)
 */

__int64 __fastcall MiDecrementCombinedPte(__int64 a1, __int64 a2)
{
  __int64 v3; // r8
  struct _KEVENT *v4; // rsi
  unsigned int v5; // edi

  v3 = *(_QWORD *)(((a2 - 48) & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  v4 = *(struct _KEVENT **)v3;
  _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 384), 0xFFFFFFFF);
  v5 = 0;
  if ( a1
    && *(struct _KEVENT **)(qword_140388AF0 + 8LL * *(unsigned __int16 *)(a1 + 172)) != v4
    && !_InterlockedDecrement64((volatile signed __int64 *)(a2 + 8)) )
  {
    MiReturnCrossPartitionCombineCharges(v4, 1LL);
  }
  if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(a2 - 16), 0xFFFFFFFFFFFFFFFFuLL) != 1 )
    return 2LL;
  if ( *(_QWORD *)(a2 - 24) )
  {
    v5 = MiDeleteMergedPte(v4, (__int64 *)a2);
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      MiLogCombinedPteDelete(a2);
  }
  MiFreeCombineBlock(a2 - 48);
  return v5;
}
