/*
 * XREFs of EtwpAllocateLbrData @ 0x1407524FC
 * Callers:
 *     EtwpUpdateLastBranchTracingConfiguration @ 0x1407525C8 (EtwpUpdateLastBranchTracingConfiguration.c)
 *     EtwpUpdateLastBranchTracingEvents @ 0x140752688 (EtwpUpdateLastBranchTracingEvents.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
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
  *(_QWORD *)(a1 + 2160) = PoolWithTag;
  return 0LL;
}
