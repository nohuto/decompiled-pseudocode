/*
 * XREFs of MiChargeFullProcessCommitment @ 0x14051D550
 * Callers:
 *     MiCopyToUserVa @ 0x1400A6BD0 (MiCopyToUserVa.c)
 *     MiSplitPrivatePage @ 0x1400A7140 (MiSplitPrivatePage.c)
 *     MiProbeAndLockPrepare @ 0x1400B4C90 (MiProbeAndLockPrepare.c)
 *     MiCommitExistingVad @ 0x1400CE7C0 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x1400CEFC0 (MiSetProtectionOnSection.c)
 *     MiMakeHyperRangeAccessible @ 0x1400D1310 (MiMakeHyperRangeAccessible.c)
 *     MiProtectPrivateMemory @ 0x140106A80 (MiProtectPrivateMemory.c)
 *     MiSplitReducedCommitClonePage @ 0x14020E7A4 (MiSplitReducedCommitClonePage.c)
 *     MiComputeProcessUserVa @ 0x14049E434 (MiComputeProcessUserVa.c)
 *     MiCommitPageTablesForVad @ 0x14051D620 (MiCommitPageTablesForVad.c)
 *     MiCreateLargePageVad @ 0x1406BE7A4 (MiCreateLargePageVad.c)
 * Callees:
 *     MiReturnProcessCommitment @ 0x1400CE224 (MiReturnProcessCommitment.c)
 *     MiChargeCommit @ 0x1400D0C60 (MiChargeCommit.c)
 *     MiGetProcessPartition @ 0x1400D0EA8 (MiGetProcessPartition.c)
 *     MiChargeProcessCommitment @ 0x1400D0ED0 (MiChargeProcessCommitment.c)
 *     PspChargeQuota @ 0x1400D0F50 (PspChargeQuota.c)
 *     PsReturnProcessPageFileQuota @ 0x140499FE4 (PsReturnProcessPageFileQuota.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x140519510 (PspChangeJobMemoryUsageByProcess.c)
 *     MiCommitRequestFailed @ 0x1406B6A28 (MiCommitRequestFailed.c)
 */

__int64 __fastcall MiChargeFullProcessCommitment(ULONG_PTR a1, unsigned __int64 a2)
{
  char v2; // bl
  unsigned int v5; // ebp
  __int64 v6; // rdx
  unsigned __int64 ProcessPartition; // rax
  unsigned int v9; // r14d

  v2 = 0;
  v5 = 2;
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
        if ( (unsigned int)MiChargeCommit(ProcessPartition, a2, 0LL) )
          return 0LL;
        v5 = 4;
        goto LABEL_12;
      }
      if ( PspChangeJobMemoryUsageByProcess(16, a2, a1, 0LL) )
      {
        v2 = 7;
        goto LABEL_7;
      }
      v5 = 3;
    }
LABEL_12:
    v9 = -1073741523;
    goto LABEL_13;
  }
  v5 = 1;
  v9 = -1073741524;
LABEL_13:
  if ( (v2 & 1) != 0 )
    PsReturnProcessPageFileQuota(a1, a2);
  if ( (v2 & 2) != 0 )
    MiReturnProcessCommitment(a1, a2);
  if ( (unsigned __int8)v2 >= 4u )
    PspChangeJobMemoryUsageByProcess(16, -(__int64)a2, a1, 0LL);
  MiCommitRequestFailed(a1, v6, a2, v5);
  return v9;
}
