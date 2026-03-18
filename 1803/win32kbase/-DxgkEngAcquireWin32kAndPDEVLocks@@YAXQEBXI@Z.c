/*
 * XREFs of ?DxgkEngAcquireWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C00C89D0
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C003025C (EtwTraceAcquiredSharedUserCrit.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C0031ED0 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     EngAcquireSemaphore @ 0x1C0033690 (EngAcquireSemaphore.c)
 *     hdevEnumerate @ 0x1C004E820 (hdevEnumerate.c)
 *     GreLockDisplayDevice @ 0x1C004E9C0 (GreLockDisplayDevice.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C005B3A0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

void __fastcall DxgkEngAcquireWin32kAndPDEVLocks(const void *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rbx
  struct tagTHREADINFO **v7; // rax
  __int64 v8; // rcx
  PVOID CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // edx
  int v14; // r8d
  struct PDEV *i; // rcx
  __int64 v16; // rax
  int v17; // ecx
  struct PDEV *v18; // rax
  __int64 v19; // rbx
  __int64 v20; // [rsp+50h] [rbp+18h] BYREF

  v3 = a2;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v6 = 0LL;
  while ( 1 )
  {
    v7 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v7 )
      v6 = *v7;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v8);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v11) == gpepCSRSS && v6 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v6 == gptiRit )
    {
      break;
    }
    _InterlockedIncrement(&gcDITHitTestWaiters);
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  EtwTraceAcquiredSharedUserCrit(v11, v10, v12);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, 1);
  EngAcquireSemaphore((HSEMAPHORE)ghsemGreLock);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemGreLock", (int)ghsemGreLock, 2);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDCVisRgn);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDCVisRgn", (int)ghsemDCVisRgn, 3);
  EngAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"ghsemDwmState", (int)ghsemDwmState, 7);
  for ( i = 0LL; ; i = (struct PDEV *)v19 )
  {
    v18 = hdevEnumerate(i, v13, v14);
    v19 = (__int64)v18;
    if ( !v18 )
      break;
    v16 = *((_QWORD *)v18 + 321);
    v20 = v19;
    if ( v16 )
    {
      v17 = *(_DWORD *)(v19 + 40);
      if ( (v17 & 0x400) == 0
        && (v17 & 0x20000) == 0
        && *(const void **)(v16 + 240) == a1
        && *(_DWORD *)(v16 + 256) < v3 )
      {
        GreLockDisplayDevice(v19);
        PDEVOBJ::vSync(
          (PDEVOBJ *)&v20,
          (struct _SURFOBJ *)((*(_QWORD *)(v19 + 2544) + 24LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(v19 + 2544) >> 64)),
          0LL,
          0xEu);
      }
    }
  }
}
