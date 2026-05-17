/*
 * XREFs of sub_1800DD168 @ 0x1800DD168
 * Callers:
 *     RtlWow64SuspendThreadEx @ 0x1800DCF70 (RtlWow64SuspendThreadEx.c)
 * Callees:
 *     ZwReadVirtualMemory @ 0x1800A5AE0 (ZwReadVirtualMemory.c)
 */

__int64 __fastcall sub_1800DD168(__int64 a1, __int64 a2, bool *a3)
{
  int VirtualMemory; // edx
  char v6; // [rsp+34h] [rbp-24h]
  __int64 v7; // [rsp+68h] [rbp+10h]

  VirtualMemory = ZwReadVirtualMemory();
  if ( VirtualMemory >= 0 )
  {
    if ( v7 )
    {
      VirtualMemory = ZwReadVirtualMemory();
      if ( VirtualMemory >= 0 )
        *a3 = (v6 & 2) != 0;
    }
    else
    {
      *a3 = 0;
    }
  }
  return (unsigned int)VirtualMemory;
}
