/*
 * XREFs of ?_GetStackTraceSum@@YAKXZ @ 0x1C00E554C
 * Callers:
 *     ?_IsStackThrottled@@YAHXZ @ 0x1C00E5630 (-_IsStackThrottled@@YAHXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 */

__int64 _GetStackTraceSum(void)
{
  unsigned int v0; // esi
  ULONG v1; // ebp
  unsigned __int16 v2; // di
  int v3; // eax
  unsigned __int64 MemoryInformation[4]; // [rsp+30h] [rbp-C8h] BYREF
  PVOID Callers[16]; // [rsp+50h] [rbp-A8h] BYREF

  v0 = 0;
  v1 = RtlWalkFrameChain(Callers, 0x10u, 1u);
  v2 = 0;
  if ( v1 > 0x10 )
    v1 = 16;
  if ( v1 )
  {
    do
    {
      if ( ZwQueryVirtualMemory(
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             Callers[v2],
             MemoryWorkingSetExList|MemorySectionName,
             MemoryInformation,
             0x18uLL,
             0LL) < 0
        || (unsigned __int64)Callers[v2] < MemoryInformation[0] )
      {
        v3 = (int)Callers[v2];
      }
      else
      {
        v3 = LODWORD(Callers[v2]) - LODWORD(MemoryInformation[0]);
      }
      ++v2;
      v0 += v3;
    }
    while ( v2 < v1 );
  }
  return v0;
}
