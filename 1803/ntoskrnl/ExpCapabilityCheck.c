/*
 * XREFs of ExpCapabilityCheck @ 0x1407BEED4
 * Callers:
 *     ExpFirmwareAccessAppContainerCheck @ 0x1407BFCEC (ExpFirmwareAccessAppContainerCheck.c)
 * Callees:
 *     RtlCapabilityCheck @ 0x140784D70 (RtlCapabilityCheck.c)
 */

bool __fastcall ExpCapabilityCheck(UNICODE_STRING *SourceString)
{
  char v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  return (int)RtlCapabilityCheck(0LL, SourceString, &v2) >= 0 && v2;
}
