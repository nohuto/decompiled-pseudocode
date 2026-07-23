/*
 * XREFs of RtlSetProcessDebugInformation @ 0x1800D8CB0
 * Callers:
 *     RtlpSetProcessDebugInformationRemote @ 0x1800D92F0 (RtlpSetProcessDebugInformationRemote.c)
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x1800645D8 (RtlpCreateUserThreadEx.c)
 *     RtlpChangeQueryDebugBufferTarget @ 0x1800830C4 (RtlpChangeQueryDebugBufferTarget.c)
 *     NtWaitForSingleObject @ 0x1800A0140 (NtWaitForSingleObject.c)
 *     NtClose @ 0x1800A02A0 (NtClose.c)
 *     ZwQueryInformationThread @ 0x1800A0560 (ZwQueryInformationThread.c)
 *     ZwResumeThread @ 0x1800A0B00 (ZwResumeThread.c)
 *     NtTerminateThread @ 0x1800A0B20 (NtTerminateThread.c)
 *     memmove @ 0x1800A6940 (memmove.c)
 *     AVrfpSetProcessVerifierOptions @ 0x1800DB5A8 (AVrfpSetProcessVerifierOptions.c)
 *     RtlControlStackTraceDataBase @ 0x1800FA060 (RtlControlStackTraceDataBase.c)
 */

NTSTATUS __cdecl RtlSetProcessDebugInformation(HANDLE UniqueProcessId, ULONG Flags, PRTL_DEBUG_INFORMATION Buffer)
{
  int InformationThread; // ebx
  char v5; // si
  NTSTATUS result; // eax
  SIZE_T OffsetFree; // r8
  HANDLE v8; // rdi
  int v9; // eax
  void *v10; // rcx
  PRTL_PROCESS_BACKTRACES BackTraces; // rax
  __int64 CommittedMemory; // rcx
  int v13; // [rsp+30h] [rbp-78h]
  int ThreadInformation[18]; // [rsp+60h] [rbp-48h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+8h] BYREF
  HANDLE ThreadHandle; // [rsp+C0h] [rbp+18h] BYREF
  LARGE_INTEGER Timeout; // [rsp+C8h] [rbp+20h] BYREF

  Timeout.QuadPart = -600000000LL;
  InformationThread = 0;
  Buffer->Flags = Flags;
  v5 = Flags;
  if ( NtCurrentTeb()->ClientId.UniqueProcess == UniqueProcessId )
  {
    if ( ((Flags & 1) == 0 || (InformationThread = AVrfpSetProcessVerifierOptions(Buffer)) == 0) && (v5 & 2) != 0 )
    {
      BackTraces = Buffer->BackTraces;
      if ( BackTraces )
      {
        CommittedMemory = BackTraces->CommittedMemory;
        if ( !(_DWORD)CommittedMemory
          && (BackTraces->ReservedMemory < 0x18
           || *(_QWORD *)&BackTraces->NumberOfBackTraceLookups
           || BackTraces->BackTraces[0].SymbolicBackTrace) )
        {
          return -1073741811;
        }
        else
        {
          return RtlControlStackTraceDataBase(
                   CommittedMemory,
                   BackTraces->ReservedMemory,
                   &BackTraces->NumberOfBackTraceLookups);
        }
      }
      else
      {
        return -1073741801;
      }
    }
  }
  else
  {
    Handle = 0LL;
    result = RtlpChangeQueryDebugBufferTarget((__int64)Buffer, UniqueProcessId, 0, &Handle);
    if ( result < 0 )
      return result;
    OffsetFree = Buffer->OffsetFree;
    if ( OffsetFree > 0xD0 )
      memmove((char *)&Buffer[1] + Buffer->ViewSize, &Buffer[1], OffsetFree - 208);
    InformationThread = RtlpCreateUserThreadEx(
                          Handle,
                          0LL,
                          7,
                          0,
                          0LL,
                          0LL,
                          v13,
                          (PUSER_THREAD_START_ROUTINE)RtlpSetProcessDebugInformationRemote,
                          Buffer->ViewBaseTarget,
                          &ThreadHandle,
                          0LL);
    if ( InformationThread >= 0 )
    {
      v8 = ThreadHandle;
      v9 = ZwResumeThread(ThreadHandle, 0LL);
      InformationThread = v9;
      v10 = v8;
      if ( v9 < 0 || (v9 = NtWaitForSingleObject(v8, 1u, &Timeout), InformationThread = v9, v10 = v8, v9 < 0) )
      {
        NtTerminateThread(v10, v9);
      }
      else
      {
        InformationThread = ZwQueryInformationThread(v8, ThreadBasicInformation, ThreadInformation, 0x30u, 0LL);
        if ( InformationThread >= 0 )
          InformationThread = ThreadInformation[0];
      }
      NtClose(v8);
    }
    NtClose(Handle);
  }
  return InformationThread;
}
