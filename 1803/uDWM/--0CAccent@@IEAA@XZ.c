/*
 * XREFs of ??0CAccent@@IEAA@XZ @ 0x180010118
 * Callers:
 *     ?Create@CAccent@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x18000CF18 (-Create@CAccent@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x180017CA4 (--0CRenderDataVisual@@IEAA@XZ.c)
 */

CAccent *__fastcall CAccent::CAccent(CAccent *this)
{
  __int64 v1; // rcx
  CAccent *result; // rax

  CRenderDataVisual::CRenderDataVisual(this);
  *(_DWORD *)(v1 + 356) = 0xFFFFFF;
  *(_QWORD *)(v1 + 344) = 0LL;
  *(_DWORD *)(v1 + 372) = 0;
  *(_QWORD *)(v1 + 400) = 0LL;
  *(_QWORD *)(v1 + 408) = 0LL;
  *(_QWORD *)(v1 + 320) = 0LL;
  *(_QWORD *)(v1 + 328) = 0LL;
  *(_QWORD *)(v1 + 360) = 0LL;
  *(_QWORD *)(v1 + 392) = 0LL;
  result = (CAccent *)v1;
  *(_QWORD *)v1 = &CAccent::`vftable';
  return result;
}
