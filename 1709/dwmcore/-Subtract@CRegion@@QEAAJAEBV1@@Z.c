/*
 * XREFs of ?Subtract@CRegion@@QEAAJAEBV1@@Z @ 0x18011BDA4
 * Callers:
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18009711C (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CRegion::Subtract(
        const struct FastRegion::Internal::CRgnData **this,
        const struct FastRegion::Internal::CRgnData **a2)
{
  return FastRegion::CRegion::Subtract(this, a2);
}
