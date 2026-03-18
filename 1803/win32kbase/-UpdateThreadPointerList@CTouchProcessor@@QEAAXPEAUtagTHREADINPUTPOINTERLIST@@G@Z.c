/*
 * XREFs of ?UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C0024C50
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0023134 (W32GetThreadWin32Thread.c)
 *     EtwTraceReleaseUserCrit @ 0x1C0030230 (EtwTraceReleaseUserCrit.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C003025C (EtwTraceAcquiredSharedUserCrit.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030320 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0030418 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0030660 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C00307A0 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     ?IsLastMsgData@CTouchProcessor@@AEAAH_K@Z @ 0x1C0117384 (-IsLastMsgData@CTouchProcessor@@AEAAH_K@Z.c)
 *     ?WaitForGuard@CInpLockGuard@@QEAAJXZ @ 0x1C0124E20 (-WaitForGuard@CInpLockGuard@@QEAAJXZ.c)
 *     ApiSetEditionFindThreadPointerData @ 0x1C013E280 (ApiSetEditionFindThreadPointerData.c)
 *     ApiSetEditionUnlinkAndFreeThreadPointerData @ 0x1C0140310 (ApiSetEditionUnlinkAndFreeThreadPointerData.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CTouchProcessor::UpdateThreadPointerList(
        PERESOURCE *this,
        struct tagTHREADINPUTPOINTERLIST *a2,
        unsigned __int16 a3)
{
  struct tagTHREADINPUTPOINTERLIST *v4; // rsi
  char *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // r8
  int IsResourceAcquiredExclusiveLite; // r13d
  __int64 v13; // rcx
  _BOOL8 v14; // r15
  __int64 ThreadWin32Thread; // rax
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // r15d
  struct tagTHREADINPUTPOINTERLIST *v19; // rdi
  PDEVICE_OBJECT v20; // rcx
  struct _ERESOURCE *v21; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rax
  struct tagTHREADINFO *v23; // rdi
  struct tagTHREADINFO **v24; // rax
  PVOID CurrentProcess; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  _QWORD *v28; // r12
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 *DomainLockRef; // rdi
  struct tagTHREADINFO *v33; // rdi
  struct tagTHREADINFO **v34; // rax
  PVOID v35; // rax
  struct _ERESOURCE *v36; // rcx
  int v37; // r9d
  __int64 v38; // r13
  __int64 ThreadPointerData; // r13
  struct tagTHREADINPUTPOINTERLIST *v40; // r14
  __int64 v41; // r12
  __int64 v42; // rdx
  __int64 v43; // rcx
  tagObjLock *v44; // [rsp+70h] [rbp+8h] BYREF
  int v45; // [rsp+80h] [rbp+18h]

  v4 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      11,
      116,
      (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
  }
  v6 = (char *)(this + 9);
  if ( ExIsResourceAcquiredExclusiveLite(this[9]) || ExIsResourceAcquiredSharedLite(*(PERESOURCE *)v6) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v8, v7);
  v9 = 0;
  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresUser);
  v13 = 1LL;
  v14 = qword_1C01A1668 == (_QWORD)KeGetCurrentThread();
  while ( 1 )
  {
    if ( v9 )
    {
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v13, v10, v11);
      if ( IsResourceAcquiredExclusiveLite )
      {
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        v23 = 0LL;
        while ( 1 )
        {
          v24 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
          if ( v24 )
            v23 = *v24;
          CurrentProcess = (PVOID)PsGetCurrentProcess();
          if ( CurrentProcess )
          {
            if ( CurrentProcess == g_pepDwm )
              break;
          }
          if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v23 != (struct tagTHREADINFO *)gptiTSRequest
            || gbDITInHitTest != 1
            || v23 == gptiRit )
          {
            break;
          }
          ++gcDITHitTestWaiters;
          ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
          KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
        }
        EtwTraceAcquiredExclusiveUserCrit();
        gptiCurrent = v23;
        gbValidateHandleForIL = 1;
        CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>(&v44);
        v28 = (_QWORD *)gpducstulHead;
        if ( gpducstulHead )
        {
          do
          {
            gpducstulHead = v28[2];
            v29 = *v28;
            v28[2] = 0LL;
            if ( !*(_DWORD *)(v29 + 8) )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v27, v26);
            DomainLockRef = (__int64 *)GetDomainLockRef(8LL);
            if ( DomainLockRef == &gDomainDummyLock )
              MicrosoftTelemetryAssertTriggeredNoArgsKM(v31, v30);
            tagObjLock::UnLock((tagObjLock *)DomainLockRef);
            HMUnlockObject(*v28);
            tagObjLock::LockExclusive((tagObjLock *)DomainLockRef);
            v28 = (_QWORD *)gpducstulHead;
          }
          while ( gpducstulHead );
          v6 = (char *)(this + 9);
        }
        tagObjLock::UnLock(v44);
      }
      else
      {
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        v33 = 0LL;
        while ( 1 )
        {
          v34 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
          if ( v34 )
            v33 = *v34;
          v35 = (PVOID)PsGetCurrentProcess();
          if ( v35 )
          {
            if ( v35 == g_pepDwm )
              break;
          }
          if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v33 != (struct tagTHREADINFO *)gptiTSRequest
            || gbDITInHitTest != 1
            || v33 == gptiRit )
          {
            break;
          }
          _InterlockedIncrement(&gcDITHitTestWaiters);
          ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
          KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
        }
        EtwTraceAcquiredSharedUserCrit();
      }
      if ( v14 )
        RIMLockExclusive(&gInputLock);
    }
    ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)v6);
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( ThreadWin32Thread )
    {
      if ( ThreadWin32Thread == gptiManipulationThread && (*(_DWORD *)(ThreadWin32Thread + 480) & 1) != 0 )
        break;
    }
    if ( !*((_DWORD *)v6 + 10) || *((struct _KTHREAD **)v6 + 3) == KeGetCurrentThread() )
      break;
    v36 = *(struct _ERESOURCE **)v6;
    ++*((_DWORD *)v6 + 4);
    ExReleaseResourceAndLeaveCriticalRegion(v36);
    if ( v14 )
    {
      qword_1C01A1668 = 0LL;
      ExReleasePushLockExclusiveEx(&gInputLock, 0LL);
      KeLeaveCriticalRegion();
    }
    gptiCurrent = 0LL;
    gbValidateHandleForIL = 0;
    EtwTraceReleaseUserCrit();
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    CInpLockGuard::WaitForGuard((CInpLockGuard *)v6);
    v9 = 1;
  }
  v18 = 0;
  *((_QWORD *)v6 + 4) = KeGetCurrentThread();
  if ( a3 == 1 )
  {
    v20 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_13;
    v37 = 117;
    goto LABEL_82;
  }
  v19 = *(struct tagTHREADINPUTPOINTERLIST **)v4;
  if ( *(struct tagTHREADINPUTPOINTERLIST **)v4 == v4 )
  {
    v20 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_13;
    v37 = 118;
LABEL_82:
    LOBYTE(v16) = 5;
    WPP_RECORDER_SF_(v20->DeviceExtension, v16, 11, v37, (__int64)&WPP_89f826b31d6938ddefcc6fc243748b84_Traceguids);
    goto LABEL_13;
  }
  v38 = 0LL;
  if ( a3 )
  {
    ThreadPointerData = ApiSetEditionFindThreadPointerData(v4, a3);
    if ( !ThreadPointerData )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16);
    v38 = *(_QWORD *)(ThreadPointerData + 24);
    v19 = *(struct tagTHREADINPUTPOINTERLIST **)v4;
  }
  while ( v19 != v4 )
  {
    v17 = *((unsigned int *)v19 + 12);
    v40 = v19;
    v19 = *(struct tagTHREADINPUTPOINTERLIST **)v19;
    v45 = v18++;
    v16 = *((_QWORD *)v40 + 3);
    if ( v38 == v16 )
    {
      v17 = (unsigned int)v17 | 2;
      *((_DWORD *)v40 + 12) = v17;
    }
    else if ( (v17 & 2) != 0 && (!v16 || !v38 || *(_DWORD *)(v16 + 28) != *(_DWORD *)(v38 + 28)) )
    {
      if ( (unsigned int)CTouchProcessor::IsLastMsgData((CTouchProcessor *)this, v16) )
        goto LABEL_76;
      v41 = *((_QWORD *)v40 + 3);
      if ( this[13] != (PERESOURCE)KeGetCurrentThread() )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16);
      if ( (*(_DWORD *)(v41 + 36) & 0x10) != 0 )
      {
LABEL_76:
        ApiSetEditionUnlinkAndFreeThreadPointerData(v4, v40);
        v18 = v45;
      }
    }
  }
  if ( v18 != *((_DWORD *)v4 + 4) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v16);
  v20 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v37 = 119;
    goto LABEL_82;
  }
LABEL_13:
  if ( !ExIsResourceAcquiredExclusiveLite(*(PERESOURCE *)v6) && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)v6) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v43, v42);
  v21 = *(struct _ERESOURCE **)v6;
  *((_QWORD *)v6 + 4) = 0LL;
  ExReleaseResourceAndLeaveCriticalRegion(v21);
}
