/*
 * XREFs of MiDecommitRegion @ 0x1404AE180
 * Callers:
 *     MmFreeVirtualMemory @ 0x1404AD570 (MmFreeVirtualMemory.c)
 *     MiFreeToSubAllocatedRegion @ 0x140562CBC (MiFreeToSubAllocatedRegion.c)
 *     MiLoadSectionIntoVsmEnclave @ 0x140752530 (MiLoadSectionIntoVsmEnclave.c)
 * Callees:
 *     MiReturnProcessCommitment @ 0x14000A180 (MiReturnProcessCommitment.c)
 *     MiReturnCommit @ 0x14000A1A0 (MiReturnCommit.c)
 *     MiFillCommitReturnInfo @ 0x14000A248 (MiFillCommitReturnInfo.c)
 *     MiGetPteAddress @ 0x14000A260 (MiGetPteAddress.c)
 *     MiDecommitPages @ 0x14000C050 (MiDecommitPages.c)
 *     PspReturnQuota @ 0x1400F8E70 (PspReturnQuota.c)
 *     MiGetProcessPartition @ 0x1401199C8 (MiGetProcessPartition.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x14054FD20 (PspChangeJobMemoryUsageByProcess.c)
 */

void __fastcall MiDecommitRegion(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _KPROCESS *Process; // rbx
  ULONG_PTR PteAddress; // rdi
  __int64 v8; // rax
  unsigned int v9; // edx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rdi
  unsigned __int64 v13; // r8
  __int64 v14; // r10
  __int64 ProcessPartition; // rax
  unsigned __int64 v16; // r8
  __int64 v17[2]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v18[5]; // [rsp+40h] [rbp-28h] BYREF

  memset(v18, 0, 0x20uLL);
  Process = KeGetCurrentThread()->ApcState.Process;
  PteAddress = MiGetPteAddress(a3);
  MiDecommitPages(a2, PteAddress, (__int64)Process, a1, 1, v18);
  v8 = MiGetPteAddress(a2);
  v9 = *(_DWORD *)(a1 + 52);
  v10 = PteAddress - v8;
  v11 = v9;
  LODWORD(v11) = v9 & 0x7FFFFFFF;
  v12 = (v10 >> 3) - v18[3] + 1;
  v13 = (v11 | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31)) - v12;
  *(_BYTE *)(a1 + 34) = v13 >> 31;
  *(_DWORD *)(a1 + 52) = v9 ^ (v13 ^ v9) & 0x7FFFFFFF;
  MiFillCommitReturnInfo(v12, (__int64)v18, v17);
  if ( v17[0] )
  {
    MiReturnProcessCommitment((__int64)Process, v17[0]);
    if ( (Process[1].DirectoryTableBase & 0x10) != 0 )
      PspChangeJobMemoryUsageByProcess(2LL, -v14, Process);
    if ( Process != PsInitialSystemProcess )
      PspReturnQuota((char *)Process[1].ActiveProcessors.Bitmap[4], (ULONG_PTR)Process, 2, v17[0]);
  }
  if ( v17[1] )
  {
    ProcessPartition = MiGetProcessPartition((__int64)Process);
    MiReturnCommit(ProcessPartition, v16);
  }
}
