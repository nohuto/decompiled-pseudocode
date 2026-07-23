/*
 * XREFs of ExpCapabilityCheck @ 0x1407BEED4
 * Callers:
 *     ExpFirmwareAccessAppContainerCheck @ 0x1407BFCEC (ExpFirmwareAccessAppContainerCheck.c)
 * Callees:
 *     RtlCapabilityCheck @ 0x140784D70 (RtlCapabilityCheck.c)
 */

bool __fastcall ExpCapabilityCheck(PUNICODE_STRING CapabilityName)
{
  BOOLEAN HasCapability; // [rsp+38h] [rbp+10h] BYREF

  HasCapability = 0;
  return RtlCapabilityCheck(0LL, CapabilityName, &HasCapability) >= 0 && HasCapability;
}
