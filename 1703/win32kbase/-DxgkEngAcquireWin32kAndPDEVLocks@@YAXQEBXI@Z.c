/*
 * XREFs of ?DxgkEngAcquireWin32kAndPDEVLocks@@YAXQEBXI@Z @ 0x1C005B660
 * Callers:
 *     <none>
 * Callees:
 *     EngAcquireSemaphore @ 0x1C0037BB0 (EngAcquireSemaphore.c)
 *     ?vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z @ 0x1C00388C0 (-vSync@PDEVOBJ@@QEAAXPEAU_SURFOBJ@@PEAU_RECTL@@K@Z.c)
 *     hdevEnumerate @ 0x1C005BFB0 (hdevEnumerate.c)
 *     GreLockDisplayDevice @ 0x1C005C1F0 (GreLockDisplayDevice.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0076C50 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

void __fastcall DxgkEngAcquireWin32kAndPDEVLocks(const void *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rbx
  struct tagTHREADINFO **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  PVOID CurrentProcess; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdi
  int v18; // ecx
  LARGE_INTEGER v19; // rbx
  int v20; // r8d
  PDEV *i; // rcx
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // rax
  PRKSEMAPHORE v25; // rcx
  __int64 v26; // [rsp+50h] [rbp+18h] BYREF

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
    CurrentProcess = (PVOID)PsGetCurrentProcess(v9, v8, v10, v11);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v14, v13, v15, v16) == gpepCSRSS && v6 != (struct tagTHREADINFO *)gptiTSRequest )
      break;
    if ( gbRITBlockedOnDIT )
    {
      if ( v6 == gptiRit )
        break;
      _InterlockedIncrement(&gcRITBlockedOnDITWaiters);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v25 = gpsemRITBlockedOnDITWaiters;
    }
    else
    {
      if ( gbDITInHitTest != 1 || v6 == gptiRit )
        break;
      _InterlockedIncrement(&gcDITHitTestWaiters);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v25 = (PRKSEMAPHORE)gpsemDITHitTestWaiters;
    }
    KeWaitForSingleObject(v25, UserRequest, 0, 0, 0LL);
  }
  v17 = PsGetCurrentThreadWin32Thread(v14, v13, v15);
  if ( v17 )
  {
    v19 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v17 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
      && (qword_1C0186D80 & 0x200000010000000LL) != 0
      && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      LOBYTE(v18) = byte_1C0186D98 - 1;
      Template_xqx(v18, (unsigned int)&AcquiredSharedUserCritEvent, v20, v19.LowPart, 0, (char)gullUserCritAcquireToken);
    }
    if ( v19.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      Template_xqx(
        (_DWORD)gullUserCritAcquireToken,
        (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
        v20,
        0,
        1000 * v19.QuadPart / gliQpcFreq.QuadPart,
        (char)gullUserCritAcquireToken);
    }
    *(_QWORD *)(v17 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  EngAcquireSemaphore((HSEMAPHORE)ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDynamicModeChange", ghsemDynamicModeChange, 1LL);
  EngAcquireSemaphore((HSEMAPHORE)ghsemGreLock);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
  EngAcquireSemaphore((HSEMAPHORE)ghsemDCVisRgn);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDCVisRgn", ghsemDCVisRgn, 3LL);
  EngAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  for ( i = 0LL; ; i = (PDEV *)v23 )
  {
    v22 = hdevEnumerate(i);
    v23 = v22;
    if ( !v22 )
      break;
    v26 = v22;
    v24 = *(_QWORD *)(v22 + 2592);
    if ( v24
      && (*(_DWORD *)(v23 + 32) & 0x20400) == 0
      && *(const void **)(v24 + 256) == a1
      && *(_DWORD *)(v24 + 272) < v3 )
    {
      GreLockDisplayDevice(v23);
      PDEVOBJ::vSync(
        (PDEVOBJ *)&v26,
        (struct _SURFOBJ *)((*(_QWORD *)(v23 + 2568) + 24LL) & ((unsigned __int128)-(__int128)*(unsigned __int64 *)(v23 + 2568) >> 64)),
        0LL,
        0xEu);
    }
  }
}
