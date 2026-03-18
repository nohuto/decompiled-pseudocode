/*
 * XREFs of UserEnterUserCritSec @ 0x1C008CAC0
 * Callers:
 *     <none>
 * Callees:
 *     EnterCritAvoidingDitHitTestHazard @ 0x1C002EAB0 (EnterCritAvoidingDitHitTestHazard.c)
 *     Template_xqx @ 0x1C00DE1A8 (Template_xqx.c)
 */

__int64 __fastcall UserEnterUserCritSec(__int64 a1, __int64 a2, __int64 a3)
{
  LARGE_INTEGER *CurrentThreadWin32Thread; // rbx
  struct tagTHREADINFO *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 result; // rax
  __int64 v9; // rdi
  int v10; // ecx
  LARGE_INTEGER v11; // rbx
  int v12; // r8d

  CurrentThreadWin32Thread = (LARGE_INTEGER *)PsGetCurrentThreadWin32Thread(a1, a2, a3);
  if ( CurrentThreadWin32Thread )
    CurrentThreadWin32Thread[1] = KeQueryPerformanceCounter(0LL);
  v4 = EnterCritAvoidingDitHitTestHazard(0, 1);
  result = PsGetCurrentThreadWin32Thread(v6, v5, v7);
  v9 = result;
  if ( result )
  {
    v11 = (LARGE_INTEGER)(*(_QWORD *)&KeQueryPerformanceCounter(0LL) - *(_QWORD *)(result + 8));
    if ( (*(_QWORD *)&WPP_MAIN_CB.ActiveThreadCount & 0x200000010000000LL) != 0
      && (unsigned __int8)(byte_1C0186D98 - 1) > 2u
      && (qword_1C0186D80 & 0x200000010000000LL) != 0
      && (qword_1C0186D88 & 0x200000010000000LL) == qword_1C0186D88
      && (Microsoft_Windows_Win32kEnableBits & 0x800000) != 0 )
    {
      LOBYTE(v10) = byte_1C0186D98 - 1;
      Template_xqx(
        v10,
        (unsigned int)&AcquiredExclusiveUserCritEvent,
        v12,
        v11.LowPart,
        0,
        (char)gullUserCritAcquireToken);
    }
    if ( v11.QuadPart >= (__int64)WPP_MAIN_CB.Dpc.SystemArgument2
      && (Microsoft_Windows_Win32kEnableBits & 0x8000000) != 0 )
    {
      Template_xqx(
        (_DWORD)gullUserCritAcquireToken,
        (unsigned int)&AcquiredExclusiveUserCritTelemetryEvent,
        v12,
        0,
        1000 * v11.QuadPart / gliQpcFreq.QuadPart,
        (char)gullUserCritAcquireToken);
    }
    result = _InterlockedIncrement64((volatile signed __int64 *)&gullUserCritAcquireToken);
    *(_QWORD *)(v9 + 16) = result;
  }
  gptiCurrent = v4;
  gbValidateHandleForIL = 1;
  return result;
}
