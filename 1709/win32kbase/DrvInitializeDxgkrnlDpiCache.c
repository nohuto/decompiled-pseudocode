/*
 * XREFs of DrvInitializeDxgkrnlDpiCache @ 0x1C0098100
 * Callers:
 *     <none>
 * Callees:
 *     EngAcquireSemaphore @ 0x1C003E250 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0070F10 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvInitializeDxgkrnlDpiCache(_DWORD *a1)
{
  unsigned int v2; // esi
  int v3; // r8d
  PDEV *i; // rbx
  __int64 v5; // rcx
  __int64 v7; // rdx

  v2 = ((__int64 (*)(void))qword_1C0190A78)();
  if ( a1 )
  {
    *a1 = 0;
    EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
    for ( i = gppdevList; i; i = *(PDEV **)i )
    {
      if ( (*((_DWORD *)i + 8) & 0x401) == 1 )
      {
        v7 = *((_QWORD *)i + 324);
        if ( ((v7 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0
          && (*(_DWORD *)(v7 + 160) & 0x800000) != 0
          && ((unsigned int)((__int64 (__fastcall *)(__int64, _QWORD))qword_1C0190A80)(
                              v7 + 264,
                              *(unsigned int *)(v7 + 272)) != *((_DWORD *)i + 639)
           || (*((_DWORD *)i + 641) & 0x20) != 0 && (96 * *((_DWORD *)i + 620) + 50) / 0x64u != gdmLogPixels) )
        {
          *a1 = 1;
          break;
        }
      }
    }
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v3);
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
      PsLeavePriorityRegion(v5);
    }
  }
  return v2;
}
