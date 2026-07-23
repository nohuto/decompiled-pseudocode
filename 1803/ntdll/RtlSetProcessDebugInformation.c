/*
 * XREFs of RtlSetProcessDebugInformation @ 0x1800D2E30
 * Callers:
 *     sub_1800D3490 @ 0x1800D3490 (sub_1800D3490.c)
 * Callees:
 *     sub_1800060E8 @ 0x1800060E8 (sub_1800060E8.c)
 *     sub_180077F84 @ 0x180077F84 (sub_180077F84.c)
 *     ZwWaitForSingleObject @ 0x18009AB40 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwQueryInformationThread @ 0x18009AF60 (ZwQueryInformationThread.c)
 *     ZwResumeThread @ 0x18009B500 (ZwResumeThread.c)
 *     ZwTerminateThread @ 0x18009B520 (ZwTerminateThread.c)
 *     memmove @ 0x1800A1380 (memmove.c)
 *     sub_1800D5780 @ 0x1800D5780 (sub_1800D5780.c)
 *     sub_1800F6720 @ 0x1800F6720 (sub_1800F6720.c)
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
  int v12; // [rsp+30h] [rbp-78h]
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
    if ( ((Flags & 1) == 0 || (InformationThread = sub_1800D5780(Buffer)) == 0) && (v5 & 2) != 0 )
    {
      BackTraces = Buffer->BackTraces;
      if ( BackTraces )
      {
        if ( !BackTraces->CommittedMemory
          && (BackTraces->ReservedMemory < 0x18
           || *(_QWORD *)&BackTraces->NumberOfBackTraceLookups
           || BackTraces->BackTraces[0].SymbolicBackTrace) )
        {
          return -1073741811;
        }
        else
        {
          return sub_1800F6720();
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
    result = sub_180077F84((__int64)Buffer, UniqueProcessId, 0, &Handle);
    if ( result < 0 )
      return result;
    OffsetFree = Buffer->OffsetFree;
    if ( OffsetFree > 0xD0 )
      memmove((char *)&Buffer[1] + Buffer->ViewSize, &Buffer[1], OffsetFree - 208);
    InformationThread = sub_1800060E8(
                          Handle,
                          0LL,
                          7,
                          0,
                          0LL,
                          0LL,
                          v12,
                          (PUSER_THREAD_START_ROUTINE)sub_1800D3490,
                          Buffer->ViewBaseTarget,
                          &ThreadHandle,
                          0LL);
    if ( InformationThread >= 0 )
    {
      v8 = ThreadHandle;
      v9 = ZwResumeThread(ThreadHandle, 0LL);
      InformationThread = v9;
      v10 = v8;
      if ( v9 < 0 || (v9 = ZwWaitForSingleObject(v8, 1u, &Timeout), InformationThread = v9, v10 = v8, v9 < 0) )
      {
        ZwTerminateThread(v10, v9);
      }
      else
      {
        InformationThread = ZwQueryInformationThread(v8, ThreadBasicInformation, ThreadInformation, 0x30u, 0LL);
        if ( InformationThread >= 0 )
          InformationThread = ThreadInformation[0];
      }
      ZwClose(v8);
    }
    ZwClose(Handle);
  }
  return InformationThread;
}
