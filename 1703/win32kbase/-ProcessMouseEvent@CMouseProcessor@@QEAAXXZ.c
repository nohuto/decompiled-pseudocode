/*
 * XREFs of ?ProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x1C00477DC
 * Callers:
 *     ProcessMouseEvent @ 0x1C0089250 (ProcessMouseEvent.c)
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     ?Initialize@CMouseRawInput@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z @ 0x1C00450E8 (-Initialize@CMouseRawInput@CMouseProcessor@@QEAAXAEBVCMouseEvent@2@@Z.c)
 *     ?ComputeUIPIForMouseEvent@CMouseProcessor@@AEAAXPEAURawMouseEvent@1@@Z @ 0x1C00456A4 (-ComputeUIPIForMouseEvent@CMouseProcessor@@AEAAXPEAURawMouseEvent@1@@Z.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     ?UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z @ 0x1C00490F0 (-UpdateInputGlobals@CInputGlobals@@QEAA_N_KW4_LINP_SOURCE@@GKK@Z.c)
 *     ??0RawMouseEvent@CMouseProcessor@@QEAA@XZ @ 0x1C0049F00 (--0RawMouseEvent@CMouseProcessor@@QEAA@XZ.c)
 *     RIMLockExclusive @ 0x1C0051BC0 (RIMLockExclusive.c)
 *     ?Dequeue@CMouseQueue@CMouseProcessor@@QEAA_NPEAURawMouseEvent@2@@Z @ 0x1C0081E0C (-Dequeue@CMouseQueue@CMouseProcessor@@QEAA_NPEAURawMouseEvent@2@@Z.c)
 *     ApiSetEditionForegroundQAccessibleToMouseProducer @ 0x1C008849C (ApiSetEditionForegroundQAccessibleToMouseProducer.c)
 *     EtwTraceStartProcessQueuedMouseEvents @ 0x1C008C980 (EtwTraceStartProcessQueuedMouseEvents.c)
 *     EtwTraceStopProcessQueuedMouseEvents @ 0x1C008C9A0 (EtwTraceStopProcessQueuedMouseEvents.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

void __fastcall CMouseProcessor::ProcessMouseEvent(CMouseProcessor *this)
{
  bool v2; // al
  bool v3; // di
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  CMouseProcessor *v12; // rcx
  __int64 v13; // rsi
  LARGE_INTEGER v14; // rdi
  int v15; // r8d
  _BYTE *v16; // rdx
  int v17; // edx
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // esi
  bool (__fastcall **v21)(const struct CMouseProcessor::CMouseEvent *); // rdi
  void (*v22)(void); // rax
  _QWORD v23[2]; // [rsp+30h] [rbp-89h] BYREF
  __int64 v24; // [rsp+40h] [rbp-79h] BYREF
  int v25; // [rsp+48h] [rbp-71h]
  _BYTE v26[84]; // [rsp+50h] [rbp-69h] BYREF
  int v27; // [rsp+A4h] [rbp-15h]
  char v28; // [rsp+A8h] [rbp-11h]
  __int64 v29; // [rsp+BCh] [rbp+3h]
  int v30; // [rsp+C4h] [rbp+Bh]
  __int64 v31; // [rsp+D0h] [rbp+17h]

  EtwTraceStartProcessQueuedMouseEvents();
  CMouseProcessor::RawMouseEvent::RawMouseEvent((CMouseProcessor::RawMouseEvent *)v26);
  while ( 1 )
  {
    RIMLockExclusive((char *)this + 2416);
    v2 = CMouseProcessor::CMouseQueue::Dequeue(
           (CMouseProcessor *)((char *)this + 232),
           (struct CMouseProcessor::RawMouseEvent *)v26);
    *((_QWORD *)this + 303) = 0LL;
    v3 = v2;
    ExReleasePushLockExclusiveEx((char *)this + 2416, 0LL);
    KeLeaveCriticalRegion();
    if ( !v3 )
      break;
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v5, v4, v6);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v8 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v13 = PsGetCurrentThreadWin32Thread(v10, v9, v11);
    if ( v13 )
    {
      v14 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v13 + 8));
      if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
      {
        LOBYTE(v12) = byte_1C0186D98 - 1;
        if ( (unsigned __int8)(byte_1C0186D98 - 1) > 2u
          && (qword_1C0186D80 & 0x200000010000000LL) != 0
          && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
          && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
        {
          Template_xqx(
            (_DWORD)v12,
            (unsigned int)&AcquiredExclusiveUserCritEvent,
            v15,
            v14.LowPart,
            0,
            (char)gullUserCritAcquireToken);
        }
      }
      if ( v14.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
        && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
      {
        Template_xqx(
          (_DWORD)gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v15,
          0,
          1000 * v14.QuadPart / gliQpcFreq.QuadPart,
          (char)gullUserCritAcquireToken);
      }
      *(_QWORD *)(v13 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
    }
    gptiCurrent = v8;
    gbValidateHandleForIL = 1;
    CMouseProcessor::ComputeUIPIForMouseEvent(v12, (struct CMouseProcessor::RawMouseEvent *)v26);
    v16 = v26;
    v23[0] = v26;
    if ( (v28 & 1) == 0 && v27 != 1 )
    {
      v25 = v30;
      v24 = v29;
      if ( !(unsigned int)ApiSetEditionForegroundQAccessibleToMouseProducer(&v24, v26, v31 != 0) )
      {
        LOBYTE(v17) = 3;
        WPP_RECORDER_SF_(*((_QWORD *)this + 1), v17, 10, 14, (__int64)&WPP_338e47b8ee3f3cefb58715c45f8dd270_Traceguids);
        goto LABEL_24;
      }
      v16 = (_BYTE *)v23[0];
    }
    v18 = *((_DWORD *)v16 + 22);
    v19 = 2;
    if ( (v18 & 0x80u) != 0 )
      v19 = 10;
    if ( (v18 & 0x40) != 0 )
      v19 |= 0x10u;
    CInputGlobals::UpdateInputGlobals(gpInputGlobals, *((_QWORD *)v16 + 8), 2LL, *((unsigned __int16 *)v16 + 8), 0, v19);
    CMouseProcessor::CMouseRawInput::Initialize(
      (CMouseProcessor *)((char *)this + 2456),
      (const struct CMouseProcessor::CMouseEvent *)v23);
    v20 = 0;
    v21 = &off_1C0159220;
    do
    {
      if ( !*v21 || (*v21)((const struct CMouseProcessor::CMouseEvent *)v23) )
        ((void (__fastcall *)(CMouseProcessor *, _QWORD *))v21[1])(this, v23);
      ++v20;
      v21 += 2;
    }
    while ( v20 < 3 );
    v22 = *(void (**)(void))(v23[0] + 128LL);
    if ( v22 )
      v22();
LABEL_24:
    UserSessionSwitchLeaveCrit();
  }
  EtwTraceStopProcessQueuedMouseEvents();
}
