/*
 * XREFs of ?BreakLinksForCycles@CTransformGroup@@MEAAXXZ @ 0x180182F70
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ?GetRealizationWorker@CTransform3DGroup@@IEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1800B43F0 (-GetRealizationWorker@CTransform3DGroup@@IEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 */

void __fastcall CTransformGroup::BreakLinksForCycles(CTransformGroup *this)
{
  struct CMILMatrix *v2; // rax

  v2 = (struct CMILMatrix *)operator new(0x44uLL);
  if ( v2 )
    *((_DWORD *)v2 + 16) = 0;
  *((_QWORD *)this + 5) = v2;
  if ( v2 )
    CTransform3DGroup::GetRealizationWorker((CTransformGroup *)((char *)this - 152), 0LL, v2);
  CCyclicResourceListEntry::BreakLinksForCycles(this);
}
