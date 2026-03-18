/*
 * XREFs of ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C006E9B0
 * Callers:
 *     ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C0030B40 (-WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 *     UpdateKeyLights @ 0x1C01302C0 (UpdateKeyLights.c)
 * Callees:
 *     Win32AllocPool @ 0x1C001CB30 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C001CC50 (Win32FreePool.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030320 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0030418 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0030660 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C00307A0 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00307FC (-IsCurrentProcessDwm@@YAHXZ.c)
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     ??0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C00558DC (--0CInpLockSharedIfNeeded@@QEAA@AEAUCInpPushLock@@@Z.c)
 *     GreLeaveCriticalRegionAndReleasePushLockShared @ 0x1C0055930 (GreLeaveCriticalRegionAndReleasePushLockShared.c)
 *     RIMDeviceIoControl @ 0x1C00E0E20 (RIMDeviceIoControl.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CKeyboardSensor::UpdateKeyboardLEDs(CKeyboardSensor *this, __int64 a2)
{
  __int64 v3; // rcx
  char v4; // bp
  int v5; // r13d
  __int64 v6; // r12
  __int64 v7; // rdi
  __int64 v8; // rdx
  struct DEVICEINFO *i; // rcx
  __int64 v10; // r8
  __int64 v11; // rsi
  int v12; // r14d
  int v13; // r15d
  int v14; // ebp
  _QWORD *v15; // rbx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v17; // rbx
  struct tagTHREADINFO **v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v28; // rdx
  __int64 *v29; // rdi
  __int64 v30; // [rsp+60h] [rbp-58h] BYREF
  char v31; // [rsp+68h] [rbp-50h]
  char v32; // [rsp+C0h] [rbp+8h] BYREF
  char v33; // [rsp+C8h] [rbp+10h] BYREF
  __int64 v34; // [rsp+D0h] [rbp+18h]
  tagObjLock *v35; // [rsp+D8h] [rbp+20h] BYREF

  if ( (struct _KTHREAD *)qword_1C01A1658 == KeGetCurrentThread() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  if ( !gdwUpdateKeyboard )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(this, a2);
  v3 = *((_QWORD *)this + 2);
  if ( v3
    && *((_QWORD *)this + 1) != -1LL
    && *(struct _KTHREAD **)(v3 + 40) == KeGetCurrentThread()
    && *((_QWORD *)this + 131) )
  {
    v4 = gdwUpdateKeyboard;
    v5 = gbRemoteSession;
    gdwUpdateKeyboard &= 0xFFFFFFF8;
    dword_1C01A0BB4 = gktp;
    word_1C01A0BB8 = word_1C01A21B0;
    dword_1C01A0BB0 = gklp;
    qword_1C01A0BC0 = gKbdImeStatus;
    dword_1C01A0BC8 = dword_1C01A21A8;
    v6 = *((_QWORD *)this + 1);
    dword_1C01A0BD8 = dword_1C01A20F0;
    qword_1C01A0BD0 = gRemoteClientKeyboardType;
    UserSessionSwitchLeaveCrit(v3);
    v7 = 0LL;
    CInpLockSharedIfNeeded::CInpLockSharedIfNeeded(
      (CInpLockSharedIfNeeded *)&v30,
      (struct CInpPushLock *)&CBaseInput::_sLock);
    v34 = Win32AllocPool(16LL * *((_QWORD *)this + 131), 0x70694843u);
    v11 = v34;
    if ( v34 )
    {
      for ( i = CBaseInput::_spDevList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
      {
        if ( *((_BYTE *)i + 48) == 1 && *((_QWORD *)i + 28) && *((_QWORD *)i + 29) )
        {
          if ( (unsigned __int64)(unsigned int)v7 >= *((_QWORD *)this + 131) )
          {
            MicrosoftTelemetryAssertTriggeredNoArgsKM(i, (unsigned int)v7);
            break;
          }
          v8 = 2LL * (unsigned int)v7;
          v7 = (unsigned int)(v7 + 1);
          *(_QWORD *)(v11 + 8 * v8) = *((_QWORD *)i + 2);
          *(_WORD *)(v11 + 8 * v8 + 8) = *((_WORD *)i + 232);
        }
      }
    }
    if ( !v31 )
      GreLeaveCriticalRegionAndReleasePushLockShared(v30);
    if ( (_DWORD)v7 )
    {
      v12 = v4 & 1;
      v13 = v4 & 2;
      v14 = v4 & 4;
      v15 = (_QWORD *)v11;
      i = 0LL;
      do
      {
        if ( v12 )
        {
          RIMDeviceIoControl(v6, *v15, 720900LL, &dword_1C01A0BB4, 6, 0LL, 0, &v32, &giosbKbdControl, 1, 0, 0);
          i = 0LL;
        }
        if ( v13 )
        {
          RIMDeviceIoControl(v6, *v15, 720904LL, &dword_1C01A0BB0, 4, 0LL, 0, &v32, &giosbKbdControl, 1, 0, 0);
          i = 0LL;
        }
        if ( v14
          && (*((_BYTE *)v15 + 8) == 7 && *((_BYTE *)v15 + 9) == 82 || v5 && qword_1C01A0BD0 == 0x2000200000007LL) )
        {
          RIMDeviceIoControl(v6, *v15, 724996LL, &qword_1C01A0BC0, 12, 0LL, 0, &v33, &giosbKbdControl, 1, 0, 0);
          i = 0LL;
        }
        v15 += 2;
        --v7;
      }
      while ( v7 );
      v11 = v34;
    }
    if ( v11 )
      Win32FreePool(v11);
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(i, v8, v10);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v17 = 0LL;
    while ( 1 )
    {
      v18 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v18 )
        v17 = *v18;
      if ( IsCurrentProcessDwm()
        || (PVOID)PsGetCurrentProcess(v20) == gpepCSRSS && v17 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v17 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    EtwTraceAcquiredExclusiveUserCrit(v20, v19, v21);
    gptiCurrent = v17;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v35);
    while ( 1 )
    {
      v29 = (__int64 *)gpducstulHead;
      if ( !gpducstulHead )
        break;
      gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
      v24 = *v29;
      v29[2] = 0LL;
      if ( !*(_DWORD *)(v24 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22);
      DomainLockRef = GetDomainLockRef(8LL, v22);
      if ( DomainLockRef == &gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v26, v25);
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*v29);
      tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef, v28);
    }
    tagObjLock::UnLock(v35);
  }
}
