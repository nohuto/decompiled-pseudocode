/*
 * XREFs of W32kEtwEnableCallback @ 0x1C0007C20
 * Callers:
 *     McGenControlCallbackV2 @ 0x1C00062D0 (McGenControlCallbackV2.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     OpenCacheKeyEx @ 0x1C0025E50 (OpenCacheKeyEx.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     ?EtwCaptureStateCallback@@YAXXZ @ 0x1C00DF5E8 (-EtwCaptureStateCallback@@YAXXZ.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C0154250 (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 */

void __fastcall W32kEtwEnableCallback(struct _GUID *a1, unsigned int a2, __int64 a3, unsigned __int64 a4)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v8; // rbx
  _QWORD *v9; // rsi
  void *v10; // rsi
  unsigned int v11; // ebx
  __int64 v12; // rcx
  void *v13; // rsi
  unsigned int v14; // r15d
  tagObjLock *DomainLockRef; // rbx
  LARGE_INTEGER *v16; // rbx
  struct tagTHREADINFO *v17; // rbx
  _QWORD *v18; // rsi
  tagObjLock *v19; // rbx
  __int64 v20; // rcx
  LARGE_INTEGER *v21; // rbx
  struct tagTHREADINFO *v22; // rbx
  _QWORD *v23; // rdi
  tagObjLock *v24; // rbx
  __int64 v25; // rcx
  int v26; // [rsp+30h] [rbp-40h] BYREF
  ULONG ResultLength[2]; // [rsp+38h] [rbp-38h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v30; // [rsp+5Ch] [rbp-14h]

  if ( a2 <= 1 )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v8 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v8;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>(ResultLength);
    v9 = (_QWORD *)gpducstulHead;
    if ( gpducstulHead )
    {
      DomainLockRef = (tagObjLock *)GetDomainLockRef(8LL);
      do
      {
        gpducstulHead = v9[2];
        v9[2] = 0LL;
        tagObjLock::UnLock(DomainLockRef);
        HMUnlockObject(*v9);
        RIMLockExclusive(DomainLockRef);
        v9 = (_QWORD *)gpducstulHead;
      }
      while ( gpducstulHead );
    }
    tagObjLock::UnLock(*(tagObjLock **)ResultLength);
    v26 = gdwPolicyFlags;
    v10 = (void *)OpenCacheKeyEx(0LL, 2LL, 131097LL, &v26);
    if ( v10 )
    {
      v11 = 200;
      while ( 1 )
      {
        RtlInitUnicodeString(&DestinationString, L"ThreadUnresponsiveLogTimeout");
        if ( ZwQueryValueKey(
               v10,
               &DestinationString,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x14u,
               ResultLength) >= 0 )
          break;
        if ( !v26 )
          goto LABEL_9;
        ZwClose(v10);
        v10 = (void *)OpenCacheKeyEx(0LL, 2LL, 131097LL, &v26);
        if ( !v10 )
          goto LABEL_26;
      }
      v11 = v30;
LABEL_9:
      ZwClose(v10);
    }
    else
    {
LABEL_26:
      v11 = 200;
    }
    v26 = gdwPolicyFlags;
    v13 = (void *)OpenCacheKeyEx(0LL, 2LL, 131097LL, &v26);
    if ( v13 )
    {
      v14 = 500;
      while ( 1 )
      {
        RtlInitUnicodeString(&DestinationString, L"UserCritAcquireDelayLogTimeout");
        if ( ZwQueryValueKey(
               v13,
               &DestinationString,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x14u,
               ResultLength) >= 0 )
          break;
        if ( !v26 )
          goto LABEL_14;
        ZwClose(v13);
        v13 = (void *)OpenCacheKeyEx(0LL, 2LL, 131097LL, &v26);
        if ( !v13 )
          goto LABEL_28;
      }
      v14 = v30;
LABEL_14:
      ZwClose(v13);
    }
    else
    {
LABEL_28:
      v14 = 500;
    }
    UserSessionSwitchLeaveCrit(v12);
    if ( v11 > 0xC8 )
    {
      W32kEtwMessageCheckDelayTimeoutMs = v11;
      W32kEtwInputProcessDelayTimeoutMs = v11;
    }
    if ( v14 > 0x1F4 )
      W32kEtwUserCritAcquireDelayTimeoutus = v14;
    if ( a2 == 1 )
    {
      WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)(gliQpcFreq.QuadPart
                                                                              * W32kEtwUserCritAcquireDelayTimeoutus
                                                                              / 1000000);
      W32KEtwUserCritTelemetryThrottleQPC = 3600 * gliQpcFreq.QuadPart;
    }
    else
    {
      WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)-1LL;
      W32KEtwUserCritTelemetryThrottleQPC = -1LL;
    }
    *(_QWORD *)&WPP_MAIN_CB.SectorSize = a4;
    if ( ((a4 & 0x8000000000040000uLL) == 0
       || (unsigned __int8)(byte_1C0188DA8 - 1) <= 2u
       || (qword_1C0188D90 & 0x8000000000040000uLL) == 0
       || (qword_1C0188D98 & 0x8000000000040000uLL) != qword_1C0188D98)
      && W32kEtwWaitCursorActiveType )
    {
      v16 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
      if ( v16 )
        v16[1] = KeQueryPerformanceCounter(0LL);
      v17 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v17;
      gbValidateHandleForIL = 1;
      CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>(ResultLength);
      v18 = (_QWORD *)gpducstulHead;
      if ( gpducstulHead )
      {
        v19 = (tagObjLock *)GetDomainLockRef(8LL);
        do
        {
          gpducstulHead = v18[2];
          v18[2] = 0LL;
          tagObjLock::UnLock(v19);
          HMUnlockObject(*v18);
          RIMLockExclusive(v19);
          v18 = (_QWORD *)gpducstulHead;
        }
        while ( gpducstulHead );
      }
      tagObjLock::UnLock(*(tagObjLock **)ResultLength);
      W32kEtwWaitCursorActiveType = 0;
      UserSessionSwitchLeaveCrit(v20);
    }
  }
  if ( a2 == 2 )
  {
    EtwCaptureStateCallback();
    v21 = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( v21 )
      v21[1] = KeQueryPerformanceCounter(0LL);
    v22 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v22;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>(ResultLength);
    v23 = (_QWORD *)gpducstulHead;
    if ( gpducstulHead )
    {
      v24 = (tagObjLock *)GetDomainLockRef(8LL);
      do
      {
        gpducstulHead = v23[2];
        v23[2] = 0LL;
        tagObjLock::UnLock(v24);
        HMUnlockObject(*v23);
        RIMLockExclusive(v24);
        v23 = (_QWORD *)gpducstulHead;
      }
      while ( gpducstulHead );
    }
    tagObjLock::UnLock(*(tagObjLock **)ResultLength);
    CitEtwEnableCallback(a1, 2u, a4);
    UserSessionSwitchLeaveCrit(v25);
  }
}
