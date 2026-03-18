/*
 * XREFs of PspFreeRateControl @ 0x1404371D4
 * Callers:
 *     PspRemoveCpuRateControl @ 0x140437174 (PspRemoveCpuRateControl.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1404372D4 (PspAddSchedulingGroupToJobChain.c)
 *     NtSetInformationJobObject @ 0x14055E0D0 (NtSetInformationJobObject.c)
 *     PspRemoveRateControl @ 0x1406E194C (PspRemoveRateControl.c)
 *     PspSetJobRateControl @ 0x1406E1D28 (PspSetJobRateControl.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PspGetRateControlSize @ 0x1404372B4 (PspGetRateControlSize.c)
 *     PsReturnSharedPoolQuota @ 0x1404F5AC0 (PsReturnSharedPoolQuota.c)
 */

void __fastcall PspFreeRateControl(__int64 a1, unsigned int a2)
{
  void *v3; // rcx

  PspGetRateControlSize(a2);
  PsReturnSharedPoolQuota(*(PVOID *)a1);
  v3 = *(void **)(a1 + 24);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x624A7350u);
  ExFreePoolWithTag((PVOID)a1, 0x624A7350u);
}
