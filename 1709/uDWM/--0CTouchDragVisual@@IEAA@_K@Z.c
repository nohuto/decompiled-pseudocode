/*
 * XREFs of ??0CTouchDragVisual@@IEAA@_K@Z @ 0x180086C4C
 * Callers:
 *     ??$CreateTouchVisual@VCTouchDragVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTouchDragVisual@@@Z @ 0x1800800B4 (--$CreateTouchVisual@VCTouchDragVisual@@@@YAJPEAUIDwmChannel@@_KPEAPEAVCTouchDragVisual@@@Z.c)
 * Callees:
 *     ??0CTouchVisual@@IEAA@_K@Z @ 0x180039F44 (--0CTouchVisual@@IEAA@_K@Z.c)
 */

CTouchDragVisual *__fastcall CTouchDragVisual::CTouchDragVisual(CTouchDragVisual *this)
{
  __int64 v1; // rcx

  CTouchVisual::CTouchVisual(this);
  *(_DWORD *)(v1 + 296) = 200;
  *(_DWORD *)(v1 + 300) = 1088421888;
  *(_QWORD *)v1 = &CTouchDragVisual::`vftable';
  *(_DWORD *)(v1 + 304) = 939239554;
  *(_DWORD *)(v1 + 308) = 1500;
  *(_DWORD *)(v1 + 312) = 1058642330;
  *(_QWORD *)(v1 + 320) = 0LL;
  *(_QWORD *)(v1 + 328) = 0LL;
  *(_QWORD *)(v1 + 336) = 0LL;
  *(_DWORD *)(v1 + 344) = 0;
  *(_QWORD *)(v1 + 352) = 0LL;
  *(_QWORD *)(v1 + 360) = 0LL;
  *(_QWORD *)(v1 + 368) = 0LL;
  *(_DWORD *)(v1 + 376) = 0;
  *(_DWORD *)(v1 + 456) = -1;
  *(_QWORD *)(v1 + 384) = 0LL;
  *(_QWORD *)(v1 + 424) = 0LL;
  *(_QWORD *)(v1 + 432) = 0LL;
  *(_WORD *)(v1 + 440) = 0;
  *(_DWORD *)(v1 + 444) = 0;
  *(_QWORD *)(v1 + 448) = 0LL;
  return (CTouchDragVisual *)v1;
}
