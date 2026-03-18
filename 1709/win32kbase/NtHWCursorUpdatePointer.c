/*
 * XREFs of NtHWCursorUpdatePointer @ 0x1C00F4B30
 * Callers:
 *     <none>
 * Callees:
 *     ?bLddmDriver@PDEVOBJ@@QEAAHXZ @ 0x1C003CD58 (-bLddmDriver@PDEVOBJ@@QEAAHXZ.c)
 *     ?pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ @ 0x1C003CDE0 (-pAdapterLuid@PDEVOBJ@@QEAAPEAU_LUID@@XZ.c)
 *     PALLOCMEM2 @ 0x1C0040604 (PALLOCMEM2.c)
 *     Win32FreePool @ 0x1C0041890 (Win32FreePool.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0057A50 (EtwTraceAcquiredSharedUserCrit.c)
 *     UserGetHDevFromMonitor @ 0x1C005B6C0 (UserGetHDevFromMonitor.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C00AB840 (memmove.c)
 */

__int64 __fastcall NtHWCursorUpdatePointer(ULONG64 a1, __int128 *a2, __int64 a3, __int64 a4)
{
  __int128 *v4; // rsi
  ULONG64 v5; // rbx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v7; // rdi
  int v8; // r14d
  struct tagTHREADINFO **v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  PVOID CurrentProcess; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  _BOOL8 v16; // rcx
  PVOID v17; // rcx
  __int64 v18; // rdx
  ULONG64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned int v22; // edi
  __int64 HDevFromMonitor; // rax
  __int64 v25; // rbx
  int v26; // eax
  struct _LUID *v27; // rax
  int v28; // ebx
  bool v29; // sf
  const void *v30; // rdi
  int v31; // r13d
  int v32; // r15d
  int v33; // r14d
  size_t v34; // r12
  void *v35; // rsi
  struct _LUID *v36; // rax
  __int64 v37; // [rsp+30h] [rbp-B8h] BYREF
  __int128 v38; // [rsp+38h] [rbp-B0h]
  __int128 v39; // [rsp+48h] [rbp-A0h]
  void *v40; // [rsp+58h] [rbp-90h]
  __int128 v41; // [rsp+60h] [rbp-88h]
  __int64 v42; // [rsp+70h] [rbp-78h]
  _DWORD v43[6]; // [rsp+78h] [rbp-70h] BYREF
  void *v44; // [rsp+90h] [rbp-58h]
  __int64 v45; // [rsp+98h] [rbp-50h]
  int v46; // [rsp+A0h] [rbp-48h] BYREF
  __int64 v47; // [rsp+A4h] [rbp-44h]
  int v48; // [rsp+ACh] [rbp-3Ch]

  v4 = a2;
  v5 = a1;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3, a4);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v7 = 0LL;
  do
  {
    v8 = 0;
    v9 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
    if ( v9 )
      v7 = *v9;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v11, v10);
    v16 = 0LL;
    if ( CurrentProcess )
      v16 = CurrentProcess == g_pepDwm;
    if ( v16 || (PVOID)PsGetCurrentProcess(v16, v13) == gpepCSRSS && v7 != (struct tagTHREADINFO *)gptiTSRequest )
      break;
    if ( !gbRITBlockedOnDIT )
    {
      if ( gbDITInHitTest != 1 || v7 == gptiRit )
        continue;
      _InterlockedAdd(&gcDITHitTestWaiters, 1u);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v17 = gpsemDITHitTestWaiters;
      goto LABEL_17;
    }
    if ( v7 != gptiRit )
    {
      _InterlockedAdd(&gcRITBlockedOnDITWaiters, 1u);
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      v17 = gpsemRITBlockedOnDITWaiters;
LABEL_17:
      KeWaitForSingleObject(v17, UserRequest, 0, 0, 0LL);
      v8 = 1;
    }
  }
  while ( v8 == 1 );
  EtwTraceAcquiredSharedUserCrit(v16, v13, v14, v15);
  if ( !(unsigned int)IsHWCursorUpdatePointerSupported() && !gbOSTestSigningEnabled )
  {
    v22 = -1073741822;
    goto LABEL_24;
  }
  if ( !v5 )
  {
LABEL_23:
    v22 = -1073741811;
    goto LABEL_24;
  }
  if ( v5 >= MmUserProbeAddress )
    v5 = MmUserProbeAddress;
  v41 = *(_OWORD *)v5;
  v42 = *(_QWORD *)(v5 + 16);
  HDevFromMonitor = UserGetHDevFromMonitor(v41);
  v25 = HDevFromMonitor;
  if ( !HDevFromMonitor )
  {
LABEL_28:
    UserSessionSwitchLeaveCrit(v19, v18, v20, v21);
    return 3221225485LL;
  }
  v37 = HDevFromMonitor;
  v26 = *(_DWORD *)(HDevFromMonitor + 32);
  if ( (v26 & 1) == 0
    || (v18 = 1024LL, (v26 & 0x400) != 0)
    || (v26 & 0x20000) != 0
    || !(unsigned int)PDEVOBJ::bLddmDriver((PDEVOBJ *)&v37) )
  {
    v28 = -1073741811;
LABEL_51:
    UserSessionSwitchLeaveCrit(v19, v18, v20, v21);
    return (unsigned int)v28;
  }
  v47 = *((_QWORD *)&v41 + 1);
  v46 = *(_DWORD *)(*(_QWORD *)(v25 + 2592) + 272LL);
  v48 = v42 & 1;
  if ( !v4 )
  {
    v27 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v37);
    v28 = ((__int64 (__fastcall *)(struct _LUID *, int *, _QWORD))qword_1C0190A98)(v27, &v46, 0LL);
    v29 = v28 < 0;
    goto LABEL_35;
  }
  v19 = MmUserProbeAddress;
  if ( (unsigned __int64)v4 >= MmUserProbeAddress )
    v4 = (__int128 *)MmUserProbeAddress;
  v38 = *v4;
  v39 = v4[1];
  if ( (_DWORD)v38 != 1 )
    goto LABEL_28;
  v30 = (const void *)*((_QWORD *)&v39 + 1);
  if ( !*((_QWORD *)&v39 + 1) )
    goto LABEL_28;
  v31 = DWORD1(v38);
  if ( DWORD1(v38) > 0x100 )
    goto LABEL_23;
  v32 = DWORD2(v38);
  if ( DWORD2(v38) > 0x100 )
    goto LABEL_23;
  v33 = HIDWORD(v38);
  if ( HIDWORD(v38) > (unsigned int)v18 )
    goto LABEL_23;
  v34 = (unsigned int)(DWORD2(v38) * HIDWORD(v38));
  v35 = PALLOCMEM2(v34, 1886221383LL, 1);
  v40 = v35;
  if ( v35 )
  {
    if ( (unsigned __int64)v30 >= MmUserProbeAddress )
      v30 = (const void *)MmUserProbeAddress;
    memmove(v35, v30, v34);
    v43[0] = 2;
    v43[1] = v31;
    v43[2] = v32;
    v43[3] = v33;
    v43[4] = *(_DWORD *)(*(_QWORD *)(v25 + 2592) + 272LL);
    v44 = v35;
    v45 = v39;
    v36 = PDEVOBJ::pAdapterLuid((PDEVOBJ *)&v37);
    v28 = ((__int64 (__fastcall *)(struct _LUID *, int *, _DWORD *, _QWORD))qword_1C0190AA0)(v36, &v46, v43, 0LL);
    Win32FreePool((__int64)v35);
    v29 = v28 < 0;
LABEL_35:
    if ( v29 )
      v28 = -1073741823;
    goto LABEL_51;
  }
  v22 = -1073741823;
LABEL_24:
  UserSessionSwitchLeaveCrit(v19, v18, v20, v21);
  return v22;
}
