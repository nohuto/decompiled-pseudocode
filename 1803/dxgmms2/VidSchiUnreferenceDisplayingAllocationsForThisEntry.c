/*
 * XREFs of VidSchiUnreferenceDisplayingAllocationsForThisEntry @ 0x1C001451C
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x1C000D930 (VidSchiExecuteMmIoFlip.c)
 *     ?VidSchiProcessVsyncCompletedFlipEntry@@YAXPEAU_VIDSCH_VSYNC_COMPLETED_ENTRY_INFO@@PEA_KPEAIPEAKPEA_N_N@Z @ 0x1C0028260 (-VidSchiProcessVsyncCompletedFlipEntry@@YAXPEAU_VIDSCH_VSYNC_COMPLETED_ENTRY_INFO@@PEA_KPEAIPEAK.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C002AB00 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x1C001454C (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z.c)
 */

void __fastcall VidSchiUnreferenceDisplayingAllocationsForThisEntry(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v3; // ax

  if ( (*(_DWORD *)(a3 + 1120) & 0x10) != 0 )
  {
    a1 = 1023LL;
    v3 = *(_WORD *)(a2 + 28000) & (**(_DWORD **)(a3 + 1160) | (**(_DWORD **)(a3 + 1160) >> 10)) & 0x3FF;
  }
  else
  {
    v3 = *(_WORD *)(a2 + 28000);
  }
  VidSchiUnreferenceDisplayingAllocations((struct _VIDSCH_GLOBAL *)a1, (struct _VIDSCH_PRESENT_INFO *)a2, v3);
}
