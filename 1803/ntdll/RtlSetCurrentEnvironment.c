/*
 * XREFs of RtlSetCurrentEnvironment @ 0x18008A8E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlSizeHeap @ 0x18001B860 (RtlSizeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     memset @ 0x1800A16C0 (memset.c)
 */

NTSTATUS __cdecl RtlSetCurrentEnvironment(PVOID Environment, PVOID *PreviousEnvironment)
{
  PRTL_USER_PROCESS_PARAMETERS ProcessParameters; // rsi
  SIZE_T v5; // rbx
  PVOID v6; // rbp

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  v5 = RtlSizeHeap(NtCurrentPeb()->ProcessHeap, 0, Environment);
  RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
  memset(&unk_18015CB20, 0, 0x468uLL);
  ++ProcessParameters->EnvironmentVersion;
  v6 = ProcessParameters->Environment;
  ProcessParameters->Environment = Environment;
  ProcessParameters->EnvironmentSize = v5;
  RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
  if ( PreviousEnvironment )
  {
    *PreviousEnvironment = v6;
  }
  else if ( v6 )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v6);
  }
  return 0;
}
