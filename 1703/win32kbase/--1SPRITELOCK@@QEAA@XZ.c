/*
 * XREFs of ??1SPRITELOCK@@QEAA@XZ @ 0x1C005C120
 * Callers:
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00F5140 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall SPRITELOCK::~SPRITELOCK(SPRITELOCK *this)
{
  __int64 v1; // rcx

  if ( *(_QWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemSprite", ghsemSprite);
    if ( ghsemSprite )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemSprite);
      PsLeavePriorityRegion(v1);
    }
  }
}
