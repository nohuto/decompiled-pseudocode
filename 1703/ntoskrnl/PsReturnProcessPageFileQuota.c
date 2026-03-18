/*
 * XREFs of PsReturnProcessPageFileQuota @ 0x140499FE4
 * Callers:
 *     MiReturnFullProcessCharges @ 0x140062CC0 (MiReturnFullProcessCharges.c)
 *     MiDecommitRegion @ 0x140499E58 (MiDecommitRegion.c)
 *     MiChargeFullProcessCommitment @ 0x14051D550 (MiChargeFullProcessCommitment.c)
 * Callees:
 *     PspReturnQuota @ 0x1400DC8F0 (PspReturnQuota.c)
 */

signed __int64 __fastcall PsReturnProcessPageFileQuota(ULONG_PTR a1, ULONG_PTR a2)
{
  signed __int64 result; // rax

  if ( (PEPROCESS)a1 != PsInitialSystemProcess )
    return PspReturnQuota(*(char **)(a1 + 1040), a1, 2, a2);
  return result;
}
