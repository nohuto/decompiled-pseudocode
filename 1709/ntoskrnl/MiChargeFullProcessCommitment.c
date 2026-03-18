/*
 * XREFs of MiChargeFullProcessCommitment @ 0x140495E90
 * Callers:
 *     MiCopyToUserVa @ 0x140034630 (MiCopyToUserVa.c)
 *     MiSplitPrivatePage @ 0x140034BC0 (MiSplitPrivatePage.c)
 *     MiProtectPrivateMemory @ 0x1400371A0 (MiProtectPrivateMemory.c)
 *     MiCommitExistingVad @ 0x14003AFF0 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x14003B7E0 (MiSetProtectionOnSection.c)
 *     MiMakeHyperRangeAccessible @ 0x14003E8F0 (MiMakeHyperRangeAccessible.c)
 *     MiProbeAndLockPrepare @ 0x1400BEF50 (MiProbeAndLockPrepare.c)
 *     MiSplitReducedCommitClonePage @ 0x140215F00 (MiSplitReducedCommitClonePage.c)
 *     MiComputeProcessUserVa @ 0x14045EAE8 (MiComputeProcessUserVa.c)
 *     MiCommitPageTablesForVad @ 0x140499490 (MiCommitPageTablesForVad.c)
 *     MiCreateLargePageVad @ 0x1406EBC04 (MiCreateLargePageVad.c)
 * Callees:
 *     MiReturnProcessCommitment @ 0x140035908 (MiReturnProcessCommitment.c)
 *     MiChargeCommit @ 0x14003AB20 (MiChargeCommit.c)
 *     MiGetProcessPartition @ 0x14003ADE0 (MiGetProcessPartition.c)
 *     MiChargeProcessCommitment @ 0x14003AE00 (MiChargeProcessCommitment.c)
 *     PspChargeQuota @ 0x14003AE80 (PspChargeQuota.c)
 *     PsReturnProcessPageFileQuota @ 0x140494BAC (PsReturnProcessPageFileQuota.c)
 *     PsChangeJobMemoryUsage @ 0x1404961D4 (PsChangeJobMemoryUsage.c)
 *     MiCommitRequestFailed @ 0x1406E3560 (MiCommitRequestFailed.c)
 */

__int64 __fastcall MiChargeFullProcessCommitment(ULONG_PTR a1, unsigned __int64 a2)
{
  char v2; // bl
  unsigned int v5; // ebp
  __int64 v6; // rdx
  __int64 ProcessPartition; // rax
  __int64 v8; // r9
  unsigned int v10; // r14d

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
        if ( (unsigned int)MiChargeCommit(ProcessPartition, a2, 0LL, v8) )
          return 0LL;
        v5 = 4;
        goto LABEL_12;
      }
      if ( (unsigned __int8)PsChangeJobMemoryUsage(16LL, a2, a1) )
      {
        v2 = 7;
        goto LABEL_7;
      }
      v5 = 3;
    }
LABEL_12:
    v10 = -1073741523;
    goto LABEL_13;
  }
  v5 = 1;
  v10 = -1073741524;
LABEL_13:
  if ( (v2 & 1) != 0 )
    PsReturnProcessPageFileQuota(a1, a2);
  if ( (v2 & 2) != 0 )
    MiReturnProcessCommitment(a1, a2);
  if ( (unsigned __int8)v2 >= 4u )
    PsChangeJobMemoryUsage(16LL, -(__int64)a2, a1);
  MiCommitRequestFailed(a1, v6, a2, v5);
  return v10;
}
