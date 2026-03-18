/*
 * XREFs of DrvDisplayConfigGetScaleFactorOverrides @ 0x1C00F9490
 * Callers:
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C000D740 (DrvDisplayConfigGetDeviceInfo.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0076930 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0076C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

__int64 __fastcall DrvDisplayConfigGetScaleFactorOverrides(__int64 a1, int a2)
{
  __int64 *i; // rbx
  _DWORD *v5; // rcx
  int v6; // eax
  __int64 v7; // rcx

  EngAcquireSemaphore(ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
  for ( i = *(__int64 **)&WPP_MAIN_CB.SectorSize; i; i = (__int64 *)*i )
  {
    if ( (i[4] & 0x401) == 1 )
    {
      v5 = (_DWORD *)i[324];
      if ( ((unsigned __int64)(v5 + 1) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
      {
        v6 = v5[40];
        if ( (v6 & 0x800000) != 0 )
        {
          if ( a2 )
          {
            if ( (v6 & 4) != 0 )
              goto LABEL_7;
          }
          else if ( *(_DWORD *)(a1 + 8) == v5[66] && *(_DWORD *)(a1 + 12) == v5[67] && *(_DWORD *)(a1 + 16) == v5[68] )
          {
LABEL_7:
            *(_QWORD *)(a1 + 20) = i[319];
            *(_DWORD *)(a1 + 28) = *((_DWORD *)i + 640);
            break;
          }
        }
      }
    }
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt");
  if ( ghsemDriverMgmt )
  {
    ExReleaseResourceAndLeaveCriticalRegion((PERESOURCE)ghsemDriverMgmt);
    PsLeavePriorityRegion(v7);
  }
  return i == 0LL ? 0xC000000D : 0;
}
