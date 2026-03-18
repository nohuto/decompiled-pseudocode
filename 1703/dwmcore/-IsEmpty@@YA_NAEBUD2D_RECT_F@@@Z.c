/*
 * XREFs of ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x18015C31C
 * Callers:
 *     ?CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z @ 0x18003CCC0 (-CreateRectangleMesh@Mesh@@QEAAJAEBUContentInfo@1@AEBUD2D_RECT_F@@K@Z.c)
 *     ?GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180171530 (-GetBrushParameters@CDropShadow@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?SetOcclusionRect@CDropShadow@@QEAAXAEBUD2D_RECT_F@@@Z @ 0x180171F88 (-SetOcclusionRect@CDropShadow@@QEAAXAEBUD2D_RECT_F@@@Z.c)
 *     ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEAAJP6AJPEAVCDrawListBrush@@PEAX@Z1@Z @ 0x1801BA440 (-EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEAAJP6AJPEAVCDrawListBrush@@PEAX@Z1@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsEmpty(const struct D2D_RECT_F *a1)
{
  return a1->right <= a1->left || a1->bottom <= a1->top;
}
