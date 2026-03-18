/*
 * XREFs of ?IsEmptyDrawing@CPrimitiveGroup@@UEBA_NXZ @ 0x18004CA50
 * Callers:
 *     ?HasNonEmptyContent@CVisual@@UEAA_NXZ @ 0x180086200 (-HasNonEmptyContent@CVisual@@UEAA_NXZ.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180088C60 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180096CB0 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009BD50 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CPrimitiveGroup::IsEmptyDrawing(CPrimitiveGroup *this)
{
  return *((_QWORD *)this + 50) == 0LL;
}
