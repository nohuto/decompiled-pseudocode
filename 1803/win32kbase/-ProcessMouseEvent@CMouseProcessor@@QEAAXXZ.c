/*
 * XREFs of ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C00399EC
 * Callers:
 *     ProcessMouseEvent @ 0x1C003A990 (ProcessMouseEvent.c)
 * Callees:
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C0030320 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00303C0 (UserSessionSwitchLeaveCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C0030418 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C0030660 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C0030710 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     ?LockExclusive@tagObjLock@@QEAAXXZ @ 0x1C00307A0 (-LockExclusive@tagObjLock@@QEAAXXZ.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1C00307FC (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ?ComputeUIPIForMouseEvent@CMouseProcessor@@AEAAXPEAURawMouseEvent@1@@Z @ 0x1C0037868 (-ComputeUIPIForMouseEvent@CMouseProcessor@@AEAAXPEAURawMouseEvent@1@@Z.c)
 *     ?Dequeue@CMouseQueue@CMouseProcessor@@QEAA_NPEAURawMouseEvent@2@@Z @ 0x1C0039FF4 (-Dequeue@CMouseQueue@CMouseProcessor@@QEAA_NPEAURawMouseEvent@2@@Z.c)
 *     HMUnlockObject @ 0x1C003A140 (HMUnlockObject.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0055980 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     ?Initialize@CMouseRawInput@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1C0060090 (-Initialize@CMouseRawInput@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 *     ??0RawMouseEvent@CMouseProcessor@@QEAA@XZ @ 0x1C0063990 (--0RawMouseEvent@CMouseProcessor@@QEAA@XZ.c)
 *     EtwTraceStopProcessQueuedMouseEvents @ 0x1C0066F90 (EtwTraceStopProcessQueuedMouseEvents.c)
 *     EtwTraceStartProcessQueuedMouseEvents @ 0x1C0066FB0 (EtwTraceStartProcessQueuedMouseEvents.c)
 *     ApiSetEditionForegroundQAccessibleToMouseProducer @ 0x1C0071988 (ApiSetEditionForegroundQAccessibleToMouseProducer.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C01215E0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::ProcessMouseEvent(CMouseProcessor *this)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v3; // rbx
  struct tagTHREADINFO **v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 *DomainLockRef; // rbx
  __int64 v14; // rdx
  _QWORD *v15; // rsi
  CMouseProcessor *v16; // rcx
  _BYTE *v17; // rdx
  int v18; // edx
  __int64 v19; // rcx
  int v20; // r8d
  __int64 v21; // r9
  __int64 v22; // rdx
  int v23; // eax
  unsigned int v24; // esi
  bool (__fastcall **v25)(const struct CMouseProcessor::CMouseEvent *); // rbx
  void (*v26)(void); // rax
  bool v27; // bl
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  _BYTE *v31; // [rsp+38h] [rbp-79h] BYREF
  tagObjLock *v32; // [rsp+40h] [rbp-71h] BYREF
  __int64 v33; // [rsp+48h] [rbp-69h] BYREF
  int v34; // [rsp+50h] [rbp-61h]
  _BYTE v35[84]; // [rsp+58h] [rbp-59h] BYREF
  int v36; // [rsp+ACh] [rbp-5h]
  char v37; // [rsp+B0h] [rbp-1h]
  __int64 v38; // [rsp+C4h] [rbp+13h]
  int v39; // [rsp+CCh] [rbp+1Bh]
  __int64 v40; // [rsp+E0h] [rbp+2Fh]

  EtwTraceStartProcessQueuedMouseEvents();
  CMouseProcessor::RawMouseEvent::RawMouseEvent((CMouseProcessor::RawMouseEvent *)v35);
  while ( 1 )
  {
    RIMLockExclusive((char *)this + 2424);
    v27 = CMouseProcessor::CMouseQueue::Dequeue(
            (CMouseProcessor *)((char *)this + 112),
            (struct CMouseProcessor::RawMouseEvent *)v35);
    CInpPushLock::UnLockExclusive((CMouseProcessor *)((char *)this + 2424));
    if ( !v27 )
      break;
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v29, v28, v30);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v3 = 0LL;
    while ( 1 )
    {
      v4 = (struct tagTHREADINFO **)ExEnterCriticalRegionAndAcquireResourceExclusive(gpresUser);
      if ( v4 )
        v3 = *v4;
      if ( IsCurrentProcessDwm()
        || (PVOID)PsGetCurrentProcess() == gpepCSRSS && v3 != (struct tagTHREADINFO *)gptiTSRequest
        || gbDITInHitTest != 1
        || v3 == gptiRit )
      {
        break;
      }
      ++gcDITHitTestWaiters;
      ExReleaseResourceAndLeaveCriticalRegion(gpresUser);
      KeWaitForSingleObject(gpsemDITHitTestWaiters, UserRequest, 0, 0, 0LL);
    }
    EtwTraceAcquiredExclusiveUserCrit(v6, v5, v7);
    gptiCurrent = v3;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>((__int64 *)&v32);
    while ( 1 )
    {
      v15 = (_QWORD *)gpducstulHead;
      if ( !gpducstulHead )
        break;
      gpducstulHead = *(_QWORD *)(gpducstulHead + 16);
      v10 = *v15;
      v15[2] = 0LL;
      if ( !*(_DWORD *)(v10 + 8) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8);
      DomainLockRef = GetDomainLockRef(8LL, v8);
      if ( DomainLockRef == &gDomainDummyLock )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11);
      tagObjLock::UnLock((tagObjLock *)DomainLockRef);
      HMUnlockObject(*v15);
      tagObjLock::LockExclusive((struct _KTHREAD **)DomainLockRef, v14);
    }
    tagObjLock::UnLock(v32);
    CMouseProcessor::ComputeUIPIForMouseEvent(v16, (struct CMouseProcessor::RawMouseEvent *)v35);
    v17 = v35;
    v31 = v35;
    if ( (v37 & 1) == 0 && v36 != 1 )
    {
      v33 = v38;
      v34 = v39;
      if ( !(unsigned int)ApiSetEditionForegroundQAccessibleToMouseProducer(&v33, v35, v40 != 0) )
      {
        LOBYTE(v18) = 3;
        WPP_RECORDER_SF_(*((_QWORD *)this + 1), v18, 10, 14, (__int64)&WPP_dfaecf715a78372e81b0b16700b1f5cf_Traceguids);
        goto LABEL_36;
      }
      v17 = v31;
    }
    v20 = *((_DWORD *)v17 + 22);
    if ( (v20 & 0x1000) == 0 )
    {
      v21 = *((unsigned __int16 *)v17 + 8);
      v22 = *((_QWORD *)v17 + 8);
      v23 = ((v20 & 0x40) != 0 ? 16 : 32) | 8;
      if ( (v20 & 0x80u) == 0 )
        v23 = (v20 & 0x40) != 0 ? 16 : 32;
      CInputGlobals::UpdateInputGlobals(gpInputGlobals, v22, 2LL, v21, 0, v23);
    }
    CMouseProcessor::CMouseRawInput::Initialize(
      (CMouseProcessor *)((char *)this + 2464),
      (const struct CMouseProcessor::CMouseEvent *)&v31);
    v24 = 0;
    v25 = &off_1C016D450;
    do
    {
      if ( !*v25 || (*v25)((const struct CMouseProcessor::CMouseEvent *)&v31) )
        ((void (__fastcall *)(CMouseProcessor *, _BYTE **))v25[1])(this, &v31);
      ++v24;
      v25 += 2;
    }
    while ( v24 < 3 );
    v26 = (void (*)(void))*((_QWORD *)v31 + 17);
    if ( v26 )
      v26();
LABEL_36:
    UserSessionSwitchLeaveCrit(v19);
  }
  EtwTraceStopProcessQueuedMouseEvents();
}
