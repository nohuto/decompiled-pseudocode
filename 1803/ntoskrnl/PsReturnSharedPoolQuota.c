/*
 * XREFs of PsReturnSharedPoolQuota @ 0x1404EBEB8
 * Callers:
 *     PspJobDelete @ 0x14008A250 (PspJobDelete.c)
 *     AlpcMessageDestroyProcedure @ 0x1404CC100 (AlpcMessageDestroyProcedure.c)
 *     RtlpFreeAtom @ 0x1404EAF6C (RtlpFreeAtom.c)
 *     ObAdjustSecurityQuota @ 0x1404EBC20 (ObAdjustSecurityQuota.c)
 *     ObpChargeQuotaForObject @ 0x1404EBCA0 (ObpChargeQuotaForObject.c)
 *     NtSetInformationJobObject @ 0x140532FE4 (NtSetInformationJobObject.c)
 *     PspFreeRateControl @ 0x140552180 (PspFreeRateControl.c)
 *     ObpIncrementHandleCountEx @ 0x1405AB080 (ObpIncrementHandleCountEx.c)
 * Callees:
 *     PspReturnQuota @ 0x1400F8E70 (PspReturnQuota.c)
 *     PspDereferenceQuotaBlock @ 0x1404EBF04 (PspDereferenceQuotaBlock.c)
 */

__int64 __fastcall PsReturnSharedPoolQuota(char *P, ULONG_PTR a2, ULONG_PTR a3)
{
  __int64 result; // rax

  if ( P != (char *)1 )
  {
    if ( a2 )
      PspReturnQuota(P, 0LL, 1, a2);
    if ( a3 )
      PspReturnQuota(P, 0LL, 0, a3);
    return PspDereferenceQuotaBlock(P);
  }
  return result;
}
