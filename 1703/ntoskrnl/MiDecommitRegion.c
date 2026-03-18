/*
 * XREFs of MiDecommitRegion @ 0x140499E58
 * Callers:
 *     MiFreeToSubAllocatedRegion @ 0x140499C38 (MiFreeToSubAllocatedRegion.c)
 * Callees:
 *     MiReturnProcessCommitment @ 0x1400CE224 (MiReturnProcessCommitment.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     MiFillCommitReturnInfo @ 0x1400CE2E8 (MiFillCommitReturnInfo.c)
 *     MiGetPteAddress @ 0x1400CE300 (MiGetPteAddress.c)
 *     MiGetProcessPartition @ 0x1400D0EA8 (MiGetProcessPartition.c)
 *     MiDecommitPages @ 0x1400D2D20 (MiDecommitPages.c)
 *     memset @ 0x140192D80 (memset.c)
 *     PsReturnProcessPageFileQuota @ 0x140499FE4 (PsReturnProcessPageFileQuota.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x140519510 (PspChangeJobMemoryUsageByProcess.c)
 */

void __fastcall MiDecommitRegion(__int64 a1, unsigned __int64 a2, unsigned __int64 a3)
{
  _KPROCESS *Process; // rbp
  unsigned __int64 PteAddress; // rbx
  __int64 v8; // rax
  int v9; // edx
  __int64 v10; // rbx
  unsigned __int64 v11; // r8
  __int64 v12; // rbx
  __int64 ProcessPartition; // rax
  unsigned __int64 v14; // r8
  __int64 v15[2]; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v16[4]; // [rsp+40h] [rbp-28h] BYREF

  memset(v16, 0, sizeof(v16));
  Process = KeGetCurrentThread()->ApcState.Process;
  PteAddress = MiGetPteAddress(a3);
  MiDecommitPages(a2, PteAddress, Process, a1, 1, v16);
  v8 = MiGetPteAddress(a2);
  v9 = *(_DWORD *)(a1 + 52);
  v10 = ((__int64)(PteAddress - v8) >> 3) - v16[3] + 1;
  v11 = (v9 & 0x7FFFFFFF | ((unsigned __int64)*(unsigned __int8 *)(a1 + 34) << 31)) - v10;
  *(_BYTE *)(a1 + 34) = v11 >> 31;
  *(_DWORD *)(a1 + 52) = v9 ^ (v11 ^ v9) & 0x7FFFFFFF;
  MiFillCommitReturnInfo(v10, (__int64)v16, v15);
  v12 = v15[0];
  if ( v15[0] )
  {
    MiReturnProcessCommitment((__int64)Process, v15[0]);
    if ( (Process[1].DirectoryTableBase & 0x10) != 0 )
    {
      v12 = v15[0];
      PspChangeJobMemoryUsageByProcess(16LL, -v15[0], KeGetCurrentThread()->ApcState.Process);
    }
    PsReturnProcessPageFileQuota(Process, v12);
  }
  if ( v15[1] )
  {
    ProcessPartition = MiGetProcessPartition((__int64)Process);
    MiReturnCommit(ProcessPartition, v14);
  }
}
