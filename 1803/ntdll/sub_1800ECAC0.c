/*
 * XREFs of sub_1800ECAC0 @ 0x1800ECAC0
 * Callers:
 *     sub_18005FD84 @ 0x18005FD84 (sub_18005FD84.c)
 *     sub_1800FD134 @ 0x1800FD134 (sub_1800FD134.c)
 *     sub_1800FD868 @ 0x1800FD868 (sub_1800FD868.c)
 *     sub_1800FF4A0 @ 0x1800FF4A0 (sub_1800FF4A0.c)
 * Callees:
 *     sub_1800060E8 @ 0x1800060E8 (sub_1800060E8.c)
 *     ZwWaitForSingleObject @ 0x18009AB40 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x18009ACA0 (ZwClose.c)
 *     ZwAllocateVirtualMemory @ 0x18009ADC0 (ZwAllocateVirtualMemory.c)
 *     ZwFreeVirtualMemory @ 0x18009AE80 (ZwFreeVirtualMemory.c)
 *     ZwWriteVirtualMemory @ 0x18009B200 (ZwWriteVirtualMemory.c)
 *     ZwDuplicateObject @ 0x18009B240 (ZwDuplicateObject.c)
 *     ZwReadVirtualMemory @ 0x18009B2A0 (ZwReadVirtualMemory.c)
 *     ZwResumeThread @ 0x18009B500 (ZwResumeThread.c)
 *     ZwTerminateThread @ 0x18009B520 (ZwTerminateThread.c)
 *     sub_1800FF1D0 @ 0x1800FF1D0 (sub_1800FF1D0.c)
 *     sub_1800FF2CC @ 0x1800FF2CC (sub_1800FF2CC.c)
 */

__int64 __fastcall sub_1800ECAC0(HANDLE ProcessHandle, HANDLE *Buffer)
{
  HANDLE v2; // rsi
  NTSTATUS v5; // ebx
  HANDLE v6; // rdi
  int v8; // eax
  int v9; // [rsp+30h] [rbp-29h]
  HANDLE Handle; // [rsp+60h] [rbp+7h] BYREF
  ULONG_PTR NumberOfBytesWritten; // [rsp+68h] [rbp+Fh] BYREF
  ULONG_PTR RegionSize; // [rsp+70h] [rbp+17h] BYREF
  __int128 v13; // [rsp+78h] [rbp+1Fh] BYREF
  PVOID BaseAddress; // [rsp+D0h] [rbp+77h] BYREF
  HANDLE ThreadHandle; // [rsp+D8h] [rbp+7Fh] BYREF

  v2 = 0LL;
  BaseAddress = 0LL;
  ThreadHandle = 0LL;
  Handle = 0LL;
  RegionSize = 88LL;
  v5 = ZwAllocateVirtualMemory(ProcessHandle, &BaseAddress, 0LL, &RegionSize, 0x3000u, 4u);
  if ( v5 < 0 )
    goto LABEL_11;
  v5 = sub_1800060E8(
         ProcessHandle,
         0LL,
         3,
         0,
         0LL,
         0LL,
         v9,
         (PUSER_THREAD_START_ROUTINE)sub_1800EC6A0,
         BaseAddress,
         &ThreadHandle,
         &v13);
  if ( v5 < 0 )
    goto LABEL_8;
  if ( *Buffer )
  {
    v5 = ZwDuplicateObject((HANDLE)0xFFFFFFFFFFFFFFFFLL, *Buffer, ProcessHandle, Buffer, 0xF001Fu, 0, 0);
    if ( v5 < 0 )
      goto LABEL_8;
  }
  v5 = ZwWriteVirtualMemory(ProcessHandle, BaseAddress, Buffer, 0x58uLL, &NumberOfBytesWritten);
  if ( v5 < 0 )
    goto LABEL_8;
  if ( NumberOfBytesWritten != 88 )
  {
    v5 = -2147483635;
LABEL_8:
    v6 = ThreadHandle;
    goto LABEL_9;
  }
  v8 = sub_1800FF1D0(ProcessHandle, &Handle);
  v6 = ThreadHandle;
  v5 = v8;
  if ( v8 < 0 || (v5 = ZwResumeThread(ThreadHandle, 0LL), v5 < 0) )
  {
    v2 = Handle;
LABEL_9:
    if ( v6 )
    {
      ZwTerminateThread(v6, 0);
      ZwClose(v6);
    }
    goto LABEL_11;
  }
  ZwWaitForSingleObject(v6, 0, 0LL);
  v2 = Handle;
  if ( Handle )
  {
    sub_1800FF2CC(Handle);
    v2 = 0LL;
  }
  ZwClose(v6);
  v6 = 0LL;
  v5 = ZwReadVirtualMemory(ProcessHandle, BaseAddress, Buffer, 0x58uLL, &NumberOfBytesWritten);
  if ( v5 >= 0 )
  {
    if ( NumberOfBytesWritten != 88 )
    {
      v5 = -2147483635;
      goto LABEL_11;
    }
    v5 = *((_DWORD *)Buffer + 7);
    goto LABEL_9;
  }
LABEL_11:
  if ( BaseAddress )
    ZwFreeVirtualMemory(ProcessHandle, &BaseAddress, &RegionSize, 0x8000u);
  if ( v2 )
    sub_1800FF2CC(v2);
  return (unsigned int)v5;
}
