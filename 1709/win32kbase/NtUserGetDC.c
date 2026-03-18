/*
 * XREFs of NtUserGetDC @ 0x1C0048830
 * Callers:
 *     <none>
 * Callees:
 *     GreLockVisRgn @ 0x1C003E280 (GreLockVisRgn.c)
 *     GreUnlockVisRgn @ 0x1C003FD70 (GreUnlockVisRgn.c)
 *     ValidateHwndEx @ 0x1C00476F0 (ValidateHwndEx.c)
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     _GetDCEx @ 0x1C0049920 (_GetDCEx.c)
 *     GreCreateRectRgnIndirect @ 0x1C0054BB0 (GreCreateRectRgnIndirect.c)
 *     GreSelectVisRgn @ 0x1C0059C20 (GreSelectVisRgn.c)
 *     UserSetLastError @ 0x1C005D6F8 (UserSetLastError.c)
 *     CheckAccessForIntegrityLevelEx @ 0x1C0073EF4 (CheckAccessForIntegrityLevelEx.c)
 *     ?IsHandleEntrySecure@@YAHPEAXPEAU_HANDLEENTRY@@@Z @ 0x1C00816F0 (-IsHandleEntrySecure@@YAHPEAXPEAU_HANDLEENTRY@@@Z.c)
 *     EtwTraceUIPIHandleValidationError @ 0x1C008A4F8 (EtwTraceUIPIHandleValidationError.c)
 *     McTemplateK0xqx @ 0x1C00E4B64 (McTemplateK0xqx.c)
 */

HDC __fastcall NtUserGetDC(void *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // r15d
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v7; // rbx
  struct tagTHREADINFO **v8; // rax
  PVOID CurrentProcess; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  LARGE_INTEGER PerformanceCounter; // rsi
  int v16; // r8d
  LONGLONG v17; // rdi
  char *v18; // rdi
  __int64 *v19; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v21; // rbx
  __int64 v22; // rsi
  __int64 v23; // r14
  HDC DCEx; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  void **v30; // rcx
  __int64 v31; // r9
  void *v32; // rcx
  __int64 v33; // rax
  int v34; // ecx
  struct tagPROCESSINFO *v35; // rdx
  int v36; // edx
  int v37; // r8d
  __int64 v38; // rdx
  int v39; // r8d
  __int64 v40; // rbx
  DWORD LowPart; // eax
  int v42; // r8d

  v5 = 1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3, a4);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v7 = 0LL;
  while ( 1 )
  {
    v8 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v8 )
      v7 = *v8;
    CurrentProcess = (PVOID)PsGetCurrentProcess();
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v7 != (struct tagTHREADINFO *)gptiTSRequest )
      break;
    if ( gbRITBlockedOnDIT )
    {
      if ( v7 == gptiRit )
        break;
      _InterlockedIncrement(&gcRITBlockedOnDITWaiters);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemRITBlockedOnDITWaiters, UserRequest, 0, 0, 0LL);
    }
    else
    {
      if ( gbDITInHitTest != 1 || v7 == gptiRit )
        break;
      _InterlockedIncrement(&gcDITHitTestWaiters);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
  }
  v14 = PsGetCurrentThreadWin32Thread(v11, v10, v12, v13);
  if ( v14 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v17 = PerformanceCounter.QuadPart - *(_QWORD *)(v14 + 8);
    if ( (*(_QWORD *)&WPP_MAIN_CB.SectorSize & 0x200000010000000LL) != 0 )
    {
      v34 = (unsigned __int8)byte_1C0188DA8;
      if ( (unsigned __int8)(byte_1C0188DA8 - 1) > 2u
        && (qword_1C0188D90 & 0x200000010000000LL) != 0
        && (qword_1C0188D98 & 0x200000010000000LL) == qword_1C0188D98
        && ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        LOBYTE(v34) = byte_1C0188DA8 - 1;
        McTemplateK0xqx(v34, (unsigned int)&AcquiredSharedUserCritEvent, v16, v17, 0, gullUserCritAcquireToken);
      }
    }
    if ( v17 >= (__int64)WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink
      && PerformanceCounter.QuadPart - W32KEtwUserCritAcquireDelayShLastTelemetryQPC >= W32KEtwUserCritTelemetryThrottleQPC )
    {
      if ( (BYTE4(Microsoft_Windows_Win32kEnableBits) & 0x10) != 0 )
        McTemplateK0xqx(
          gullUserCritAcquireToken,
          (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
          v16,
          v17,
          1000000 * v17 / gliQpcFreq.QuadPart,
          gullUserCritAcquireToken);
      _InterlockedExchange64(&W32KEtwUserCritAcquireDelayShLastTelemetryQPC, PerformanceCounter.QuadPart);
    }
    *(_QWORD *)(v14 + 16) = _InterlockedIncrement64(&gullUserCritAcquireToken);
  }
  if ( !a1 )
  {
    v21 = 0LL;
    goto LABEL_25;
  }
  if ( (unsigned __int64)(unsigned __int16)a1 >= *((_QWORD *)gpsi + 1) )
    goto LABEL_79;
  v18 = (char *)qword_1C018E9B8 + (unsigned int)(unsigned __int16)a1 * dword_1C018E9C0;
  v19 = (__int64 *)((char *)gpKernelHandleTable
                  + 24 * ((__int64)((unsigned int)(unsigned __int16)a1 * dword_1C018E9C0) >> 5));
  if ( WORD1(a1) != *((_WORD *)v18 + 13)
    && WORD1(a1) != 0xFFFF
    && (WORD1(a1) || !PsGetCurrentProcessWow64Process(0xFFFFLL)) )
  {
    goto LABEL_79;
  }
  if ( v18[24] != 1 )
    goto LABEL_79;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v21 = *v19;
  v22 = ThreadWin32Thread;
  if ( !v21 )
    goto LABEL_79;
  v23 = *(_QWORD *)(v21 + 16);
  if ( (v18[25] & 1) != 0 )
  {
    UserSetLastError(1400LL);
    goto LABEL_68;
  }
  if ( v23 != ThreadWin32Thread
    && *(_QWORD *)(v21 + 24) != *(_QWORD *)(ThreadWin32Thread + 432)
    && (*(_DWORD *)(ThreadWin32Thread + 464) & 4) == 0
    && ((int)IsGetDesktopViewSupported() < 0 || !GetDesktopView(*(_QWORD *)(v22 + 400), *(_QWORD *)(v21 + 24))) )
  {
    goto LABEL_79;
  }
  if ( gbValidateHandleForIL )
  {
    if ( v23 )
    {
      if ( !(unsigned int)CheckAccessForIntegrityLevelEx(
                            *(_QWORD *)(*(_QWORD *)(v22 + 400) + 832LL),
                            *(_QWORD *)(*(_QWORD *)(v23 + 400) + 832LL),
                            0LL) )
      {
        v35 = *(struct tagPROCESSINFO **)(v23 + 400);
        if ( *(PVOID *)v35 != gpepCSRSS )
        {
          EtwTraceUIPIHandleValidationError(*(struct tagPROCESSINFO **)(v22 + 400), v35);
          UserSetLastError(5LL);
          goto LABEL_68;
        }
      }
    }
  }
  if ( (*(_DWORD *)(v22 + 464) & 0x20000000) != 0
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 400) + 728LL) + 24LL) & 1) != 0
    && !(unsigned int)IsHandleEntrySecure(a1, (struct _HANDLEENTRY *)v18) )
  {
LABEL_79:
    UserSetLastError(1400LL);
    v21 = 0LL;
  }
  if ( !v21 )
  {
LABEL_68:
    DCEx = 0LL;
    goto LABEL_28;
  }
LABEL_25:
  if ( (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 464) & 0x20000000) != 0
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 400) + 728LL) + 24LL) & 1) != 0 )
  {
    if ( !v21 )
    {
      v30 = *(void ***)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432) + 8LL)
                      + 16LL);
      if ( v30 )
        v32 = *v30;
      else
        v32 = 0LL;
      if ( !ValidateHwndEx(v32, 1LL, 0LL, v31) )
        v5 = 0;
      goto LABEL_40;
    }
LABEL_27:
    DCEx = (HDC)GetDCEx(v21, 0LL, 0x10000LL);
    goto LABEL_28;
  }
  if ( v21 )
    goto LABEL_27;
LABEL_40:
  v33 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432);
  if ( v33 )
    DCEx = (HDC)GetDCEx(*(_QWORD *)(*(_QWORD *)(v33 + 8) + 16LL), 0LL, 3LL);
  else
    DCEx = 0LL;
  if ( !v5 )
  {
    GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
    GreLockVisRgn(*(_QWORD *)(gpDispInfo + 32), v36, v37);
    GreSelectVisRgn(DCEx);
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 32), v38, v39);
  }
LABEL_28:
  if ( gcSwitchInProgressWaiters )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)gpsemSwitchInProgressWaiters, 0, gcSwitchInProgressWaiters, 0);
    gcSwitchInProgressWaiters = 0;
  }
  if ( (struct tagTHREADINFO *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) == gptiRit && !gbRITBlockedOnDIT )
  {
    v27 = (unsigned int)gcRITBlockedOnDITWaiters;
    if ( gcRITBlockedOnDITWaiters )
    {
      KeReleaseSemaphore((PRKSEMAPHORE)gpsemRITBlockedOnDITWaiters, 0, gcRITBlockedOnDITWaiters, 0);
      gcRITBlockedOnDITWaiters = 0;
    }
  }
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  if ( (*(_QWORD *)&WPP_MAIN_CB.SectorSize & 0x200000010000000LL) != 0
    && (unsigned __int8)(byte_1C0188DA8 - 1) > 2u
    && (qword_1C0188D90 & 0x200000010000000LL) != 0
    && (qword_1C0188D98 & 0x200000010000000LL) == qword_1C0188D98 )
  {
    v40 = PsGetCurrentThreadWin32Thread(v26, v25, v27, v28);
    if ( v40 )
    {
      LowPart = KeQueryPerformanceCounter(0LL).LowPart;
      if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
        McTemplateK0xqx(
          *(_QWORD *)(v40 + 16),
          (unsigned int)&ReleaseUserCritEvent,
          v42,
          LowPart - *(_DWORD *)(v40 + 8),
          0,
          *(_QWORD *)(v40 + 16));
    }
  }
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return DCEx;
}
