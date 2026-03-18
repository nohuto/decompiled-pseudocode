/*
 * XREFs of PnpAllocateWatchdog @ 0x140075914
 * Callers:
 *     PnpDeviceEventWorker @ 0x14051FE70 (PnpDeviceEventWorker.c)
 *     PnpDelayedRemoveWorker @ 0x1405C86A0 (PnpDelayedRemoveWorker.c)
 *     PnpDeviceCompletionRequestCreate @ 0x1405D3EF0 (PnpDeviceCompletionRequestCreate.c)
 * Callees:
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

PVOID PnpAllocateWatchdog()
{
  PVOID PoolWithTag; // rax
  PVOID v1; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xD8uLL, 0x57647050u);
  v1 = PoolWithTag;
  if ( PoolWithTag )
    memset(PoolWithTag, 0, 0xD8uLL);
  return v1;
}
