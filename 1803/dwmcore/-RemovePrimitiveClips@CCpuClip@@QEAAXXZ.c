/*
 * XREFs of ?RemovePrimitiveClips@CCpuClip@@QEAAXXZ @ 0x18013F5A4
 * Callers:
 *     ?GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2_F@@PEAVCDrawListCache@@@Z @ 0x180071D00 (-GenerateDrawList@CPrimitiveGroupDrawListGenerator@@QEAAJPEAVCDrawingContext@@PEBUD2D_MATRIX_3X2.c)
 * Callees:
 *     ?Release@CShapePtr@@QEAAXXZ @ 0x180028194 (-Release@CShapePtr@@QEAAXXZ.c)
 */

void __fastcall CCpuClip::RemovePrimitiveClips(CRectanglesShape **this)
{
  if ( *((_BYTE *)this + 32) )
  {
    CShapePtr::Release(this + 2);
    *((_BYTE *)this + 32) = 0;
  }
}
