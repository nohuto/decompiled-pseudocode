/*
 * XREFs of ??_ECDebugFrameCounter@@UEAAPEAXI@Z @ 0x18013BA40
 * Callers:
 *     <none>
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CDebugFrameCounter@@UEAA@XZ @ 0x18013B590 (--1CDebugFrameCounter@@UEAA@XZ.c)
 */

CDebugFrameCounter *__fastcall CDebugFrameCounter::`vector deleting destructor'(CDebugFrameCounter *this, char a2)
{
  CDebugFrameCounter::~CDebugFrameCounter(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
