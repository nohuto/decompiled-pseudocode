/*
 * XREFs of ??_ECHolographicManager@@EEAAPEAXI@Z @ 0x1801BFAA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CHolographicManager@@EEAA@XZ @ 0x1801BF978 (--1CHolographicManager@@EEAA@XZ.c)
 */

CHolographicManager *__fastcall CHolographicManager::`vector deleting destructor'(CHolographicManager *this, char a2)
{
  CHolographicManager::~CHolographicManager(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
