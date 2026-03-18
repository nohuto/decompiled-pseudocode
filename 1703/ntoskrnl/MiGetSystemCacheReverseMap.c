/*
 * XREFs of MiGetSystemCacheReverseMap @ 0x1400A02B0
 * Callers:
 *     MiMakeSystemCacheRangeValid @ 0x14009BBD0 (MiMakeSystemCacheRangeValid.c)
 *     MmCopyToCachedPage @ 0x14009F980 (MmCopyToCachedPage.c)
 *     MmUnmapViewInSystemCache @ 0x1400A83B0 (MmUnmapViewInSystemCache.c)
 *     MiReleaseSystemCacheView @ 0x1400A8EF8 (MiReleaseSystemCacheView.c)
 *     MmMapViewInSystemCache @ 0x1400A9520 (MmMapViewInSystemCache.c)
 *     MiSystemFault @ 0x1400B04A0 (MiSystemFault.c)
 *     MiRecheckVaWorkingSet @ 0x1400B1B38 (MiRecheckVaWorkingSet.c)
 *     MiWalkPageTablesRecursively @ 0x1400D4D00 (MiWalkPageTablesRecursively.c)
 *     MiTrimSharedPageFromViews @ 0x1400FF670 (MiTrimSharedPageFromViews.c)
 *     MiSystemCacheVaControlArea @ 0x140102068 (MiSystemCacheVaControlArea.c)
 * Callees:
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x14021EDEC (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14021EE68 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiGetSystemCacheReverseMap(unsigned __int64 a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // r9
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = MI_READ_PTE_LOCK_FREE(((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  v1 = MI_GET_PAGE_FRAME_FROM_PTE(&v4);
  return *(_QWORD *)(48 * v1 - 0x57FFFFFFFF0LL) + 48 * ((v2 >> 18) & 7);
}
