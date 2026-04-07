/*
 * XREFs of ??0CAtlasedRectsVisual@@IEAA@XZ @ 0x1800247F0
 * Callers:
 *     ?Create@CTopLevelAtlasedRectsVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18000F8E0 (-Create@CTopLevelAtlasedRectsVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ??0CButton@@IEAA@XZ @ 0x180017760 (--0CButton@@IEAA@XZ.c)
 *     ?Create@CAtlasedRectsVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180037200 (-Create@CAtlasedRectsVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 *     ?Create@CAnimatedGlassSheet@@SAJPEAUIDwmChannel@@PEAPEAV1@_N@Z @ 0x180086F94 (-Create@CAnimatedGlassSheet@@SAJPEAUIDwmChannel@@PEAPEAV1@_N@Z.c)
 * Callees:
 *     ??0CVisual@@IEAA@XZ @ 0x180025DA4 (--0CVisual@@IEAA@XZ.c)
 */

CAtlasedRectsVisual *__fastcall CAtlasedRectsVisual::CAtlasedRectsVisual(CAtlasedRectsVisual *this)
{
  __int64 v1; // rcx

  CVisual::CVisual(this);
  *(_QWORD *)v1 = &CAtlasedRectsVisual::`vftable';
  *(_QWORD *)(v1 + 240) = 0LL;
  *(_QWORD *)(v1 + 248) = 0LL;
  *(_QWORD *)(v1 + 256) = 0LL;
  *(_DWORD *)(v1 + 264) = 0;
  *(_QWORD *)(v1 + 272) = 0LL;
  return (CAtlasedRectsVisual *)v1;
}
