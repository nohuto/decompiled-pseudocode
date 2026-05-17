/*
 * XREFs of NtQueryPerformanceCounter @ 0x1800A06E0
 * Callers:
 *     RtlQueryPerformanceCounter @ 0x180019360 (RtlQueryPerformanceCounter.c)
 *     LdrpGenSecurityCookie @ 0x180021D2C (LdrpGenSecurityCookie.c)
 *     RtlGetSystemTimePrecise @ 0x180069E20 (RtlGetSystemTimePrecise.c)
 *     RtlHeapTrkInitialize @ 0x1800F6B90 (RtlHeapTrkInitialize.c)
 *     RtlpHeapTrkGenerateHashRandoms @ 0x1800F741C (RtlpHeapTrkGenerateHashRandoms.c)
 *     RtlpHeapTrkInterceptor @ 0x1800F7530 (RtlpHeapTrkInterceptor.c)
 * Callees:
 *     <none>
 */

__int64 NtQueryPerformanceCounter()
{
  __int64 result; // rax

  result = 49LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
