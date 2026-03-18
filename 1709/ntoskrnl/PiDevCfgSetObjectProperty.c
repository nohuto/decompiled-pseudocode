/*
 * XREFs of PiDevCfgSetObjectProperty @ 0x14058A470
 * Callers:
 *     PiDevCfgResetDeviceDriverSettings @ 0x14044F0B8 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgCopyDeviceKey @ 0x140589CD0 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgMigrateDevice @ 0x14059ADAC (PiDevCfgMigrateDevice.c)
 *     PiDevCfgProcessDevice @ 0x1405A0E30 (PiDevCfgProcessDevice.c)
 *     PiDevCfgConfigureDevice @ 0x1405A296C (PiDevCfgConfigureDevice.c)
 *     PiDevCfgCopyObjectProperties @ 0x1405A47EC (PiDevCfgCopyObjectProperties.c)
 *     PiDevCfgRequestDriverConfigurations @ 0x1406C7608 (PiDevCfgRequestDriverConfigurations.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x1406C9D50 (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgInit @ 0x14083EBC0 (PpDevCfgInit.c)
 * Callees:
 *     PiPnpRtlSetObjectProperty @ 0x14052F53C (PiPnpRtlSetObjectProperty.c)
 */

__int64 __fastcall PiDevCfgSetObjectProperty(
        __int64 a1,
        _BYTE *a2,
        const WCHAR *a3,
        int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        int a8,
        unsigned int *a9,
        int a10)
{
  int v10; // r10d

  v10 = 0;
  if ( a1 == *(_QWORD *)&PiPnpRtlCtx && a4 == 1 && a2 && (*a2 & 1) != 0 )
    v10 = 0x20000;
  return PiPnpRtlSetObjectProperty(a1, a3, a4, a5, 0LL, a7, a8, a9, a10, v10);
}
