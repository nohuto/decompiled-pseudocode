/*
 * XREFs of _CmIsRootEnumeratedDevice @ 0x14048B1DC
 * Callers:
 *     PiControlGetUserFlagsFromDeviceNode @ 0x14048B07C (PiControlGetUserFlagsFromDeviceNode.c)
 *     PiPnpRtlSetObjectProperty @ 0x1404DD774 (PiPnpRtlSetObjectProperty.c)
 *     PiPnpRtlSetDeviceRegProperty @ 0x14058ECB4 (PiPnpRtlSetDeviceRegProperty.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140699B70 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiCMDeleteDevice @ 0x1406A46F0 (PiCMDeleteDevice.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x14004C0A0 (RtlInitUnicodeStringEx.c)
 *     RtlPrefixUnicodeString @ 0x140484490 (RtlPrefixUnicodeString.c)
 */

BOOLEAN __fastcall CmIsRootEnumeratedDevice(PCWSTR SourceString)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  if ( RtlInitUnicodeStringEx(&DestinationString, SourceString) < 0 )
    return 0;
  else
    return RtlPrefixUnicodeString(&stru_140288E20, &DestinationString, 1u);
}
