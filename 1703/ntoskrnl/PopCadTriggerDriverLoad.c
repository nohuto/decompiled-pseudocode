/*
 * XREFs of PopCadTriggerDriverLoad @ 0x1406D5724
 * Callers:
 *     PopBatteryAdd @ 0x1406CA1F0 (PopBatteryAdd.c)
 *     PopCadHpmiPnpNotification @ 0x1406D56C0 (PopCadHpmiPnpNotification.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ZwLoadDriver @ 0x14017FEC0 (ZwLoadDriver.c)
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
