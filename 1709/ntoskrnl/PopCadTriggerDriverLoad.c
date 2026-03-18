/*
 * XREFs of PopCadTriggerDriverLoad @ 0x14070B334
 * Callers:
 *     PopBatteryAdd @ 0x1406FE010 (PopBatteryAdd.c)
 *     PopCadHpmiPnpNotification @ 0x14070B2D0 (PopCadHpmiPnpNotification.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     ZwLoadDriver @ 0x14017F860 (ZwLoadDriver.c)
 */

NTSTATUS __fastcall PopCadTriggerDriverLoad(unsigned int a1)
{
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  _m_prefetchw(&PopCadLoadReason);
  result = _InterlockedOr(&PopCadLoadReason, a1);
  if ( !result )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\CAD");
    return ZwLoadDriver(&DestinationString);
  }
  return result;
}
