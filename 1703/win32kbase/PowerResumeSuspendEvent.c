/*
 * XREFs of PowerResumeSuspendEvent @ 0x1C0099060
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1C0064D20 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1C009899C (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

__int64 __fastcall PowerResumeSuspendEvent(char a1, char a2, char a3)
{
  unsigned int v3; // ebp
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdi
  int v13; // ecx
  LARGE_INTEGER v14; // rbx
  int v15; // r8d
  __int64 result; // rax
  int InputBuffer; // [rsp+58h] [rbp+20h] BYREF
  char v18; // [rsp+5Ch] [rbp+24h]
  char v19; // [rsp+5Dh] [rbp+25h]
  char v20; // [rsp+5Eh] [rbp+26h]

  InputBuffer = gSessionId;
  v18 = a1;
  v19 = a2;
  v20 = a3;
  UserSessionSwitchLeaveCrit();
  v3 = ZwPowerInformation(ProcessorStateHandler|0x40, &InputBuffer, 8u, 0LL, 0);
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v5, v4, v6);
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
      LOBYTE(v13) = byte_1C0186D98 - 1;
      Template_xqx(
        v13,
        (unsigned int)&AcquiredExclusiveUserCritEvent,
        v15,
        v14.LowPart,
        0,
        (char)gullUserCritAcquireToken);
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
    *(_QWORD *)(v12 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  result = v3;
  gptiCurrent = v8;
  gbValidateHandleForIL = 1;
  return result;
}
