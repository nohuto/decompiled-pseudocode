/*
 * XREFs of ??1SPRITELOCK@@QEAA@XZ @ 0x1C003E100
 * Callers:
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00F61C4 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall SPRITELOCK::~SPRITELOCK(SPRITELOCK *this)
{
  if ( *(_QWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
    if ( ghsemSprite )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
      PsLeavePriorityRegion();
    }
  }
}
