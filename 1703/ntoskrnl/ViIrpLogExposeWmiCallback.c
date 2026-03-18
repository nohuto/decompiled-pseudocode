/*
 * XREFs of ViIrpLogExposeWmiCallback @ 0x14077F450
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     IoCreateDriver @ 0x14059F550 (IoCreateDriver.c)
 */

void __fastcall ViIrpLogExposeWmiCallback(void *a1)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  RtlInitUnicodeString(&ViDdiWmiMofKey, (PCWSTR)&cchOriginalDestLength);
  RtlInitUnicodeString(&ViDdiWmiMofResourceName, (PCWSTR)&cchOriginalDestLength);
  RtlInitUnicodeString(&DestinationString, L"\\DRIVER\\VERIFIER_DDI");
  IoCreateDriver(&DestinationString, (__int64 (__fastcall *)(PVOID, _QWORD))ViDdiDriverEntry);
  ViIrpLogDdiLock = 2;
  ExFreePoolWithTag(a1, 0);
}
