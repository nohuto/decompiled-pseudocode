/*
 * XREFs of ??$SAFE_DELETE@VCMILMatrix@@@@YAXAEAPEAVCMILMatrix@@@Z @ 0x18002A324
 * Callers:
 *     ??1CTransformGroup@@MEAA@XZ @ 0x180019630 (--1CTransformGroup@@MEAA@XZ.c)
 *     ??1CTreeData@@UEAA@XZ @ 0x180029E10 (--1CTreeData@@UEAA@XZ.c)
 *     ?Clear@CTreeData@@MEAAXXZ @ 0x180029EF0 (-Clear@CTreeData@@MEAAXXZ.c)
 *     ??1CTransform3DGroup@@MEAA@XZ @ 0x1801B6D1C (--1CTransform3DGroup@@MEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800DB3E0 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall SAFE_DELETE<CMILMatrix>(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    operator delete(v2, 0x44uLL);
    *a1 = 0LL;
  }
}
