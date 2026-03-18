/*
 * XREFs of ?EtwCaptureStateCallback@@YAXXZ @ 0x1C00AAE20
 * Callers:
 *     W32kEtwEnableCallback @ 0x1C00B04E8 (W32kEtwEnableCallback.c)
 * Callees:
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030320 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0030418 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0030660 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C00307A0 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     ?EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z @ 0x1C00AB2C0 (-EtwpGetLastInputProcessTime@@YAXQEAUtagQ@@KPEAK1@Z.c)
 *     ?EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z @ 0x1C00AB2F4 (-EtwpGetThreadInfoFlags@@YAKQEAUtagTHREADINFO@@@Z.c)
 *     McTemplateK0qqqqq @ 0x1C00AF1AC (McTemplateK0qqqqq.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall EtwCaptureStateCallback(__int64 a1, __int64 a2, __int64 a3)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v4; // rbx
  struct tagTHREADINFO **v5; // rax
  __int64 v6; // rcx
  PVOID CurrentProcess; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v17; // rdx
  __int64 *v18; // rdi
  __int64 v19; // rcx
  int v20; // r8d
  __int64 v21; // rsi
  unsigned __int64 v22; // rbp
  __int64 i; // rdi
  _QWORD *j; // r14
  unsigned int ThreadId; // r12d
  char ThreadInfoFlags; // r13
  int v27; // r8d
  int v28; // r11d
  unsigned int v29; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v30; // [rsp+88h] [rbp+10h] BYREF
  tagObjLock *v31; // [rsp+90h] [rbp+18h] BYREF

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v4 = 0LL;
  while ( 1 )
  {
    v5 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
    if ( v5 )
      v4 = *v5;
    CurrentProcess = (PVOID)PsGetCurrentProcess(v6);
    if ( CurrentProcess )
    {
      if ( CurrentProcess == g_pepDwm )
        break;
    }
    if ( (PVOID)PsGetCurrentProcess(v9) == gpepCSRSS && v4 != (struct tagTHREADINFO *)gptiTSRequest
      || gbDITInHitTest != 1
      || v4 == gptiRit )
    {
      break;
    }
    ++gcDITHitTestWaiters;
    ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
    KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
  }
  EtwTraceAcquiredExclusiveUserCrit(v9, v8, v10);
  gptiCurrent = v4;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v31);
  while ( 1 )
  {
    v18 = (__int64 *)gpducstulHead;
    if ( !gpducstulHead )
      break;
    gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
    v13 = *v18;
    v18[2] = 0LL;
    if ( !*(_DWORD *)(v13 + 8) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11);
    DomainLockRef = GetDomainLockRef(8LL, v11);
    if ( DomainLockRef == &gDomainDummyLock )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v15, v14);
    tagObjLock::UnLock((tagObjLock *)DomainLockRef);
    HMUnlockObject(*v18);
    tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef, v17);
  }
  tagObjLock::UnLock(v31);
  if ( (W32kEtwEnabledKeyword & 0x8000000000040000uLL) != 0
    && (unsigned __int8)(byte_1C019A1D8 - 1) > 2u
    && (qword_1C019A1C0 & 0x8000000000040000uLL) != 0
    && (qword_1C019A1C8 & 0x8000000000040000uLL) == qword_1C019A1C8 )
  {
    if ( W32kEtwWaitCursorActiveType )
    {
      v19 = (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
          - W32kEtwWaitCursorStartMs;
      if ( (unsigned int)v19 >= 0xC8 && ((unsigned __int8)Microsoft_Windows_Win32kEnableBits & 0x40) != 0 )
        McTemplateK0qqqqq(
          v19,
          (unsigned int)&WaitCursorEvent,
          v20,
          W32kEtwWaitCursorThreadId,
          W32kEtwWaitCursorProcessId,
          gSessionId,
          W32kEtwWaitCursorActiveType,
          ((unsigned int)(MEMORY[0xFFFFF78000000320] * MEMORY[0xFFFFF78000000004]) >> 24) - W32kEtwWaitCursorStartMs);
    }
  }
  if ( (W32kEtwEnabledKeyword & 0x8000000000080000uLL) != 0
    && (unsigned __int8)(byte_1C019A1D8 - 1) > 2u
    && (qword_1C019A1C0 & 0x8000000000080000uLL) != 0
    && (qword_1C019A1C8 & 0x8000000000080000uLL) == qword_1C019A1C8 )
  {
    v21 = grpWinStaList;
    v22 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    while ( v21 )
    {
      for ( i = *(_QWORD *)(v21 + 16); i; i = *(_QWORD *)(i + 32) )
      {
        for ( j = *(_QWORD **)(i + 168); j != (_QWORD *)(i + 168); j = (_QWORD *)*j )
        {
          ThreadId = (unsigned int)PsGetThreadId((PETHREAD)*(j - 91));
          ThreadInfoFlags = EtwpGetThreadInfoFlags((struct tagTHREADINFO *const)(j - 91));
          EtwpGetLastInputProcessTime((struct tagQ *const)*(j - 38), v22, &v30, &v29);
          v19 = (unsigned int)Microsoft_Windows_Win32kEnableBits;
          if ( (char)Microsoft_Windows_Win32kEnableBits < 0 )
            McTemplateK0qqqqq(
              v22 - v28,
              (unsigned int)&ThreadInfoRundownEvent,
              v27,
              ThreadId,
              ThreadInfoFlags,
              v28 != 0 ? v22 - v28 : 0,
              v30,
              v29);
        }
      }
      v21 = *(_QWORD *)(v21 + 8);
    }
  }
  UserSessionSwitchLeaveCrit(v19);
}
