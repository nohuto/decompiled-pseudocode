/*
 * XREFs of ??0CImmersiveWindowIconic@@IEAA@XZ @ 0x180078424
 * Callers:
 *     ?Create@CImmersiveWindowIconic@@SAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_NPEAPEAV1@@Z @ 0x1800784F0 (-Create@CImmersiveWindowIconic@@SAJPEAVCWindowData@@HW4DEVICE_SCALE_FACTOR@@_NPEAPEAV1@@Z.c)
 * Callees:
 *     ??0CRenderDataVisual@@IEAA@XZ @ 0x180017CA4 (--0CRenderDataVisual@@IEAA@XZ.c)
 */

CImmersiveWindowIconic *__fastcall CImmersiveWindowIconic::CImmersiveWindowIconic(CImmersiveWindowIconic *this)
{
  __int64 v1; // rcx
  CImmersiveWindowIconic *result; // rax

  CRenderDataVisual::CRenderDataVisual(this);
  *(_DWORD *)(v1 + 316) = 100;
  *(_QWORD *)(v1 + 280) = 0LL;
  *(_QWORD *)(v1 + 288) = 0LL;
  *(_QWORD *)(v1 + 296) = 0LL;
  *(_BYTE *)(v1 + 320) = 0;
  result = (CImmersiveWindowIconic *)v1;
  *(_QWORD *)v1 = &CImmersiveWindowIconic::`vftable';
  return result;
}
