/*
 * XREFs of ??0CRegion@@QEAA@XZ @ 0x18011BD84
 * Callers:
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18009711C (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     <none>
 */

CRegion *__fastcall CRegion::CRegion(CRegion *this)
{
  *(_QWORD *)this = (char *)this + 8;
  *((_DWORD *)this + 2) = 0;
  return this;
}
