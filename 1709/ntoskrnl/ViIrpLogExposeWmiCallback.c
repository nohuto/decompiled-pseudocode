/*
 * XREFs of ViIrpLogExposeWmiCallback @ 0x1407C1430
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x140085150 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     IoCreateDriver @ 0x1405C7780 (IoCreateDriver.c)
 */

void __fastcall ViIrpLogExposeWmiCallback(PVOID P)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  RtlInitUnicodeString(&ViDdiWmiMofKey, &word_1407A2A70);
  RtlInitUnicodeString(&ViDdiWmiMofResourceName, &word_1407A2A70);
  RtlInitUnicodeString(&DestinationString, L"\\DRIVER\\VERIFIER_DDI");
  IoCreateDriver(&DestinationString, (__int64 (__fastcall *)(PVOID, _QWORD))ViDdiDriverEntry);
  ViIrpLogDdiLock = 2;
  ExFreePoolWithTag(P, 0);
}
