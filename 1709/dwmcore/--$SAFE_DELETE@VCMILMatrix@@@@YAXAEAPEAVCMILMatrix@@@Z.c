/*
 * XREFs of ??$SAFE_DELETE@VCMILMatrix@@@@YAXAEAPEAVCMILMatrix@@@Z @ 0x1800B4ED8
 * Callers:
 *     ??1CTreeData@@UEAA@XZ @ 0x1800A0350 (--1CTreeData@@UEAA@XZ.c)
 *     ?Clear@CTreeData@@MEAAXXZ @ 0x1800A0430 (-Clear@CTreeData@@MEAAXXZ.c)
 *     ??1CTransformGroup@@MEAA@XZ @ 0x1800B46D4 (--1CTransformGroup@@MEAA@XZ.c)
 *     ??1CTransform3DGroup@@MEAA@XZ @ 0x180182EAC (--1CTransform3DGroup@@MEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall SAFE_DELETE<CMILMatrix>(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    WPF::ProcessHeapImpl::Free(v2);
    *a1 = 0LL;
  }
}
