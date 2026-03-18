/*
 * XREFs of PopThermalWriteShutdownToRegistry @ 0x140278F04
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x140180F10 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalProcessUsermodeEvent @ 0x140763090 (PopThermalProcessUsermodeEvent.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     PopOpenKey @ 0x14016EC30 (PopOpenKey.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwSetValueKey @ 0x1401A80C0 (ZwSetValueKey.c)
 */

NTSTATUS __fastcall PopThermalWriteShutdownToRegistry(__int64 a1)
{
  NTSTATUS result; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-18h] BYREF
  int Data; // [rsp+68h] [rbp+10h] BYREF
  HANDLE KeyHandle; // [rsp+70h] [rbp+18h] BYREF

  result = PopOpenKey(&KeyHandle, L"Control\\Session Manager\\Power", 0x2001Fu);
  if ( result >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"ThermalShutdownOccurred");
    RtlInitUnicodeString(&ValueName, L"ThermalShutdownSource");
    Data = 1;
    result = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
    if ( a1 && !PopThermalCriticalShutdownReported )
      result = ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, *(PVOID *)(a1 + 8), *(unsigned __int16 *)(a1 + 2));
    PopThermalCriticalShutdownReported = 1;
    if ( KeyHandle )
      return ZwClose(KeyHandle);
  }
  return result;
}
