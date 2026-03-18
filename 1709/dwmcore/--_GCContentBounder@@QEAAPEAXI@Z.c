/*
 * XREFs of ??_GCContentBounder@@QEAAPEAXI@Z @ 0x180045C5C
 * Callers:
 *     ?Uninitialize@CDrawingContext@@IEAAXXZ @ 0x18004083C (-Uninitialize@CDrawingContext@@IEAAXXZ.c)
 *     ?Initialize@CDrawingContext@@MEAAJXZ @ 0x1800408C0 (-Initialize@CDrawingContext@@MEAAJXZ.c)
 *     ??1CPreComputeContext@@QEAA@XZ @ 0x180055014 (--1CPreComputeContext@@QEAA@XZ.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x18006129C (--1COcclusionContext@@QEAA@XZ.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180090224 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 */

CContentBounder *__fastcall CContentBounder::`scalar deleting destructor'(CContentBounder *this)
{
  __int64 v2; // rcx
  CMILCOMBase *v3; // rcx

  v2 = *((_QWORD *)this + 1);
  if ( v2 )
    CMILCOMBase::InternalRelease((CMILCOMBase *)(v2 + 16));
  v3 = (CMILCOMBase *)*((_QWORD *)this + 2);
  if ( v3 )
    CMILCOMBase::InternalRelease(v3);
  WPF::ProcessHeapImpl::Free(this);
  return this;
}
