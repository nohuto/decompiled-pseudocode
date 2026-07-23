/*
 * XREFs of RtlSetEnvironmentStrings @ 0x180085E10
 * Callers:
 *     <none>
 * Callees:
 *     RtlSizeHeap @ 0x180023760 (RtlSizeHeap.c)
 *     RtlFreeHeap @ 0x1800244A0 (RtlFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F090 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002F9C0 (RtlEnterCriticalSection.c)
 *     sub_180063814 @ 0x180063814 (sub_180063814.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 */

NTSTATUS __cdecl RtlSetEnvironmentStrings(PCWCHAR NewEnvironment, SIZE_T NewEnvironmentSize)
{
  PRTL_USER_PROCESS_PARAMETERS ProcessParameters; // rbx
  PVOID Environment; // rsi
  PVOID v7; // rax
  PVOID v8; // rsi
  PVOID BaseAddress; // [rsp+50h] [rbp+18h]
  SIZE_T v10; // [rsp+58h] [rbp+20h]

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
  Environment = ProcessParameters->Environment;
  v10 = RtlSizeHeap(NtCurrentPeb()->ProcessHeap, 0, Environment);
  if ( v10 >= NewEnvironmentSize )
  {
    memmove(Environment, NewEnvironment, NewEnvironmentSize);
    ProcessParameters->Environment = Environment;
    ProcessParameters->EnvironmentSize = NewEnvironmentSize;
    ++ProcessParameters->EnvironmentVersion;
    memset(dword_18015BAC0, 0, 0x468uLL);
  }
  RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
  if ( v10 >= NewEnvironmentSize )
    return 0;
  v7 = sub_180063814(NewEnvironmentSize);
  v8 = v7;
  if ( v7 )
  {
    memmove(v7, NewEnvironment, NewEnvironmentSize);
    RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
    BaseAddress = ProcessParameters->Environment;
    memset(dword_18015BAC0, 0, 0x468uLL);
    ProcessParameters->Environment = v8;
    ProcessParameters->EnvironmentSize = NewEnvironmentSize;
    ++ProcessParameters->EnvironmentVersion;
    RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    return 0;
  }
  return -1073741670;
}
