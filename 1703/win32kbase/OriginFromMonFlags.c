/*
 * XREFs of OriginFromMonFlags @ 0x1C0049C70
 * Callers:
 *     LogicalToPhysicalDPIRect @ 0x1C0049940 (LogicalToPhysicalDPIRect.c)
 *     PhysicalToLogicalDPIMonitorPoint @ 0x1C0049A60 (PhysicalToLogicalDPIMonitorPoint.c)
 *     PhysicalToLogicalDPIRect @ 0x1C0049B40 (PhysicalToLogicalDPIRect.c)
 *     LogicalToPhysicalDPIMonitorPoint @ 0x1C00DE510 (LogicalToPhysicalDPIMonitorPoint.c)
 * Callees:
 *     ?ValidateMonFlags@@YAHPEAK@Z @ 0x1C0049CB8 (-ValidateMonFlags@@YAHPEAK@Z.c)
 */

__int64 __fastcall OriginFromMonFlags(unsigned int a1, __int64 a2)
{
  __int64 v3; // rax
  __int64 v4; // rax
  unsigned int v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = a1;
  ValidateMonFlags(&v6);
  v3 = *(_QWORD *)(a2 + 40);
  if ( (v6 & 0x40) != 0 )
  {
    v4 = v3 + 44;
  }
  else if ( (v6 & 0x80u) != 0 )
  {
    v4 = v3 + 60;
  }
  else
  {
    v4 = v3 + 28;
  }
  return *(_QWORD *)v4;
}
