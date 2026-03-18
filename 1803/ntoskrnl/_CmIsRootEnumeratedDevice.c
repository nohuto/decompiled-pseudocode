/*
 * XREFs of _CmIsRootEnumeratedDevice @ 0x14050CE64
 * Callers:
 *     PiControlGetUserFlagsFromDeviceNode @ 0x14050CD04 (PiControlGetUserFlagsFromDeviceNode.c)
 *     PiPnpRtlSetObjectProperty @ 0x1405D1C74 (PiPnpRtlSetObjectProperty.c)
 *     PiDevCfgProcessDevice @ 0x1405D6D84 (PiDevCfgProcessDevice.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x1405DA058 (PiPnpRtlSetDeviceRegProperty.c)
 *     PiDevCfgMigrateDevice @ 0x1405E6DB0 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgCheckDeviceNeedsUpdate @ 0x14072B048 (PiDevCfgCheckDeviceNeedsUpdate.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14072BF1C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiCMDeleteDevice @ 0x140736980 (PiCMDeleteDevice.c)
 *     PipResetDevice @ 0x1408DF0B8 (PipResetDevice.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14006DDA0 (RtlInitUnicodeStringEx.c)
 *     RtlPrefixUnicodeString @ 0x1405059D0 (RtlPrefixUnicodeString.c)
 */

BOOLEAN __fastcall CmIsRootEnumeratedDevice(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  if ( RtlInitUnicodeStringEx(&DestinationString, SourceString) < 0 )
    return 0;
  else
    return RtlPrefixUnicodeString(&stru_1402ED668, &DestinationString, 1u);
}
