/*
 * XREFs of MiReturnFullProcessCharges @ 0x1400365E0
 * Callers:
 *     MiSetProtectionOnSection @ 0x14003B7E0 (MiSetProtectionOnSection.c)
 *     MiCloneVads @ 0x1400E6F20 (MiCloneVads.c)
 *     MiDeletePartialVad @ 0x1401123D4 (MiDeletePartialVad.c)
 *     MiRemoveVadCharges @ 0x140495BC0 (MiRemoveVadCharges.c)
 *     MiReturnPageTablePageCommitment @ 0x140499780 (MiReturnPageTablePageCommitment.c)
 *     MiDeleteVadBitmap @ 0x1404FB8C4 (MiDeleteVadBitmap.c)
 *     MiReturnFullProcessCommitment @ 0x140573D78 (MiReturnFullProcessCommitment.c)
 * Callees:
 *     PsReturnProcessPageFileQuota @ 0x140494BAC (PsReturnProcessPageFileQuota.c)
 *     PsChangeJobMemoryUsage @ 0x1404961D4 (PsChangeJobMemoryUsage.c)
 */

__int64 __fastcall MiReturnFullProcessCharges(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a1 + 768) & 0x10) != 0 )
    PsChangeJobMemoryUsage(16LL, -a2, a1);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1264), -a2);
  return PsReturnProcessPageFileQuota(a1, a2);
}
