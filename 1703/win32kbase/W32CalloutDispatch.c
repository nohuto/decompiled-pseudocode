/*
 * XREFs of W32CalloutDispatch @ 0x1C002D340
 * Callers:
 *     <none>
 * Callees:
 *     ?OkToClose@CompositionObject@@SAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z @ 0x1C002A11C (-OkToClose@CompositionObject@@SAJPEAU_WIN32_OKAYTOCLOSEMETHOD_PARAMETERS@@@Z.c)
 *     ?Open@CompositionObject@@SAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z @ 0x1C002A170 (-Open@CompositionObject@@SAJPEAU_WIN32_OPENMETHOD_PARAMETERS@@@Z.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     EtwTraceReleaseUserCrit @ 0x1C002ECD4 (EtwTraceReleaseUserCrit.c)
 *     UserPowerInfoCallout @ 0x1C0063D28 (UserPowerInfoCallout.c)
 *     UserPowerStateCallout @ 0x1C0064774 (UserPowerStateCallout.c)
 *     QueuePowerRequest @ 0x1C00649B0 (QueuePowerRequest.c)
 *     CoreMsgObjectCallout @ 0x1C006C0A4 (CoreMsgObjectCallout.c)
 *     UserProcessFreezeCallout @ 0x1C008395C (UserProcessFreezeCallout.c)
 *     UserProcessThawCallout @ 0x1C0087EB0 (UserProcessThawCallout.c)
 *     RIMObjectManagerCallout @ 0x1C00884DC (RIMObjectManagerCallout.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     UserProcessTimerDelayCallout @ 0x1C00D826C (UserProcessTimerDelayCallout.c)
 *     UserProcessTimerStatisticsCallout @ 0x1C00D83E8 (UserProcessTimerStatisticsCallout.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

__int64 __fastcall W32CalloutDispatch(__int64 a1, __int64 a2, __int64 *a3)
{
  struct _KTHREAD *CurrentThread; // r13
  __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  LARGE_INTEGER *v12; // rdi
  struct tagTHREADINFO *v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r15
  int v18; // ecx
  int v19; // r8d
  LARGE_INTEGER v20; // r14
  int v21; // eax
  __int64 v22; // rax
  __int64 ProcessJob; // rax
  __int64 v24; // r14
  __int64 v25; // rax
  __int64 ProcessWin32WindowStation; // rax
  struct tagTHREADINFO *v27; // rdi
  struct tagTHREADINFO **v28; // rax
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v30; // rbp
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rsi
  int v35; // ecx
  LARGE_INTEGER v36; // rbx
  int v37; // r8d
  PVOID CurrentProcess; // rax
  _QWORD *i; // rcx
  unsigned __int64 v40; // rdi
  __int64 v41; // [rsp+68h] [rbp+10h] BYREF

  if ( (int)a2 > 16 )
  {
    if ( (_DWORD)a2 == 25 )
    {
      ((void (__fastcall *)(__int64 *))qword_1C018BC70)(a3);
    }
    else if ( (int)a2 > 25 )
    {
      if ( (_DWORD)a2 == 26 )
      {
        v40 = (unsigned __int64)gpepCSRSS;
        if ( gpepCSRSS )
          v40 &= -(__int64)((unsigned __int8)ObReferenceObjectSafe(gpepCSRSS) != 0);
        *a3 = v40;
        return 0LL;
      }
      if ( (int)a2 <= 30 )
        return RIMObjectManagerCallout((unsigned int)a2, a3);
      if ( (_DWORD)a2 != 31 )
      {
        if ( (_DWORD)a2 == 32 )
        {
          CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
          if ( CurrentThreadWin32Thread )
            CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
          v30 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
          v34 = PsGetCurrentThreadWin32Thread(v32, v31, v33);
          if ( v34 )
          {
            v36 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v34 + 8));
            if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
              && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
              && (qword_1C0186D80 & 0x200000010000000LL) != 0
              && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
              && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
            {
              LOBYTE(v35) = byte_1C0186D98 - 1;
              Template_xqx(
                v35,
                (unsigned int)&AcquiredExclusiveUserCritEvent,
                v37,
                v36.LowPart,
                0,
                (char)gullUserCritAcquireToken);
            }
            if ( v36.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
              && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
            {
              Template_xqx(
                (_DWORD)gullUserCritAcquireToken,
                (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
                v37,
                0,
                1000 * v36.QuadPart / gliQpcFreq.QuadPart,
                (char)gullUserCritAcquireToken);
            }
            *(_QWORD *)(v34 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
          }
          gptiCurrent = v30;
          gbValidateHandleForIL = 1;
          CurrentProcess = (PVOID)PsGetCurrentProcess();
          if ( (CurrentProcess && CurrentProcess == g_pepDwm || SeSinglePrivilegeCheck(SeExports->SeTcbPrivilege, 1))
            && !gbNoMoreDITHitTest )
          {
            gbDITInHitTest = 0;
            if ( gcDITHitTestWaiters )
            {
              KeReleaseSemaphore((PRKSEMAPHORE)gpsemDITHitTestWaiters, 0, gcDITHitTestWaiters, 0);
              gcDITHitTestWaiters = 0;
            }
            gbNoMoreDITHitTest = 1;
          }
          UserSessionSwitchLeaveCrit();
          return 0LL;
        }
        if ( (int)a2 <= 36 )
          return CoreMsgObjectCallout((unsigned int)a2, a3);
        if ( (_DWORD)a2 == 37 )
          return UserProcessTimerDelayCallout(a3);
        if ( (_DWORD)a2 == 38 )
          return UserProcessTimerStatisticsCallout(a3);
        return 3221225485LL;
      }
      WakeRITForShutdown();
    }
    else if ( (_DWORD)a2 != 17 )
    {
      switch ( (_DWORD)a2 )
      {
        case 0x12:
          return CompositionObject::Open((struct _WIN32_OPENMETHOD_PARAMETERS *)a3);
        case 0x13:
          return CompositionObject::OkToClose((struct _WIN32_OKAYTOCLOSEMETHOD_PARAMETERS *)a3);
        case 0x14:
          return (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(a3[1] + 8) + 40LL))(
                   *(_QWORD *)(a3[1] + 8),
                   a3);
        case 0x15:
          return (*(__int64 (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(*a3 + 8) + 48LL))(
                   *(_QWORD *)(*a3 + 8),
                   a3);
        case 0x16:
          ((void (__fastcall *)(__int64 *))qword_1C018B788)(a3);
          return UserProcessFreezeCallout(a3);
        case 0x17:
          ((void (__fastcall *)(__int64 *))qword_1C018B790)(a3);
          return UserProcessThawCallout(a3);
      }
      ((void (__fastcall *)(__int64, __int64))qword_1C018BC68)(*a3, a3[1]);
    }
    return 0LL;
  }
  if ( (_DWORD)a2 == 16 )
  {
    if ( (int)IsWindowStationOpenProcedureSupported() >= 0 )
      return WindowStationOpenProcedure(a3);
    return 3221225659LL;
  }
  if ( (int)a2 > 8 )
  {
    switch ( (_DWORD)a2 )
    {
      case 9:
        if ( (int)IsOkayToCloseDesktopSupported() >= 0 )
          return OkayToCloseDesktop(a3);
        break;
      case 0xA:
        if ( (int)IsUnmapDesktopSupported() >= 0 )
          return UnmapDesktop(a3);
        break;
      case 0xB:
        if ( (int)IsFreeDesktopSupported() >= 0 )
          return FreeDesktop(a3);
        break;
      case 0xC:
        if ( (int)IsOkayToCloseWindowStationSupported() >= 0 )
          return OkayToCloseWindowStation(a3);
        break;
      case 0xD:
        if ( (int)IsDestroyWindowStationSupported() >= 0 )
          return DestroyWindowStation(a3);
        break;
      case 0xE:
        if ( (int)IsFreeWindowStationSupported() >= 0 )
          return FreeWindowStation(a3);
        break;
      default:
        if ( (int)IsParseWindowStationSupported() >= 0 )
          return ParseWindowStation(a3);
        break;
    }
    return 3221225659LL;
  }
  switch ( (_DWORD)a2 )
  {
    case 8:
      if ( (int)IsDesktopOpenProcedureSupported() >= 0 )
        return DesktopOpenProcedure(a3);
      return 3221225659LL;
    case 0:
      if ( (int)IsW32pProcessCalloutSupported() >= 0 )
        return W32pProcessCallout(a3);
      return 3221225659LL;
    case 1:
      if ( (int)IsW32pThreadCalloutSupported() >= 0 )
        return W32pThreadCallout(*a3, *((unsigned int *)a3 + 2));
      return 3221225659LL;
    case 2:
      CurrentThread = KeGetCurrentThread();
      v6 = 0LL;
      v7 = 0LL;
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v7 = *ThreadWin32Thread;
      v12 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v10, v9, v11);
      if ( v12 )
        v12[1] = KeQueryPerformanceCounter(0LL);
      v13 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
      v17 = PsGetCurrentThreadWin32Thread(v15, v14, v16);
      if ( v17 )
      {
        v20 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v17 + 8));
        if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
          && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
          && (qword_1C0186D80 & 0x200000010000000LL) != 0
          && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
          && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
        {
          LOBYTE(v18) = byte_1C0186D98 - 1;
          Template_xqx(
            v18,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v19,
            v20.LowPart,
            0,
            (char)gullUserCritAcquireToken);
        }
        if ( v20.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
          && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
        {
          Template_xqx(
            (_DWORD)gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v19,
            0,
            1000 * v20.QuadPart / gliQpcFreq.QuadPart,
            (char)gullUserCritAcquireToken);
        }
        *(_QWORD *)(v17 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
      }
      gptiCurrent = v13;
      gbValidateHandleForIL = 1;
      if ( v7
        && ((*(_DWORD *)(v7 + 440) & 0x20000000) != 0
          ? (v21 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 376) + 720LL) + 24LL) & 0x20)
          : (v21 = 0),
            v21) )
      {
        i = *(_QWORD **)(*(_QWORD *)(v7 + 376) + 720LL);
      }
      else
      {
        v22 = PsGetCurrentProcess();
        ProcessJob = PsGetProcessJob(v22);
        v24 = ProcessJob;
        if ( v7 || !ProcessJob || (PsGetJobUIRestrictionsClass(ProcessJob) & 0x20) == 0 )
        {
          if ( (int)IsReferenceWindowStationSupported() < 0
            || (v25 = PsGetCurrentProcess(),
                ProcessWin32WindowStation = PsGetProcessWin32WindowStation(v25),
                (int)ReferenceWindowStation(CurrentThread, ProcessWin32WindowStation, 32LL, &v41, 1) < 0) )
          {
            if ( (int)IsModerncoreAtomTableSupported() >= 0 )
              v6 = ModerncoreAtomTable();
          }
          else
          {
            v6 = *(_QWORD *)(v41 + 136);
          }
          goto LABEL_32;
        }
        for ( i = (_QWORD *)gpJobsList; i && i[1] != v24; i = (_QWORD *)*i )
          ;
      }
      v6 = i[2];
LABEL_32:
      if ( gcSwitchInProgressWaiters )
      {
        KeReleaseSemaphore(gpsemSwitchInProgressWaiters, 0, gcSwitchInProgressWaiters, 0);
        gcSwitchInProgressWaiters = 0;
      }
      v27 = 0LL;
      v28 = (struct tagTHREADINFO **)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v28 )
        v27 = *v28;
      if ( v27 == gptiRit && !gbRITBlockedOnDIT && gcRITBlockedOnDITWaiters )
      {
        KeReleaseSemaphore(gpsemRITBlockedOnDITWaiters, 0, gcRITBlockedOnDITWaiters, 0);
        gcRITBlockedOnDITWaiters = 0;
      }
      gptiCurrent = 0LL;
      gbValidateHandleForIL = 0;
      EtwTraceReleaseUserCrit();
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      *a3 = v6;
      return 0LL;
  }
  if ( (_DWORD)a2 != 3 )
  {
    if ( (_DWORD)a2 == 4 )
      return UserPowerStateCallout(a3);
    if ( (_DWORD)a2 == 5 )
      return UserPowerInfoCallout(*(_DWORD *)a3, 5, *((_DWORD *)a3 + 2), a3[2], *((_DWORD *)a3 + 6), a3[4]);
    if ( (_DWORD)a2 != 6 )
    {
      if ( (_DWORD)a2 == 7 )
      {
        if ( (int)IsNtGdiFlushUserBatchSupported() >= 0 )
          NtGdiFlushUserBatch();
        return 0LL;
      }
      return 3221225485LL;
    }
    if ( (int)IsUserJobCalloutSupported() >= 0 )
      return UserJobCallout(a3);
    return 3221225659LL;
  }
  if ( gbPowerCalloutsReady && gbVideoInitialized )
    return QueuePowerRequest(a3, 0LL);
  else
    return 3221225473LL;
}
