/*
 * XREFs of PfpScenCtxStart @ 0x1405C8DF0
 * Callers:
 *     PfInitializeSuperfetch @ 0x14081DA88 (PfInitializeSuperfetch.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     PfpCreateEvent @ 0x1405C8E6C (PfpCreateEvent.c)
 */

__int64 __fastcall PfpScenCtxStart(__int64 a1)
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\SuperfetchScenarioNotify");
  return PfpCreateEvent(&DestinationString, 0LL, a1 + 64);
}
