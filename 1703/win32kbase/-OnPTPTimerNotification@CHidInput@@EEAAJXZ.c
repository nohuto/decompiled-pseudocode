/*
 * XREFs of ?OnPTPTimerNotification@CHidInput@@EEAAJXZ @ 0x1C012C7B0
 * Callers:
 *     <none>
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     HMValidateHandleNoSecure @ 0x1C006F6C4 (HMValidateHandleNoSecure.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 *     ?IsTouchpadDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z @ 0x1C012C6A8 (-IsTouchpadDevice@CHidInput@@AEBAHPEAUDEVICEINFO@@@Z.c)
 *     ?OnEvent@PTPEngineTraceProducer@@UEAAJPEAUPTPEngineEvent@@@Z @ 0x1C01393E0 (-OnEvent@PTPEngineTraceProducer@@UEAAJPEAUPTPEngineEvent@@@Z.c)
 */

__int64 __fastcall CHidInput::OnPTPTimerNotification(CHidInput *this, __int64 a2, __int64 a3)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v5; // rbp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdi
  LARGE_INTEGER v10; // rcx
  LARGE_INTEGER v11; // rbx
  LARGE_INTEGER v12; // r8
  struct DEVICEINFO *v13; // rax
  CHidInput *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v18; // [rsp+20h] [rbp-18h]
  int v19; // [rsp+20h] [rbp-18h]
  int v20; // [rsp+40h] [rbp+8h] BYREF

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(this, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v5 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v9 = PsGetCurrentThreadWin32Thread(v7, v6, v8);
  if ( v9 )
  {
    v11 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v9 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
      && (qword_1C0186D80 & 0x200000010000000LL) != 0
      && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      v19 = 0;
      LOBYTE(v10.LowPart) = byte_1C0186D98 - 1;
      Template_xqx(
        v10.QuadPart,
        &AcquiredExclusiveUserCritEvent,
        v12.QuadPart,
        v11.QuadPart,
        v19,
        gullUserCritAcquireToken);
    }
    if ( v11.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      LODWORD(v18) = 1000 * v11.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        (__int64)gullUserCritAcquireToken,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v12.QuadPart,
        0LL,
        v18,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v9 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  gptiCurrent = v5;
  gbValidateHandleForIL = 1;
  v13 = (struct DEVICEINFO *)HMValidateHandleNoSecure(*((_QWORD *)this + 81), 19);
  if ( CHidInput::IsTouchpadDevice(v14, v13) )
  {
    v16 = *(_QWORD *)(v15 + 472);
    if ( v16 )
      v16 = *(_QWORD *)(v16 + 1624);
    if ( v16 )
    {
      v20 = 0;
      PTPEngineTraceProducer::OnEvent(*(PTPEngineTraceProducer **)(v16 + 800), (struct PTPEngineEvent *)&v20);
    }
  }
  UserSessionSwitchLeaveCrit();
  return 0LL;
}
