/*
 * XREFs of sub_1800D8360 @ 0x1800D8360
 * Callers:
 *     RtlCreateProcessReflection @ 0x1800D7DD0 (RtlCreateProcessReflection.c)
 * Callees:
 *     ZwWaitForSingleObject @ 0x1800A5380 (ZwWaitForSingleObject.c)
 *     ZwSetEvent @ 0x1800A54C0 (ZwSetEvent.c)
 *     ZwClose @ 0x1800A54E0 (ZwClose.c)
 *     ZwAllocateVirtualMemory @ 0x1800A5600 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x1800A56C0 (ZwFreeVirtualMemory.c)
 *     ZwTerminateProcess @ 0x1800A5880 (ZwTerminateProcess.c)
 *     ZwWriteVirtualMemory @ 0x1800A5A40 (ZwWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x1800A5A80 (ZwDuplicateObject.c)
 *     ZwCreateEvent @ 0x1800A5C00 (ZwCreateEvent.c)
 *     ZwResumeProcess @ 0x1800A80B0 (ZwResumeProcess.c)
 *     ZwSuspendThread @ 0x1800A88D0 (ZwSuspendThread.c)
 *     _guard_dispatch_icall_nop @ 0x1800A8C20 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1800ABDC0 (memset.c)
 *     RtlCloneUserProcess @ 0x1800D86D0 (RtlCloneUserProcess.c)
 */

__int64 __fastcall sub_1800D8360(PSIZE_T RegionSize)
{
  NTSTATUS v2; // r14d
  _OWORD *v3; // rax
  int v4; // ecx
  NTSTATUS v5; // eax
  HANDLE ProcessHandle; // r8
  HANDLE v7; // rdx
  int v8; // eax
  __int64 v9; // rcx
  void *v10; // rdx
  void *v11; // r15
  HANDLE v12; // rbx
  HANDLE ThreadHandle; // rdi
  void *v14; // rcx
  void *v15; // rsi
  void (__fastcall *v16)(_QWORD); // rax
  void *v17; // rcx
  ULONG_PTR RegionSizea[2]; // [rsp+40h] [rbp-69h] BYREF
  _RTL_USER_PROCESS_INFORMATION ProcessInformation; // [rsp+50h] [rbp-59h] BYREF
  PVOID BaseAddress; // [rsp+110h] [rbp+67h] BYREF
  HANDLE TargetHandle; // [rsp+118h] [rbp+6Fh] BYREF
  HANDLE Buffer; // [rsp+120h] [rbp+77h] BYREF
  HANDLE EventHandle; // [rsp+128h] [rbp+7Fh] BYREF

  EventHandle = 0LL;
  BaseAddress = 0LL;
  Buffer = 0LL;
  TargetHandle = 0LL;
  v2 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, RegionSize, 0x3000u, 4u);
  if ( v2 < 0 )
  {
    memset(RegionSize + 7, 0, 0x20uLL);
    goto LABEL_28;
  }
  v3 = BaseAddress;
  *(_OWORD *)BaseAddress = *(_OWORD *)RegionSize;
  v3[1] = *((_OWORD *)RegionSize + 1);
  v3[2] = *((_OWORD *)RegionSize + 2);
  v3[3] = *((_OWORD *)RegionSize + 3);
  v3[4] = *((_OWORD *)RegionSize + 4);
  *((_QWORD *)v3 + 10) = RegionSize[10];
  v2 = ZwCreateEvent(&EventHandle, 0x1F0003u, 0LL, NotificationEvent, 0);
  if ( v2 >= 0 )
  {
    v4 = RegionSize[1] & 2 | 4;
    if ( (RegionSize[1] & 8) == 0 )
      v4 = RegionSize[1] & 2;
    v5 = RtlCloneUserProcess(v4 | 1, 0LL, 0LL, 0LL, &ProcessInformation);
    v2 = v5;
    if ( v5 )
    {
      if ( v5 == 297 )
      {
        NtCurrentPeb()->Ldr->ShutdownInProgress = 1;
        ZwSetEvent(TargetHandle, 0LL);
        ZwClose(TargetHandle);
        if ( Buffer )
        {
          ZwWaitForSingleObject(Buffer, 0, 0LL);
          ZwClose(Buffer);
        }
        v16 = (void (__fastcall *)(_QWORD))*((_QWORD *)BaseAddress + 2);
        if ( v16 )
        {
          v16(*((_QWORD *)BaseAddress + 3));
        }
        else if ( (*((_DWORD *)BaseAddress + 2) & 4) == 0 )
        {
          ZwSuspendThread((HANDLE)0xFFFFFFFFFFFFFFFELL, 0LL);
        }
        RegionSizea[0] = *(_QWORD *)BaseAddress;
        v8 = ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, RegionSizea, 0x8000u);
        v2 = v8;
        v9 = -1LL;
        goto LABEL_8;
      }
      RegionSize[7] = 0LL;
      RegionSize[8] = 0LL;
      RegionSize[9] = 0LL;
      RegionSize[10] = 0LL;
      v17 = (void *)RegionSize[4];
      if ( v17 )
        ZwSetEvent(v17, 0LL);
    }
    else
    {
      ProcessHandle = ProcessInformation.ProcessHandle;
      v7 = EventHandle;
      RegionSize[8] = (ULONG_PTR)ProcessInformation.ThreadHandle;
      *(CLIENT_ID *)(RegionSize + 9) = ProcessInformation.ClientId;
      RegionSize[7] = (ULONG_PTR)ProcessHandle;
      v8 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, v7, ProcessHandle, &TargetHandle, 0x1F0003u, 0, 2u);
      v9 = (__int64)ProcessInformation.ProcessHandle;
      v2 = v8;
      if ( v8 < 0 )
      {
LABEL_8:
        ZwTerminateProcess((HANDLE)v9, v8);
        goto LABEL_28;
      }
      v8 = ZwWriteVirtualMemory(ProcessInformation.ProcessHandle, &TargetHandle, &TargetHandle, 8uLL, 0LL);
      v2 = v8;
      if ( v8 < 0 )
        goto LABEL_10;
      v10 = (void *)RegionSize[6];
      if ( v10 )
      {
        v8 = ZwDuplicateObject(
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               v10,
               ProcessInformation.ProcessHandle,
               &Buffer,
               0x1F0003u,
               0,
               2u);
        v2 = v8;
        if ( v8 < 0 )
          goto LABEL_10;
        if ( (RegionSize[1] & 0x10) == 0 )
          ZwClose((HANDLE)RegionSize[6]);
        v8 = ZwWriteVirtualMemory(ProcessInformation.ProcessHandle, &Buffer, &Buffer, 8uLL, 0LL);
        v2 = v8;
        if ( v8 < 0 )
        {
LABEL_10:
          v9 = (__int64)ProcessInformation.ProcessHandle;
          goto LABEL_8;
        }
      }
      ZwResumeProcess(ProcessInformation.ProcessHandle);
      ZwWaitForSingleObject(EventHandle, 0, 0LL);
      v11 = (void *)RegionSize[4];
      if ( v11 )
      {
        v12 = ProcessInformation.ProcessHandle;
        ThreadHandle = ProcessInformation.ThreadHandle;
        v14 = (void *)RegionSize[4];
        v15 = (void *)RegionSize[5];
        v2 = ZwSetEvent(v14, 0LL);
        ZwWaitForSingleObject(v15, 0, 0LL);
        ZwClose(v12);
        ZwClose(ThreadHandle);
        ZwClose(v11);
        ZwClose(v15);
      }
    }
  }
LABEL_28:
  if ( EventHandle )
    ZwClose(EventHandle);
  if ( BaseAddress )
  {
    RegionSizea[0] = *(_QWORD *)BaseAddress;
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, RegionSizea, 0x8000u);
  }
  return (unsigned int)v2;
}
