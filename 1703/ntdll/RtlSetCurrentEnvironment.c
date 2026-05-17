/*
 * XREFs of RtlSetCurrentEnvironment @ 0x18008E990
 * Callers:
 *     <none>
 * Callees:
 *     RtlSizeHeap @ 0x180023760 (RtlSizeHeap.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

__int64 __fastcall RtlSetCurrentEnvironment(unsigned __int64 a1, unsigned __int64 *a2)
{
  struct _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rsi
  __int64 v5; // rbx
  unsigned __int64 Environment; // rbp

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  v5 = RtlSizeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
  memset(dword_18015BAC0, 0, 0x468uLL);
  ++ProcessParameters->EnvironmentVersion;
  Environment = (unsigned __int64)ProcessParameters->Environment;
  ProcessParameters->Environment = (void *)a1;
  ProcessParameters->EnvironmentSize = v5;
  RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
  if ( a2 )
  {
    *a2 = Environment;
  }
  else if ( Environment )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Environment);
  }
  return 0LL;
}
