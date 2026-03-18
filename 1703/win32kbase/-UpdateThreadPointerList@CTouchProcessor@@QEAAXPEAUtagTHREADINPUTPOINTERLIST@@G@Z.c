/*
 * XREFs of ?UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C006E080
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionFindThreadPointerData @ 0x1C0004628 (ApiSetEditionFindThreadPointerData.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     EtwTraceReleaseUserCrit @ 0x1C002ECD4 (EtwTraceReleaseUserCrit.c)
 *     W32GetThreadWin32Thread @ 0x1C002F210 (W32GetThreadWin32Thread.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 *     ?WaitForGuard@CInpLockGuard@@QEAAJXZ @ 0x1C012ACC0 (-WaitForGuard@CInpLockGuard@@QEAAJXZ.c)
 *     ApiSetEditionUnlinkAndFreeThreadPointerData @ 0x1C013CA0C (ApiSetEditionUnlinkAndFreeThreadPointerData.c)
 */

void __fastcall CTouchProcessor::UpdateThreadPointerList(
        CTouchProcessor *this,
        struct tagTHREADINPUTPOINTERLIST *a2,
        unsigned __int16 a3)
{
  char *v5; // rbx
  int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  int IsResourceAcquiredExclusiveLite; // r13d
  _BOOL8 v11; // r12
  __int64 *ThreadWin32Thread; // rax
  struct tagTHREADINPUTPOINTERLIST *v13; // rdx
  __int64 v14; // rax
  PDEVICE_OBJECT v15; // rcx
  struct _ERESOURCE *v16; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rax
  struct tagTHREADINFO *v18; // rbp
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rsi
  int v23; // ecx
  LARGE_INTEGER v24; // rdi
  int v25; // r8d
  struct tagTHREADINFO *v26; // rdi
  struct tagTHREADINFO **v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  PVOID CurrentProcess; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  PRKSEMAPHORE v37; // rcx
  __int64 v38; // rsi
  int v39; // ecx
  LARGE_INTEGER v40; // rdi
  int v41; // r8d
  struct _ERESOURCE *v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  int v46; // r9d
  __int64 v47; // rsi
  struct tagTHREADINPUTPOINTERLIST *v48; // rdi
  __int64 v49; // rcx
  BOOL v50; // r8d
  struct tagTHREADINPUTPOINTERLIST *v51; // [rsp+68h] [rbp+10h]

  v51 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      11,
      102,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
  }
  v5 = (char *)this + 200;
  v6 = 0;
  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresUser);
  v11 = qword_1C018E820 == (_QWORD)KeGetCurrentThread();
  while ( 1 )
  {
    if ( v6 )
    {
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v8, v7, v9);
      if ( IsResourceAcquiredExclusiveLite )
      {
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        v18 = EnterCritAvoidingDitHitTestHazard(0, 1);
        v22 = PsGetCurrentThreadWin32Thread(v20, v19, v21);
        if ( v22 )
        {
          v24 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v22 + 8));
          if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
            && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
            && (qword_1C0186D80 & 0x200000010000000LL) != 0
            && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
            && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
          {
            LOBYTE(v23) = byte_1C0186D98 - 1;
            Template_xqx(
              v23,
              (unsigned int)&AcquiredExclusiveUserCritEvent,
              v25,
              v24.LowPart,
              0,
              (char)gullUserCritAcquireToken);
          }
          if ( v24.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
            && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
          {
            Template_xqx(
              (_DWORD)gullUserCritAcquireToken,
              (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
              v25,
              0,
              1000 * v24.QuadPart / gliQpcFreq.QuadPart,
              (char)gullUserCritAcquireToken);
          }
          *(_QWORD *)(v22 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
        }
        gptiCurrent = v18;
        gbValidateHandleForIL = 1;
      }
      else
      {
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        v26 = 0LL;
        while ( 1 )
        {
          v27 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
          if ( v27 )
            v26 = *v27;
          CurrentProcess = (PVOID)PsGetCurrentProcess(v29, v28, v30, v31);
          if ( CurrentProcess )
          {
            if ( CurrentProcess == g_pepDwm )
              break;
          }
          if ( (PVOID)PsGetCurrentProcess(v34, v33, v35, v36) == gpepCSRSS
            && v26 != (struct tagTHREADINFO *)gptiTSRequest )
          {
            break;
          }
          if ( gbRITBlockedOnDIT )
          {
            if ( v26 == gptiRit )
              break;
            _InterlockedAdd(&gcRITBlockedOnDITWaiters, 1u);
            ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
            v37 = gpsemRITBlockedOnDITWaiters;
          }
          else
          {
            if ( gbDITInHitTest != 1 || v26 == gptiRit )
              break;
            _InterlockedAdd(&gcDITHitTestWaiters, 1u);
            ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
            v37 = (PRKSEMAPHORE)gpsemDITHitTestWaiters;
          }
          KeWaitForSingleObject(v37, UserRequest, 0, 0, 0LL);
        }
        v38 = PsGetCurrentThreadWin32Thread(v34, v33, v35);
        if ( v38 )
        {
          v40 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v38 + 8));
          if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
            && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
            && (qword_1C0186D80 & 0x200000010000000LL) != 0
            && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
            && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
          {
            LOBYTE(v39) = byte_1C0186D98 - 1;
            Template_xqx(
              v39,
              (unsigned int)&AcquiredSharedUserCritEvent,
              v41,
              v40.LowPart,
              0,
              (char)gullUserCritAcquireToken);
          }
          if ( v40.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
            && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
          {
            Template_xqx(
              (_DWORD)gullUserCritAcquireToken,
              (unsigned int)&AcquiredSharedUserCritTelemetryEvent,
              v41,
              0,
              1000 * v40.QuadPart / gliQpcFreq.QuadPart,
              (char)gullUserCritAcquireToken);
          }
          *(_QWORD *)(v38 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
        }
      }
      if ( v11 )
        RIMLockExclusive((__int64)&gInputLock);
    }
    ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)v5);
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
    {
      v14 = *ThreadWin32Thread;
      if ( v14 )
      {
        if ( v14 == gptiManipulationThread && (*(_DWORD *)(v14 + 440) & 1) != 0 )
          break;
      }
    }
    if ( !*((_DWORD *)v5 + 10) || *((struct _KTHREAD **)v5 + 3) == KeGetCurrentThread() )
      break;
    v42 = *(struct _ERESOURCE **)v5;
    ++*((_DWORD *)v5 + 4);
    ExReleaseResourceAndLeaveCriticalRegion(v42);
    if ( v11 )
    {
      qword_1C018E820 = 0LL;
      ExReleasePushLockExclusiveEx(&gInputLock, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( (struct tagTHREADINFO *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) == gptiRit && !gbRITBlockedOnDIT )
    {
      v45 = (unsigned int)gcRITBlockedOnDITWaiters;
      if ( gcRITBlockedOnDITWaiters )
      {
        KeReleaseSemaphore(gpsemRITBlockedOnDITWaiters, 0, gcRITBlockedOnDITWaiters, 0);
        gcRITBlockedOnDITWaiters = 0;
      }
    }
    gptiCurrent = 0LL;
    gbValidateHandleForIL = 0;
    EtwTraceReleaseUserCrit(v44, v43, v45);
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    CInpLockGuard::WaitForGuard((CInpLockGuard *)v5);
    v6 = 1;
  }
  *((_QWORD *)v5 + 4) = KeGetCurrentThread();
  if ( a3 == 1 )
  {
    v15 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_12;
    v46 = 103;
    goto LABEL_88;
  }
  if ( *(struct tagTHREADINPUTPOINTERLIST **)v51 == v51 )
  {
    v15 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_12;
    v46 = 104;
LABEL_88:
    LOBYTE(v13) = 5;
    WPP_RECORDER_SF_(
      v15->DeviceExtension,
      (_DWORD)v13,
      11,
      v46,
      (__int64)&WPP_5ee67030dead3a26eef982b02c3ab16c_Traceguids);
    goto LABEL_12;
  }
  v47 = 0LL;
  if ( a3 )
    v47 = *(_QWORD *)(ApiSetEditionFindThreadPointerData((__int64)v51, a3) + 24);
  v48 = *(struct tagTHREADINPUTPOINTERLIST **)v51;
  while ( v48 != v51 )
  {
    v13 = v48;
    v48 = *(struct tagTHREADINPUTPOINTERLIST **)v48;
    v49 = *((_QWORD *)v13 + 3);
    if ( v47 == v49 )
    {
      *((_DWORD *)v13 + 12) |= 2u;
    }
    else if ( (*((_DWORD *)v13 + 12) & 2) != 0 )
    {
      v50 = v49 && v47 && *(_DWORD *)(*((_QWORD *)v13 + 3) + 28LL) == *(_DWORD *)(v47 + 28);
      if ( !v50
        && (*(_QWORD *)v49 == *(_QWORD *)(v49 + 8) && *(_DWORD *)(*(_QWORD *)v49 - 268LL) == 3
         || (*(_DWORD *)(v49 + 36) & 0x10) != 0) )
      {
        ApiSetEditionUnlinkAndFreeThreadPointerData(v51);
      }
    }
  }
  v15 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v46 = 105;
    goto LABEL_88;
  }
LABEL_12:
  v16 = *(struct _ERESOURCE **)v5;
  *((_QWORD *)v5 + 4) = 0LL;
  ExReleaseResourceAndLeaveCriticalRegion(v16);
}
