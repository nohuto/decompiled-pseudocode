/*
 * XREFs of ??_ECLegacySurfaceManager@@UEAAPEAXI@Z @ 0x180131490
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CLegacySurfaceManager@@UEAA@XZ @ 0x1801311C0 (--1CLegacySurfaceManager@@UEAA@XZ.c)
 */

CLegacySurfaceManager *__fastcall CLegacySurfaceManager::`vector deleting destructor'(
        CLegacySurfaceManager *this,
        char a2)
{
  CLegacySurfaceManager::~CLegacySurfaceManager(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
