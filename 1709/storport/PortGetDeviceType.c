/*
 * XREFs of PortGetDeviceType @ 0x1C0061D44
 * Callers:
 *     RaidUnitGetDeviceId @ 0x1C0013384 (RaidUnitGetDeviceId.c)
 *     RaidUnitGetCompatibleIds @ 0x1C0013470 (RaidUnitGetCompatibleIds.c)
 *     RaidUnitGetHardwareIds @ 0x1C00135C0 (RaidUnitGetHardwareIds.c)
 *     RaidUnitRegisterInterfaces @ 0x1C00140C0 (RaidUnitRegisterInterfaces.c)
 *     RaUnitQueryDeviceTextIrp @ 0x1C0061648 (RaUnitQueryDeviceTextIrp.c)
 *     RaUnitQueryCapabilitiesIrp @ 0x1C0061894 (RaUnitQueryCapabilitiesIrp.c)
 * Callees:
 *     <none>
 */

char **__fastcall PortGetDeviceType(unsigned int a1)
{
  __int64 v1; // rax

  v1 = 21LL;
  if ( a1 < 0x16 )
    v1 = a1;
  return &PortScsiDeviceTypes[4 * v1];
}
