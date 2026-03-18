/*
 * XREFs of WmipAllocGuidEntry @ 0x140545D68
 * Callers:
 *     WmipOpenBlock @ 0x14051FDE8 (WmipOpenBlock.c)
 *     WmipLinkDataSourceToList @ 0x140545C30 (WmipLinkDataSourceToList.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 *     WmipAllocEntry @ 0x1404689D0 (WmipAllocEntry.c)
 */

_QWORD *WmipAllocGuidEntry()
{
  _QWORD *v0; // rbx
  PVOID PoolWithTag; // rdi
  _QWORD *v2; // rax
  _QWORD *v3; // rax

  v0 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x70696D57u);
  if ( PoolWithTag )
  {
    v2 = WmipAllocEntry((__int64)&WmipGEChunkInfo);
    v0 = v2;
    if ( v2 )
    {
      v2[12] = PoolWithTag;
      v2[8] = v2 + 7;
      v2[7] = v2 + 7;
      v2[6] = v2 + 5;
      v2[5] = v2 + 5;
      v2[18] = v2 + 17;
      v2[17] = v2 + 17;
      v3 = (_QWORD *)v2[12];
      v3[3] = 0LL;
      PoolWithTag = 0LL;
      v3[5] = WmipLegacyEtwWorker;
      v3[6] = v0;
    }
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0x70696D57u);
  }
  return v0;
}
