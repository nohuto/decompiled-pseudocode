/*
 * XREFs of DrvDisplayConfigGetScaleFactorOverrides @ 0x1C00F9600
 * Callers:
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C0026310 (DrvDisplayConfigGetDeviceInfo.c)
 * Callees:
 *     EngAcquireSemaphore @ 0x1C003E250 (EngAcquireSemaphore.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0070F10 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

__int64 __fastcall DrvDisplayConfigGetScaleFactorOverrides(__int64 a1, int a2)
{
  int v4; // r8d
  PDEV *i; // rbx
  _DWORD *v6; // rcx
  int v7; // eax
  __int64 v8; // rcx

  EngAcquireSemaphore((HSEMAPHORE)ghsemDriverMgmt);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, 12);
  for ( i = gppdevList; i; i = *(PDEV **)i )
  {
    if ( (*((_DWORD *)i + 8) & 0x401) == 1 )
    {
      v6 = (_DWORD *)*((_QWORD *)i + 324);
      if ( ((unsigned __int64)(v6 + 1) & 0xFFFFFFFFFFFFFFFBuLL) != 0 )
      {
        v7 = v6[40];
        if ( (v7 & 0x800000) != 0 )
        {
          if ( a2 )
          {
            if ( (v7 & 4) != 0 )
              goto LABEL_7;
          }
          else if ( *(_DWORD *)(a1 + 8) == v6[66] && *(_DWORD *)(a1 + 12) == v6[67] && *(_DWORD *)(a1 + 16) == v6[68] )
          {
LABEL_7:
            *(_QWORD *)(a1 + 20) = *((_QWORD *)i + 319);
            *(_DWORD *)(a1 + 28) = *((_DWORD *)i + 640);
            break;
          }
        }
      }
    }
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDriverMgmt", (int)ghsemDriverMgmt, v4);
  if ( ghsemDriverMgmt )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDriverMgmt);
    PsLeavePriorityRegion(v8);
  }
  return i == 0LL ? 0xC000000D : 0;
}
