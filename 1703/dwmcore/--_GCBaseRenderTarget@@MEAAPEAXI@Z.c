/*
 * XREFs of ??_GCBaseRenderTarget@@MEAAPEAXI@Z @ 0x18019FE80
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

CBaseRenderTarget *__fastcall CBaseRenderTarget::`scalar deleting destructor'(CBaseRenderTarget *this, char a2)
{
  *(_QWORD *)this = &CBaseRenderTarget::`vftable';
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
