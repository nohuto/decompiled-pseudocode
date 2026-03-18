/*
 * XREFs of hdcOpenDCW @ 0x1C0022470
 * Callers:
 *     NtGdiOpenDCW @ 0x1C00221E0 (NtGdiOpenDCW.c)
 * Callees:
 *     ??0DYNAMICMODECHANGELOCK@@QEAA@XZ @ 0x1C0002368 (--0DYNAMICMODECHANGELOCK@@QEAA@XZ.c)
 *     UserGetMonitorDC @ 0x1C0028978 (UserGetMonitorDC.c)
 *     GreCreateDisplayDC @ 0x1C002C340 (GreCreateDisplayDC.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C002EB80 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0037A10 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C0038940 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     bDeleteDCInternal @ 0x1C0042230 (bDeleteDCInternal.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00423CC (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00423D8 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     DrvGetHDEV @ 0x1C0062010 (DrvGetHDEV.c)
 *     EngSetLastError @ 0x1C0083400 (EngSetLastError.c)
 *     DrvDestroyMDEV @ 0x1C008DC60 (DrvDestroyMDEV.c)
 *     UserGetCurrentDesktopId @ 0x1C00D5518 (UserGetCurrentDesktopId.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C00E9CC0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F5340 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAU_D3DKMT_GE.c)
 */

HDC __fastcall hdcOpenDCW(
        WCHAR *SourceString,
        struct _devicemodeW *a2,
        unsigned int a3,
        int a4,
        void *a5,
        struct tagREMOTETYPEONENODE *a6,
        __int64 a7,
        unsigned __int64 a8,
        int a9)
{
  unsigned int v9; // r12d
  struct _devicemodeW *v10; // r13
  HDC MonitorDC; // rdi
  __int64 v12; // r15
  struct _MDEV *v13; // rbx
  __int64 HDEV; // r12
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rsi
  struct tagTHREADINFO *v19; // rsi
  int v20; // r13d
  struct tagTHREADINFO **v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  PRKSEMAPHORE v25; // rcx
  __int64 v26; // r13
  int v27; // ecx
  LARGE_INTEGER v28; // rsi
  int v29; // r8d
  bool v30; // al
  DYNAMICMODECHANGESHARELOCK *v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  struct _LDEV *DriverWrap; // rbx
  __int64 v35; // rcx
  signed __int32 v36; // ett
  _QWORD *v37; // rdx
  CTouchProcessor *v38; // rcx
  BOOL v40; // [rsp+70h] [rbp-88h]
  __int64 v41; // [rsp+78h] [rbp-80h] BYREF
  void *v42; // [rsp+80h] [rbp-78h] BYREF
  __int64 v43; // [rsp+88h] [rbp-70h] BYREF
  __int64 v44; // [rsp+90h] [rbp-68h] BYREF
  struct _UNICODE_STRING v45; // [rsp+98h] [rbp-60h] BYREF
  _QWORD v46[10]; // [rsp+A8h] [rbp-50h] BYREF

  v9 = a3;
  v10 = a2;
  MonitorDC = 0LL;
  v12 = a7;
  v40 = a7 != 0;
  if ( !SourceString || a7 )
    goto LABEL_57;
  v13 = 0LL;
  HDEV = 0LL;
  RtlInitUnicodeString(&v45, SourceString);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v16, v15, v17);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v19 = 0LL;
  do
  {
    v20 = 0;
    v21 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v21 )
      v19 = *v21;
    if ( (unsigned int)IsCurrentProcessDwm()
      || (PVOID)PsGetCurrentProcess() == gpepCSRSS && v19 != (struct tagTHREADINFO *)gptiTSRequest )
    {
      break;
    }
    if ( !gbRITBlockedOnDIT )
    {
      if ( gbDITInHitTest != 1 || v19 == gptiRit )
        continue;
      _InterlockedIncrement(&gcDITHitTestWaiters);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v25 = (PRKSEMAPHORE)gpsemDITHitTestWaiters;
      goto LABEL_17;
    }
    if ( v19 != gptiRit )
    {
      _InterlockedIncrement(&gcRITBlockedOnDITWaiters);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v25 = gpsemRITBlockedOnDITWaiters;
LABEL_17:
      KeWaitForSingleObject(v25, UserRequest, 0, 0, 0LL);
      v20 = 1;
    }
  }
  while ( v20 == 1 );
  v26 = PsGetCurrentThreadWin32Thread(v23, v22, v24);
  if ( v26 )
  {
    v28 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v26 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
    {
      v30 = (unsigned __int8)(byte_1C0186D98 - 1) > 2u
         && (qword_1C0186D80 & 0x200000010000000LL) != 0
         && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88;
      if ( v30 && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
        Template_xqx(
          v27,
          (unsigned int)&AcquiredSharedUserCritEvent,
          v29,
          v28.LowPart,
          0,
          (char)gullUserCritAcquireToken);
    }
    if ( v28.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      Template_xqx(
        1000 * v28.QuadPart / gliQpcFreq.QuadPart,
        (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
        v29,
        0,
        1000 * v28.QuadPart / gliQpcFreq.QuadPart,
        (char)gullUserCritAcquireToken);
    }
    *(_QWORD *)(v26 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  DYNAMICMODECHANGELOCK::DYNAMICMODECHANGELOCK((DYNAMICMODECHANGELOCK *)&a7);
  if ( a9 )
  {
    HDEV = DrvGetHDEV(&v45);
    v10 = a2;
  }
  else
  {
    v10 = a2;
    if ( a2 )
    {
      v13 = DrvCreateMDEV(&v45, a2, (void *)0xFFFFFFFFLL, 3u, 0LL, 0, 0, 0, 0LL);
      if ( !v13 && (unsigned int)UserGetCurrentDesktopId(&v42) )
        v13 = DrvCreateMDEV(&v45, a2, v42, 3u, 0LL, 0, 0, 0, 0LL);
      if ( v13 )
        HDEV = *((_QWORD *)v13 + 4);
    }
    else
    {
      v32 = DrvGetHDEV(&v45);
      HDEV = v32;
      if ( a4 && !a3 )
        MonitorDC = (HDC)UserGetMonitorDC(v32);
    }
  }
  if ( HDEV )
  {
    if ( MonitorDC || (MonitorDC = (HDC)GreCreateDisplayDC(HDEV, 0LL, 0LL)) != 0LL )
    {
      DCOBJ::DCOBJ((DCOBJ *)v46, MonitorDC);
      if ( v46[0] )
      {
        v43 = *(_QWORD *)(v46[0] + 48LL);
        if ( v43 )
          PDEVOBJ::vUnreferencePdev(&v43, 0LL);
      }
      DCOBJ::~DCOBJ((DCOBJ *)v46);
    }
    else if ( v13 )
    {
      DrvDestroyMDEV(v13);
    }
    else
    {
      v44 = HDEV;
      PDEVOBJ::vUnreferencePdev(&v44, 0LL);
    }
  }
  if ( v13 )
    Win32FreePool(v13);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v31);
  UserSessionSwitchLeaveCrit();
  v9 = a3;
LABEL_57:
  if ( !MonitorDC && a5 && v12 )
  {
    if ( (int)IsUMPD_ldevLoadDriverSupported() < 0 )
    {
      DriverWrap = 0LL;
    }
    else
    {
      LOBYTE(v33) = 2;
      DriverWrap = (struct _LDEV *)UMPD_ldevLoadDriverWrap(*(_QWORD *)(v12 + 24), v33);
    }
    if ( DriverWrap )
    {
      PDEVOBJ::PDEVOBJ(
        (PDEVOBJ *)&v41,
        DriverWrap,
        v10,
        SourceString,
        *(unsigned __int16 **)(v12 + 32),
        *(unsigned __int16 **)(v12 + 8),
        a5,
        a6,
        0LL,
        0LL,
        v40,
        0,
        0);
      v35 = v41;
      if ( v41 )
      {
        _m_prefetchw((const void *)(v41 + 32));
        do
          v36 = *(_DWORD *)(v35 + 32);
        while ( v36 != _InterlockedCompareExchange((volatile signed __int32 *)(v35 + 32), v36 | 0x80, v36) );
        MonitorDC = (HDC)GreCreateDisplayDC(v41, v9, 1LL);
        if ( MonitorDC )
        {
          v37 = (_QWORD *)a8;
          if ( a8 )
          {
            v38 = (CTouchProcessor *)a8;
            if ( a8 >= (unsigned __int64)W32UserProbeAddress )
              v38 = W32UserProbeAddress;
            *(_QWORD *)v38 = *(_QWORD *)v38;
            *v37 = *(_QWORD *)(v41 + 1816);
          }
        }
        PDEVOBJ::vUnreferencePdev(&v41, 0LL);
      }
      else if ( (int)IsUMPD_ldevUnloadImageSupported() >= 0 )
      {
        UMPD_ldevUnloadImageWrap(DriverWrap);
      }
    }
    else
    {
      EngSetLastError(0x77u);
    }
  }
  return MonitorDC;
}
