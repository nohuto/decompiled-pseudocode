/*
 * XREFs of ExpResourceTimeoutCaptureLiveDump @ 0x140288A30
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x1406ADCB0 (DbgkWerCaptureLiveKernelDump.c)
 */

void __fastcall ExpResourceTimeoutCaptureLiveDump(unsigned int *P)
{
  DbgkWerCaptureLiveKernelDump(L"ResourceTimeout", P[12], P[13], 0LL, 0LL, 0);
  ExFreePoolWithTag(P, 0x6F546552u);
}
