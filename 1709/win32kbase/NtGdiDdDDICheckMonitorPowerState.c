/*
 * XREFs of NtGdiDdDDICheckMonitorPowerState @ 0x1C007DF60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

__int64 NtGdiDdDDICheckMonitorPowerState()
{
  if ( gbGDIOn )
    return ((__int64 (*)(void))qword_1C01905D8)();
  else
    return 3223191558LL;
}
