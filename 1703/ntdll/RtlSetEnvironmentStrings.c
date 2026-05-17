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

__int64 __fastcall RtlSetEnvironmentStrings(void *Src, size_t Size)
{
  struct _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rbx
  void *Environment; // rsi
  void *v7; // rax
  void *v8; // rsi
  void *v9; // [rsp+50h] [rbp+18h]
  unsigned __int64 v10; // [rsp+58h] [rbp+20h]

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
  Environment = ProcessParameters->Environment;
  v10 = RtlSizeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)Environment);
  if ( v10 >= Size )
  {
    memmove(Environment, Src, Size);
    ProcessParameters->Environment = Environment;
    ProcessParameters->EnvironmentSize = Size;
    ++ProcessParameters->EnvironmentVersion;
    memset(dword_18015BAC0, 0, 0x468uLL);
  }
  RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
  if ( v10 >= Size )
    return 0LL;
  v7 = (void *)sub_180063814(Size);
  v8 = v7;
  if ( v7 )
  {
    memmove(v7, Src, Size);
    RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
    v9 = ProcessParameters->Environment;
    memset(dword_18015BAC0, 0, 0x468uLL);
    ProcessParameters->Environment = v8;
    ProcessParameters->EnvironmentSize = Size;
    ++ProcessParameters->EnvironmentVersion;
    RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, (unsigned __int64)v9);
    return 0LL;
  }
  return 3221225626LL;
}
