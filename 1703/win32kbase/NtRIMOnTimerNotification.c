/*
 * XREFs of NtRIMOnTimerNotification @ 0x1C00FFCD0
 * Callers:
 *     <none>
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C002EBD0 (UserSessionSwitchLeaveCrit.c)
 *     ApiSetEditionIsUsermodeRIMAccessAllowed @ 0x1C009539C (ApiSetEditionIsUsermodeRIMAccessAllowed.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 *     RIMOnTimerNotification @ 0x1C0102C90 (RIMOnTimerNotification.c)
 */

__int64 __fastcall NtRIMOnTimerNotification(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdi
  LARGE_INTEGER v14; // rcx
  LARGE_INTEGER v15; // rbx
  LARGE_INTEGER v16; // r8
  unsigned int v17; // ebx
  __int64 v18; // [rsp+20h] [rbp-18h]
  int v19; // [rsp+20h] [rbp-18h]

  if ( !(unsigned int)ApiSetEditionIsUsermodeRIMAccessAllowed() )
    return 3221225506LL;
  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v5, v4, v6);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v9 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v13 = PsGetCurrentThreadWin32Thread(v11, v10, v12);
  if ( v13 )
  {
    v15 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v13 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
      && (qword_1C0186D80 & 0x200000010000000LL) != 0
      && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      v19 = 0;
      LOBYTE(v14.LowPart) = byte_1C0186D98 - 1;
      Template_xqx(
        v14.QuadPart,
        &AcquiredExclusiveUserCritEvent,
        v16.QuadPart,
        v15.QuadPart,
        v19,
        gullUserCritAcquireToken);
    }
    if ( v15.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      LODWORD(v18) = 1000 * v15.QuadPart / gliQpcFreq.QuadPart;
      Template_xqx(
        (__int64)gullUserCritAcquireToken,
        &AcquiredExclusiveUserCritTelemetryEvent,
        v16.QuadPart,
        0LL,
        v18,
        gullUserCritAcquireToken);
    }
    *(_QWORD *)(v13 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  gptiCurrent = v9;
  gbValidateHandleForIL = 1;
  v17 = RIMOnTimerNotification(a1, a2);
  UserSessionSwitchLeaveCrit();
  return v17;
}
