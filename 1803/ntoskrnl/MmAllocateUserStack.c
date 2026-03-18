/*
 * XREFs of MmAllocateUserStack @ 0x1404E830C
 * Callers:
 *     NtSetInformationProcess @ 0x1404E4550 (NtSetInformationProcess.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     MiAllocateVirtualMemoryCommon @ 0x1404E8560 (MiAllocateVirtualMemoryCommon.c)
 */

__int64 __fastcall MmAllocateUserStack(int a1, int a2, int a3, int a4)
{
  _DWORD v9[12]; // [rsp+60h] [rbp-38h] BYREF

  memset(v9, 0, 0x28uLL);
  if ( a4 )
    v9[8] = a4 - 1;
  return MiAllocateVirtualMemoryCommon(-1, a1, a2, a3, 0x2000, 4, (__int64)v9, 0, 0x80000000, 0, 0LL);
}
