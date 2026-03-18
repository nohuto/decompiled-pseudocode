/*
 * XREFs of ?Release@CRenderDataDrawFrame@@QEAAKXZ @ 0x180160140
 * Callers:
 *     ?Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z @ 0x180083B90 (-Draw@CRenderData@@QEAAJPEAUIDrawingContext@@@Z.c)
 *     ??$ReleaseInterface@VCRenderDataDrawFrame@@@@YAXAEAPEAVCRenderDataDrawFrame@@@Z @ 0x180160000 (--$ReleaseInterface@VCRenderDataDrawFrame@@@@YAXAEAPEAVCRenderDataDrawFrame@@@Z.c)
 *     ?Release@CRenderDataDrawFrame@@QEAAKXZ @ 0x180160140 (-Release@CRenderDataDrawFrame@@QEAAKXZ.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?Release@CRenderDataDrawFrame@@QEAAKXZ @ 0x180160140 (-Release@CRenderDataDrawFrame@@QEAAKXZ.c)
 */

__int64 __fastcall CRenderDataDrawFrame::Release(CRenderDataDrawFrame *this)
{
  unsigned __int32 v2; // edi
  CMILCOMBase *v3; // rcx
  __int64 v4; // rcx
  CRenderDataDrawFrame *v5; // rcx

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 10);
  if ( !v2 && this )
  {
    v3 = *(CMILCOMBase **)this;
    if ( v3 )
      CMILCOMBase::InternalRelease(v3);
    v4 = *((_QWORD *)this + 1);
    if ( v4 )
      CMILCOMBase::InternalRelease((CMILCOMBase *)(v4 + 16));
    v5 = (CRenderDataDrawFrame *)*((_QWORD *)this + 4);
    if ( v5 )
      CRenderDataDrawFrame::Release(v5);
    WPF::ProcessHeapImpl::Free(this);
  }
  return v2;
}
