/*
 * XREFs of PsChargeSharedPoolQuota @ 0x1404854D8
 * Callers:
 *     ObAdjustSecurityQuota @ 0x14048535C (ObAdjustSecurityQuota.c)
 *     ObpChargeQuotaForObject @ 0x1404853DC (ObpChargeQuotaForObject.c)
 *     RtlpAllocateAtom @ 0x140489004 (RtlpAllocateAtom.c)
 *     PspAllocateRateControl @ 0x14050A2A8 (PspAllocateRateControl.c)
 *     NtSetInformationJobObject @ 0x140510C80 (NtSetInformationJobObject.c)
 * Callees:
 *     PspChargeQuota @ 0x14003AE80 (PspChargeQuota.c)
 *     PspReturnQuota @ 0x140070050 (PspReturnQuota.c)
 */

__int64 __fastcall PsChargeSharedPoolQuota(struct _KPROCESS *a1, ULONG_PTR a2, unsigned __int64 a3)
{
  __int64 v5; // rbx

  if ( a1 == PsInitialSystemProcess )
    return 1LL;
  v5 = a1[1].ActiveProcessors.Bitmap[4];
  if ( !a2 || (int)PspChargeQuota(a1[1].ActiveProcessors.Bitmap[4], 0LL, 1, a2) >= 0 )
  {
    if ( !a3 || (int)PspChargeQuota(v5, 0LL, 0, a3) >= 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v5 + 512));
      return v5;
    }
    if ( a2 )
      PspReturnQuota((char *)v5, 0LL, 1u, a2);
  }
  return 0LL;
}
