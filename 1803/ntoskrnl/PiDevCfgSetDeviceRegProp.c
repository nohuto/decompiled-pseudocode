/*
 * XREFs of PiDevCfgSetDeviceRegProp @ 0x1405DA00C
 * Callers:
 *     PiDevCfgProcessDevice @ 0x1405D6D84 (PiDevCfgProcessDevice.c)
 *     PiDevCfgMigrateDevice @ 0x1405E6DB0 (PiDevCfgMigrateDevice.c)
 *     PpDevCfgProcessDeviceOperations @ 0x1406046D0 (PpDevCfgProcessDeviceOperations.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1406433E0 (PiDevCfgProcessDeviceCallback.c)
 *     PiDevCfgInitDeviceCallback @ 0x14072CA60 (PiDevCfgInitDeviceCallback.c)
 *     PpDevCfgProcessDeviceClass @ 0x140730D6C (PpDevCfgProcessDeviceClass.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x1407310F0 (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgProcessDeviceReset @ 0x14073174C (PpDevCfgProcessDeviceReset.c)
 * Callees:
 *     PiPnpRtlSetDeviceRegProperty @ 0x1405DA058 (PiPnpRtlSetDeviceRegProperty.c)
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
