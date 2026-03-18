/*
 * XREFs of ?VidMmTerminateCompanionContext@VIDMM_GLOBAL@@SAXPEAUVIDMM_COMPANION_CONTEXT@@@Z @ 0x1C00A5C14
 * Callers:
 *     VidMmTerminateCompanionContext @ 0x1C00235B0 (VidMmTerminateCompanionContext.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0002BF0 (--3@YAXPEAX@Z.c)
 */

void __fastcall VIDMM_GLOBAL::VidMmTerminateCompanionContext(struct VIDMM_COMPANION_CONTEXT *a1)
{
  operator delete(a1);
}
