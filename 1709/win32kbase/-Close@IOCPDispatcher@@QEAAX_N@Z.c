/*
 * XREFs of ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C003B6D0
 * Callers:
 *     ??_GIOCPDispatcher@@QEAAPEAXI@Z @ 0x1C003B804 (--_GIOCPDispatcher@@QEAAPEAXI@Z.c)
 *     ?UninitializeInputSensors@@YAXXZ @ 0x1C012D7C0 (-UninitializeInputSensors@@YAXXZ.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     ?CleanupInputDispatcherObjects@IOCPDispatcher@@AEAAXXZ @ 0x1C003B294 (-CleanupInputDispatcherObjects@IOCPDispatcher@@AEAAXXZ.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     ProtectHandle @ 0x1C0074204 (ProtectHandle.c)
 */

void __fastcall IOCPDispatcher::Close(HANDLE *this, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  HANDLE v6; // rcx
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v13; // rbx
  __int64 *v14; // rsi
  HANDLE v15; // rcx
  tagObjLock *DomainLockRef; // rbx
  __int64 v17; // [rsp+28h] [rbp-30h]
  _BYTE v18[40]; // [rsp+30h] [rbp-28h] BYREF
  char v19; // [rsp+60h] [rbp+8h] BYREF
  tagObjLock *v20; // [rsp+70h] [rbp+18h] BYREF

  if ( this[322] )
  {
    IOCPDispatcher::CleanupInputDispatcherObjects((IOCPDispatcher *)this);
    if ( a2 )
    {
      UserSessionSwitchLeaveCrit(v5);
      while ( 1 )
      {
        v6 = this[322];
        LOBYTE(v17) = 0;
        v20 = (tagObjLock *)-200000LL;
        v7 = ZwRemoveIoCompletionEx(v6, v18, 1LL, &v19, &v20, v17);
        if ( v7 < 0 )
          break;
        if ( v7 == 258 )
          goto LABEL_6;
      }
      LODWORD(v17) = v7;
      WPP_RECORDER_SF_d(gBaseLog, 2u, 2u, 0x14u, (__int64)&WPP_3391509809d63fedf80dfe580f44325a_Traceguids, v17);
LABEL_6:
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v9, v8, v10, v11);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      v13 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v13;
      gbValidateHandleForIL = 1;
      CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>(&v20);
      v14 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        DomainLockRef = (tagObjLock *)GetDomainLockRef(8LL);
        do
        {
          gpducstulHead = v14[2];
          v14[2] = 0LL;
          tagObjLock::UnLock(DomainLockRef);
          HMUnlockObject(*v14);
          RIMLockExclusive((__int64)DomainLockRef);
          v14 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
      }
      tagObjLock::UnLock(v20);
    }
    v15 = this[323];
    if ( v15 )
    {
      ProtectHandle(v15, v4, 0LL, 0LL);
      ObCloseHandle(this[323], 1);
      this[323] = 0LL;
    }
    ZwClose(this[322]);
    this[322] = 0LL;
  }
}
