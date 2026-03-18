/*
 * XREFs of ApiSetSendPTPAsMouse @ 0x1C013D860
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1C012B6A0 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     WPP_RECORDER_SF_ @ 0x1C0047BD0 (WPP_RECORDER_SF_.c)
 *     SynthesizeMouseInput @ 0x1C0084220 (SynthesizeMouseInput.c)
 *     UpconvertTime @ 0x1C0088980 (UpconvertTime.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

__int64 __fastcall ApiSetSendPTPAsMouse(__int64 a1, unsigned int a2, unsigned int a3, __int64 a4)
{
  unsigned int v6; // edi
  __int64 result; // rax
  int v9; // edx
  __int16 v10; // cx
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rsi
  int v13; // edi
  int v14; // edi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
  LARGE_INTEGER v25; // rcx
  LARGE_INTEGER v26; // r8
  LONGLONG v27; // rbx
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-30h]
  __int64 v29; // [rsp+30h] [rbp-20h] BYREF
  __int64 v30; // [rsp+38h] [rbp-18h]
  __int64 v31; // [rsp+40h] [rbp-10h]
  int v32; // [rsp+84h] [rbp+34h]

  v32 = HIDWORD(a1);
  v6 = a2;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(a2) = 5;
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      a2,
      14,
      200,
      (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  if ( (int)IsSendPTPAsMouseSupported() >= 0 )
  {
    result = SendPTPAsMouse(a4, a1, v6, a3);
    goto LABEL_31;
  }
  v29 = 0x800000LL;
  v30 = 0LL;
  v31 = 0LL;
  v10 = 2;
  if ( (v6 & 2) == 0 )
  {
    if ( v6 != 4 )
    {
      v10 = 8;
      if ( v6 == 8 )
      {
        WORD2(v29) = 4;
        goto LABEL_12;
      }
      if ( v6 != 16 )
        goto LABEL_12;
    }
    WORD2(v29) = v10;
    goto LABEL_12;
  }
  WORD2(v29) = 1;
LABEL_12:
  v11 = UpconvertTime(a3);
  v12 = v11 * gliQpcFreq.QuadPart / 0x3E8;
  v13 = v6 & 1;
  if ( v13 )
  {
    LODWORD(v31) = v32;
    HIDWORD(v30) = a1;
  }
  v14 = -v13;
  if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
    KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
  UserSessionSwitchLeaveCrit();
  SynthesizeMouseInput(a4, (__int64)&v29, v11, v12, v14 != 0 ? 864 : 872);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v16, v15, v17);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v19 = EnterCritAvoidingDitHitTestHazard(0, 1);
  result = PsGetCurrentThreadWin32Thread(v21, v20, v22);
  v23 = result;
  if ( result )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v9 = 0x10000000;
    v27 = PerformanceCounter.QuadPart - *(_QWORD *)(v23 + 8);
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
      && (qword_1C0186D80 & 0x200000010000000LL) != 0
      && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      LODWORD(BugCheckParameter4) = 0;
      LOBYTE(v25.LowPart) = byte_1C0186D98 - 1;
      Template_xqx(
        v25.QuadPart,
        &AcquiredExclusiveUserCritEvent,
        v26.QuadPart,
        v27,
        BugCheckParameter4,
        gullUserCritAcquireToken,
        v29,
        v30,
        v31);
    }
    if ( v27 >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2 && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      LODWORD(BugCheckParameter4) = 1000 * v27 / gliQpcFreq.QuadPart;
      Template_xqx(
        (__int64)gullUserCritAcquireToken,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v26.QuadPart,
        0LL,
        BugCheckParameter4,
        gullUserCritAcquireToken);
    }
    result = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
    *(_QWORD *)(v23 + 16) = result;
  }
  gptiCurrent = v19;
  gbValidateHandleForIL = 1;
LABEL_31:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LOBYTE(v9) = 5;
    return WPP_RECORDER_SF_(
             WPP_GLOBAL_Control->DeviceExtension,
             v9,
             14,
             201,
             (__int64)&WPP_9dd175061edb367c3b87d4bc95d3a72c_Traceguids);
  }
  return result;
}
