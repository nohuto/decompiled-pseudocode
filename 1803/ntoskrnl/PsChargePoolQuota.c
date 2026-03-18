/*
 * XREFs of PsChargePoolQuota @ 0x1400B6720
 * Callers:
 *     FsRtlNotifyFilterReportChange @ 0x14055A7D0 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLiteEx @ 0x14055B570 (FsRtlNotifyFilterReportChangeLiteEx.c)
 * Callees:
 *     PsChargeProcessPoolQuota @ 0x1400B6740 (PsChargeProcessPoolQuota.c)
 *     RtlRaiseStatus @ 0x14013EA80 (RtlRaiseStatus.c)
 */

void __stdcall PsChargePoolQuota(PEPROCESS Process, POOL_TYPE PoolType, ULONG_PTR Amount)
{
  int v3; // eax

  v3 = PsChargeProcessPoolQuota(Process, PoolType, Amount);
  if ( v3 < 0 )
    RtlRaiseStatus(v3);
}
