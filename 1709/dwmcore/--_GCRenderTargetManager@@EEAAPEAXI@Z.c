/*
 * XREFs of ??_GCRenderTargetManager@@EEAAPEAXI@Z @ 0x180130750
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CRenderTargetManager@@EEAA@XZ @ 0x180130704 (--1CRenderTargetManager@@EEAA@XZ.c)
 */

void **__fastcall CRenderTargetManager::`scalar deleting destructor'(void **this, char a2)
{
  CRenderTargetManager::~CRenderTargetManager(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
