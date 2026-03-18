/*
 * XREFs of ?BreakLinksForCycles@CTransform3DGroup@@MEAAXXZ @ 0x1801B6DA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRealizationWorker@CTransform3DGroup@@IEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x1800196B0 (-GetRealizationWorker@CTransform3DGroup@@IEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 */

void __fastcall CTransform3DGroup::BreakLinksForCycles(CTransform3DGroup *this)
{
  struct CMILMatrix *v2; // rax

  v2 = (struct CMILMatrix *)operator new(0x44uLL);
  if ( v2 )
    *((_DWORD *)v2 + 16) = 0;
  *((_QWORD *)this + 5) = v2;
  if ( v2 )
    CTransform3DGroup::GetRealizationWorker((CTransform3DGroup *)((char *)this - 152), 0LL, v2);
  CCyclicResourceListEntry::BreakLinksForCycles(this);
}
