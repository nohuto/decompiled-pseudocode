/*
 * XREFs of NtUserGetDC @ 0x1C00373A0
 * Callers:
 *     <none>
 * Callees:
 *     GreSelectVisRgn @ 0x1C002B720 (GreSelectVisRgn.c)
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     _GetDCEx @ 0x1C0033980 (_GetDCEx.c)
 *     GreUnlockVisRgn @ 0x1C0037960 (GreUnlockVisRgn.c)
 *     GreLockVisRgn @ 0x1C0037BE0 (GreLockVisRgn.c)
 *     GreCreateRectRgnIndirect @ 0x1C003F3D0 (GreCreateRectRgnIndirect.c)
 *     ValidateHwndEx @ 0x1C0071600 (ValidateHwndEx.c)
 *     UserSetLastError @ 0x1C0071864 (UserSetLastError.c)
 *     ?IsHandleEntrySecure@@YAHPEAXPEAU_HANDLEENTRY@@@Z @ 0x1C00718B8 (-IsHandleEntrySecure@@YAHPEAXPEAU_HANDLEENTRY@@@Z.c)
 *     EtwTraceUIPIHandleValidationError @ 0x1C0071970 (EtwTraceUIPIHandleValidationError.c)
 *     CheckAccessForIntegrityLevelEx @ 0x1C007B40C (CheckAccessForIntegrityLevelEx.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

HDC __fastcall NtUserGetDC(void *a1, __int64 a2, __int64 a3)
{
  int v4; // r15d
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rbx
  struct tagTHREADINFO **v7; // rax
  PVOID CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  LARGE_INTEGER v13; // rdi
  int v14; // r8d
  char *v15; // rdi
  __int64 *v16; // rbx
  __int64 v17; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v19; // rbx
  __int64 v20; // r14
  __int64 v21; // rdi
  __int64 *v22; // rax
  HDC DCEx; // rdi
  struct tagTHREADINFO *v24; // rbx
  struct tagTHREADINFO **v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  void **v30; // rcx
  void *v31; // rcx
  __int64 v32; // rbx
  __int64 *v33; // rax
  __int64 v34; // rax
  __int64 RectRgnIndirect; // rbx
  int v36; // ecx
  struct tagPROCESSINFO *v37; // rdx
  __int64 v38; // rbx
  DWORD LowPart; // eax
  int v40; // r8d

  v4 = 1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v6 = 0LL;
  while ( 1 )
  {
    v7 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v7 )
      v6 = *v7;
    CurrentProcess = (PVOID)PsGetCurrentProcess();
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v6 != (struct tagTHREADINFO *)gptiTSRequest )
      break;
    if ( gbRITBlockedOnDIT )
    {
      if ( v6 == gptiRit )
        break;
      _InterlockedIncrement(&gcRITBlockedOnDITWaiters);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemRITBlockedOnDITWaiters, UserRequest, 0, 0, 0LL);
    }
    else
    {
      if ( gbDITInHitTest != 1 || v6 == gptiRit )
        break;
      _InterlockedIncrement(&gcDITHitTestWaiters);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
  }
  v12 = PsGetCurrentThreadWin32Thread(v10, v9, v11);
  if ( v12 )
  {
    v13 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v12 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
    {
      v36 = (unsigned __int8)byte_1C0186D98;
      if ( (unsigned __int8)(byte_1C0186D98 - 1) > 2u
        && (qword_1C0186D80 & 0x200000010000000LL) != 0
        && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        LOBYTE(v36) = byte_1C0186D98 - 1;
        Template_xqx(
          v36,
          (unsigned int)&AcquiredSharedUserCritEvent,
          v14,
          v13.LowPart,
          0,
          (char)gullUserCritAcquireToken);
      }
    }
    if ( v13.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      Template_xqx(
        (_DWORD)gullUserCritAcquireToken,
        (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
        v14,
        0,
        1000 * v13.QuadPart / gliQpcFreq.QuadPart,
        (char)gullUserCritAcquireToken);
    }
    *(_QWORD *)(v12 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  if ( a1 )
  {
    if ( (unsigned __int64)(unsigned __int16)a1 >= *((_QWORD *)gpsi + 1) )
      goto LABEL_84;
    v15 = (char *)qword_1C0189E38 + (unsigned int)(unsigned __int16)a1 * dword_1C0189E40;
    v16 = (__int64 *)((char *)gpKernelHandleTable
                    + 16 * ((__int64)((unsigned int)(unsigned __int16)a1 * dword_1C0189E40) >> 5));
    if ( WORD1(a1) != *((_WORD *)v15 + 13) && WORD1(a1) != 0xFFFF && (WORD1(a1) || !PsGetCurrentProcessWow64Process()) )
      goto LABEL_84;
    if ( v15[24] != 1 )
      goto LABEL_84;
    v17 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
      v17 = *ThreadWin32Thread;
    v19 = *v16;
    if ( !v19 )
      goto LABEL_84;
    v20 = *(_QWORD *)(v19 + 16);
    if ( (v15[25] & 1) != 0 )
    {
      UserSetLastError(1400LL);
      goto LABEL_73;
    }
    if ( v20 != v17
      && *(_QWORD *)(v19 + 24) != *(_QWORD *)(v17 + 408)
      && (*(_DWORD *)(v17 + 440) & 4) == 0
      && ((int)IsGetDesktopViewSupported() < 0 || !GetDesktopView(*(_QWORD *)(v17 + 376), *(_QWORD *)(v19 + 24))) )
    {
      goto LABEL_84;
    }
    if ( gbValidateHandleForIL )
    {
      if ( v20 )
      {
        if ( !(unsigned int)CheckAccessForIntegrityLevelEx(
                              *(_QWORD *)(*(_QWORD *)(v17 + 376) + 824LL),
                              *(_QWORD *)(*(_QWORD *)(v20 + 376) + 824LL),
                              0LL) )
        {
          v37 = *(struct tagPROCESSINFO **)(v20 + 376);
          if ( *(PVOID *)v37 != gpepCSRSS )
          {
            EtwTraceUIPIHandleValidationError(*(struct tagPROCESSINFO **)(v17 + 376), v37);
            UserSetLastError(5LL);
            goto LABEL_73;
          }
        }
      }
    }
    if ( (*(_DWORD *)(v17 + 440) & 0x20000000) != 0
      && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v17 + 376) + 720LL) + 24LL) & 1) != 0
      && !(unsigned int)IsHandleEntrySecure(a1, (struct _HANDLEENTRY *)v15) )
    {
LABEL_84:
      UserSetLastError(1400LL);
      v19 = 0LL;
    }
    if ( v19 )
      goto LABEL_27;
LABEL_73:
    DCEx = 0LL;
    goto LABEL_32;
  }
  v19 = 0LL;
LABEL_27:
  v21 = 0LL;
  v22 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v22 )
    v21 = *v22;
  if ( (*(_DWORD *)(v21 + 440) & 0x20000000) != 0
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 376) + 720LL) + 24LL) & 1) != 0 )
  {
    if ( !v19 )
    {
      v30 = *(void ***)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                      + 16LL);
      if ( v30 )
        v31 = *v30;
      else
        v31 = 0LL;
      if ( !ValidateHwndEx(v31) )
        v4 = 0;
      goto LABEL_46;
    }
LABEL_31:
    DCEx = (HDC)GetDCEx(v19, 0LL, 0x10000LL);
    goto LABEL_32;
  }
  if ( v19 )
    goto LABEL_31;
LABEL_46:
  v32 = 0LL;
  v33 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v33 )
    v32 = *v33;
  v34 = *(_QWORD *)(v32 + 408);
  if ( v34 )
    DCEx = (HDC)GetDCEx(*(_QWORD *)(*(_QWORD *)(v34 + 8) + 16LL), 0LL, 3LL);
  else
    DCEx = 0LL;
  if ( !v4 )
  {
    RectRgnIndirect = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
    GreLockVisRgn(*((_QWORD *)gpDispInfo + 4));
    GreSelectVisRgn(DCEx, RectRgnIndirect, 1u);
    GreUnlockVisRgn(*((_QWORD *)gpDispInfo + 4));
  }
LABEL_32:
  if ( gcSwitchInProgressWaiters )
  {
    KeReleaseSemaphore(gpsemSwitchInProgressWaiters, 0, gcSwitchInProgressWaiters, 0);
    gcSwitchInProgressWaiters = 0;
  }
  v24 = 0LL;
  v25 = (struct tagTHREADINFO **)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( v25 )
    v24 = *v25;
  if ( v24 == gptiRit && !gbRITBlockedOnDIT )
  {
    v28 = (unsigned int)gcRITBlockedOnDITWaiters;
    if ( gcRITBlockedOnDITWaiters )
    {
      KeReleaseSemaphore(gpsemRITBlockedOnDITWaiters, 0, gcRITBlockedOnDITWaiters, 0);
      gcRITBlockedOnDITWaiters = 0;
    }
  }
  gptiCurrent = 0LL;
  gbValidateHandleForIL = 0;
  if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
    && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
    && (qword_1C0186D80 & 0x200000010000000LL) != 0
    && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88 )
  {
    v38 = PsGetCurrentThreadWin32Thread(v27, v26, v28);
    if ( v38 )
    {
      LowPart = KeQueryPerformanceCounter(0LL).LowPart;
      if ( (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
        Template_xqx(
          *(_QWORD *)(v38 + 16),
          (unsigned int)&ReleaseUserCritEvent,
          v40,
          LowPart - *(_DWORD *)(v38 + 8),
          0,
          *(_QWORD *)(v38 + 16));
    }
  }
  ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
  return DCEx;
}
