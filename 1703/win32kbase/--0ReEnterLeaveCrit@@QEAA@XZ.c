/*
 * XREFs of ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1C00291D8
 * Callers:
 *     UserGetDesktopDC @ 0x1C0026B64 (UserGetDesktopDC.c)
 *     GreCreateCompatibleDC @ 0x1C002BB10 (GreCreateCompatibleDC.c)
 *     ResetAccessibilityCountersOnMouseInput @ 0x1C008BA50 (ResetAccessibilityCountersOnMouseInput.c)
 *     UserDeleteW32Process @ 0x1C00D8090 (UserDeleteW32Process.c)
 *     UserDeleteW32Thread @ 0x1C00D8150 (UserDeleteW32Thread.c)
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1C011A480 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

ReEnterLeaveCrit *__fastcall ReEnterLeaveCrit::ReEnterLeaveCrit(ReEnterLeaveCrit *this)
{
  BOOLEAN IsResourceAcquiredExclusiveLite; // al
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v7; // rbp
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rsi
  int v12; // ecx
  LARGE_INTEGER v13; // rbx
  int v14; // r8d

  IsResourceAcquiredExclusiveLite = ExIsResourceAcquiredExclusiveLite(gpresUser);
  *(_DWORD *)this = IsResourceAcquiredExclusiveLite;
  if ( !IsResourceAcquiredExclusiveLite )
  {
    CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(v4, v3, v5);
    if ( CurrentThreadWin32Thread )
      CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
    v7 = (struct tagTHREADINFO *)EnterCritAvoidingDitHitTestHazard(0LL, 1LL);
    v11 = PsGetCurrentThreadWin32Thread(v9, v8, v10);
    if ( v11 )
    {
      v13 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v11 + 8));
      if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
        && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
        && (qword_1C0186D80 & 0x200000010000000LL) != 0
        && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
        && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
      {
        LOBYTE(v12) = byte_1C0186D98 - 1;
        Template_xqx(
          v12,
          (unsigned int)&AcquiredExclusiveUserCritEvent,
          v14,
          v13.LowPart,
          0,
          (char)gullUserCritAcquireToken);
      }
      if ( v13.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
        && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
      {
        Template_xqx(
          (_DWORD)gullUserCritAcquireToken,
          (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
          v14,
          0,
          1000 * v13.QuadPart / gliQpcFreq.QuadPart,
          (char)gullUserCritAcquireToken);
      }
      *(_QWORD *)(v11 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
    }
    gptiCurrent = v7;
    gbValidateHandleForIL = 1;
  }
  return this;
}
