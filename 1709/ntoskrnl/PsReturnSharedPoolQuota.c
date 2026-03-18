/*
 * XREFs of PsReturnSharedPoolQuota @ 0x140486060
 * Callers:
 *     PspJobDelete @ 0x1400D3DE0 (PspJobDelete.c)
 *     ObAdjustSecurityQuota @ 0x14048535C (ObAdjustSecurityQuota.c)
 *     ObpChargeQuotaForObject @ 0x1404853DC (ObpChargeQuotaForObject.c)
 *     AlpcMessageDestroyProcedure @ 0x14049FFA0 (AlpcMessageDestroyProcedure.c)
 *     ObpIncrementHandleCountEx @ 0x1404B1770 (ObpIncrementHandleCountEx.c)
 *     PspFreeRateControl @ 0x14050A25C (PspFreeRateControl.c)
 *     NtSetInformationJobObject @ 0x140510C80 (NtSetInformationJobObject.c)
 *     RtlpFreeAtom @ 0x14057CD84 (RtlpFreeAtom.c)
 * Callees:
 *     PspReturnQuota @ 0x140070050 (PspReturnQuota.c)
 *     PspDereferenceQuotaBlock @ 0x1404860AC (PspDereferenceQuotaBlock.c)
 */

__int64 __fastcall PsReturnSharedPoolQuota(char *P, ULONG_PTR a2, ULONG_PTR a3)
{
  __int64 result; // rax

  if ( P != (char *)1 )
  {
    if ( a2 )
      PspReturnQuota(P, 0LL, 1u, a2);
    if ( a3 )
      PspReturnQuota(P, 0LL, 0, a3);
    return PspDereferenceQuotaBlock(P);
  }
  return result;
}
