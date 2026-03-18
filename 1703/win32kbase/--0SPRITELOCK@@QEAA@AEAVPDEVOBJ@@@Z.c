/*
 * XREFs of ??0SPRITELOCK@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C005C160
 * Callers:
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00F5140 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     ?bAllowShareAccess@PDEVOBJ@@QEAAHXZ @ 0x1C00387B0 (-bAllowShareAccess@PDEVOBJ@@QEAAHXZ.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0076C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

SPRITELOCK *__fastcall SPRITELOCK::SPRITELOCK(SPRITELOCK *this, struct PDEVOBJ *a2)
{
  __int64 ThreadWin32Thread; // rbx

  *(_QWORD *)this = 0LL;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( !ThreadWin32Thread
    || !PDEVOBJ::bAllowShareAccess(a2)
    || !*(_DWORD *)(ThreadWin32Thread + 104) && !*(_DWORD *)(ThreadWin32Thread + 108) )
  {
    *(_QWORD *)this = *(_QWORD *)a2 + 72LL;
    EngAcquireSemaphore((HSEMAPHORE)ghsemSprite);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemSprite", ghsemSprite, 5LL);
  }
  return this;
}
