/*
 * XREFs of ??_ECVisualTree@@UEAAPEAXI@Z @ 0x1800B6EC0
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z @ 0x1800861B8 (-SetVisualTreeNoRef@CVisual@@QEAAXPEAVCVisualTree@@@Z.c)
 *     ??1CPreComputeContext@@QEAA@XZ @ 0x1800953FC (--1CPreComputeContext@@QEAA@XZ.c)
 *     ?ReleaseTreeDatas@CVisualTree@@AEAAXXZ @ 0x1800B6C30 (-ReleaseTreeDatas@CVisualTree@@AEAAXXZ.c)
 */

CVisualTree *__fastcall CVisualTree::`vector deleting destructor'(CVisualTree *this, char a2)
{
  CVisual *v4; // rcx
  unsigned int v5; // edx

  *(_QWORD *)this = &CVisualTree::`vftable';
  CVisualTree::ReleaseTreeDatas(this);
  v4 = (CVisual *)*((_QWORD *)this + 3);
  if ( v4 )
  {
    CVisual::SetVisualTreeNoRef(v4, 0LL);
    ReleaseInterfaceNoNULL<CD2DPencil>(*((_QWORD *)this + 3));
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 104);
  CPreComputeContext::~CPreComputeContext((CVisualTree *)((char *)this + 64), v5);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
