/*
 * XREFs of PspAllocateRateControl @ 0x1405521CC
 * Callers:
 *     NtSetInformationJobObject @ 0x140532FE4 (NtSetInformationJobObject.c)
 *     PspAddSchedulingGroupToJobChain @ 0x140552280 (PspAddSchedulingGroupToJobChain.c)
 *     PspSetJobRateControl @ 0x14077C190 (PspSetJobRateControl.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     PsChargeSharedPoolQuota @ 0x1404EBD9C (PsChargeSharedPoolQuota.c)
 *     PspGetRateControlSize @ 0x140552260 (PspGetRateControlSize.c)
 */

_QWORD *__fastcall PspAllocateRateControl(__int64 a1)
{
  SIZE_T RateControlSize; // rdi
  POOL_TYPE v2; // r9d
  int v3; // ecx
  _QWORD *PoolWithTag; // rbx
  __int64 v5; // rsi

  RateControlSize = PspGetRateControlSize(a1);
  v2 = NonPagedPoolNx;
  if ( v3 != 2 )
    v2 = PagedPool;
  PoolWithTag = ExAllocatePoolWithTag(v2, RateControlSize, 0x624A7350u);
  if ( PoolWithTag )
  {
    v5 = PsChargeSharedPoolQuota(KeGetCurrentThread()->ApcState.Process, RateControlSize, 0LL);
    if ( v5 )
    {
      memset(PoolWithTag, 0, RateControlSize);
      *PoolWithTag = v5;
    }
    else
    {
      ExFreePoolWithTag(PoolWithTag, 0x624A7350u);
      return 0LL;
    }
  }
  return PoolWithTag;
}
