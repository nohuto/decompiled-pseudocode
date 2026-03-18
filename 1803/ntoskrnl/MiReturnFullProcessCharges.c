/*
 * XREFs of MiReturnFullProcessCharges @ 0x14003E5A0
 * Callers:
 *     MiDeletePartialVad @ 0x140071BC0 (MiDeletePartialVad.c)
 *     MiSetProtectionOnSection @ 0x1401147F0 (MiSetProtectionOnSection.c)
 *     MiCloneVads @ 0x140140C44 (MiCloneVads.c)
 *     MiReturnPageTablePageCommitment @ 0x1404AF230 (MiReturnPageTablePageCommitment.c)
 *     MiReturnFullProcessCommitment @ 0x1404B4A78 (MiReturnFullProcessCommitment.c)
 *     MiDeleteVadBitmap @ 0x140512E90 (MiDeleteVadBitmap.c)
 *     MiRemoveVadCharges @ 0x14059D690 (MiRemoveVadCharges.c)
 * Callees:
 *     PsReturnProcessPageFileQuota @ 0x1404B4AB4 (PsReturnProcessPageFileQuota.c)
 *     PsChangeJobMemoryUsage @ 0x14077B2A0 (PsChangeJobMemoryUsage.c)
 */

__int64 __fastcall MiReturnFullProcessCharges(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdi

  v2 = -a2;
  if ( (*(_DWORD *)(a1 + 768) & 0x10) != 0 )
    PsChangeJobMemoryUsage(2LL, v2, a1);
  _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 1264), v2);
  return PsReturnProcessPageFileQuota(a1, a2);
}
