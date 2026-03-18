/*
 * XREFs of hdcOpenDCW @ 0x1C005A170
 * Callers:
 *     NtGdiOpenDCW @ 0x1C0059EE0 (NtGdiOpenDCW.c)
 * Callees:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z @ 0x1C003CFC0 (-vUnreferencePdev@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1C003D3C0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEAG22PEAXPEAUtagREMOTETYPEONENODE@@PEAU_GDIINFO@@.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C004AAC0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004CA74 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     GreCreateDisplayDC @ 0x1C0055870 (GreCreateDisplayDC.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0057A50 (EtwTraceAcquiredSharedUserCrit.c)
 *     DrvGetHDEV @ 0x1C005A5C0 (DrvGetHDEV.c)
 *     ??0DYNAMICMODECHANGELOCK@@QEAA@XZ @ 0x1C005A7C0 (--0DYNAMICMODECHANGELOCK@@QEAA@XZ.c)
 *     UserGetMonitorDC @ 0x1C005A800 (UserGetMonitorDC.c)
 *     bDeleteDCInternal @ 0x1C0061E40 (bDeleteDCInternal.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 *     EngSetLastError @ 0x1C008AC50 (EngSetLastError.c)
 *     DrvDestroyMDEV @ 0x1C008C00C (DrvDestroyMDEV.c)
 *     UserGetCurrentDesktopId @ 0x1C00DB8C4 (UserGetCurrentDesktopId.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00F63C4 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHHPEAUD3DKMT_GET.c)
 */

struct HOBJ__ *__fastcall hdcOpenDCW(
        unsigned __int16 *SourceString,
        struct _devicemodeW *a2,
        unsigned int a3,
        int a4,
        void *a5,
        struct tagREMOTETYPEONENODE *a6,
        __int64 a7,
        ULONG64 a8,
        int a9)
{
  struct _devicemodeW *v9; // r15
  unsigned __int16 *v10; // r13
  struct HOBJ__ *MonitorDC; // rbx
  __int64 v12; // r14
  struct _MDEV *v13; // rdi
  PDEV **HDEV; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // r15
  struct tagTHREADINFO *v20; // r15
  int v21; // r13d
  struct tagTHREADINFO **v22; // rax
  PVOID CurrentProcess; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  _BOOL8 v27; // rcx
  __int64 v28; // rax
  int v29; // r8d
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  PERESOURCE v33; // rcx
  __int64 v35; // rdx
  struct _LDEV *DriverWrap; // rdi
  PDEV **v37; // rcx
  signed __int32 v38; // ett
  _QWORD *v39; // r8
  _QWORD *v40; // rdx
  int v41; // r8d
  PVOID v42; // rcx
  BOOL v43; // [rsp+70h] [rbp-88h]
  PDEV **v44; // [rsp+78h] [rbp-80h] BYREF
  void *v45; // [rsp+80h] [rbp-78h] BYREF
  PDEV **v46; // [rsp+88h] [rbp-70h] BYREF
  PDEV **v47; // [rsp+90h] [rbp-68h] BYREF
  struct _UNICODE_STRING v48; // [rsp+98h] [rbp-60h] BYREF
  _QWORD v49[10]; // [rsp+A8h] [rbp-50h] BYREF

  v9 = a2;
  v10 = SourceString;
  MonitorDC = 0LL;
  v12 = a7;
  v43 = a7 != 0;
  if ( !SourceString || a7 )
    goto LABEL_31;
  v13 = 0LL;
  HDEV = 0LL;
  RtlInitUnicodeString(&v48, SourceString);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v16, v15, v17, v18);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v20 = 0LL;
  do
  {
    v21 = 0;
    v22 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v22 )
      v20 = *v22;
    CurrentProcess = (PVOID)PsGetCurrentProcess();
    v27 = 0LL;
    if ( CurrentProcess )
      v27 = CurrentProcess == g_pepDwm;
    if ( v27 || (PVOID)PsGetCurrentProcess() == gpepCSRSS && v20 != (struct tagTHREADINFO *)gptiTSRequest )
      break;
    if ( !gbRITBlockedOnDIT )
    {
      if ( gbDITInHitTest != 1 || v20 == gptiRit )
        continue;
      _InterlockedAdd(&gcDITHitTestWaiters, 1u);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v42 = gpsemDITHitTestWaiters;
      goto LABEL_57;
    }
    if ( v20 != gptiRit )
    {
      _InterlockedAdd(&gcRITBlockedOnDITWaiters, 1u);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v42 = gpsemRITBlockedOnDITWaiters;
LABEL_57:
      KeWaitForSingleObject(v42, UserRequest, 0, 0, 0LL);
      v21 = 1;
    }
  }
  while ( v21 == 1 );
  EtwTraceAcquiredSharedUserCrit(v27, v24, v25, v26);
  DYNAMICMODECHANGELOCK::DYNAMICMODECHANGELOCK((DYNAMICMODECHANGELOCK *)&a7);
  if ( a9 )
  {
    HDEV = (PDEV **)DrvGetHDEV(&v48);
    v9 = a2;
  }
  else
  {
    v9 = a2;
    if ( a2 )
    {
      v13 = DrvCreateMDEV(&v48, a2, (void *)0xFFFFFFFFLL, 3u, 0LL, 0, 0, 0, 0LL);
      if ( !v13 && (unsigned int)UserGetCurrentDesktopId(&v45) )
        v13 = DrvCreateMDEV(&v48, a2, v45, 3u, 0LL, 0, 0, 0, 0LL);
      if ( v13 )
        HDEV = (PDEV **)*((_QWORD *)v13 + 4);
    }
    else
    {
      v28 = DrvGetHDEV(&v48);
      HDEV = (PDEV **)v28;
      if ( !a3 && a4 )
        MonitorDC = (struct HOBJ__ *)UserGetMonitorDC(v28);
    }
  }
  if ( HDEV )
  {
    if ( MonitorDC || (MonitorDC = (struct HOBJ__ *)GreCreateDisplayDC((__int64)HDEV, 0, 0)) != 0LL )
    {
      DCOBJ::DCOBJ((DCOBJ *)v49, MonitorDC);
      if ( v49[0] )
      {
        v46 = *(PDEV ***)(v49[0] + 48LL);
        if ( v46 )
          PDEVOBJ::vUnreferencePdev(&v46, 0, v29);
      }
      DCOBJ::~DCOBJ((DCOBJ *)v49);
    }
    else if ( v13 )
    {
      DrvDestroyMDEV(v13);
    }
    else
    {
      v47 = HDEV;
      PDEVOBJ::vUnreferencePdev(&v47, 0, v41);
    }
  }
  if ( v13 )
    Win32FreePool((__int64)v13);
  EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  v33 = ghsemDynamicModeChange;
  if ( ghsemDynamicModeChange )
  {
    ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
    PsLeavePriorityRegion();
  }
  UserSessionSwitchLeaveCrit((__int64)v33, v30, v31, v32);
  v10 = SourceString;
LABEL_31:
  if ( !MonitorDC && a5 && v12 )
  {
    if ( (int)IsUMPD_ldevLoadDriverSupported() < 0 )
    {
      DriverWrap = 0LL;
    }
    else
    {
      LOBYTE(v35) = 2;
      DriverWrap = (struct _LDEV *)UMPD_ldevLoadDriverWrap(*(_QWORD *)(v12 + 24), v35);
    }
    if ( DriverWrap )
    {
      PDEVOBJ::PDEVOBJ(
        (PDEVOBJ *)&v44,
        DriverWrap,
        v9,
        v10,
        *(unsigned __int16 **)(v12 + 32),
        *(unsigned __int16 **)(v12 + 8),
        a5,
        a6,
        0LL,
        0LL,
        v43,
        0,
        0);
      v37 = v44;
      if ( v44 )
      {
        _m_prefetchw(v44 + 4);
        do
          v38 = *((_DWORD *)v37 + 8);
        while ( v38 != _InterlockedCompareExchange((volatile signed __int32 *)v37 + 8, v38 | 0x80, v38) );
        MonitorDC = (struct HOBJ__ *)GreCreateDisplayDC((__int64)v44, a3, 1);
        if ( MonitorDC )
        {
          v39 = (_QWORD *)a8;
          if ( a8 )
          {
            v40 = (_QWORD *)a8;
            if ( a8 >= MmUserProbeAddress )
              v40 = (_QWORD *)MmUserProbeAddress;
            *v40 = *v40;
            *v39 = v44[227];
          }
        }
        PDEVOBJ::vUnreferencePdev(&v44, 0, (int)v39);
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
