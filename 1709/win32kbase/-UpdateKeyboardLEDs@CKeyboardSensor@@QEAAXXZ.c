/*
 * XREFs of ?UpdateKeyboardLEDs@CKeyboardSensor@@QEAAXXZ @ 0x1C000A890
 * Callers:
 *     ?WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ @ 0x1C003BBE0 (-WaitAndDispatch@LegacyInputDispatcher@@QEAAJXZ.c)
 *     UpdateKeyLights @ 0x1C0096C70 (UpdateKeyLights.c)
 * Callees:
 *     ??0CInpLockExclusiveIfNeeded@@QEAA@AEAUCInpPushLock@@@Z @ 0x1C00092D0 (--0CInpLockExclusiveIfNeeded@@QEAA@AEAUCInpPushLock@@@Z.c)
 *     RIMDeviceIoControl @ 0x1C000AC40 (RIMDeviceIoControl.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 */

void __fastcall CKeyboardSensor::UpdateKeyboardLEDs(CKeyboardSensor *this)
{
  __int64 v1; // rdx
  BOOLEAN IsResourceAcquiredExclusiveLite; // si
  int v4; // r14d
  char v5; // bp
  struct DEVICEINFO *i; // rbx
  __int64 v7; // rcx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v9; // rbx
  _QWORD *v10; // rdi
  tagObjLock *DomainLockRef; // rbx
  int v12; // [rsp+58h] [rbp-50h]
  __int64 v13; // [rsp+60h] [rbp-48h] BYREF
  char v14; // [rsp+68h] [rbp-40h]
  char v15; // [rsp+B0h] [rbp+8h] BYREF
  char v16; // [rsp+B8h] [rbp+10h] BYREF
  tagObjLock *v17; // [rsp+C0h] [rbp+18h] BYREF

  v1 = *((_QWORD *)this + 2);
  if ( v1 && *((_QWORD *)this + 1) != -1LL && *(struct _KTHREAD **)(v1 + 40) == KeGetCurrentThread() )
  {
    IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresDeviceInfoList);
    if ( IsResourceAcquiredExclusiveLite )
      ExReleaseResourceAndLeaveCriticalRegion(gpresDeviceInfoList);
    v4 = gbRemoteSession;
    v5 = gdwUpdateKeyboard;
    *(_DWORD *)(&WPP_MAIN_CB.DeviceQueue.Size + 1) = gktp;
    WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink = (struct _LIST_ENTRY *)gKbdImeStatus;
    LOWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink) = word_1C0195C08;
    LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) = dword_1C0195C00;
    *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type = gklp;
    WPP_MAIN_CB.DeviceQueue.1 = (struct _KDEVICE_QUEUE::$9FAF936D47973D5FBAA72DAF24011AE0::$18E3EACC1E717291AA7C720ECCD5C45C)gRemoteClientKeyboardType;
    WPP_MAIN_CB.Dpc.TargetInfoAsUlong = dword_1C018EDB0;
    UserSessionSwitchLeaveCrit((unsigned int)gklp);
    CInpLockExclusiveIfNeeded::CInpLockExclusiveIfNeeded(
      (CInpLockExclusiveIfNeeded *)&v13,
      (struct CInpPushLock *)&CBaseInput::_sLock);
    for ( i = CBaseInput::_spDevList; i; i = (struct DEVICEINFO *)*((_QWORD *)i + 7) )
    {
      if ( *((_BYTE *)i + 48) == 1 && *((_QWORD *)i + 28) )
      {
        if ( (v5 & 1) != 0 )
        {
          LOBYTE(v12) = 0;
          RIMDeviceIoControl(
            *((_QWORD *)this + 1),
            *((_QWORD *)i + 2),
            720900LL,
            &WPP_MAIN_CB.DeviceQueue.Size + 1,
            6,
            0LL,
            0,
            &v15,
            &giosbKbdControl,
            1,
            0,
            v12);
        }
        if ( (v5 & 2) != 0 )
        {
          LOBYTE(v12) = 0;
          RIMDeviceIoControl(
            *((_QWORD *)this + 1),
            *((_QWORD *)i + 2),
            720904LL,
            &WPP_MAIN_CB.DeviceQueue,
            4,
            0LL,
            0,
            &v15,
            &giosbKbdControl,
            1,
            0,
            v12);
        }
        if ( (v5 & 4) != 0
          && (*((_BYTE *)i + 456) == 7 && *((_BYTE *)i + 457) == 82
           || v4 && *(_QWORD *)&WPP_MAIN_CB.DeviceQueue.1 == 0x2000200000007LL) )
        {
          LOBYTE(v12) = 0;
          RIMDeviceIoControl(
            *((_QWORD *)this + 1),
            *((_QWORD *)i + 2),
            724996LL,
            &WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink,
            12,
            0LL,
            0,
            &v16,
            &giosbKbdControl,
            1,
            0,
            v12);
        }
      }
    }
    if ( !v14 )
    {
      v7 = v13;
      *(_QWORD *)(v13 + 8) = 0LL;
      ExReleasePushLockExclusiveEx(v7, 0LL);
      KeLeaveCriticalRegion();
    }
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v9 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v9;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>(&v17);
    v10 = (_QWORD *)gpducstulHead;
    if ( gpducstulHead )
    {
      DomainLockRef = (tagObjLock *)GetDomainLockRef(8LL);
      do
      {
        gpducstulHead = v10[2];
        v10[2] = 0LL;
        tagObjLock::UnLock(DomainLockRef);
        HMUnlockObject(*v10);
        RIMLockExclusive(DomainLockRef);
        v10 = (_QWORD *)gpducstulHead;
      }
      while ( gpducstulHead );
    }
    tagObjLock::UnLock(v17);
    if ( IsResourceAcquiredExclusiveLite )
      ExEnterCriticalRegionAndAcquireResourceExclusive(gpresDeviceInfoList);
    gdwUpdateKeyboard &= 0xFFFFFFF8;
  }
}
