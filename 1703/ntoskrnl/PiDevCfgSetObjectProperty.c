/*
 * XREFs of PiDevCfgSetObjectProperty @ 0x1405917F0
 * Callers:
 *     PiDevCfgResolveDriverDependencies @ 0x14058EB78 (PiDevCfgResolveDriverDependencies.c)
 *     PiDevCfgProcessDevice @ 0x14059040C (PiDevCfgProcessDevice.c)
 *     PiDevCfgConfigureDevice @ 0x140590890 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgCopyObjectProperties @ 0x140593580 (PiDevCfgCopyObjectProperties.c)
 *     PiDevCfgMigrateDevice @ 0x14059389C (PiDevCfgMigrateDevice.c)
 *     PiDevCfgCopyDeviceKey @ 0x140593BA4 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgRequestDriverConfigurations @ 0x14069B9E4 (PiDevCfgRequestDriverConfigurations.c)
 *     PiDevCfgResetDeviceDriverSettings @ 0x14069BB20 (PiDevCfgResetDeviceDriverSettings.c)
 *     PiDevCfgResolveDeviceDependencies @ 0x14069C020 (PiDevCfgResolveDeviceDependencies.c)
 *     PpDevCfgProcessDeviceExtensions @ 0x14069EB7C (PpDevCfgProcessDeviceExtensions.c)
 *     PpDevCfgInit @ 0x14081D8E4 (PpDevCfgInit.c)
 * Callees:
 *     PiPnpRtlSetObjectProperty @ 0x1404DD774 (PiPnpRtlSetObjectProperty.c)
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
