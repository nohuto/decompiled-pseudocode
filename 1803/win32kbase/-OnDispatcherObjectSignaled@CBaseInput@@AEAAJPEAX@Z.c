/*
 * XREFs of ?OnDispatcherObjectSignaled@CBaseInput@@AEAAJPEAX@Z @ 0x1C003ACE0
 * Callers:
 *     ?_OnDispatcherObjectSignaled@CBaseInput@@CAJPEAX0@Z @ 0x1C003ACA0 (-_OnDispatcherObjectSignaled@CBaseInput@@CAJPEAX0@Z.c)
 * Callees:
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030320 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0030418 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0030660 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C00307A0 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     ?SignalMarshalingCompleted@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1C003AED0 (-SignalMarshalingCompleted@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 *     ?IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ @ 0x1C003AF34 (-IsValid@SensorDispatcherObject@CRIMBase@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CBaseInput::OnDispatcherObjectSignaled(CBaseInput *this, void *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  unsigned int v7; // ebp
  void **v8; // rax
  unsigned __int64 v9; // rbx
  int v10; // ebx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v12; // rbx
  struct tagTHREADINFO **v13; // rax
  PVOID CurrentProcess; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 *v20; // r14
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned int v25; // edi
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v30; // rdx
  tagObjLock *v31; // [rsp+50h] [rbp+8h] BYREF

  (*(void (__fastcall **)(CBaseInput *))(*(_QWORD *)this + 104LL))(this);
  v7 = 0;
  v8 = (void **)((char *)this + 192);
  while ( *v8 != a2 )
  {
    ++v7;
    v8 += 8;
    if ( v7 >= 0xE )
    {
      v25 = 14;
      goto LABEL_9;
    }
  }
  v9 = (unsigned __int64)v7 << 6;
  if ( !CRIMBase::SensorDispatcherObject::IsValid((CBaseInput *)((char *)this + v9 + 144)) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
  v25 = *(_DWORD *)((char *)this + v9 + 160);
  if ( v7 != v25 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
    v25 = *(_DWORD *)((char *)this + v9 + 160);
  }
LABEL_9:
  if ( v25 == 14 )
  {
    v10 = -1073741823;
  }
  else
  {
    if ( v25 != *((_DWORD *)&unk_1C01721E0 + 6 * v25) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4);
    if ( *((_BYTE *)&unk_1C01721E0 + 24 * v25 + 16) )
    {
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v5, v4, v6);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      v12 = 0LL;
      while ( 1 )
      {
        v13 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
        if ( v13 )
          v12 = *v13;
        CurrentProcess = (PVOID)PsGetCurrentProcess();
        if ( CurrentProcess )
        {
          if ( CurrentProcess == g_pepDwm )
            break;
        }
        if ( (PVOID)PsGetCurrentProcess() == gpepCSRSS && v12 != (struct tagTHREADINFO *)gptiTSRequest
          || gbDITInHitTest != 1
          || v12 == gptiRit )
        {
          break;
        }
        ++gcDITHitTestWaiters;
        ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
        KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
      }
      EtwTraceAcquiredExclusiveUserCrit(v16, v15, v17);
      gptiCurrent = v12;
      gbValidateHandleForIL = 1;
      CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v31);
      while ( 1 )
      {
        v20 = (__int64 *)gpducstulHead;
        if ( !gpducstulHead )
          break;
        gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
        v26 = *v20;
        v20[2] = 0LL;
        if ( !*(_DWORD *)(v26 + 8) )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v19, v18);
        DomainLockRef = GetDomainLockRef(8LL, v18);
        if ( DomainLockRef == &gDomainDummyLock )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v28, v27);
        tagObjLock::UnLock((tagObjLock *)DomainLockRef);
        HMUnlockObject(*v20);
        tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef, v30);
      }
      tagObjLock::UnLock(v31);
      v10 = (*((__int64 (__fastcall **)(CBaseInput *))&unk_1C01721E0 + 3 * v25 + 1))(this);
      UserSessionSwitchLeaveCrit(v21);
    }
    else
    {
      v10 = (*((__int64 (__fastcall **)(CBaseInput *))&unk_1C01721E0 + 3 * v25 + 1))(this);
    }
    if ( v10 < 0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v23, v22);
    CRIMBase::SignalMarshalingCompleted(this, v25);
  }
  (*(void (__fastcall **)(CBaseInput *))(*(_QWORD *)this + 112LL))(this);
  return (unsigned int)v10;
}
