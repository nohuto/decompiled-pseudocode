/*
 * XREFs of EtwpAllocateLbrData @ 0x1407B92E4
 * Callers:
 *     EtwpUpdateLastBranchTracingConfiguration @ 0x1407B93B0 (EtwpUpdateLastBranchTracingConfiguration.c)
 *     EtwpUpdateLastBranchTracingEvents @ 0x1407B9470 (EtwpUpdateLastBranchTracingEvents.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpAllocateLbrData(__int64 a1)
{
  _QWORD *PoolWithTag; // rax

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x14uLL, 0x78777445u);
  if ( !PoolWithTag )
    return 3221225495LL;
  *PoolWithTag = 0LL;
  PoolWithTag[1] = 0LL;
  *((_DWORD *)PoolWithTag + 4) = 0;
  *(_QWORD *)(a1 + 1008) = PoolWithTag;
  return 0LL;
}
