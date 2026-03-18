/*
 * XREFs of ??1DwmHitTestLeaveEnterCrit@@QEAA@XZ @ 0x1C00D5350
 * Callers:
 *     <none>
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

void __fastcall DwmHitTestLeaveEnterCrit::~DwmHitTestLeaveEnterCrit(
        DwmHitTestLeaveEnterCrit *this,
        __int64 a2,
        __int64 a3)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdi
  int v9; // ecx
  LARGE_INTEGER v10; // rbx
  int v11; // r8d

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(this, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v4 = EnterCritAvoidingDitHitTestHazard(0, 1);
  v8 = PsGetCurrentThreadWin32Thread(v6, v5, v7);
  if ( v8 )
  {
    v10 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(v8 + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
      && (qword_1C0186D80 & 0x200000010000000LL) != 0
      && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      LOBYTE(v9) = byte_1C0186D98 - 1;
      Template_xqx(
        v9,
        (unsigned int)&AcquiredExclusiveUserCritEvent,
        v11,
        v10.LowPart,
        0,
        (char)gullUserCritAcquireToken);
    }
    if ( v10.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      Template_xqx(
        (_DWORD)gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v11,
        0,
        1000 * v10.QuadPart / gliQpcFreq.QuadPart,
        (char)gullUserCritAcquireToken);
    }
    *(_QWORD *)(v8 + 16) = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
  }
  gbDITInHitTest = 0;
  gptiCurrent = v4;
  gbValidateHandleForIL = 1;
  if ( gcDITHitTestWaiters )
  {
    KeReleaseSemaphore((PRKSEMAPHORE)gpsemDITHitTestWaiters, 0, gcDITHitTestWaiters, 0);
    gcDITHitTestWaiters = 0;
  }
}
