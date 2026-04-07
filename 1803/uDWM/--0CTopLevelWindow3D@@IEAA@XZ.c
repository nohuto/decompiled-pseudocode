/*
 * XREFs of ??0CTopLevelWindow3D@@IEAA@XZ @ 0x1800235B8
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18002CD54 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x180017CA4 (--0CRenderDataVisual@@IEAA@XZ.c)
 */

CTopLevelWindow3D *__fastcall CTopLevelWindow3D::CTopLevelWindow3D(CTopLevelWindow3D *this)
{
  __int64 v1; // rcx
  CTopLevelWindow3D *result; // rax

  CRenderDataVisual::CRenderDataVisual(this);
  *(_QWORD *)v1 = &CTopLevelWindow3D::`vftable'{for `CRenderDataVisual'};
  *(_QWORD *)(v1 + 280) = &CTopLevelWindow3D::`vftable'{for `ISecondaryWindowRepresentationChangedListener'};
  *(_BYTE *)(v1 + 290) = 0;
  *(_QWORD *)(v1 + 456) = 0LL;
  *(_QWORD *)(v1 + 464) = 0LL;
  *(_QWORD *)(v1 + 472) = 0LL;
  result = (CTopLevelWindow3D *)v1;
  *(_BYTE *)(v1 + 480) = 0;
  *(_QWORD *)(v1 + 328) = 0LL;
  *(_QWORD *)(v1 + 336) = 0LL;
  *(_QWORD *)(v1 + 360) = 0LL;
  *(_QWORD *)(v1 + 344) = 0LL;
  return result;
}
