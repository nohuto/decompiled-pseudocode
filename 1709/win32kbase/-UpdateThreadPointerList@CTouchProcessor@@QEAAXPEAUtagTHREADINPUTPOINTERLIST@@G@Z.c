/*
 * XREFs of ?UpdateThreadPointerList@CTouchProcessor@@QEAAXPEAUtagTHREADINPUTPOINTERLIST@@G@Z @ 0x1C0007400
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionFindThreadPointerData @ 0x1C0004570 (ApiSetEditionFindThreadPointerData.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     EtwTraceReleaseUserCrit @ 0x1C003C194 (EtwTraceReleaseUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     EtwTraceAcquiredSharedUserCrit @ 0x1C0057A50 (EtwTraceAcquiredSharedUserCrit.c)
 *     ?WaitForGuard@CInpLockGuard@@QEAAJXZ @ 0x1C012A410 (-WaitForGuard@CInpLockGuard@@QEAAJXZ.c)
 *     ApiSetEditionUnlinkAndFreeThreadPointerData @ 0x1C013BCC4 (ApiSetEditionUnlinkAndFreeThreadPointerData.c)
 */

void __fastcall CTouchProcessor::UpdateThreadPointerList(
        CTouchProcessor *this,
        struct tagTHREADINPUTPOINTERLIST *a2,
        unsigned __int16 a3)
{
  struct tagTHREADINPUTPOINTERLIST *v4; // r14
  int v6; // ebx
  int IsResourceAcquiredExclusiveLite; // r15d
  _BOOL8 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 ThreadWin32Thread; // rax
  struct tagTHREADINPUTPOINTERLIST *v13; // rdx
  CInpLockGuard *v14; // rbx
  PDEVICE_OBJECT v15; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rax
  struct tagTHREADINFO *v17; // rbx
  _QWORD *v18; // rdi
  tagObjLock *DomainLockRef; // rbx
  struct tagTHREADINFO *v20; // rbx
  struct tagTHREADINFO **v21; // rax
  PVOID CurrentProcess; // rax
  PVOID v23; // rcx
  struct _ERESOURCE *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // r9d
  __int64 v29; // rsi
  struct tagTHREADINPUTPOINTERLIST *v30; // rdi
  __int64 v31; // rcx
  BOOL v32; // r8d
  CInpLockGuard *v33; // [rsp+70h] [rbp+8h]
  tagObjLock *v34; // [rsp+78h] [rbp+10h] BYREF

  v4 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      (_DWORD)a2,
      11,
      102,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
  }
  v33 = (CTouchProcessor *)((char *)this + 224);
  v6 = 0;
  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresUser);
  v8 = qword_1C01936E0 == (_QWORD)KeGetCurrentThread();
  while ( 1 )
  {
    if ( v6 )
    {
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
      if ( IsResourceAcquiredExclusiveLite )
      {
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        v17 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
        EtwTraceAcquiredExclusiveUserCrit();
        gptiCurrent = v17;
        gbValidateHandleForIL = 1;
        CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>(&v34);
        v18 = (_QWORD *)gpducstulHead;
        if ( gpducstulHead )
        {
          DomainLockRef = (tagObjLock *)GetDomainLockRef(8LL);
          do
          {
            gpducstulHead = v18[2];
            v18[2] = 0LL;
            tagObjLock::UnLock(DomainLockRef);
            HMUnlockObject(*v18);
            RIMLockExclusive(DomainLockRef);
            v18 = (_QWORD *)gpducstulHead;
          }
          while ( gpducstulHead );
        }
        tagObjLock::UnLock(v34);
      }
      else
      {
        if ( CurrentThreadWin32Thread )
          CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
        v20 = 0LL;
        while ( 1 )
        {
          v21 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceShared(gpresUser);
          if ( v21 )
            v20 = *v21;
          CurrentProcess = (PVOID)PsGetCurrentProcess();
          if ( CurrentProcess )
          {
            if ( CurrentProcess == g_pepDwm )
              break;
          }
          if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v20 != (struct tagTHREADINFO *)gptiTSRequest )
            break;
          if ( gbRITBlockedOnDIT )
          {
            if ( v20 == gptiRit )
              break;
            _InterlockedAdd(&gcRITBlockedOnDITWaiters, 1u);
            ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
            v23 = gpsemRITBlockedOnDITWaiters;
          }
          else
          {
            if ( gbDITInHitTest != 1 || v20 == gptiRit )
              break;
            _InterlockedAdd(&gcDITHitTestWaiters, 1u);
            ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
            v23 = gpsemDITHitTestWaiters;
          }
          KeWaitForSingleObject(v23, UserRequest, 0, 0, 0LL);
        }
        EtwTraceAcquiredSharedUserCrit();
      }
      if ( v8 )
        RIMLockExclusive(&gInputLock);
    }
    ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)v33);
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread(), v9, v10, v11);
    if ( ThreadWin32Thread )
    {
      if ( ThreadWin32Thread == gptiManipulationThread && (*(_DWORD *)(ThreadWin32Thread + 464) & 1) != 0 )
        break;
    }
    v14 = v33;
    if ( !*((_DWORD *)v33 + 10) )
      goto LABEL_8;
    v14 = v33;
    if ( *((struct _KTHREAD **)v33 + 3) == KeGetCurrentThread() )
      goto LABEL_8;
    v24 = *(struct _ERESOURCE **)v33;
    ++*((_DWORD *)v33 + 4);
    ExReleaseResourceAndLeaveCriticalRegion(v24);
    if ( v8 )
    {
      qword_1C01936E0 = 0LL;
      ExReleasePushLockExclusiveEx(&gInputLock, 0LL);
      KeLeaveCriticalRegion();
    }
    if ( (struct tagTHREADINFO *)W32GetThreadWin32Thread(KeGetCurrentThread(), v25, v26, v27) == gptiRit
      && !gbRITBlockedOnDIT
      && gcRITBlockedOnDITWaiters )
    {
      KeReleaseSemaphore((PRKSEMAPHORE)gpsemRITBlockedOnDITWaiters, 0, gcRITBlockedOnDITWaiters, 0);
      gcRITBlockedOnDITWaiters = 0;
    }
    gptiCurrent = 0LL;
    gbValidateHandleForIL = 0;
    EtwTraceReleaseUserCrit();
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    CInpLockGuard::WaitForGuard(v33);
    v6 = 1;
  }
  v14 = v33;
LABEL_8:
  *((_QWORD *)v14 + 4) = KeGetCurrentThread();
  if ( a3 == 1 )
  {
    v15 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_11;
    v28 = 103;
    goto LABEL_69;
  }
  if ( *(struct tagTHREADINPUTPOINTERLIST **)v4 == v4 )
  {
    v15 = WPP_GLOBAL_Control;
    if ( !LOWORD(WPP_GLOBAL_Control->DeviceType) )
      goto LABEL_11;
    v28 = 104;
LABEL_69:
    LOBYTE(v13) = 5;
    WPP_RECORDER_SF_(
      v15->DeviceExtension,
      (_DWORD)v13,
      11,
      v28,
      (__int64)&WPP_ab792a5fe60e342e9a304d2fbada8869_Traceguids);
    goto LABEL_11;
  }
  v29 = 0LL;
  if ( a3 )
    v29 = *(_QWORD *)(ApiSetEditionFindThreadPointerData((__int64)v4, a3) + 24);
  v30 = *(struct tagTHREADINPUTPOINTERLIST **)v4;
  while ( v30 != v4 )
  {
    v13 = v30;
    v30 = *(struct tagTHREADINPUTPOINTERLIST **)v30;
    v31 = *((_QWORD *)v13 + 3);
    if ( v29 == v31 )
    {
      *((_DWORD *)v13 + 12) |= 2u;
    }
    else if ( (*((_DWORD *)v13 + 12) & 2) != 0 )
    {
      v32 = v31 && v29 && *(_DWORD *)(*((_QWORD *)v13 + 3) + 28LL) == *(_DWORD *)(v29 + 28);
      if ( !v32
        && (*(_QWORD *)v31 == *(_QWORD *)(v31 + 8) && *(_DWORD *)(*(_QWORD *)v31 - 268LL) == 3
         || (*(_DWORD *)(v31 + 36) & 0x10) != 0) )
      {
        ApiSetEditionUnlinkAndFreeThreadPointerData(v4);
      }
    }
  }
  v15 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v28 = 105;
    goto LABEL_69;
  }
LABEL_11:
  *((_QWORD *)v14 + 4) = 0LL;
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)v33);
}
