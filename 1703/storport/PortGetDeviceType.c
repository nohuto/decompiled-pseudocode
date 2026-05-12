/*
 * XREFs of PortGetDeviceType @ 0x1C0060340
 * Callers:
 *     RaidUnitRegisterInterfaces @ 0x1C0013BA8 (RaidUnitRegisterInterfaces.c)
 *     RaidUnitGetCompatibleIds @ 0x1C0016878 (RaidUnitGetCompatibleIds.c)
 *     RaidUnitGetHardwareIds @ 0x1C0016A04 (RaidUnitGetHardwareIds.c)
 *     RaidUnitGetDeviceId @ 0x1C0018120 (RaidUnitGetDeviceId.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1C0060360 (RaUnitQueryDeviceTextIrp.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C0060E30 (RaUnitQueryCapabilitiesIrp.c)
 * Callees:
 *     <none>
 */

char **__fastcall PortGetDeviceType(unsigned int a1)
{
  __int64 v1; // rax

  v1 = 17LL;
  if ( a1 < 0x12 )
    v1 = a1;
  return &PortScsiDeviceTypes[4 * v1];
}
