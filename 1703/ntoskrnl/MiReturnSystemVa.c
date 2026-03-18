/*
 * XREFs of MiReturnSystemVa @ 0x1400822DC
 * Callers:
 *     MiReturnSystemPtes @ 0x1400821DC (MiReturnSystemPtes.c)
 *     MiReleaseSystemCacheView @ 0x1400A8EF8 (MiReleaseSystemCacheView.c)
 *     MiFreePagedPoolPages @ 0x1400CCF60 (MiFreePagedPoolPages.c)
 *     MiReturnNonPagedPoolVa @ 0x1401260D0 (MiReturnNonPagedPoolVa.c)
 *     MiExpandPagedPool @ 0x140126B48 (MiExpandPagedPool.c)
 *     MiExpandSystemCache @ 0x140126CDC (MiExpandSystemCache.c)
 *     MiExpandNonPagedPool @ 0x140126E74 (MiExpandNonPagedPool.c)
 *     MiExpandPtes @ 0x14012793C (MiExpandPtes.c)
 *     MiReleaseLargePteMappings @ 0x14013D2CC (MiReleaseLargePteMappings.c)
 *     MiMapWithLargePages @ 0x14014734C (MiMapWithLargePages.c)
 *     MiGetLargePageWorkMapping @ 0x140158B08 (MiGetLargePageWorkMapping.c)
 *     MiDeleteZeroThreadContext @ 0x14015C1E0 (MiDeleteZeroThreadContext.c)
 *     MiDeleteBootRange @ 0x14015D2A0 (MiDeleteBootRange.c)
 *     MiExpandSpecialPool @ 0x140216C28 (MiExpandSpecialPool.c)
 *     MiRemoveSpecialPoolRange @ 0x140216E10 (MiRemoveSpecialPoolRange.c)
 *     MiUnmapLargePages @ 0x140221B04 (MiUnmapLargePages.c)
 *     MiScrubNodeLargePageList @ 0x140224CA4 (MiScrubNodeLargePageList.c)
 *     MiReserveDriverPtes @ 0x14055D0C4 (MiReserveDriverPtes.c)
 *     MiReleaseDriverPtes @ 0x140583170 (MiReleaseDriverPtes.c)
 *     MiMapBBTMemory @ 0x14080308C (MiMapBBTMemory.c)
 *     MiFreeBootDriverPage @ 0x140816020 (MiFreeBootDriverPage.c)
 * Callees:
 *     MiFreeUnmappedPageTables @ 0x1400824C8 (MiFreeUnmappedPageTables.c)
 *     MiMakeSystemRangeAvailable @ 0x1400825B4 (MiMakeSystemRangeAvailable.c)
 *     MiDeleteSystemPageTables @ 0x14008283C (MiDeleteSystemPageTables.c)
 *     MiReturnSystemCharges @ 0x140082C30 (MiReturnSystemCharges.c)
 *     MiGetAnyMultiplexedVm @ 0x1400B1BCC (MiGetAnyMultiplexedVm.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     memset @ 0x140192D80 (memset.c)
 */

__int64 __fastcall MiReturnSystemVa(unsigned __int64 a1, unsigned __int64 a2, int a3, __int64 a4)
{
  unsigned __int64 v7; // rbp
  __int64 result; // rax
  unsigned __int64 v9; // r14
  __int64 v10; // r15
  ULONG_PTR v11; // r13
  ULONG_PTR v12; // r12
  __int64 v13; // rbp
  __int64 v14; // r14
  __int64 v15; // rdx
  unsigned __int64 AnyMultiplexedVm; // rbx
  unsigned int v17; // esi
  __int64 v18; // rcx
  __int64 v19; // rbp
  ULONG_PTR *v20; // rbx
  _QWORD v21[4]; // [rsp+30h] [rbp-48h] BYREF

  memset(v21, 0, sizeof(v21));
  v7 = (((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x97FFFFFF001LL) & 0xFFFFFFFFFFFFF000uLL;
  result = 0xFFFFF68000000000uLL;
  v9 = (((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) & 0xFFFFFFFFFFFFF000uLL;
  if ( v7 >= v9 )
    return result;
  v10 = 0LL;
  v11 = (__int64)(v7 << 25) >> 16;
  v12 = ((__int64)(v9 << 25) >> 16) - v11;
  v13 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v14 = (v9 >> 9) & 0x7FFFFFFFF8LL;
  v15 = a4;
  AnyMultiplexedVm = 0LL;
  v17 = 1;
  if ( a4 )
  {
    if ( a3 == 1 )
    {
      AnyMultiplexedVm = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 3008;
      goto LABEL_10;
    }
    if ( a3 > 5 )
    {
      if ( a3 <= 7 )
      {
        v18 = 2LL;
        goto LABEL_9;
      }
      if ( a3 == 8 )
      {
        v18 = 0LL;
        goto LABEL_9;
      }
      if ( a3 == 12 )
      {
        v18 = 1LL;
LABEL_9:
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(v18);
      }
    }
LABEL_10:
    v10 = MiDeleteSystemPageTables(AnyMultiplexedVm, v15, v13, v14, v15);
  }
  MiMakeSystemRangeAvailable(v11, v12);
  result = MiFreeUnmappedPageTables(v10, v21, 0LL);
  v19 = v21[3];
  if ( v21[3] && qword_140381A68 )
  {
    if ( AnyMultiplexedVm )
      v20 = *(ULONG_PTR **)(qword_14036C8F8 + 8LL * *(unsigned __int16 *)(AnyMultiplexedVm + 172));
    else
      v20 = &MiSystemPartition;
    MiReturnCommit(v20, v21[3] - v21[1]);
    if ( a3 != 1 )
      v17 = a3;
    return MiReturnSystemCharges(v20, v19, v17);
  }
  return result;
}
