/*
 * XREFs of NtHWCursorUpdatePointer @ 0x1C00F1DF0
 * Callers:
 *     <none>
 * Callees:
 *     UserGetHDevFromMonitor @ 0x1C0026E6C (UserGetHDevFromMonitor.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C00386EC (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x1C0038770 (-pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ.c)
 *     PALLOCMEM2 @ 0x1C003F7F8 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0040090 (Win32FreePool.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00A21C0 (memmove.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

__int64 __fastcall NtHWCursorUpdatePointer(CTouchProcessor *a1, CTouchProcessor *a2, __int64 a3)
{
  CTouchProcessor *v3; // rsi
  CTouchProcessor *v4; // rdi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v6; // rbx
  int v7; // r14d
  struct tagTHREADINFO **v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  PVOID CurrentProcess; // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  _BOOL8 v17; // rdx
  PRKSEMAPHORE v18; // rcx
  __int64 v19; // r14
  LARGE_INTEGER v20; // rcx
  LARGE_INTEGER v21; // rbx
  LARGE_INTEGER v22; // r8
  char v23; // al
  unsigned int v24; // edi
  __int64 HDevFromMonitor; // rax
  __int64 v27; // rdi
  int v28; // ebx
  bool v29; // sf
  CTouchProcessor *v30; // rbx
  int v31; // r13d
  int v32; // r15d
  int v33; // r14d
  size_t v34; // r12
  void *v35; // rax
  __int64 v36; // rsi
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-C8h]
  __int64 v38; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v39; // [rsp+38h] [rbp-B0h]
  __int128 v40; // [rsp+48h] [rbp-A0h]
  void *v41; // [rsp+58h] [rbp-90h]
  __int128 v42; // [rsp+60h] [rbp-88h]
  __int64 v43; // [rsp+70h] [rbp-78h]
  int v44; // [rsp+78h] [rbp-70h]
  int v45; // [rsp+7Ch] [rbp-6Ch]
  int v46; // [rsp+80h] [rbp-68h]
  int v47; // [rsp+84h] [rbp-64h]
  int v48; // [rsp+88h] [rbp-60h]
  __int64 v49; // [rsp+90h] [rbp-58h]
  __int64 v50; // [rsp+98h] [rbp-50h]
  int v51; // [rsp+A0h] [rbp-48h]
  __int64 v52; // [rsp+A4h] [rbp-44h]
  int v53; // [rsp+ACh] [rbp-3Ch]

  v3 = a2;
  v4 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v6 = 0LL;
  do
  {
    v7 = 0;
    v8 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v8 )
      v6 = *v8;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v10, v9, v11, v12);
    v17 = 0LL;
    if ( CurrentProcess )
      v17 = CurrentProcess == g_pepDwm;
    if ( v17
      || (PVOID)PsGetCurrentProcess(v14, v17, v15, v16) == gpepCSRSS && v6 != (struct tagTHREADINFO *)gptiTSRequest )
    {
      break;
    }
    if ( !gbRITBlockedOnDIT )
    {
      if ( gbDITInHitTest != 1 || v6 == gptiRit )
        continue;
      _InterlockedAdd(&gcDITHitTestWaiters, 1u);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v18 = (PRKSEMAPHORE)gpsemDITHitTestWaiters;
      goto LABEL_17;
    }
    if ( v6 != gptiRit )
    {
      _InterlockedAdd(&gcRITBlockedOnDITWaiters, 1u);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v18 = gpsemRITBlockedOnDITWaiters;
LABEL_17:
      KeWaitForSingleObject(v18, UserRequest, 0, 0, 0LL);
      v7 = 1;
    }
  }
  while ( v7 == 1 );
  v19 = PsGetCurrentThreadWin32Thread(v14, v17, v15);
  if ( v19 )
  {
    v21 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v19 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
    {
      if ( (unsigned __int8)(byte_1C0186D98 - 1) <= 2u
        || (qword_1C0186D80 & 0x200000010000000LL) == 0
        || (v23 = 1, (qword_1C0186D88 & 0x200000010000000LL) != qword_1C0186D88) )
      {
        v23 = 0;
      }
      if ( v23 && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        LODWORD(Timeout) = 0;
        LOBYTE(v20.LowPart) = byte_1C0186D98 - 1;
        Template_xqx(
          v20.QuadPart,
          &AcquiredSharedUserCritEvent,
          v22.QuadPart,
          v21.QuadPart,
          Timeout,
          gullUserCritAcquireToken);
      }
    }
    if ( v21.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      LODWORD(Timeout) = 1000 * v21.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        (__int64)gullUserCritAcquireToken,
        &AcquiredSharedUserCritTelemetryEvent,
        v22.QuadPart,
        0LL,
        Timeout,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v19 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  if ( !(unsigned int)IsHWCursorUpdatePointerSupported() && !gbOSTestSigningEnabled )
  {
    v24 = -1073741822;
    goto LABEL_37;
  }
  if ( !v4 )
  {
LABEL_36:
    v24 = -1073741811;
    goto LABEL_37;
  }
  if ( v4 >= W32UserProbeAddress )
    v4 = W32UserProbeAddress;
  v42 = *(_OWORD *)v4;
  v43 = *((_QWORD *)v4 + 2);
  HDevFromMonitor = UserGetHDevFromMonitor();
  v27 = HDevFromMonitor;
  if ( !HDevFromMonitor )
  {
LABEL_41:
    UserSessionSwitchLeaveCrit();
    return 3221225485LL;
  }
  v38 = HDevFromMonitor;
  if ( (*(_DWORD *)(HDevFromMonitor + 32) & 0x20401) != 1 || !(unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v38) )
  {
    v28 = -1073741811;
LABEL_62:
    UserSessionSwitchLeaveCrit();
    return (unsigned int)v28;
  }
  v52 = *((_QWORD *)&v42 + 1);
  v51 = *(_DWORD *)(*(_QWORD *)(v27 + 2592) + 272LL);
  v53 = v43 & 1;
  if ( !v3 )
  {
    PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v38);
    v28 = _guard_dispatch_icall_fptr();
    v29 = v28 < 0;
    goto LABEL_46;
  }
  if ( v3 >= W32UserProbeAddress )
    v3 = W32UserProbeAddress;
  v39 = *(_OWORD *)v3;
  v40 = *((_OWORD *)v3 + 1);
  if ( (_DWORD)v39 != 1 )
    goto LABEL_41;
  v30 = (CTouchProcessor *)*((_QWORD *)&v40 + 1);
  if ( !*((_QWORD *)&v40 + 1) )
    goto LABEL_41;
  v31 = DWORD1(v39);
  if ( DWORD1(v39) > 0x100 )
    goto LABEL_36;
  v32 = DWORD2(v39);
  if ( DWORD2(v39) > 0x100 )
    goto LABEL_36;
  v33 = HIDWORD(v39);
  if ( HIDWORD(v39) > 0x800 )
    goto LABEL_36;
  v34 = (unsigned int)(DWORD2(v39) * HIDWORD(v39));
  v35 = PALLOCMEM2(v34, 1886221383LL, 1);
  v36 = (__int64)v35;
  v41 = v35;
  if ( v35 )
  {
    if ( v30 >= W32UserProbeAddress )
      v30 = W32UserProbeAddress;
    memmove(v35, v30, v34);
    v44 = 2;
    v45 = v31;
    v46 = v32;
    v47 = v33;
    v48 = *(_DWORD *)(*(_QWORD *)(v27 + 2592) + 272LL);
    v49 = v36;
    v50 = v40;
    PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v38);
    v28 = _guard_dispatch_icall_fptr();
    Win32FreePool(v36);
    v29 = v28 < 0;
LABEL_46:
    if ( v29 )
      v28 = -1073741823;
    goto LABEL_62;
  }
  v24 = -1073741823;
LABEL_37:
  UserSessionSwitchLeaveCrit();
  return v24;
}
