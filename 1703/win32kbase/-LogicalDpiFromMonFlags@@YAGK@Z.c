/*
 * XREFs of ?LogicalDpiFromMonFlags@@YAGK@Z @ 0x1C0049ED4
 * Callers:
 *     LogicalToPhysicalDPIRect @ 0x1C0049940 (LogicalToPhysicalDPIRect.c)
 *     PhysicalToLogicalDPIMonitorPoint @ 0x1C0049A60 (PhysicalToLogicalDPIMonitorPoint.c)
 *     PhysicalToLogicalDPIRect @ 0x1C0049B40 (PhysicalToLogicalDPIRect.c)
 *     LogicalToPhysicalDPIMonitorPoint @ 0x1C00DE510 (LogicalToPhysicalDPIMonitorPoint.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LogicalDpiFromMonFlags(char a1)
{
  if ( (a1 & 0x40) != 0 )
    return 96LL;
  else
    return *((unsigned __int16 *)gpsi + 4339);
}
