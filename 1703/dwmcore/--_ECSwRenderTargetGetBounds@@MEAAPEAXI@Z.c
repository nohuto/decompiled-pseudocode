/*
 * XREFs of ??_ECSwRenderTargetGetBounds@@MEAAPEAXI@Z @ 0x18003DBA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CSwRenderTargetGetBounds *__fastcall CSwRenderTargetGetBounds::`vector deleting destructor'(
        CSwRenderTargetGetBounds *this,
        char a2)
{
  *((_QWORD *)this + 2) = &CSwRenderTargetGetBounds::`vftable'{for `IRenderTargetBounds'};
  *((_QWORD *)this + 3) = &CSwRenderTargetGetBounds::`vftable'{for `ID2DContext'};
  *(_QWORD *)this = &CMILCOMBase::`vftable';
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
