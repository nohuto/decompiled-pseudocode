/*
 * XREFs of ?ProcessInput@CKeyboardProcessor@@QEAA?AW4InputProcessingResult@@PEAUDEVICEINFO@@PEAU_KEYBOARD_INPUT_DATA@@K_N@Z @ 0x1C0130ED0
 * Callers:
 *     ?ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z @ 0x1C012D3D0 (-ProcessInput@CKeyboardSensor@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 *     ?SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z @ 0x1C012CEF0 (-SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z.c)
 *     ProcessKeyboardInjectedInputViaRim @ 0x1C012F970 (ProcessKeyboardInjectedInputViaRim.c)
 *     ProcessKeyboardInputWorker @ 0x1C012FB70 (ProcessKeyboardInputWorker.c)
 */

__int64 __fastcall CKeyboardProcessor::ProcessInput(__int64 a1, __int64 a2, __int64 *a3, unsigned int a4)
{
  __int64 v4; // r15
  __int64 *v5; // rbx
  LARGE_INTEGER *CurrentThreadWin32Thread; // rsi
  struct tagTHREADINFO *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbp
  LARGE_INTEGER v13; // rcx
  LARGE_INTEGER v14; // rsi
  LARGE_INTEGER v15; // r8
  int v16; // edx
  __int64 *v17; // rsi
  __int64 v19; // [rsp+20h] [rbp-28h]
  int v20; // [rsp+20h] [rbp-28h]

  v4 = a4;
  v5 = a3;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v8 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v12 = PsGetCurrentThreadWin32Thread(v10, v9, v11);
  if ( v12 )
  {
    v14 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v12 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
      && (qword_1C0186D80 & 0x200000010000000LL) != 0
      && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      v20 = 0;
      LOBYTE(v13.LowPart) = byte_1C0186D98 - 1;
      Template_xqx(
        v13.QuadPart,
        &AcquiredExclusiveUserCritEvent,
        v15.QuadPart,
        v14.QuadPart,
        v20,
        gullUserCritAcquireToken);
    }
    if ( v14.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      LODWORD(v19) = 1000 * v14.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        (__int64)gullUserCritAcquireToken,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v15.QuadPart,
        0LL,
        v19,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v12 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  gptiCurrent = v8;
  gbValidateHandleForIL = 1;
  if ( a2 )
  {
    if ( gpKL )
    {
      if ( *(_DWORD *)(gpKL + 88) )
      {
        v16 = *(_DWORD *)(a2 + 484);
        if ( *(_DWORD *)(gpKL + 104) != v16 || *(_DWORD *)(gpKL + 108) != *(_DWORD *)(a2 + 488) )
        {
          SearchAndSetKbdTbl((struct DEVICEINFO *)a2, v16, *(_DWORD *)(a2 + 488));
          *(_DWORD *)(gpKL + 104) = *(_DWORD *)(a2 + 484);
          *(_DWORD *)(gpKL + 108) = *(_DWORD *)(a2 + 488);
        }
      }
    }
    if ( (*(_DWORD *)gpsi & 0x2000) == 0 && v5 )
    {
      v17 = (__int64 *)((char *)v5 + v4);
      do
      {
        if ( v5 >= v17 )
          break;
        if ( *(_WORD *)v5 == 0xFFFE )
          ProcessKeyboardInjectedInputViaRim((__int64)v5, a2);
        else
          ProcessKeyboardInputWorker(v5, (struct DEVICEINFO *)a2, 1);
        v5 = (__int64 *)((char *)v5 + 12);
      }
      while ( v5 );
    }
  }
  UserSessionSwitchLeaveCrit();
  return 0LL;
}
