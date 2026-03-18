/*
 * XREFs of ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C0013E1C
 * Callers:
 *     ProcessMouseEvent @ 0x1C0013A20 (ProcessMouseEvent.c)
 * Callees:
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C0011110 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     ?ComputeUIPIForMouseEvent@CMouseProcessor@@AEAAXPEAURawMouseEvent@1@@Z @ 0x1C001456C (-ComputeUIPIForMouseEvent@CMouseProcessor@@AEAAXPEAURawMouseEvent@1@@Z.c)
 *     ?Dequeue@CMouseQueue@CMouseProcessor@@QEAA_NPEAURawMouseEvent@2@@Z @ 0x1C0016AF0 (-Dequeue@CMouseQueue@CMouseProcessor@@QEAA_NPEAURawMouseEvent@2@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0016BAC (WPP_RECORDER_SF_.c)
 *     ?UnLockExclusive@CInpPushLock@@QEAAXXZ @ 0x1C0016C80 (-UnLockExclusive@CInpPushLock@@QEAAXXZ.c)
 *     RIMLockExclusive @ 0x1C0016D00 (RIMLockExclusive.c)
 *     HMUnlockObject @ 0x1C00176F4 (HMUnlockObject.c)
 *     ?Initialize@CMouseRawInput@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1C00179D4 (-Initialize@CMouseRawInput@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 *     ApiSetEditionForegroundQAccessibleToMouseProducer @ 0x1C00188B0 (ApiSetEditionForegroundQAccessibleToMouseProducer.c)
 *     EtwTraceAcquiredExclusiveUserCrit @ 0x1C003C090 (EtwTraceAcquiredExclusiveUserCrit.c)
 *     ??0?$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ @ 0x1C003C1C0 (--0-$CLockDomainExclusive@VDLT_THREADLOCK@@@@QEAA@XZ.c)
 *     ?GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z @ 0x1C003C210 (-GetDomainLockRef@@YAAEAUtagObjLock@@W4DomainLockType@@@Z.c)
 *     ?UnLock@tagObjLock@@QEAAXXZ @ 0x1C003C2C0 (-UnLock@tagObjLock@@QEAAXXZ.c)
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C003C30C (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C00479B0 (UserSessionSwitchLeaveCrit.c)
 *     ??0RawMouseEvent@CMouseProcessor@@QEAA@XZ @ 0x1C0081620 (--0RawMouseEvent@CMouseProcessor@@QEAA@XZ.c)
 *     EtwTraceStopProcessQueuedMouseEvents @ 0x1C008A5A0 (EtwTraceStopProcessQueuedMouseEvents.c)
 *     EtwTraceStartProcessQueuedMouseEvents @ 0x1C008A5C0 (EtwTraceStartProcessQueuedMouseEvents.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMouseProcessor::ProcessMouseEvent(CMouseProcessor *this)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v3; // rbx
  _QWORD *v4; // rsi
  tagObjLock *DomainLockRef; // rbx
  CMouseProcessor *v6; // rcx
  _BYTE *v7; // rdx
  int v8; // edx
  __int64 v9; // rcx
  int v10; // r8d
  unsigned __int16 v11; // r9
  __int64 v12; // rdx
  unsigned int v13; // eax
  unsigned int v14; // esi
  bool (__fastcall **v15)(const struct CMouseProcessor::CMouseEvent *); // rbx
  void (*v16)(void); // rax
  bool v17; // bl
  _BYTE *v18; // [rsp+38h] [rbp-79h] BYREF
  tagObjLock *v19; // [rsp+40h] [rbp-71h] BYREF
  __int64 v20; // [rsp+48h] [rbp-69h] BYREF
  int v21; // [rsp+50h] [rbp-61h]
  _BYTE v22[84]; // [rsp+58h] [rbp-59h] BYREF
  int v23; // [rsp+ACh] [rbp-5h]
  char v24; // [rsp+B0h] [rbp-1h]
  __int64 v25; // [rsp+C4h] [rbp+13h]
  int v26; // [rsp+CCh] [rbp+1Bh]
  __int64 v27; // [rsp+E0h] [rbp+2Fh]

  EtwTraceStartProcessQueuedMouseEvents();
  CMouseProcessor::RawMouseEvent::RawMouseEvent((CMouseProcessor::RawMouseEvent *)v22);
  RIMLockExclusive((char *)this + 2568);
  while ( 1 )
  {
    v17 = CMouseProcessor::CMouseQueue::Dequeue(
            (CMouseProcessor *)((char *)this + 256),
            (struct CMouseProcessor::RawMouseEvent *)v22);
    CInpPushLock::UnLockExclusive((CMouseProcessor *)((char *)this + 2568));
    if ( !v17 )
      break;
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread();
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v3 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
    EtwTraceAcquiredExclusiveUserCrit();
    gptiCurrent = v3;
    gbValidateHandleForIL = 1;
    CLockDomainExclusive<DLT_THREADLOCK>::CLockDomainExclusive<DLT_THREADLOCK>(&v19);
    v4 = (_QWORD *)gpducstulHead;
    if ( gpducstulHead )
    {
      DomainLockRef = (tagObjLock *)GetDomainLockRef(8LL);
      do
      {
        gpducstulHead = v4[2];
        v4[2] = 0LL;
        tagObjLock::UnLock(DomainLockRef);
        HMUnlockObject(*v4);
        RIMLockExclusive(DomainLockRef);
        v4 = (_QWORD *)gpducstulHead;
      }
      while ( gpducstulHead );
    }
    tagObjLock::UnLock(v19);
    CMouseProcessor::ComputeUIPIForMouseEvent(v6, (struct CMouseProcessor::RawMouseEvent *)v22);
    v7 = v22;
    v18 = v22;
    if ( (v24 & 1) == 0 && v23 != 1 )
    {
      v20 = v25;
      v21 = v26;
      if ( !(unsigned int)ApiSetEditionForegroundQAccessibleToMouseProducer(&v20, v22, v27 != 0) )
      {
        LOBYTE(v8) = 3;
        WPP_RECORDER_SF_(*((_QWORD *)this + 1), v8, 10, 14, (__int64)&WPP_a4af2ce7cdc538a80a2b948350856c09_Traceguids);
        goto LABEL_23;
      }
      v7 = v18;
    }
    v10 = *((_DWORD *)v7 + 22);
    if ( (v10 & 0x1000) == 0 )
    {
      v11 = *((_WORD *)v7 + 8);
      v12 = *((_QWORD *)v7 + 8);
      v13 = ((v10 & 0x80 | 0x20u) >> 4) | 0x10;
      if ( (v10 & 0x40) == 0 )
        v13 = (v10 & 0x80 | 0x20u) >> 4;
      CInputGlobals::UpdateInputGlobals((__int64)gpInputGlobals, v12, 2u, v11, 0, v13);
    }
    CMouseProcessor::CMouseRawInput::Initialize(
      (CMouseProcessor *)((char *)this + 2608),
      (const struct CMouseProcessor::CMouseEvent *)&v18);
    v14 = 0;
    v15 = &off_1C015B330;
    do
    {
      if ( !*v15 || (*v15)((const struct CMouseProcessor::CMouseEvent *)&v18) )
        ((void (__fastcall *)(CMouseProcessor *, _BYTE **))v15[1])(this, &v18);
      ++v14;
      v15 += 2;
    }
    while ( v14 < 3 );
    v16 = (void (*)(void))*((_QWORD *)v18 + 17);
    if ( v16 )
      v16();
LABEL_23:
    UserSessionSwitchLeaveCrit(v9);
    RIMLockExclusive((char *)this + 2568);
  }
  EtwTraceStopProcessQueuedMouseEvents();
}
