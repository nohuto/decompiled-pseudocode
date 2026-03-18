/*
 * XREFs of MiChargeFullProcessCommitment @ 0x1405B6870
 * Callers:
 *     MiMakeHyperRangeAccessible @ 0x14000D2C0 (MiMakeHyperRangeAccessible.c)
 *     MiProbeAndLockPrepare @ 0x140022150 (MiProbeAndLockPrepare.c)
 *     MiCopyToUserVa @ 0x14003C7F0 (MiCopyToUserVa.c)
 *     MiSplitPrivatePage @ 0x14003CAC0 (MiSplitPrivatePage.c)
 *     MiProtectPrivateMemory @ 0x1401139F0 (MiProtectPrivateMemory.c)
 *     MiSetProtectionOnSection @ 0x1401147F0 (MiSetProtectionOnSection.c)
 *     MiCommitExistingVad @ 0x140117630 (MiCommitExistingVad.c)
 *     MiSplitReducedCommitClonePage @ 0x140253E00 (MiSplitReducedCommitClonePage.c)
 *     MiCommitPageTablesForVad @ 0x1404AF6B0 (MiCommitPageTablesForVad.c)
 *     MiComputeProcessUserVa @ 0x1404ED4D4 (MiComputeProcessUserVa.c)
 *     MiCreateLargePageVad @ 0x140755658 (MiCreateLargePageVad.c)
 * Callees:
 *     MiReturnProcessCommitment @ 0x14000A180 (MiReturnProcessCommitment.c)
 *     PspChargeQuota @ 0x1401049D0 (PspChargeQuota.c)
 *     MiChargeCommit @ 0x140119760 (MiChargeCommit.c)
 *     MiGetProcessPartition @ 0x1401199C8 (MiGetProcessPartition.c)
 *     MiChargeProcessCommitment @ 0x1401199F0 (MiChargeProcessCommitment.c)
 *     PsReturnProcessPageFileQuota @ 0x1404B4AB4 (PsReturnProcessPageFileQuota.c)
 *     MiCommitRequestFailed @ 0x140753D4C (MiCommitRequestFailed.c)
 *     PsChangeJobMemoryUsage @ 0x14077B2A0 (PsChangeJobMemoryUsage.c)
 */

__int64 __fastcall MiChargeFullProcessCommitment(ULONG_PTR a1, unsigned __int64 a2)
{
  char v2; // bl
  __int64 v5; // rdx
  __int64 ProcessPartition; // rax
  unsigned int v8; // ebp
  unsigned int v9; // r14d

  v2 = 0;
  if ( (PEPROCESS)a1 == PsInitialSystemProcess || (int)PspChargeQuota(*(_QWORD *)(a1 + 1040), a1, 2, a2) >= 0 )
  {
    v2 = 1;
    if ( (unsigned int)MiChargeProcessCommitment((_QWORD *)a1, a2) )
    {
      v2 = 3;
      if ( (*(_DWORD *)(a1 + 768) & 0x10) == 0 )
      {
LABEL_7:
        ProcessPartition = MiGetProcessPartition(a1);
        if ( (unsigned int)MiChargeCommit(ProcessPartition, a2, 0) )
          return 0LL;
        v9 = 4;
        goto LABEL_13;
      }
      if ( (unsigned __int8)PsChangeJobMemoryUsage(2LL, a2, a1) )
      {
        v2 = 7;
        goto LABEL_7;
      }
      v9 = 3;
    }
    else
    {
      v9 = 2;
    }
LABEL_13:
    v8 = -1073741523;
    goto LABEL_14;
  }
  v8 = -1073741524;
  v9 = 1;
LABEL_14:
  if ( (v2 & 1) != 0 )
    PsReturnProcessPageFileQuota(a1, a2);
  if ( (v2 & 2) != 0 )
    MiReturnProcessCommitment(a1, a2);
  if ( (unsigned __int8)v2 >= 4u )
    PsChangeJobMemoryUsage(2LL, -(__int64)a2, a1);
  MiCommitRequestFailed(a1, v5, a2, v9);
  return v8;
}
