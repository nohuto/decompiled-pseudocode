/*
 * XREFs of PopCadTriggerDriverLoad @ 0x14076E904
 * Callers:
 *     PopBatteryAdd @ 0x140763890 (PopBatteryAdd.c)
 *     PopCadHpmiPnpNotification @ 0x14076E8A0 (PopCadHpmiPnpNotification.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     ZwLoadDriver @ 0x1401A9480 (ZwLoadDriver.c)
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
