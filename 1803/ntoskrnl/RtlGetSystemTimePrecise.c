/*
 * XREFs of RtlGetSystemTimePrecise @ 0x140132A80
 * Callers:
 *     KeSetTimer2 @ 0x140037E50 (KeSetTimer2.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400AAAD0 (EtwGetKernelTraceTimestamp.c)
 *     EtwGetKernelTraceTimestampSilo @ 0x1400B7A08 (EtwGetKernelTraceTimestampSilo.c)
 *     KiExecuteAllDpcs @ 0x140107C40 (KiExecuteAllDpcs.c)
 *     KeQuerySystemTimePrecise @ 0x140132A60 (KeQuerySystemTimePrecise.c)
 *     EtwpTraceAdminlessAccessFailure @ 0x14029F68C (EtwpTraceAdminlessAccessFailure.c)
 *     EtwpTraceLpacAccessFailure @ 0x14029F738 (EtwpTraceLpacAccessFailure.c)
 *     WmiGetClock @ 0x1402ADD00 (WmiGetClock.c)
 *     EtwpTraceSystemInitialization @ 0x1408A5194 (EtwpTraceSystemInitialization.c)
 *     PspInitPhase2 @ 0x1408C12D4 (PspInitPhase2.c)
 * Callees:
 *     RtlBeginReadTickLock @ 0x140132B60 (RtlBeginReadTickLock.c)
 */

LARGE_INTEGER RtlGetSystemTimePrecise(void)
{
  __int64 TickLock; // rax
  unsigned __int64 v1; // rbp
  unsigned __int64 v2; // r15
  __int64 v3; // rbx
  char *v4; // rdx
  char v5; // si
  __int64 *v6; // r8
  __int64 v7; // r14
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v9; // rdi
  LONGLONG v10; // rdx

  while ( 1 )
  {
    TickLock = RtlBeginReadTickLock(0xFFFFF78000000340uLL);
    v1 = MEMORY[0xFFFFF78000000348];
    v2 = MEMORY[0xFFFFF78000000358];
    v3 = TickLock;
    v5 = *v4;
    v7 = *v6;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    if ( MEMORY[0xFFFFF78000000340] == v3 )
      break;
    _mm_pause();
  }
  v9 = 0LL;
  if ( PerformanceCounter.QuadPart > v1 )
  {
    v10 = PerformanceCounter.QuadPart - v1 - 1;
    if ( v5 )
      v10 <<= v5;
    v9 = ((unsigned __int64)v10 * (unsigned __int128)v2) >> 64;
  }
  return (LARGE_INTEGER)(v7 + v9);
}
