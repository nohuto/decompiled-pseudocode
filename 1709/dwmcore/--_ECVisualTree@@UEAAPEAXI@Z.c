/*
 * XREFs of ??_ECVisualTree@@UEAAPEAXI@Z @ 0x180031910
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?ReleaseTreeDatas@CVisualTree@@AEAAXXZ @ 0x180030C20 (-ReleaseTreeDatas@CVisualTree@@AEAAXXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z @ 0x18004EE6C (-SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z.c)
 *     ??1CPreComputeContext@@QEAA@XZ @ 0x180055014 (--1CPreComputeContext@@QEAA@XZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

CVisualTree *__fastcall CVisualTree::`vector deleting destructor'(CVisual **this, char a2)
{
  CVisual *v4; // rcx

  *this = (CVisual *)&CVisualTree::`vftable';
  CVisualTree::ReleaseTreeDatas((CVisualTree *)this);
  v4 = this[3];
  if ( v4 )
  {
    CVisual::SetVisualTreeNoRef(v4, 0LL);
    ReleaseInterfaceNoNULL<CManipulationManager>((__int64)this[3]);
  }
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 135);
  CPreComputeContext::~CPreComputeContext((CPreComputeContext *)(this + 8));
  *this = (CVisual *)&CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return (CVisualTree *)this;
}
