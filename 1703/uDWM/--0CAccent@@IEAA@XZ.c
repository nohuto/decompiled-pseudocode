/*
 * XREFs of ??0CAccent@@IEAA@XZ @ 0x18001CAE4
 * Callers:
 *     ?Create@CAccent@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z @ 0x180016970 (-Create@CAccent@@SAJPEAUIDwmChannel@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x18001F050 (--0CRenderDataVisual@@IEAA@XZ.c)
 */

CAccent *__fastcall CAccent::CAccent(CAccent *this)
{
  __int64 v1; // rcx
  CAccent *result; // rax

  CRenderDataVisual::CRenderDataVisual(this);
  *(_DWORD *)(v1 + 348) = 0xFFFFFF;
  *(_DWORD *)(v1 + 364) = 0;
  *(_QWORD *)(v1 + 392) = 0LL;
  *(_QWORD *)(v1 + 400) = 0LL;
  *(_QWORD *)(v1 + 320) = 0LL;
  *(_QWORD *)(v1 + 328) = 0LL;
  *(_QWORD *)(v1 + 352) = 0LL;
  *(_QWORD *)(v1 + 384) = 0LL;
  result = (CAccent *)v1;
  *(_QWORD *)v1 = &CAccent::`vftable';
  return result;
}
