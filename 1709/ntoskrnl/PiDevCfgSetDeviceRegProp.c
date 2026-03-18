/*
 * XREFs of PiDevCfgSetDeviceRegProp @ 0x14059BF64
 * Callers:
 *     PpDevCfgProcessDeviceClass @ 0x14044EB08 (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceReset @ 0x14044EE8C (PpDevCfgProcessDeviceReset.c)
 *     PpDevCfgProcessDeviceOperations @ 0x14058B640 (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgMigrateDevice @ 0x14059ADAC (PiDevCfgMigrateDevice.c)
 *     PiDevCfgProcessDevice @ 0x1405A0E30 (PiDevCfgProcessDevice.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1405D62D0 (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgInitDeviceCallback @ 0x1406C6210 (PiDevCfgInitDeviceCallback.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x1406C9D50 (PpDevCfgProcessDeviceExtensions.c)
 * Callees:
 *     PiPnpRtlSetDeviceRegProperty @ 0x14059BFB0 (PiPnpRtlSetDeviceRegProperty.c)
 */

__int64 __fastcall PiDevCfgSetDeviceRegProp(__int64 a1, __int64 a2, unsigned int a3, int a4, __int64 a5, int a6)
{
  return PiPnpRtlSetDeviceRegProperty(
           *(_QWORD *)&PiPnpRtlCtx,
           *(_QWORD *)(a2 + 8),
           *(_QWORD *)(a2 + 16),
           a3,
           a4,
           a5,
           a6,
           (*(_DWORD *)a2 & 1u) << 17);
}
