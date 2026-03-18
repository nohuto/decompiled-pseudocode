/*
 * XREFs of ?xxxWaitForVideoPortCalloutReady@@YAXEEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00D6E24
 * Callers:
 *     VideoPortCalloutThread @ 0x1C00D72E8 (VideoPortCalloutThread.c)
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     TemplateEventDescriptor @ 0x1C00DB150 (TemplateEventDescriptor.c)
 *     Template_tt @ 0x1C00DDFA8 (Template_tt.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

void __fastcall xxxWaitForVideoPortCalloutReady(__int64 a1, __int64 a2, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  char v4; // r14
  char v5; // si
  ULONG v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v11; // rbp
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rdi
  LARGE_INTEGER v16; // rbx
  int v17; // r8d
  PVOID Object[3]; // [rsp+40h] [rbp-48h] BYREF

  v4 = a2;
  v5 = a1;
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    Template_tt(a1, a2, a3, (unsigned __int8)a1, (unsigned __int8)a2);
  while ( 1 )
  {
    while ( 1 )
    {
      v6 = 0;
      if ( *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Type )
      {
        v6 = 1;
        Object[0] = gpevtVideoportCallout;
      }
      if ( gfMonitorPowerInProgress )
      {
        a1 = v6++;
        Object[a1] = gpevtMonitorPowerWaiter;
      }
      if ( v5 && (int)IsxxxSetCsrssThreadDesktopSupported() >= 0 && !grpdeskRitInput )
      {
        a1 = v6++;
        Object[a1] = (PVOID)gpevtRitReadyForCallOut;
      }
      if ( !v6 )
        break;
      if ( (_DWORD)gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, (unsigned int)gdwInAtomicOperation, 0LL, 0LL, 0LL);
      UserSessionSwitchLeaveCrit();
      KeWaitForMultipleObjects(v6, Object, WaitAll, WrUserRequest, 0, 0, 0LL, 0LL);
      v5 = 0;
      CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v8, v7, v9);
      if ( CurrentThreadWin32Thread )
        CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
      v11 = EnterCritAvoidingDitHitTestHazard(0, 1);
      v15 = PsGetCurrentThreadWin32Thread(v13, v12, v14);
      if ( v15 )
      {
        v16 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v15 + 8));
        if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0 )
        {
          LOBYTE(a1) = byte_1C0186D98 - 1;
          if ( (unsigned __int8)(byte_1C0186D98 - 1) > 2u
            && (qword_1C0186D80 & 0x200000010000000LL) != 0
            && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
            && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
          {
            Template_xqx(
              a1,
              (unsigned int)&AcquiredExclusiveUserCritEvent,
              v17,
              v16.LowPart,
              0,
              (char)gullUserCritAcquireToken);
          }
        }
        if ( v16.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
          && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
        {
          Template_xqx(
            (_DWORD)gullUserCritAcquireToken,
            (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
            v17,
            0,
            1000 * v16.QuadPart / gliQpcFreq.QuadPart,
            (char)gullUserCritAcquireToken);
        }
        *(_QWORD *)(v15 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
      }
      gptiCurrent = v11;
      gbValidateHandleForIL = 1;
    }
    if ( !v4 || gbGDIOn || (int)IsPowerOnGdiSupported() < 0 )
      break;
    PowerOnGdi(a3, 1LL, 3LL);
  }
  if ( (Microsoft_Windows_Win32kEnableBits & 8) != 0 )
    TemplateEventDescriptor(a1, &StopWaitForVideoPortCalloutReady, &W32kControlGuid);
}
