/*
 * XREFs of IopVerifierExAllocatePoolWithQuota_4 @ 0x1401F5D70
 * Callers:
 *     NtQueryQuotaInformationFile @ 0x14068D860 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140009390 (RtlRaiseStatus.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14004B900 (ExAllocatePoolWithQuotaTag.c)
 *     ExAllocatePoolWithTagPriority @ 0x14012A7A0 (ExAllocatePoolWithTagPriority.c)
 */

PVOID __fastcall IopVerifierExAllocatePoolWithQuota_4(POOL_TYPE a1, SIZE_T a2)
{
  PVOID result; // rax

  if ( !ViVerifierDriverAddedThunkListHead )
    return ExAllocatePoolWithQuotaTag(a1, a2, 0x20206F49u);
  result = ExAllocatePoolWithTagPriority(a1, a2, 0x20206F49u, (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  if ( !result )
    RtlRaiseStatus(-1073741670);
  return result;
}
