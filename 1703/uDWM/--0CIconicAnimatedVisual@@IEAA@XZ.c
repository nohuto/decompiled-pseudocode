/*
 * XREFs of ??0CIconicAnimatedVisual@@IEAA@XZ @ 0x18009FEB4
 * Callers:
 *     ?Create@CIconicAnimatedVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180091EA0 (-Create@CIconicAnimatedVisual@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x18001F050 (--0CRenderDataVisual@@IEAA@XZ.c)
 */

CIconicAnimatedVisual *__fastcall CIconicAnimatedVisual::CIconicAnimatedVisual(CIconicAnimatedVisual *this)
{
  __int64 v1; // rcx

  CRenderDataVisual::CRenderDataVisual(this);
  *(_QWORD *)v1 = &CIconicAnimatedVisual::`vftable'{for `CRenderDataVisual'};
  *(_QWORD *)(v1 + 280) = &CIconicAnimatedVisual::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  *(_QWORD *)(v1 + 288) = 0LL;
  *(_QWORD *)(v1 + 296) = 0LL;
  *(_QWORD *)(v1 + 304) = 0LL;
  *(_QWORD *)(v1 + 312) = 0LL;
  *(_QWORD *)(v1 + 320) = 0LL;
  *(_QWORD *)(v1 + 328) = 0LL;
  *(_QWORD *)(v1 + 336) = 0LL;
  *(_QWORD *)(v1 + 344) = 0LL;
  *(_DWORD *)(v1 + 384) = 0;
  return (CIconicAnimatedVisual *)v1;
}
