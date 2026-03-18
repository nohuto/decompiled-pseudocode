/*
 * XREFs of IopVerifierExAllocatePoolWithQuota_3 @ 0x1401FA4E0
 * Callers:
 *     IoQueryInformationByName @ 0x1406B7700 (IoQueryInformationByName.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140060B70 (ExAllocatePoolWithQuotaTag.c)
 *     ExAllocatePoolWithTagPriority @ 0x140081330 (ExAllocatePoolWithTagPriority.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 */

PVOID __fastcall IopVerifierExAllocatePoolWithQuota_3(__int64 a1, SIZE_T a2)
{
  PVOID result; // rax

  if ( !ViVerifierDriverAddedThunkListHead )
    return ExAllocatePoolWithQuotaTag(NonPagedPoolNx, a2, 0x20206F49u);
  result = ExAllocatePoolWithTagPriority(
             NonPagedPoolNx,
             a2,
             0x20206F49u,
             (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  if ( !result )
    RtlRaiseStatus(-1073741670);
  return result;
}
