/*
 * XREFs of PsChargePoolQuota @ 0x140108060
 * Callers:
 *     FsRtlNotifyFilterReportChange @ 0x14044CD00 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x140567030 (FsRtlNotifyFilterReportChangeLiteEx.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1400D9BF0 (RtlRaiseStatus.c)
 *     PsChargeProcessPoolQuota @ 0x140108080 (PsChargeProcessPoolQuota.c)
 */

void __stdcall PsChargePoolQuota(PEPROCESS Process, POOL_TYPE PoolType, ULONG_PTR Amount)
{
  int v3; // eax

  v3 = PsChargeProcessPoolQuota(Process, PoolType, Amount);
  if ( v3 < 0 )
    RtlRaiseStatus(v3);
}
