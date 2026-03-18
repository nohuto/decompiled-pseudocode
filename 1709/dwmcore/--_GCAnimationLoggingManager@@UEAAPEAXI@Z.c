/*
 * XREFs of ??_GCAnimationLoggingManager@@UEAAPEAXI@Z @ 0x180156B90
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CAnimationLoggingManager@@UEAA@XZ @ 0x180156A64 (--1CAnimationLoggingManager@@UEAA@XZ.c)
 */

CAnimationLoggingManager *__fastcall CAnimationLoggingManager::`scalar deleting destructor'(
        CAnimationLoggingManager *this,
        char a2)
{
  CAnimationLoggingManager::~CAnimationLoggingManager(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
