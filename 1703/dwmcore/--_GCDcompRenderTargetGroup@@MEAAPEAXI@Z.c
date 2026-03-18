/*
 * XREFs of ??_GCDcompRenderTargetGroup@@MEAAPEAXI@Z @ 0x1800C9B90
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CDcompRenderTargetGroup@@MEAA@XZ @ 0x1800C9C08 (--1CDcompRenderTargetGroup@@MEAA@XZ.c)
 */

CDcompRenderTargetGroup *__fastcall CDcompRenderTargetGroup::`scalar deleting destructor'(
        CDcompRenderTargetGroup *this,
        char a2)
{
  CDcompRenderTargetGroup::~CDcompRenderTargetGroup(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
