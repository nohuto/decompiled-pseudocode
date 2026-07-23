/*
 * XREFs of SepGetStackTraceHash @ 0x140246B0C
 * Callers:
 *     SepLogLpacAccessFailure @ 0x140246C14 (SepLogLpacAccessFailure.c)
 * Callees:
 *     RtlCaptureStackBackTrace @ 0x14006E1E0 (RtlCaptureStackBackTrace.c)
 *     RtlWalkFrameChain @ 0x1400E4A90 (RtlWalkFrameChain.c)
 *     __security_check_cookie @ 0x140169210 (__security_check_cookie.c)
 *     ZwQueryVirtualMemory @ 0x14017E3A0 (ZwQueryVirtualMemory.c)
 */

ULONG __fastcall SepGetStackTraceHash(ULONG *a1)
{
  ULONG result; // eax
  unsigned int v3; // esi
  unsigned __int16 v4; // di
  ULONG v5; // ecx
  ULONG BackTraceHash; // [rsp+30h] [rbp-C8h] BYREF
  unsigned __int64 MemoryInformation[3]; // [rsp+38h] [rbp-C0h] BYREF
  PVOID BackTrace[16]; // [rsp+50h] [rbp-A8h] BYREF

  RtlCaptureStackBackTrace(2u, 0x10u, BackTrace, &BackTraceHash);
  result = RtlWalkFrameChain(BackTrace, 0x10u, 1u);
  v3 = result;
  if ( result > 0x10 )
    v3 = 16;
  v4 = 0;
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
