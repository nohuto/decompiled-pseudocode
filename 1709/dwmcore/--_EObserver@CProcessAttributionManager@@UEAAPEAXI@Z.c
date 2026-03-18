/*
 * XREFs of ??_EObserver@CProcessAttributionManager@@UEAAPEAXI@Z @ 0x1801240D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1Observer@CProcessAttributionManager@@UEAA@XZ @ 0x180123FAC (--1Observer@CProcessAttributionManager@@UEAA@XZ.c)
 */

CProcessAttributionManager **__fastcall CProcessAttributionManager::Observer::`vector deleting destructor'(
        CProcessAttributionManager **this,
        char a2)
{
  CProcessAttributionManager::Observer::~Observer(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
