/*
 * XREFs of IopVerifierExAllocatePoolWithQuota_1 @ 0x140033E50
 * Callers:
 *     NtWriteFileGather @ 0x14044F2A0 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1404507E0 (NtReadFileScatter.c)
 *     IopTrackLink @ 0x1404525A0 (IopTrackLink.c)
 *     NtWriteFile @ 0x1404818C0 (NtWriteFile.c)
 *     IopXxxControlFile @ 0x14052BAD0 (IopXxxControlFile.c)
 *     NtReadFile @ 0x140566B00 (NtReadFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x14068A1D8 (IopSetEaOrQuotaInformationFile.c)
 *     IopValidateJunctionTarget @ 0x14068AC90 (IopValidateJunctionTarget.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14004B900 (ExAllocatePoolWithQuotaTag.c)
 *     ExAllocatePoolWithTagPriority @ 0x14012A7A0 (ExAllocatePoolWithTagPriority.c)
 */

PVOID __fastcall IopVerifierExAllocatePoolWithQuota_1(POOL_TYPE a1, SIZE_T a2)
{
  PVOID result; // rax

  if ( !ViVerifierDriverAddedThunkListHead )
    return ExAllocatePoolWithQuotaTag(a1, a2, 0x20206F49u);
  result = ExAllocatePoolWithTagPriority(a1, a2, 0x20206F49u, (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  if ( !result )
    RtlRaiseStatus(-1073741670);
  return result;
}
