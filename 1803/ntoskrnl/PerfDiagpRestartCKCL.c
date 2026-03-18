/*
 * XREFs of PerfDiagpRestartCKCL @ 0x140584B40
 * Callers:
 *     PerfDiagpProxyWorker @ 0x140649BE0 (PerfDiagpProxyWorker.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140104BA0 (KeDelayExecutionThread.c)
 *     EtwStartAutoLogger @ 0x14063DF10 (EtwStartAutoLogger.c)
 *     PerfDiagpIsTracingAllowed @ 0x140649E58 (PerfDiagpIsTracingAllowed.c)
 */

__int64 __fastcall PerfDiagpRestartCKCL(NTSTRSAFE_PCWSTR pszSrc)
{
  unsigned int v2; // ebx
  __int64 result; // rax
  LARGE_INTEGER Interval; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  while ( 1 )
  {
    Interval.QuadPart = -500000LL * ++v2;
    KeDelayExecutionThread(0, 0, &Interval);
    if ( !(unsigned int)PerfDiagpIsTracingAllowed() )
      break;
    wcscpy(&xmmword_1403A264C, L"Circular Kernel Context Logger");
    result = EtwStartAutoLogger(&xmmword_1403A264C, pszSrc);
    if ( (_DWORD)result != -1073741771 || v2 >= 0x14 )
      return result;
  }
  return 3221225473LL;
}
