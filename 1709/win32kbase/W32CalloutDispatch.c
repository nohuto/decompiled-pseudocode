/*
 * XREFs of W32CalloutDispatch @ 0x1C0048FA0
 * Callers:
 *     <none>
 * Callees:
 *     CoreMsgObjectCallout @ 0x1C000EEC4 (CoreMsgObjectCallout.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     ?Open@CompositionObject@@SAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z @ 0x1C003AD5C (-Open@CompositionObject@@SAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 *     ?OkToClose@CompositionObject@@SAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z @ 0x1C003C42C (-OkToClose@CompositionObject@@SAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     W32GetThreadWin32Thread @ 0x1C0047A38 (W32GetThreadWin32Thread.c)
 *     UserPowerInfoCallout @ 0x1C0076738 (UserPowerInfoCallout.c)
 *     UserPowerStateCallout @ 0x1C0076F74 (UserPowerStateCallout.c)
 *     QueuePowerRequest @ 0x1C00771C0 (QueuePowerRequest.c)
 *     UserProcessFreezeCallout @ 0x1C008A418 (UserProcessFreezeCallout.c)
 *     UserProcessThawCallout @ 0x1C008C4C8 (UserProcessThawCallout.c)
 *     RIMObjectManagerCallout @ 0x1C008CA68 (RIMObjectManagerCallout.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 *     vReleaseDwmHitTestWaiters @ 0x1C00DBBC0 (vReleaseDwmHitTestWaiters.c)
 *     UserProcessTimerDelayCallout @ 0x1C00DE4AC (UserProcessTimerDelayCallout.c)
 *     UserProcessTimerStatisticsCallout @ 0x1C00DE5A0 (UserProcessTimerStatisticsCallout.c)
 *     McTemplateK0xqx @ 0x1C00E4B64 (McTemplateK0xqx.c)
 */

__int64 __fastcall W32CalloutDispatch(__int64 a1, __int64 a2, __int64 *a3, const GUID *a4)
{
  __int64 v5; // r14
  struct _KTHREAD *CurrentThread; // r15
  __int64 ThreadWin32Thread; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v13; // rbx
  struct tagTHREADINFO **v14; // rax
  PVOID CurrentProcess; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 *DomainLockRef; // rbx
  __int64 *i; // r12
  __int64 v22; // rax
  __int64 ProcessJob; // rax
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 ProcessWin32WindowStation; // rax
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 result; // rax
  __int64 v31; // rcx
  PVOID v32; // rbx
  LARGE_INTEGER *v33; // rbx
  struct tagTHREADINFO *v34; // rbx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 *v39; // rdi
  __int64 *v40; // rbx
  PVOID v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  _QWORD *v46; // r14
  __int64 v47; // rbx
  DWORD LowPart; // eax
  int v49; // r8d
  tagObjLock *v50; // [rsp+68h] [rbp+10h] BYREF
  __int64 v51; // [rsp+78h] [rbp+20h] BYREF

  if ( (_DWORD)a2 == 7 )
  {
    if ( (int)IsNtGdiFlushUserBatchSupported() >= 0 )
      NtGdiFlushUserBatch();
    return 0LL;
  }
  else if ( (_DWORD)a2 == 2 )
  {
    v5 = 0LL;
    CurrentThread = KeGetCurrentThread();
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)CurrentThread);
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v9, v8, v10, v11);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v13 = 0LL;
    while ( 1 )
    {
      v14 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v14 )
        v13 = *v14;
      CurrentProcess = (PVOID)PsGetCurrentProcess();
      if ( CurrentProcess )
      {
        if ( CurrentProcess == g_pepDwm )
          break;
      }
      if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v13 != (struct tagTHREADINFO *)gptiTSRequest )
        break;
      if ( gbRITBlockedOnDIT )
      {
        if ( v13 == gptiRit )
          break;
        ++gcRITBlockedOnDITWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemRITBlockedOnDITWaiters, UserRequest, 0, 0, 0LL);
      }
      else
      {
        if ( gbDITInHitTest != 1 || v13 == gptiRit )
          break;
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
    }
    EtwTraceAcquiredExclusiveUserCrit(v17, v16, v18, v19);
    gptiCurrent = v13;
    gbValidateHandleForIL = 1;
    DomainLockRef = GetDomainLockRef(8);
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(DomainLockRef, 0LL);
    DomainLockRef[1] = (__int64)KeGetCurrentThread();
    for ( i = (__int64 *)gpducstulHead; gpducstulHead; i = (__int64 *)gpducstulHead )
    {
      gpducstulHead = i[2];
      i[2] = 0LL;
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*i);
      RIMLockExclusive((__int64)DomainLockRef);
    }
    if ( (struct _KTHREAD *)DomainLockRef[1] == KeGetCurrentThread() )
    {
      DomainLockRef[1] = 0LL;
      ExReleasePushLockExclusiveEx(DomainLockRef, 0LL);
    }
    else
    {
      _InterlockedDecrement((volatile signed __int32 *)DomainLockRef + 4);
      ExReleasePushLockSharedEx(DomainLockRef, 0LL);
    }
    KeLeaveCriticalRegion();
    if ( ThreadWin32Thread
      && (*(_DWORD *)(ThreadWin32Thread + 464) & 0x20000000) != 0
      && (v31 = *(_QWORD *)(*(_QWORD *)(ThreadWin32Thread + 400) + 728LL), (*(_DWORD *)(v31 + 24) & 0x20) != 0) )
    {
      v5 = *(_QWORD *)(v31 + 16);
    }
    else
    {
      v22 = PsGetCurrentProcess();
      ProcessJob = PsGetProcessJob(v22);
      v24 = ProcessJob;
      if ( !ThreadWin32Thread && ProcessJob && (PsGetJobUIRestrictionsClass(ProcessJob) & 0x20) != 0 )
      {
        v46 = (_QWORD *)gpJobsList;
        if ( gpJobsList )
        {
          do
          {
            if ( v46[1] == v24 )
              break;
            v46 = (_QWORD *)*v46;
          }
          while ( v46 );
        }
        v5 = v46[2];
      }
      else if ( (int)IsReferenceWindowStationSupported() < 0
             || (v25 = PsGetCurrentProcess(),
                 ProcessWin32WindowStation = PsGetProcessWin32WindowStation(v25),
                 (int)ReferenceWindowStation(CurrentThread, ProcessWin32WindowStation, 32LL, &v51, 1) < 0) )
      {
        if ( (int)IsModerncoreAtomTableSupported() >= 0 )
          v5 = ModerncoreAtomTable();
      }
      else
      {
        v5 = *(_QWORD *)(v51 + 136);
      }
    }
    if ( gcSwitchInProgressWaiters )
    {
      KeReleaseSemaphore((PRKSEMAPHORE)gpsemSwitchInProgressWaiters, 0, gcSwitchInProgressWaiters, 0);
      gcSwitchInProgressWaiters = 0;
    }
    if ( (struct tagTHREADINFO *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) == gptiRit && !gbRITBlockedOnDIT )
    {
      v28 = (unsigned int)gcRITBlockedOnDITWaiters;
      if ( gcRITBlockedOnDITWaiters )
      {
        KeReleaseSemaphore((PRKSEMAPHORE)gpsemRITBlockedOnDITWaiters, 0, gcRITBlockedOnDITWaiters, 0);
        gcRITBlockedOnDITWaiters = 0;
      }
    }
    gptiCurrent = 0LL;
    gbValidateHandleForIL = 0;
    if ( (*(_QWORD *)&WPP_MAIN_CB.SectorSize & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0188DA8 - 1) > 2u
      && (qword_1C0188D90 & 0x200000010000000LL) != 0
      && (qword_1C0188D98 & 0x200000010000000LL) == qword_1C0188D98 )
    {
      v47 = PsGetCurrentThreadWin32Thread(v27, 0x200000010000000LL, v28, v29);
      if ( v47 )
      {
        LowPart = KeQueryPerformanceCounter(0LL).LowPart;
        if ( ((unsigned int)Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
          McTemplateK0xqx(
            *(_QWORD *)(v47 + 16),
            (unsigned int)&ReleaseUserCritEvent,
            v49,
            LowPart - *(_DWORD *)(v47 + 8),
            0,
            *(_QWORD *)(v47 + 16));
      }
    }
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    *a3 = v5;
    return 0LL;
  }
  else
  {
    switch ( (int)a2 )
    {
      case 0:
        if ( (int)IsW32pProcessCalloutSupported() < 0 )
          goto LABEL_77;
        result = W32pProcessCallout(a3);
        break;
      case 1:
        if ( (int)IsW32pThreadCalloutSupported() < 0 )
          goto LABEL_77;
        result = W32pThreadCallout(*a3, *((unsigned int *)a3 + 2));
        break;
      case 3:
        if ( gbPowerCalloutsReady && gbVideoInitialized )
          return QueuePowerRequest(a3, 0LL);
        else
          return 3221225473LL;
      case 4:
        return UserPowerStateCallout(a3);
      case 5:
        return UserPowerInfoCallout(*(_DWORD *)a3, a2, *((_DWORD *)a3 + 2), a3[2], *((_DWORD *)a3 + 6), a3[4]);
      case 6:
        if ( (int)IsUserJobCalloutSupported() < 0 )
          goto LABEL_77;
        result = UserJobCallout(a3);
        break;
      case 8:
        if ( (int)IsDesktopOpenProcedureSupported() < 0 )
          goto LABEL_77;
        result = DesktopOpenProcedure(a3);
        break;
      case 9:
        if ( (int)IsOkayToCloseDesktopSupported() < 0 )
          goto LABEL_77;
        result = OkayToCloseDesktop(a3);
        break;
      case 10:
        if ( (int)IsUnmapDesktopSupported() < 0 )
          goto LABEL_77;
        result = UnmapDesktop(a3);
        break;
      case 11:
        if ( (int)IsFreeDesktopSupported() < 0 )
          goto LABEL_77;
        result = FreeDesktop(a3);
        break;
      case 12:
        if ( (int)IsOkayToCloseWindowStationSupported() < 0 )
          goto LABEL_77;
        result = OkayToCloseWindowStation(a3);
        break;
      case 13:
        if ( (int)IsDestroyWindowStationSupported() < 0 )
          goto LABEL_77;
        result = DestroyWindowStation(a3);
        break;
      case 14:
        if ( (int)IsFreeWindowStationSupported() < 0 )
          goto LABEL_77;
        result = FreeWindowStation(a3);
        break;
      case 15:
        if ( (int)IsParseWindowStationSupported() < 0 )
          goto LABEL_77;
        result = ParseWindowStation(a3);
        break;
      case 16:
        if ( (int)IsWindowStationOpenProcedureSupported() < 0 )
LABEL_77:
          result = 3221225659LL;
        else
          result = WindowStationOpenProcedure(a3);
        break;
      case 17:
        return 0LL;
      case 18:
        result = CompositionObject::Open((struct _WIN32_OPENMETHOD_PARAMETERS *)a3);
        break;
      case 19:
        result = CompositionObject::OkToClose((struct _WIN32_OKAYTOCLOSEMETHOD_PARAMETERS *)a3);
        break;
      case 20:
        result = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a3[1] + 8) + 40LL))(
                   *(_QWORD *)(a3[1] + 8),
                   a3);
        break;
      case 21:
        result = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(*a3 + 8) + 48LL))(
                   *(_QWORD *)(*a3 + 8),
                   a3);
        break;
      case 22:
        ((void (__fastcall *)(__int64 *))qword_1C01903F8)(a3);
        result = UserProcessFreezeCallout(a3);
        break;
      case 23:
        ((void (__fastcall *)(__int64 *))qword_1C0190400)(a3);
        result = UserProcessThawCallout(a3);
        break;
      case 24:
        ((void (__fastcall *)(__int64, __int64))qword_1C01908D0)(*a3, a3[1]);
        return 0LL;
      case 25:
        ((void (__fastcall *)(__int64 *))qword_1C01908D8)(a3);
        result = 0LL;
        break;
      case 26:
        v32 = gpepCSRSS;
        if ( gpepCSRSS && !(unsigned __int8)ObReferenceObjectSafe(gpepCSRSS) )
          v32 = 0LL;
        *a3 = (__int64)v32;
        return 0LL;
      case 27:
      case 28:
      case 29:
      case 30:
        result = RIMObjectManagerCallout((unsigned int)a2, a3);
        break;
      case 31:
        WakeRITForShutdown();
        return 0LL;
      case 32:
        v33 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread((int)a2, a2, 0x1C0000000uLL, a4);
        if ( v33 )
          v33[1] = KeQueryPerformanceCounter(0LL);
        v34 = EnterCritAvoidingDitHitTestHazard(0, 1);
        EtwTraceAcquiredExclusiveUserCrit(v36, v35, v37, v38);
        gptiCurrent = v34;
        gbValidateHandleForIL = 1;
        CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v50);
        v39 = (__int64 *)gpducstulHead;
        if ( gpducstulHead )
        {
          v40 = GetDomainLockRef(8);
          do
          {
            gpducstulHead = v39[2];
            v39[2] = 0LL;
            tagObjLock::UnLock((tagObjLock *)v40);
            HMUnlockObject(*v39);
            RIMLockExclusive((__int64)v40);
            v39 = (__int64 *)gpducstulHead;
          }
          while ( gpducstulHead );
        }
        tagObjLock::UnLock(v50);
        v41 = (PVOID)PsGetCurrentProcess();
        if ( v41 && v41 == g_pepDwm || SeSinglePrivilegeCheck(SeExports->SeTcbPrivilege, 1) )
          vReleaseDwmHitTestWaiters();
        UserSessionSwitchLeaveCrit(v43, v42, v44, v45);
        return 0LL;
      case 33:
      case 34:
      case 35:
      case 36:
        result = CoreMsgObjectCallout(a2, a3, 0x1C0000000LL, a4);
        break;
      case 37:
        result = UserProcessTimerDelayCallout(a3);
        break;
      case 38:
        result = UserProcessTimerStatisticsCallout(a3);
        break;
      default:
        result = 3221225485LL;
        break;
    }
  }
  return result;
}
