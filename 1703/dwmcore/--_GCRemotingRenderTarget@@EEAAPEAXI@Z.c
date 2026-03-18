/*
 * XREFs of ??_GCRemotingRenderTarget@@EEAAPEAXI@Z @ 0x180147D10
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CRemotingRenderTarget@@EEAA@XZ @ 0x180147BD4 (--1CRemotingRenderTarget@@EEAA@XZ.c)
 */

CRemotingRenderTarget *__fastcall CRemotingRenderTarget::`scalar deleting destructor'(
        CRemotingRenderTarget *this,
        char a2)
{
  CRemotingRenderTarget::~CRemotingRenderTarget(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
