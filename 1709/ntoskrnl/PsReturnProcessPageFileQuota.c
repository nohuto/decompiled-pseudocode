/*
 * XREFs of PsReturnProcessPageFileQuota @ 0x140494BAC
 * Callers:
 *     MiReturnFullProcessCharges @ 0x1400365E0 (MiReturnFullProcessCharges.c)
 *     MiChargeFullProcessCommitment @ 0x140495E90 (MiChargeFullProcessCommitment.c)
 * Callees:
 *     PspReturnQuota @ 0x140070050 (PspReturnQuota.c)
 */

signed __int64 __fastcall PsReturnProcessPageFileQuota(ULONG_PTR a1, ULONG_PTR a2)
{
  signed __int64 result; // rax

  if ( (PEPROCESS)a1 != PsInitialSystemProcess )
    return PspReturnQuota(*(char **)(a1 + 1040), a1, 2u, a2);
  return result;
}
