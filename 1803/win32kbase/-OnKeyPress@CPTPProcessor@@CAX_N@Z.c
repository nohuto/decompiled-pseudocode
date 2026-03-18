/*
 * XREFs of ?OnKeyPress@CPTPProcessor@@CAX_N@Z @ 0x1C0125AD0
 * Callers:
 *     ?OnKeyEvent@CPTPProcessor@@SAXE_N@Z @ 0x1C0125A18 (-OnKeyEvent@CPTPProcessor@@SAXE_N@Z.c)
 * Callees:
 *     ApiSetTraceLoggingPTPAAPKeyPress @ 0x1C0141B64 (ApiSetTraceLoggingPTPAAPKeyPress.c)
 */

void __fastcall CPTPProcessor::OnKeyPress(unsigned __int8 a1)
{
  LARGE_INTEGER PerformanceCounter; // rax
  volatile __int64 *v3; // r8
  volatile __int64 *v4; // rcx

  ApiSetTraceLoggingPTPAAPKeyPress(a1);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v3 = &qword_1C01A29C0;
  if ( !a1 )
    v3 = &qword_1C01A29C8;
  v4 = &qword_1C01A2BF0;
  _InterlockedExchange64(v3, PerformanceCounter.QuadPart);
  if ( !a1 )
    v4 = &qword_1C01A2BF8;
  _InterlockedExchange64(v4, PerformanceCounter.QuadPart);
}
