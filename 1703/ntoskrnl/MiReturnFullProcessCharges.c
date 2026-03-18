/*
 * XREFs of MiReturnFullProcessCharges @ 0x140062CC0
 * Callers:
 *     MiCloneVads @ 0x1400018B8 (MiCloneVads.c)
 *     MiDeletePartialVad @ 0x140016CB0 (MiDeletePartialVad.c)
 *     MiSetProtectionOnSection @ 0x1400CEFC0 (MiSetProtectionOnSection.c)
 *     MiDeleteVadBitmap @ 0x140499A8C (MiDeleteVadBitmap.c)
 *     MiReturnFullProcessCommitment @ 0x140499FA8 (MiReturnFullProcessCommitment.c)
 *     MiRemoveVadCharges @ 0x14051D900 (MiRemoveVadCharges.c)
 *     MiReturnPageTablePageCommitment @ 0x14051DC80 (MiReturnPageTablePageCommitment.c)
 * Callees:
 *     PspChangeJobMemoryUsageByProcess @ 0x140519510 (PspChangeJobMemoryUsageByProcess.c)
 */

__int64 __fastcall MiReturnFullProcessCharges(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a1 + 768) & 0x10) != 0 )
    PspChangeJobMemoryUsageByProcess(16LL, -a2, a1);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1264), -a2);
  return PsReturnProcessPageFileQuota(a1, a2);
}
