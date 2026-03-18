/*
 * XREFs of xxxSendWinlogonPowerMessage @ 0x1C0099790
 * Callers:
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C009899C (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1C0099444 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 *     WmsgpSendPSPMessage @ 0x1C01BD8A8 (WmsgpSendPSPMessage.c)
 */

__int64 __fastcall xxxSendWinlogonPowerMessage(__int64 a1, __int64 a2, __int128 *a3)
{
  unsigned int v4; // edi
  int v5; // ebx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v12; // rbp
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rsi
  int v17; // ecx
  LARGE_INTEGER v18; // rdi
  int v19; // r8d
  __int128 v20; // [rsp+30h] [rbp-28h] BYREF
  __int128 v21; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v22; // [rsp+78h] [rbp+20h] BYREF

  v4 = a2;
  if ( !gWinLogonRpcHandle )
    return 0LL;
  if ( (_BYTE)a1 )
  {
    if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
    UserSessionSwitchLeaveCrit();
    v20 = *a3;
    v5 = WmsgpSendPSPMessage(v7, v4, &v20, &v22);
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v9, v8, v10);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v12 = EnterCritAvoidingDitHitTestHazard(0, 1);
    v16 = PsGetCurrentThreadWin32Thread(v14, v13, v15);
    if ( v16 )
    {
      v18 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v16 + 8));
      if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
        && (qword_1C0186D80 & 0x200000010000000LL) != 0
        && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        LOBYTE(v17) = byte_1C0186D98 - 1;
        Template_xqx(
          v17,
          (unsigned int)&AcquiredExclusiveUserCritEvent,
          v19,
          v18.LowPart,
          0,
          (char)gullUserCritAcquireToken);
      }
      if ( v18.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
        && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
      {
        Template_xqx(
          (_DWORD)gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v19,
          0,
          1000 * v18.QuadPart / gliQpcFreq.QuadPart,
          (char)gullUserCritAcquireToken);
      }
      *(_QWORD *)(v16 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
    }
    gptiCurrent = v12;
    gbValidateHandleForIL = 1;
  }
  else
  {
    v21 = *a3;
    v5 = WmsgpSendPSPMessage(a1, a2, &v21, &v22);
  }
  if ( v5 >= 0 )
    return v22;
  return (unsigned int)v5;
}
