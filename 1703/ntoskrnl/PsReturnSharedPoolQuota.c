/*
 * XREFs of PsReturnSharedPoolQuota @ 0x1404F5AC0
 * Callers:
 *     PspJobDelete @ 0x14011D430 (PspJobDelete.c)
 *     RtlpFreeAtom @ 0x14043136C (RtlpFreeAtom.c)
 *     PspFreeRateControl @ 0x1404371D4 (PspFreeRateControl.c)
 *     AlpcMessageDestroyProcedure @ 0x14047EF00 (AlpcMessageDestroyProcedure.c)
 *     ObAdjustSecurityQuota @ 0x1404F4E1C (ObAdjustSecurityQuota.c)
 *     ObpChargeQuotaForObject @ 0x1404F4E9C (ObpChargeQuotaForObject.c)
 *     ObpIncrementHandleCountEx @ 0x1405311B0 (ObpIncrementHandleCountEx.c)
 *     NtSetInformationJobObject @ 0x14055E0D0 (NtSetInformationJobObject.c)
 * Callees:
 *     PspReturnQuota @ 0x1400DC8F0 (PspReturnQuota.c)
 *     PspDereferenceQuotaBlock @ 0x1404F5B0C (PspDereferenceQuotaBlock.c)
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
