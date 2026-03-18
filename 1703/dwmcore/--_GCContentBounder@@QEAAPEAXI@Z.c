/*
 * XREFs of ??_GCContentBounder@@QEAAPEAXI@Z @ 0x1800B4DE0
 * Callers:
 *     ??1CPreComputeContext@@QEAA@XZ @ 0x1800953FC (--1CPreComputeContext@@QEAA@XZ.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x18009F534 (--1COcclusionContext@@QEAA@XZ.c)
 *     ?Uninitialize@CDrawingContext@@IEAAXXZ @ 0x1800A9948 (-Uninitialize@CDrawingContext@@IEAAXXZ.c)
 *     ?Initialize@CDrawingContext@@MEAAJXZ @ 0x1800A99D0 (-Initialize@CDrawingContext@@MEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
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
