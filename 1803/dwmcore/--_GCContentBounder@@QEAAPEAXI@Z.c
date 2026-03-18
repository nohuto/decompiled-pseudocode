/*
 * XREFs of ??_GCContentBounder@@QEAAPEAXI@Z @ 0x180070288
 * Callers:
 *     ??1CDrawingContext@@EEAA@XZ @ 0x18006E594 (--1CDrawingContext@@EEAA@XZ.c)
 *     ??1CPreComputeContext@@QEAA@XZ @ 0x1800A29B8 (--1CPreComputeContext@@QEAA@XZ.c)
 *     ??1COcclusionContext@@QEAA@XZ @ 0x1800A8CF0 (--1COcclusionContext@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007312C (--3@YAXPEAX@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
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
  operator delete(this);
  return this;
}
