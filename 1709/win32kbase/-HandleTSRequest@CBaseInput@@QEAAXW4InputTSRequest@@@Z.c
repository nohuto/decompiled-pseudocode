/*
 * XREFs of ?HandleTSRequest@CBaseInput@@QEAAXW4InputTSRequest@@@Z @ 0x1C001A5D0
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1C0019BF8 (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     ?SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C001A81C (-SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CBaseInput::HandleTSRequest(CBaseInput *a1, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v10; // rbx
  __int64 *v11; // rdi
  tagObjLock *DomainLockRef; // rbx
  tagObjLock *v13; // [rsp+40h] [rbp+18h] BYREF

  if ( a2 < 4 )
  {
    v3 = 3LL * a2;
    if ( *((_DWORD *)&unk_1C01591E0 + 6 * a2 + 4) >= 0xCu || CBaseInput::ExecutingOnSensorHostingThread(a1) )
    {
      (*((void (__fastcall **)(CBaseInput *))&unk_1C01591E0 + v3 + 1))(a1);
    }
    else
    {
      UserSessionSwitchLeaveCrit(v4);
      CRIMBase::SensorDoWorkAndWait(a1, *((unsigned int *)&unk_1C01591E0 + 2 * v3 + 4));
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v6, v5, v7, v8);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      v10 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
      EtwTraceAcquiredExclusiveUserCrit();
      gptiCurrent = v10;
      gbValidateHandleForIL = 1;
      CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>(&v13);
      v11 = (__int64 *)gpducstulHead;
      if ( gpducstulHead )
      {
        DomainLockRef = (tagObjLock *)GetDomainLockRef(8LL);
        do
        {
          gpducstulHead = v11[2];
          v11[2] = 0LL;
          tagObjLock::UnLock(DomainLockRef);
          HMUnlockObject(*v11);
          RIMLockExclusive((__int64)DomainLockRef);
          v11 = (__int64 *)gpducstulHead;
        }
        while ( gpducstulHead );
      }
      tagObjLock::UnLock(v13);
    }
  }
}
