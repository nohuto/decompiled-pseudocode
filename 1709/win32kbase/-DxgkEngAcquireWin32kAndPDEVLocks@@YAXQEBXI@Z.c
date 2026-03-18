/*
 * XREFs of ?DxgkEngAcquireWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C0067A20
 * Callers:
 *     <none>
 * Callees:
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C003CF60 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     EngAcquireSemaphore @ 0x1C003E250 (EngAcquireSemaphore.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0057A50 (EtwTraceAcquiredSharedUserCrit.c)
 *     hdevEnumerate @ 0x1C00684D0 (hdevEnumerate.c)
 *     GreLockDisplayDevice @ 0x1C0068620 (GreLockDisplayDevice.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0070F10 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 */

void __fastcall DxgkEngAcquireWin32kAndPDEVLocks(const void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v7; // rbx
  struct tagTHREADINFO **v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  PVOID CurrentProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 i; // rcx
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  int v20; // ecx
  PVOID v21; // rcx
  __int64 v22; // [rsp+50h] [rbp+18h] BYREF

  v4 = a2;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3, a4);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v7 = 0LL;
  while ( 1 )
  {
    v8 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v8 )
      v7 = *v8;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v10, v9);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v13, v12) == gpepCSRSS && v7 != (struct tagTHREADINFO *)gptiTSRequest )
      break;
    if ( gbRITBlockedOnDIT )
    {
      if ( v7 == gptiRit )
        break;
      _InterlockedIncrement(&gcRITBlockedOnDITWaiters);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v21 = gpsemRITBlockedOnDITWaiters;
    }
    else
    {
      if ( gbDITInHitTest != 1 || v7 == gptiRit )
        break;
      _InterlockedIncrement(&gcDITHitTestWaiters);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v21 = gpsemDITHitTestWaiters;
    }
    KeWaitForSingleObject(v21, UserRequest, 0, 0, 0LL);
  }
  EtwTraceAcquiredSharedUserCrit(v13, v12, v14, v15);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
  EngAcquireSemaphore(ghsemGreLock);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDCVisRgn);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDCVisRgn", ghsemDCVisRgn, 3LL);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  for ( i = 0LL; ; i = v18 )
  {
    v17 = hdevEnumerate(i);
    v18 = v17;
    if ( !v17 )
      break;
    v22 = v17;
    v19 = *(_QWORD *)(v17 + 2592);
    if ( v19 )
    {
      v20 = *(_DWORD *)(v18 + 32);
      if ( (v20 & 0x400) == 0
        && (v20 & 0x20000) == 0
        && *(const void **)(v19 + 256) == a1
        && *(_DWORD *)(v19 + 272) < v4 )
      {
        GreLockDisplayDevice(v18);
        PDEVOBJ::vSync(
          (PDEVOBJ *)&v22,
          (struct _SURFOBJ *)((*(_QWORD *)(v18 + 2568) + 24LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(v18 + 2568) >> 64)),
          0LL,
          0xEu);
      }
    }
  }
}
