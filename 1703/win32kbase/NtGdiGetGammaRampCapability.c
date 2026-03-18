/*
 * XREFs of NtGdiGetGammaRampCapability @ 0x1C00FAD40
 * Callers:
 *     <none>
 * Callees:
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C000D740 (DrvDisplayConfigGetDeviceInfo.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C002EB80 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0031A40 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0031DF4 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0037A10 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0037A44 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C00386EC (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x1C0038770 (-pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ.c)
 *     ?bGammaRampCapable@PDEVOBJ@@QEAAHXZ @ 0x1C0038ED4 (-bGammaRampCapable@PDEVOBJ@@QEAAHXZ.c)
 *     GetMonitorPhysicalDimensions @ 0x1C0062D40 (GetMonitorPhysicalDimensions.c)
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x1C007BC60 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C007BCB0 (-vLock@NEEDGRELOCK@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

_BOOL8 __fastcall NtGdiGetGammaRampCapability(HDC a1)
{
  BOOL v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v6; // rdi
  struct tagTHREADINFO **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  PRKSEMAPHORE v12; // rcx
  __int64 v13; // rsi
  LARGE_INTEGER v14; // rcx
  LARGE_INTEGER v15; // rdi
  LARGE_INTEGER v16; // r8
  __int64 v17; // rdi
  __int64 v18; // r10
  __int64 v19; // r10
  DYNAMICMODECHANGESHARELOCK *v20; // rcx
  __int64 v22; // [rsp+28h] [rbp-19h]
  _BYTE v23[4]; // [rsp+38h] [rbp-9h] BYREF
  int v24; // [rsp+3Ch] [rbp-5h] BYREF
  __int64 v25; // [rsp+40h] [rbp-1h] BYREF
  __int64 v26; // [rsp+48h] [rbp+7h] BYREF
  int v27; // [rsp+50h] [rbp+Fh]
  int v28; // [rsp+54h] [rbp+13h]
  int v29; // [rsp+58h] [rbp+17h] BYREF
  int v30; // [rsp+5Ch] [rbp+1Bh] BYREF
  PERESOURCE v31; // [rsp+60h] [rbp+1Fh] BYREF
  int v32[2]; // [rsp+68h] [rbp+27h] BYREF
  __int64 v33; // [rsp+70h] [rbp+2Fh]
  int v34; // [rsp+78h] [rbp+37h]
  char v35; // [rsp+7Ch] [rbp+3Bh]

  v1 = 0;
  v27 = 0;
  v28 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v26, a1);
  if ( v26 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v3, v2, v4);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v6 = 0LL;
    while ( 1 )
    {
      v7 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
      if ( v7 )
        v6 = *v7;
      if ( IsCurrentProcessDwm()
        || (PVOID)PsGetCurrentProcess(v9, v8, v10, v11) == gpepCSRSS && v6 != (struct tagTHREADINFO *)gptiTSRequest )
      {
        break;
      }
      if ( gbRITBlockedOnDIT )
      {
        if ( v6 == gptiRit )
          break;
        _InterlockedIncrement(&gcRITBlockedOnDITWaiters);
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        v12 = gpsemRITBlockedOnDITWaiters;
      }
      else
      {
        if ( gbDITInHitTest != 1 || v6 == gptiRit )
          break;
        _InterlockedIncrement(&gcDITHitTestWaiters);
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        v12 = (PRKSEMAPHORE)gpsemDITHitTestWaiters;
      }
      KeWaitForSingleObject(v12, UserRequest, 0, 0, 0LL);
    }
    v13 = PsGetCurrentThreadWin32Thread(v9, v8, v10);
    if ( v13 )
    {
      v15 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v13 + 8));
      if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
        && (qword_1C0186D80 & 0x200000010000000LL) != 0
        && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        LODWORD(v22) = 0;
        Template_xqx(
          v14.QuadPart,
          &AcquiredSharedUserCritEvent,
          v16.QuadPart,
          v15.QuadPart,
          v22,
          gullUserCritAcquireToken);
      }
      if ( v15.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
        && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
      {
        LODWORD(v22) = 1000 * v15.QuadPart / gliQpcFreq.QuadPart;
        Template_xqx(
          1000 * v15.QuadPart / gliQpcFreq.QuadPart,
          &AcquiredSharedUserCritTelemetryEvent,
          v16.QuadPart,
          0LL,
          v22,
          gullUserCritAcquireToken);
      }
      *(_QWORD *)(v13 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
    }
    v17 = v26;
    if ( !*(_DWORD *)(v26 + 32) )
    {
      DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v23);
      NEEDGRELOCK::vLock((NEEDGRELOCK *)&v31, (struct XDCOBJ *)&v26);
      v18 = *(_QWORD *)(v17 + 48);
      v24 = 0;
      v25 = v18;
      v1 = PDEVOBJ::bGammaRampCapable((PDEVOBJ *)&v25);
      if ( v1
        && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v25)
        && (int)GetMonitorPhysicalDimensions(v19, &v30, &v29, &v24) >= 0 )
      {
        v32[1] = 32;
        v32[0] = 9;
        v33 = (__int64)*PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v25);
        v34 = v24;
        if ( (int)DrvDisplayConfigGetDeviceInfo(v32) >= 0 )
          v1 = ((unsigned __int8)~v35 >> 1) & 1;
      }
      else
      {
        v1 = 0;
      }
      NEEDGRELOCK::vUnlock(&v31);
      DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v20);
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)&v26);
    UserSessionSwitchLeaveCrit();
  }
  return v1;
}
