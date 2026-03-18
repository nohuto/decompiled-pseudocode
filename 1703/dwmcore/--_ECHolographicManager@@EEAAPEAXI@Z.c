/*
 * XREFs of ??_ECHolographicManager@@EEAAPEAXI@Z @ 0x1801A5AF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CHolographicManager@@EEAA@XZ @ 0x1801A5A90 (--1CHolographicManager@@EEAA@XZ.c)
 */

void **__fastcall CHolographicManager::`vector deleting destructor'(void **this, char a2)
{
  CHolographicManager::~CHolographicManager(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
