/*
 * XREFs of VidSchiUnreferenceDisplayingAllocationsForThisEntry @ 0x1C00151C0
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x1C00029E0 (VidSchiExecuteMmIoFlip.c)
 *     ?VidSchiProcessVsyncCompletedFlipEntry@@YAXPEAU_VIDSCH_VSYNC_COMPLETED_ENTRY_INFO@@PEA_KPEAIPEAKPEA_N_N@Z @ 0x1C0025718 (-VidSchiProcessVsyncCompletedFlipEntry@@YAXPEAU_VIDSCH_VSYNC_COMPLETED_ENTRY_INFO@@PEA_KPEAIPEAK.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C0027CD0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x1C0015888 (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z.c)
 */

void __fastcall VidSchiUnreferenceDisplayingAllocationsForThisEntry(__int64 a1, __int64 a2, __int64 a3)
{
  struct _VIDSCH_GLOBAL *v3; // rcx
  _DWORD *v4; // rax

  if ( (*(_DWORD *)(a3 + 1120) & 0x10) != 0 )
  {
    v4 = *(_DWORD **)(a3 + 1160);
    v3 = (struct _VIDSCH_GLOBAL *)(*v4 >> 10);
    LOWORD(v3) = *(_WORD *)(a2 + 23520) & (*(_WORD *)v4 | (unsigned __int16)v3) & 0x3FF;
  }
  else
  {
    v3 = (struct _VIDSCH_GLOBAL *)*(unsigned __int16 *)(a2 + 23520);
  }
  VidSchiUnreferenceDisplayingAllocations(v3, (struct _VIDSCH_PRESENT_INFO *)a2, (unsigned __int16)v3);
}
