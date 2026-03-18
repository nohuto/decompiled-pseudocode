/*
 * XREFs of PspFreeRateControl @ 0x140552180
 * Callers:
 *     NtSetInformationJobObject @ 0x140532FE4 (NtSetInformationJobObject.c)
 *     PspRemoveCpuRateControl @ 0x140552120 (PspRemoveCpuRateControl.c)
 *     PspAddSchedulingGroupToJobChain @ 0x140552280 (PspAddSchedulingGroupToJobChain.c)
 *     PspRemoveRateControl @ 0x14077BD1C (PspRemoveRateControl.c)
 *     PspSetJobRateControl @ 0x14077C190 (PspSetJobRateControl.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     PsReturnSharedPoolQuota @ 0x1404EBEB8 (PsReturnSharedPoolQuota.c)
 *     PspGetRateControlSize @ 0x140552260 (PspGetRateControlSize.c)
 */

void __fastcall PspFreeRateControl(char **P, unsigned int a2)
{
  ULONG_PTR RateControlSize; // rax
  char *v4; // rcx

  RateControlSize = PspGetRateControlSize(a2);
  PsReturnSharedPoolQuota(*P, RateControlSize, 0LL);
  v4 = P[3];
  if ( v4 )
    ExFreePoolWithTag(v4, 0x624A7350u);
  ExFreePoolWithTag(P, 0x624A7350u);
}
