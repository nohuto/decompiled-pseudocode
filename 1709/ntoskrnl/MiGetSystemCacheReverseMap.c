/*
 * XREFs of MiGetSystemCacheReverseMap @ 0x1400A3490
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x14002B250 (MiTrimSharedPageFromViews.c)
 *     MiSystemFault @ 0x140032BA0 (MiSystemFault.c)
 *     MmUnmapViewInSystemCache @ 0x140053130 (MmUnmapViewInSystemCache.c)
 *     MiWalkPageTablesRecursively @ 0x14009D030 (MiWalkPageTablesRecursively.c)
 *     MmMapViewInSystemCache @ 0x1400A2D00 (MmMapViewInSystemCache.c)
 *     MiGetMultiplexedVm @ 0x1400A344C (MiGetMultiplexedVm.c)
 *     MiReleaseSystemCacheView @ 0x1400A4150 (MiReleaseSystemCacheView.c)
 *     MiRecheckVaWorkingSet @ 0x1400A4950 (MiRecheckVaWorkingSet.c)
 *     MmFreeSystemCacheReserveView @ 0x1406E242C (MmFreeSystemCacheReserveView.c)
 * Callees:
 *     MiReadPteShadow @ 0x14017C1AC (MiReadPteShadow.c)
 *     MI_GET_PFN_FROM_PTE @ 0x14022A1F8 (MI_GET_PFN_FROM_PTE.c)
 */

__int64 __fastcall MiGetSystemCacheReverseMap(unsigned __int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rcx
  __int64 PteShadow; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // r10
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = (__int64 *)(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  PteShadow = *v4;
  v6 = 0xFFFFF6FB7DBED000uLL;
  if ( (unsigned __int64)v4 >= 0xFFFFF6FB7DBED000uLL )
  {
    v6 = 0xFFFFF6FB7DBED7F8uLL;
    if ( (unsigned __int64)v4 <= 0xFFFFF6FB7DBED7F8uLL )
      PteShadow = MiReadPteShadow(v4, *v4);
  }
  v10 = PteShadow;
  v7 = MI_GET_PFN_FROM_PTE(&v10, v6, a3, a4);
  return *(_QWORD *)(v7 + 16) + 48 * ((v8 >> 18) & 7);
}
