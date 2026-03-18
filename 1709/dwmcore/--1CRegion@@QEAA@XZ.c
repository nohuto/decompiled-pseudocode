/*
 * XREFs of ??1CRegion@@QEAA@XZ @ 0x180089058
 * Callers:
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18009711C (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z @ 0x18009D64C (-AddDirtyRegion@CGdiSpriteBitmap@@IEAAJAEAVCRegion@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CRegion::~CRegion(CRegion *this)
{
  FastRegion::CRegion::FreeMemory(this);
}
