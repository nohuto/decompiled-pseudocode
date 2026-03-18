/*
 * XREFs of NtGdiGetGammaRampCapability @ 0x1C00764C0
 * Callers:
 *     <none>
 * Callees:
 *     DrvDisplayConfigGetDeviceInfo @ 0x1C0026310 (DrvDisplayConfigGetDeviceInfo.c)
 *     ?vUnlock@NEEDGRELOCK@@QEAAXXZ @ 0x1C003CB30 (-vUnlock@NEEDGRELOCK@@QEAAXXZ.c)
 *     ?vLock@NEEDGRELOCK@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C003CB80 (-vLock@NEEDGRELOCK@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C003CD58 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x1C003CDE0 (-pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ.c)
 *     ?bGammaRampCapable@PDEVOBJ@@QEAAHXZ @ 0x1C003DFE8 (-bGammaRampCapable@PDEVOBJ@@QEAAHXZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0042C1C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C004BE80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C004C224 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0057A50 (EtwTraceAcquiredSharedUserCrit.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0070260 (EtwTraceGreLockReleaseSemaphore.c)
 *     GetMonitorPhysicalDimensions @ 0x1C00784F0 (GetMonitorPhysicalDimensions.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiGetGammaRampCapability(struct HOBJ__ *a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v7; // rdi
  struct tagTHREADINFO **v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  PVOID CurrentProcess; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rdi
  __int64 v17; // r10
  int v18; // r10d
  int v19; // r8d
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  PVOID v26; // rcx
  _BYTE v27[4]; // [rsp+30h] [rbp-9h] BYREF
  int v28; // [rsp+34h] [rbp-5h] BYREF
  __int64 v29; // [rsp+38h] [rbp-1h] BYREF
  __int64 v30; // [rsp+40h] [rbp+7h] BYREF
  int v31; // [rsp+48h] [rbp+Fh]
  int v32; // [rsp+4Ch] [rbp+13h]
  char v33; // [rsp+50h] [rbp+17h] BYREF
  char v34; // [rsp+54h] [rbp+1Bh] BYREF
  PERESOURCE v35; // [rsp+58h] [rbp+1Fh] BYREF
  int v36[2]; // [rsp+60h] [rbp+27h] BYREF
  __int64 v37; // [rsp+68h] [rbp+2Fh]
  int v38; // [rsp+70h] [rbp+37h]
  char v39; // [rsp+74h] [rbp+3Bh]

  v1 = 0;
  v31 = 0;
  v32 = 0;
  XDCOBJ::vLock((XDCOBJ *)&v30, a1);
  if ( v30 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v3, v2, v4, v5);
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
        v26 = gpsemRITBlockedOnDITWaiters;
      }
      else
      {
        if ( gbDITInHitTest != 1 || v7 == gptiRit )
          break;
        _InterlockedIncrement(&gcDITHitTestWaiters);
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        v26 = gpsemDITHitTestWaiters;
      }
      KeWaitForSingleObject(v26, UserRequest, 0, 0, 0LL);
    }
    EtwTraceAcquiredSharedUserCrit(v13, v12, v14, v15);
    v16 = v30;
    if ( !*(_DWORD *)(v30 + 32) )
    {
      DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)v27);
      NEEDGRELOCK::vLock((NEEDGRELOCK *)&v35, (struct XDCOBJ *)&v30);
      v17 = *(_QWORD *)(v16 + 48);
      v28 = 0;
      v29 = v17;
      v1 = PDEVOBJ::bGammaRampCapable((PDEVOBJ *)&v29);
      if ( v1
        && (unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v29)
        && (int)GetMonitorPhysicalDimensions(v18, (unsigned int)&v34, (unsigned int)&v33, (unsigned int)&v28, 0LL) >= 0 )
      {
        v36[1] = 32;
        v36[0] = 9;
        v37 = (__int64)*PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v29);
        v38 = v28;
        if ( (int)DrvDisplayConfigGetDeviceInfo(v36) >= 0 )
          v1 = ((unsigned __int8)~v39 >> 1) & 1;
      }
      else
      {
        v1 = 0;
      }
      NEEDGRELOCK::vUnlock(&v35);
      EtwTraceGreLockReleaseSemaphore((__int64)L"ghsemDynamicModeChange", (int)ghsemDynamicModeChange, v19);
      if ( ghsemDynamicModeChange )
      {
        ExReleaseResourceAndLeaveCriticalRegion(ghsemDynamicModeChange);
        PsLeavePriorityRegion(v20);
      }
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)&v30);
    UserSessionSwitchLeaveCrit(v22, v21, v23, v24);
  }
  return v1;
}
