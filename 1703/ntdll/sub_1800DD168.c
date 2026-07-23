/*
 * XREFs of sub_1800DD168 @ 0x1800DD168
 * Callers:
 *     RtlWow64SuspendThreadEx @ 0x1800DCF70 (RtlWow64SuspendThreadEx.c)
 * Callees:
 *     ZwReadVirtualMemory @ 0x1800A5AE0 (ZwReadVirtualMemory.c)
 */

__int64 __fastcall sub_1800DD168(HANDLE ProcessHandle, __int64 a2, bool *a3)
{
  NTSTATUS VirtualMemory; // edx
  _BYTE v7[40]; // [rsp+30h] [rbp-28h] BYREF
  PVOID Buffer; // [rsp+68h] [rbp+10h] BYREF

  VirtualMemory = ZwReadVirtualMemory(ProcessHandle, (PVOID)(a2 + 5328), &Buffer, 8uLL, 0LL);
  if ( VirtualMemory >= 0 )
  {
    if ( Buffer )
    {
      VirtualMemory = ZwReadVirtualMemory(ProcessHandle, Buffer, v7, 0x20uLL, 0LL);
      if ( VirtualMemory >= 0 )
        *a3 = (v7[4] & 2) != 0;
    }
    else
    {
      *a3 = 0;
    }
  }
  return (unsigned int)VirtualMemory;
}
