/*
 * XREFs of ?vClearSurface@PDEVOBJ@@QEAAXXZ @ 0x1C00EF2C8
 * Callers:
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00F61C4 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C003E250 (EngAcquireSemaphore.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x1C0046DB8 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0046E90 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0070F10 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

void __fastcall PDEVOBJ::vClearSurface(PDEVOBJ *this)
{
  int v2; // r8d
  __int64 v3; // rcx
  _BYTE v4[88]; // [rsp+20h] [rbp-58h] BYREF

  EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v4, this);
  *(_QWORD *)(*(_QWORD *)this + 2568LL) = 0LL;
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v4);
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v2);
  if ( ghsemDriverMgmt )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
    PsLeavePriorityRegion(v3);
  }
}
