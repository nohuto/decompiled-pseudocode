/*
 * XREFs of SepGetStackTraceHash @ 0x14025E24C
 * Callers:
 *     SepLogLpacAccessFailure @ 0x14025E34C (SepLogLpacAccessFailure.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x1400D5700 (RtlCaptureStackBackTrace.c)
 *     RtlWalkFrameChain @ 0x1400D5800 (RtlWalkFrameChain.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x14017DD20 (ZwQueryVirtualMemory.c)
 */

ULONG __fastcall SepGetStackTraceHash(ULONG *a1)
{
  ULONG result; // eax
  unsigned int v3; // esi
  unsigned __int16 v4; // di
  ULONG v5; // ecx
  ULONG BackTraceHash; // [rsp+30h] [rbp-79h] BYREF
  unsigned __int64 MemoryInformation[3]; // [rsp+38h] [rbp-71h] BYREF
  PVOID BackTrace[16]; // [rsp+50h] [rbp-59h] BYREF

  BackTraceHash = 0;
  RtlCaptureStackBackTrace(2u, 0x10u, BackTrace, &BackTraceHash);
  result = RtlWalkFrameChain(BackTrace, 0x10u, 1u);
  v3 = result;
  v4 = 0;
  if ( result > 0x10 )
    v3 = 16;
  if ( v3 )
  {
    do
    {
      if ( ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             BackTrace[v4],
             MemoryImageInformation,
             MemoryInformation,
             0x18uLL,
             0LL) < 0
        || (unsigned __int64)BackTrace[v4] < MemoryInformation[0] )
      {
        v5 = LODWORD(BackTrace[v4]) + BackTraceHash;
      }
      else
      {
        v5 = LODWORD(BackTrace[v4]) - LODWORD(MemoryInformation[0]) + BackTraceHash;
      }
      ++v4;
      BackTraceHash = v5;
      result = v4;
    }
    while ( v4 < v3 );
  }
  else
  {
    v5 = BackTraceHash;
  }
  *a1 = v5;
  return result;
}
