/*
 * XREFs of ?VidMmPageInDevice@@YAJPEAVVIDMM_GLOBAL@@PEAVVIDMM_DEVICE@@@Z @ 0x1C0020830
 * Callers:
 *     <none>
 * Callees:
 *     ?PageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z @ 0x1C009C2B8 (-PageInDevice@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@@Z.c)
 */

__int64 __fastcall VidMmPageInDevice(struct VIDMM_GLOBAL *a1, struct VIDMM_DEVICE *a2)
{
  return VIDMM_GLOBAL::PageInDevice(a1, a2);
}
