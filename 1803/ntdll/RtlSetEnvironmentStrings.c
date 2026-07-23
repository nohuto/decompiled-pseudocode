/*
 * XREFs of RtlSetEnvironmentStrings @ 0x180080C50
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180016DF0 (RtlFreeHeap.c)
 *     RtlSizeHeap @ 0x18001B860 (RtlSizeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18001E290 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18001EE90 (RtlEnterCriticalSection.c)
 *     sub_18004C724 @ 0x18004C724 (sub_18004C724.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     memset @ 0x1800A16C0 (memset.c)
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
    memset(&unk_18015CB20, 0, 0x468uLL);
  }
  RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
  if ( v10 >= NewEnvironmentSize )
    return 0;
  v7 = sub_18004C724(NewEnvironmentSize);
  v8 = v7;
  if ( v7 )
  {
    memmove(v7, NewEnvironment, NewEnvironmentSize);
    RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
    BaseAddress = ProcessParameters->Environment;
    memset(&unk_18015CB20, 0, 0x468uLL);
    ProcessParameters->Environment = v8;
    ProcessParameters->EnvironmentSize = NewEnvironmentSize;
    ++ProcessParameters->EnvironmentVersion;
    RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
    return 0;
  }
  return -1073741670;
}
