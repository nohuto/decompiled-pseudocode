/*
 * XREFs of PspFreeRateControl @ 0x14050A25C
 * Callers:
 *     PspAddSchedulingGroupToJobChain @ 0x14050A0DC (PspAddSchedulingGroupToJobChain.c)
 *     PspRemoveCpuRateControl @ 0x14050A35C (PspRemoveCpuRateControl.c)
 *     NtSetInformationJobObject @ 0x140510C80 (NtSetInformationJobObject.c)
 *     PspRemoveRateControl @ 0x140717CFC (PspRemoveRateControl.c)
 *     PspSetJobRateControl @ 0x140718160 (PspSetJobRateControl.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     PsReturnSharedPoolQuota @ 0x140486060 (PsReturnSharedPoolQuota.c)
 *     PspGetRateControlSize @ 0x14050A33C (PspGetRateControlSize.c)
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
