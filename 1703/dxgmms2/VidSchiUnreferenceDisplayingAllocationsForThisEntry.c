/*
 * XREFs of VidSchiUnreferenceDisplayingAllocationsForThisEntry @ 0x1C00132FC
 * Callers:
 *     VidSchiExecuteMmIoFlip @ 0x1C000C430 (VidSchiExecuteMmIoFlip.c)
 *     ?VidSchiProcessVsyncCompletedFlipEntry@@YAXPEAU_VIDSCH_VSYNC_COMPLETED_ENTRY_INFO@@PEA_KPEAIPEAKPEA_N_N@Z @ 0x1C0023240 (-VidSchiProcessVsyncCompletedFlipEntry@@YAXPEAU_VIDSCH_VSYNC_COMPLETED_ENTRY_INFO@@PEA_KPEAIPEAK.c)
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C0025C30 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     <none>
 */

void __fastcall VidSchiUnreferenceDisplayingAllocationsForThisEntry(struct _VIDSCH_GLOBAL *a1, __int64 a2, __int64 a3)
{
  unsigned __int16 v3; // r8
  unsigned __int16 *v4; // rax

  if ( (*(_DWORD *)(a3 + 1112) & 0x10) != 0 )
  {
    v4 = *(unsigned __int16 **)(a3 + 1152);
    a1 = (struct _VIDSCH_GLOBAL *)*v4;
    LOWORD(a1) = (unsigned __int8)*v4;
    v3 = *(_WORD *)(a2 + 18768) & ((unsigned __int16)a1 | *((unsigned __int8 *)v4 + 1));
  }
  else
  {
    v3 = *(_WORD *)(a2 + 18768);
  }
  VidSchiUnreferenceDisplayingAllocations(a1, (struct _VIDSCH_PRESENT_INFO *)a2, v3);
}
