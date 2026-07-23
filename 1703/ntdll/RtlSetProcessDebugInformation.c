/*
 * XREFs of RtlSetProcessDebugInformation @ 0x1800D9A60
 * Callers:
 *     sub_1800D9FA0 @ 0x1800D9FA0 (sub_1800D9FA0.c)
 * Callees:
 *     sub_180052D68 @ 0x180052D68 (sub_180052D68.c)
 *     sub_1800686F4 @ 0x1800686F4 (sub_1800686F4.c)
 *     ZwWaitForSingleObject @ 0x1800A5380 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwQueryInformationThread @ 0x1800A57A0 (ZwQueryInformationThread.c)
 *     ZwResumeThread @ 0x1800A5D40 (ZwResumeThread.c)
 *     ZwTerminateThread @ 0x1800A5D60 (ZwTerminateThread.c)
 *     memmove @ 0x1800ABA80 (memmove.c)
 *     sub_1800DBFC0 @ 0x1800DBFC0 (sub_1800DBFC0.c)
 *     sub_1800F8C24 @ 0x1800F8C24 (sub_1800F8C24.c)
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
    if ( ((Flags & 1) == 0 || (InformationThread = sub_1800DBFC0(Buffer)) == 0) && (v5 & 2) != 0 )
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
          return sub_1800F8C24(CommittedMemory, BackTraces->ReservedMemory, &BackTraces->NumberOfBackTraceLookups);
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
    result = sub_1800686F4((__int64)Buffer, UniqueProcessId, 0, &Handle);
    if ( result < 0 )
      return result;
    OffsetFree = Buffer->OffsetFree;
    if ( OffsetFree > 0xD0 )
      memmove((char *)&Buffer[1] + Buffer->ViewSize, &Buffer[1], OffsetFree - 208);
    InformationThread = sub_180052D68(
                          Handle,
                          0LL,
                          7,
                          0,
                          0LL,
                          0LL,
                          v13,
                          (PUSER_THREAD_START_ROUTINE)sub_1800D9FA0,
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
