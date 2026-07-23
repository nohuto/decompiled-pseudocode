/*
 * XREFs of RtlGetSystemTimePrecise @ 0x140155590
 * Callers:
 *     EtwGetKernelTraceTimestamp @ 0x140003C40 (EtwGetKernelTraceTimestamp.c)
 *     KeSetTimer2 @ 0x1400605A0 (KeSetTimer2.c)
 *     KiExecuteAllDpcs @ 0x140094F80 (KiExecuteAllDpcs.c)
 *     EtwpTraceLpacAccessFailure @ 0x14025DDB4 (EtwpTraceLpacAccessFailure.c)
 *     WmiGetClock @ 0x14027AB30 (WmiGetClock.c)
 *     EtwpTraceSystemInitialization @ 0x1408288A4 (EtwpTraceSystemInitialization.c)
 *     PspInitPhase2 @ 0x1408500D4 (PspInitPhase2.c)
 * Callees:
 *     RtlBeginReadTickLock @ 0x1400AB028 (RtlBeginReadTickLock.c)
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
    TickLock = RtlBeginReadTickLock((__int64 *)0xFFFFF78000000340LL);
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
