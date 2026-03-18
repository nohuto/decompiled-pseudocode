/*
 * XREFs of FsRtlAllocatePoolWithQuota @ 0x1401E7950
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140060B70 (ExAllocatePoolWithQuotaTag.c)
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 */

PVOID __fastcall FsRtlAllocatePoolWithQuota(POOL_TYPE a1, unsigned int a2)
{
  PVOID result; // rax

  result = ExAllocatePoolWithQuotaTag(a1, a2, 0x74725346u);
  if ( !result )
    RtlRaiseStatus(-1073741670);
  return result;
}
