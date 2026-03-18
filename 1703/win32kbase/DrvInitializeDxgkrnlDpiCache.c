/*
 * XREFs of DrvInitializeDxgkrnlDpiCache @ 0x1C008F770
 * Callers:
 *     <none>
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0076C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DrvInitializeDxgkrnlDpiCache(_DWORD *a1)
{
  unsigned int v2; // esi
  __int64 *i; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx

  v2 = ((__int64 (*)(void))qword_1C018BDF8)();
  if ( a1 )
  {
    *a1 = 0;
    EngAcquireSemaphore(ghsemDriverMgmt);
    EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
    for ( i = *(__int64 **)&WPP_MAIN_CB.SectorSize; i; i = (__int64 *)*i )
    {
      if ( (i[4] & 0x401) == 1 )
      {
        v4 = i[324];
        if ( ((v4 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0
          && (*(_DWORD *)(v4 + 160) & 0x800000) != 0
          && ((unsigned int)((__int64 (__fastcall *)(__int64, _QWORD))qword_1C018BE00)(
                              v4 + 264,
                              *(unsigned int *)(v4 + 272)) != *((_DWORD *)i + 639)
           || (*((_DWORD *)i + 641) & 0x20) != 0 && (96 * *((_DWORD *)i + 620) + 50) / 0x64u != gdmLogPixels) )
        {
          *a1 = 1;
          break;
        }
      }
    }
    EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt");
    if ( ghsemDriverMgmt )
    {
      ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
      PsLeavePriorityRegion(v5);
    }
  }
  return v2;
}
