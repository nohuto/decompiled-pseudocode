/*
 * XREFs of UserFindBaseWindowHandle @ 0x1C00EC0BC
 * Callers:
 *     ?Initialize@CInputQueue@@IEAAJPEAUHWND__@@UtagMsgRoutingInfo@@@Z @ 0x1C008067C (-Initialize@CInputQueue@@IEAAJPEAUHWND__@@UtagMsgRoutingInfo@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000E1E8 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qq @ 0x1C000E724 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     LockProcessByClientId @ 0x1C00921C0 (LockProcessByClientId.c)
 *     HMFindEntry @ 0x1C00E4D90 (HMFindEntry.c)
 */

__int64 __fastcall UserFindBaseWindowHandle(__int64 a1, int *a2, __int64 a3, __int64 a4)
{
  PDEVICE_OBJECT v6; // rcx
  __int64 v7; // rdi
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 *v14; // rsi
  __int64 *DomainLockRef; // rbx
  char *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD v22[9]; // [rsp+40h] [rbp-48h] BYREF
  PVOID Object; // [rsp+98h] [rbp+10h] BYREF
  tagObjLock *v24; // [rsp+A0h] [rbp+18h] BYREF

  v6 = WPP_GLOBAL_Control;
  v7 = 0LL;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x12u,
      (__int64)&WPP_75b573961131395cc80d6b2ba9b39bbc_Traceguids);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v6, a2, a3, a4);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v9 = EnterCritAvoidingDitHitTestHazard(0, 1);
  EtwTraceAcquiredExclusiveUserCrit(v11, v10, v12, v13);
  gptiCurrent = v9;
  gbValidateHandleForIL = 1;
  CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v24);
  v14 = (__int64 *)gpducstulHead;
  if ( gpducstulHead )
  {
    DomainLockRef = GetDomainLockRef(8);
    do
    {
      gpducstulHead = v14[2];
      v14[2] = 0LL;
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*v14);
      RIMLockExclusive((__int64)DomainLockRef);
      v14 = (__int64 *)gpducstulHead;
    }
    while ( gpducstulHead );
  }
  tagObjLock::UnLock(v24);
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(&gWndLock, 0LL);
  if ( (int)LockProcessByClientId(*a2, &Object) < 0 )
  {
    WPP_RECORDER_SF_q(gBaseLog, 2u, 0xFu, 0x14u, (__int64)&WPP_75b573961131395cc80d6b2ba9b39bbc_Traceguids, *a2);
  }
  else
  {
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(&gHmLock, 0LL);
    v22[0] = a1;
    v22[2] = 0LL;
    v22[1] = PsGetProcessWin32Process(Object);
    v16 = HMFindEntry((__int64)v22, (unsigned int (__fastcall *)(__int64, char *))lookForMatchingMinuserHwnd);
    ObfDereferenceObject(Object);
    if ( v16 )
    {
      v7 = **((_QWORD **)gpKernelHandleTable + 3 * (unsigned int)((v16 - (_BYTE *)qword_1C018E9B8) >> 5));
      ExReleasePushLockSharedEx(&gHmLock, 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_17;
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qq(gBaseLog, 5u, 0xFu, 0x13u, (__int64)&WPP_75b573961131395cc80d6b2ba9b39bbc_Traceguids, a1, *a2);
    ExReleasePushLockSharedEx(&gHmLock, 0LL);
    KeLeaveCriticalRegion();
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x15u,
      (__int64)&WPP_75b573961131395cc80d6b2ba9b39bbc_Traceguids);
LABEL_17:
  ExReleasePushLockSharedEx(&gWndLock, 0LL);
  KeLeaveCriticalRegion();
  UserSessionSwitchLeaveCrit(v18, v17, v19, v20);
  return v7;
}
