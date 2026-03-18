/*
 * XREFs of ViIrpLogExposeWmiCallback @ 0x14082E970
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1401054F0 (RtlInitUnicodeString.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     IoCreateDriver @ 0x140621240 (IoCreateDriver.c)
 */

void __fastcall ViIrpLogExposeWmiCallback(PVOID P)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  RtlInitUnicodeString(&ViDdiWmiMofKey, &word_14080FA10);
  RtlInitUnicodeString(&ViDdiWmiMofResourceName, &word_14080FA10);
  RtlInitUnicodeString(&DestinationString, L"\\DRIVER\\VERIFIER_DDI");
  IoCreateDriver(&DestinationString, (__int64 (__fastcall *)(PVOID, _QWORD))ViDdiDriverEntry);
  ViIrpLogDdiLock = 2;
  ExFreePoolWithTag(P, 0);
}
